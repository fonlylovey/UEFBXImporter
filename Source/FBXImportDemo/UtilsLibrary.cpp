// Fill out your copyright notice in the Description page of Project Settings.

#include "UtilsLibrary.h"
#include "Engine/StreamableManager.h"
#include "ImageUtils.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
//#include <shlobj_core.h>
#include "UserWidget.h"
#include "Kismet/KismetSystemLibrary.h"
#include "SPGameInstance.h"

#include "Misc/FileHelper.h"
#include "Modules/ModuleManager.h"
#include "Internationalization/Text.h"
#include "Internationalization/Internationalization.h"
#include "HAL/PlatformFileManager.h"

#include "Windows/WindowsHWrapper.h"
#include "Windows/AllowWindowsPlatformTypes.h"
#include <ShlObj.h>
#include "Windows/HideWindowsPlatformTypes.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"

void UUtilsLibrary::Log(FString str, bool bScreen, float fFtime, FColor color)
{
	str = FString::Printf(TEXT("UtilsLog: %s"), *str);
	UE_LOG(LogTemp, Warning, TEXT("%s"), *str);
	if (bScreen)
	{
		GEngine->AddOnScreenDebugMessage(-1, fFtime, color, str);
	}
}

void UUtilsLibrary::FaceToTarget(AActor *pTarget, AActor *pSelf)
{
	if (!pTarget || !pSelf)	return;

	FVector outFirstPos;
	FRotator outRotator;

	outFirstPos = pTarget->GetActorLocation();
	//outRotator = pTarget->GetMesh()->GetComponentQuat().Rotator();
	outRotator = pTarget->GetActorQuat().Rotator();

	outFirstPos.Z = 0;

	FRotator Rotator1 = FRotationMatrix::MakeFromX(outFirstPos - pSelf->GetActorLocation()).Rotator();
	Rotator1.Roll = 0;
	Rotator1.Pitch = 0;

	float fInterpSpeed = 200.f;
	FRotator Rotator2 = FMath::RInterpTo(pSelf->GetActorRotation(), Rotator1, 0.01, fInterpSpeed);

	pSelf->SetActorRotation(Rotator2);
}

bool UUtilsLibrary::NameCompare(FString s1, FString s2)
{
	if (s1.IsEmpty())
	{
		return false;
	}

	auto nS1Len = s1.Len();
	auto nS2Len = s2.Len();

	if (nS1Len > nS2Len)
	{
		s1.RemoveAt(nS2Len, FMath::Abs(nS1Len - nS2Len));
	}
	else if (nS2Len > nS1Len)
	{
		s2.RemoveAt(nS1Len, FMath::Abs(nS2Len - nS1Len));
	}

	if (s1.Compare(s2, ESearchCase::IgnoreCase) == 0)
	{
		return true;
	}

	return false;
}

UObject* UUtilsLibrary::CreateAsset(FString AssetPath)
{
	FStringAssetReference ref = AssetPath;
	UObject* uoTmp = ref.ResolveObject();
	if (uoTmp == nullptr)
	{
		UE_LOG(LogTemp, Log, TEXT("CreateAsset path = %s"), *AssetPath);
		FStreamableManager& EKAssetLoader = GGameInstance->GetStreamableManager();
		uoTmp = EKAssetLoader.LoadSynchronous(ref, true);
	}

	return uoTmp;
}

static FDelegateHandle GCaptureHandle;
void UUtilsLibrary::OnCaptureScreenshotComplete(int32 InWidth, int32 InHeight, const TArray<FColor>& InColors)
{
	TCHAR path[255];
	ZeroMemory(path, 255);
	SHGetSpecialFolderPath(0, path, CSIDL_DESKTOPDIRECTORY, 0);
	FString sPath = path;
	sPath.RemoveFromEnd("Desktop");

	FString sName = "";
	sName += sPath + TEXT("Pictures//VR截图//");
	sName += TEXT("ScreenShot");
	sName += "_" + FDateTime::Now().ToString();
	sName += TEXT(".png");

	FString ScreenShotName = sName;
	TArray<uint8> CompressedBitmap;
	FImageUtils::CompressImageArray(InWidth, InHeight, InColors, CompressedBitmap);
	FFileHelper::SaveArrayToFile(CompressedBitmap, *ScreenShotName);
	UGameViewportClient::OnScreenshotCaptured().Remove(GCaptureHandle);

	//创建UI提示
	FString AssetPath = "/Game/Blueprints/UI/ScreenShotSuccess.ScreenShotSuccess_C";
	FStringAssetReference ref = AssetPath;
	UObject* uoTmp = ref.ResolveObject();
	if (uoTmp == nullptr)
	{
		UE_LOG(LogTemp, Log, TEXT("CreateAsset path = %s"), *AssetPath);
		FStreamableManager& EKAssetLoader = GGameInstance->GetStreamableManager();
		uoTmp = EKAssetLoader.LoadSynchronous(ref, true);
	}
	if (uoTmp)
	{
		UUserWidget* pUI = CreateWidget<UUserWidget>(GWorld->GetGameInstance(), Cast<UClass>(uoTmp));
		if (pUI)
		{
			pUI->AddToViewport();
		}
	}
}

void UUtilsLibrary::CaptureScreenshot()
{
	if (GEngine && GEngine->GameViewport)
	{
		GCaptureHandle = UGameViewportClient::OnScreenshotCaptured().AddStatic(&OnCaptureScreenshotComplete);
		GEngine->GameViewport->Exec(nullptr, TEXT("HighResShot 4096x2160"), *GLog);//4K
	}
}

EImageFormatType format;
int32 quality;
FString fileName;
FDelegateHandle delegateHandle;

void UUtilsLibrary::OnScreenshotCapturedInternal(int32 Width, int32 Height, const TArray<FColor>& Bitmap)
{
	IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
	TSharedPtr<IImageWrapper> ImageWrapper;
	if (format == EImageFormatType::PNG)
	{
		TArray<uint8> PNGData;
		TArray<FColor> BitmapCopy(Bitmap);
		FImageUtils::CompressImageArray(Width, Height, BitmapCopy, PNGData);

		fileName += ".png";
		FFileHelper::SaveArrayToFile(PNGData, *fileName);
	}
	else if (format == EImageFormatType::JPEG)
	{
		ImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::JPEG);
		ImageWrapper->SetRaw(Bitmap.GetData(), Bitmap.GetAllocatedSize(), Width, Height, ERGBFormat::BGRA, 8);
		const TArray64<uint8> JPEGData = ImageWrapper->GetCompressed(quality);
		fileName += ".jpg";
		FFileHelper::SaveArrayToFile(JPEGData, *fileName);
	}
	else if (format == EImageFormatType::EXR)
	{
		ImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::EXR);
		ImageWrapper->SetRaw(Bitmap.GetData(), Bitmap.GetAllocatedSize(), Width, Height, ERGBFormat::BGRA, 8);
		const TArray64<uint8> Data = ImageWrapper->GetCompressed(quality);
		fileName += ".exr";
		FFileHelper::SaveArrayToFile(Data, *fileName);
	}
	else
	{
		//默认使用Jpg格式
		ImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::JPEG);
		ImageWrapper->SetRaw(Bitmap.GetData(), Bitmap.GetAllocatedSize(), Width, Height, ERGBFormat::BGRA, 8);
		const TArray64<uint8> JPEGData = ImageWrapper->GetCompressed(quality);
		fileName += ".jpg";
		FFileHelper::SaveArrayToFile(JPEGData, *fileName);
	}
	UGameViewportClient::OnScreenshotCaptured().Remove(delegateHandle);
	ImageWrapper.Reset();

}

void UUtilsLibrary::TakeScreenShot(const FString fineName /*= FString(TEXT("ScreenShot"))*/, EImageFormatType _format /*= EImageFormatType::PNG*/,
	int32 _quality /*= 100*/, bool bInsertTimeStampToFileName /*= true*/, bool bInShowUI /*= true*/, bool bAddFilenameSuffix /*= true*/)
{
	FString filename = fineName;

	format = _format;
	quality = _quality;

	//名字后面加上现在的时间
	if (bInsertTimeStampToFileName)
	{
		filename += "_" + FDateTime::Now().ToString();
	}
	//名字后面加上下划线
	if (bAddFilenameSuffix)
	{
		filename += "_";
	}

	//C:\Users\tianhj-a\Desktop
	TCHAR path[255];
	ZeroMemory(path, 255);
	SHGetSpecialFolderPath(0, path, CSIDL_DESKTOPDIRECTORY, 0);
	FString sPath = path;
	sPath.RemoveFromEnd("Desktop");
	fileName = sPath + TEXT("Pictures//VR截图//") + filename;

	if (!UGameViewportClient::OnScreenshotCaptured().IsBound())
	{
		delegateHandle = UGameViewportClient::OnScreenshotCaptured().AddStatic(&OnScreenshotCapturedInternal);

		FScreenshotRequest::RequestScreenshot(filename, bInShowUI, bAddFilenameSuffix);
		//加这个是高分辨率截图但是会有锯齿
		//GEngine->GameViewport->Exec(nullptr, TEXT("HighResShot 1920x1080"), *GLog);
	}
}

//截图全景
void UUtilsLibrary::CaptureScreenshotPanoramic()
{
	//C:\Users\tianhj-a\Desktop
	TCHAR path[255];
	ZeroMemory(path, 255);
	SHGetSpecialFolderPath(0, path, CSIDL_DESKTOPDIRECTORY, 0);
	FString sPath = path;
	sPath.RemoveFromEnd("Desktop");
	FString command_1 = "SP.OutputDir ";
	command_1 += sPath;
	command_1 += TEXT("Pictures\\VR全景截图\\");
	UKismetSystemLibrary::ExecuteConsoleCommand(GGameInstance, command_1);

	UKismetSystemLibrary::ExecuteConsoleCommand(GGameInstance, "SP.StepCaptureWidth 6144");
	UKismetSystemLibrary::ExecuteConsoleCommand(GGameInstance, "SP.CaptureSlicePixelWidth 720");
	UKismetSystemLibrary::ExecuteConsoleCommand(GGameInstance, "SP.HorizontalAngularIncrement 2");
	UKismetSystemLibrary::ExecuteConsoleCommand(GGameInstance, "SP.VerticalAngularIncrement 15");
	UKismetSystemLibrary::ExecuteConsoleCommand(GGameInstance, "SP.ConcurrentCaptures 8");
	UKismetSystemLibrary::ExecuteConsoleCommand(GGameInstance, "SP.CaptureHorizontalFOV 30");
	UKismetSystemLibrary::ExecuteConsoleCommand(GGameInstance, "SP.ShouldOverrideInitialYaw 0");

	UKismetSystemLibrary::ExecuteConsoleCommand(GGameInstance, "SP.PanoramicScreenshot");

	//创建UI提示
	FString AssetPath = "/Game/Blueprints/UI/ScreenShotPanoramic.ScreenShotPanoramic_C";
	FStringAssetReference ref = AssetPath;
	UObject* uoTmp = ref.ResolveObject();
	if (uoTmp == nullptr)
	{
		UE_LOG(LogTemp, Log, TEXT("CreateAsset path = %s"), *AssetPath);
		static FStreamableManager MobaStreamableManager;
		FStreamableManager& EKAssetLoader = MobaStreamableManager;
		uoTmp = EKAssetLoader.LoadSynchronous(ref, true);
	}
	if (uoTmp)
	{
		UUserWidget* pUI = CreateWidget<UUserWidget>(GWorld->GetGameInstance(), Cast<UClass>(uoTmp));
		if (pUI)
		{
			pUI->AddToViewport();
		}
	}
}

//启动外部程序
void UUtilsLibrary::OpenFile(FString FilePath)
{
	//static FProcHandle CreateProc
	//(
	//  const TCHAR * URL,
	//  const TCHAR * Parms,
	//  bool bLaunchDetached,
	//  bool bLaunchHidden,
	//  bool bLaunchReallyHidden,
	//  uint32 * OutProcessID,
	//  int32 PriorityModifier,
	//  const TCHAR * OptionalWorkingDirectory,
	//  void * PipeWriteChild,
	//  void * PipeReadChild
	//)
	FPlatformProcess::CreateProc(*FilePath, nullptr, true, false, false, nullptr, 0, nullptr, nullptr);
}

//获取用户目录下的Picture目录
FString UUtilsLibrary::GetUserPicturePath()
{
	TCHAR path[255];
	ZeroMemory(path, 255);
	SHGetSpecialFolderPath(0, path, CSIDL_DESKTOPDIRECTORY, 0);
	FString sPath = path;
	sPath.RemoveFromEnd("Desktop");

	FString sName = "";
	sName += sPath + TEXT("Pictures//VR截图//");
	return sName;
}

FString UUtilsLibrary::ReadSDPJsonFile()
{
	TCHAR path[255];
	ZeroMemory(path, 255);
	SHGetSpecialFolderPath(0, path, CSIDL_DESKTOPDIRECTORY, 0);
	FString sPath = path;
	sPath.RemoveFromEnd("Desktop");

	sPath += TEXT("AppData//Local//GlodonSPDBimImport//SCP//save_exphall_starttime.json");

	FString sRet = TEXT("");
	if (FPaths::FileExists(sPath))
	{
		FString fileStr;
		FFileHelper::LoadFileToString(fileStr, *sPath);
		TSharedPtr<FJsonObject> rootObject = MakeShareable(new FJsonObject());
		TSharedRef<TJsonReader<>> jsonReader = TJsonReaderFactory<>::Create(fileStr);
		if (FJsonSerializer::Deserialize(jsonReader, rootObject))
		{
			sRet = rootObject->GetStringField("startTime");
		}
	}

	return sRet;
}

TArray<FString> UUtilsLibrary::ReadLocalSelectedDataSmithFiles(int32& nCounts)
{
	TCHAR path[255];
	ZeroMemory(path, 255);
	SHGetSpecialFolderPath(0, path, CSIDL_DESKTOPDIRECTORY, 0);
	FString sPath = path;
	sPath.RemoveFromEnd("Desktop");

	sPath += TEXT("AppData//Local//GlodonSPDBimImport//SCP//save_user_selected_files_path.json");

	TArray<FString> arrRet;
	if (FPaths::FileExists(sPath))
	{
		FString fileStr;
		FFileHelper::LoadFileToString(fileStr, *sPath);
		TSharedPtr<FJsonObject> rootObject = MakeShareable(new FJsonObject());
		TSharedRef<TJsonReader<>> jsonReader = TJsonReaderFactory<>::Create(fileStr);
		if (FJsonSerializer::Deserialize(jsonReader, rootObject))
		{
			nCounts = FCString::Atoi(*(rootObject->GetStringField("counts")));

			for (int32 i = 0; i < nCounts; i++)
			{
				FString strFilter = TEXT("path_");
				strFilter.Append(FString::FromInt(i));
				arrRet.Add(rootObject->GetStringField(strFilter));
			}
		}
	}

	return arrRet;
}


TArray<FSPSafeTreeData> UUtilsLibrary::ReadLocal_area_of_responsibility_file()
{
	TCHAR path[255];
	ZeroMemory(path, 255);
	SHGetSpecialFolderPath(0, path, CSIDL_DESKTOPDIRECTORY, 0);
	FString sPath = path;
	sPath.RemoveFromEnd("Desktop");

	sPath += TEXT("AppData//Local//GlodonSPDBimImport//SCP//area_of_responsibility.json");

	//注意下面有递归
	TArray<FSPSafeTreeData> outPut;
	if (FPaths::FileExists(sPath))
	{
		FString fileStr;
		FFileHelper::LoadFileToString(fileStr, *sPath);
		TSharedPtr<FJsonObject> rootObject = MakeShareable(new FJsonObject());
		TSharedRef<TJsonReader<>> jsonReader = TJsonReaderFactory<>::Create(fileStr);
		if (FJsonSerializer::Deserialize(jsonReader, rootObject))
		{
			TArray< TSharedPtr<FJsonValue> > arr = rootObject->GetArrayField("dataArr");
			for (auto data : arr)
			{
				const TSharedPtr<FJsonObject>* ChildObj = nullptr;
				bool bRet = data.Get()->TryGetObject(ChildObj);
				if (bRet)
				{
					ReadLocal_area_of_responsibility_file_Recursion(ChildObj, outPut);
				}
			}
		}
	}

	return outPut;
}

void UUtilsLibrary::ReadLocal_area_of_responsibility_file_Recursion(const TSharedPtr<FJsonObject>*& ChildObj, TArray<FSPSafeTreeData>& subOutPutArr)
{
	FSPSafeTreeData outPutData;
	TArray< TSharedPtr<FJsonValue> > experiences = ChildObj->Get()->GetArrayField("experiences");
	FString code = ChildObj->Get()->GetStringField("code");
	FString area_name = ChildObj->Get()->GetStringField("area_name");
	FString level_of_risk = ChildObj->Get()->GetStringField("level_of_risk");
	TArray< TSharedPtr<FJsonValue> > arr = ChildObj->Get()->GetArrayField("experiences");

	outPutData.code = code;
	outPutData.area_name = area_name;
	outPutData.level_of_risk = level_of_risk;
	outPutData.children.Reset(0);
	for (auto data : arr)
	{
		const TSharedPtr<FJsonObject>* ChildObjSub = nullptr;
		bool bRet = data.Get()->TryGetObject(ChildObjSub);
		if (bRet)
		{
			ReadLocal_area_of_responsibility_file_Recursion(ChildObjSub, outPutData.children);
		}
	}
	subOutPutArr.Add(outPutData);
}

void UUtilsLibrary::risk_identification_and_evaluation()
{

}