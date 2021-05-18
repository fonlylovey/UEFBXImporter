// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "JsonObject.h"
#include "UtilsLibrary.generated.h"

UENUM(BlueprintType)
enum class EImageFormatType : uint8
{
	/** Portable Network Graphics. */
	PNG,

	/** Joint Photographic Experts Group. */
	JPEG,

	/** OpenEXR (HDR) image file format. */
	EXR,
};

USTRUCT(BlueprintType)
struct FSPSafeTreeData
{
	GENERATED_USTRUCT_BODY()
public:
	FSPSafeTreeData()
	{
		code = "";
		area_name = "";
		level_of_risk = "";
		children.Reset(0);
	}
	FString code;			//编码
	FString area_name;		//区域名称
	FString level_of_risk;	//风险等级
	TArray<FSPSafeTreeData> children;	//子集
};

/**
 * Read/Write json file.
 */
UCLASS()
class FBXIMPORTDEMO_API UUtilsLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	//Log输出
	UFUNCTION(BlueprintCallable, Category = "Utils")
	static void Log(FString str, bool bScreen = false, float fFtime = 5, FColor color = FColor::Green);
	
	//Adjust roation
	UFUNCTION(BlueprintCallable, Category = "Utils")
	static void FaceToTarget(AActor *pTarget, AActor *pSelf);
	
	//Pico端总是有字符串问题, 所以增加了此方法
	UFUNCTION(BlueprintCallable, Category = "Utils")
	static bool NameCompare(FString s1, FString s2);

	UFUNCTION(BlueprintCallable, Category = "Utils")
	static UObject* CreateAsset(FString AssetPath);

	
	//截图高清4K
	UFUNCTION(BlueprintCallable, Category = "Utils")
	static void OnCaptureScreenshotComplete(int32 InWidth, int32 InHeight, const TArray<FColor>& InColors);
	UFUNCTION(BlueprintCallable, Category = "Utils")
	static void CaptureScreenshot();

	//截图非高清 带2DUI, 功能不实用. 该功能可以用微信截图代替
	UFUNCTION(BlueprintCallable, Category = "Utils")
	static void OnScreenshotCapturedInternal(int32 Width, int32 Height, const TArray<FColor>& Bitmap);
	UFUNCTION(BlueprintCallable, meta = (AdvancedDisplay = "1"), Category = "Utils")
	static void TakeScreenShot(const FString fineName = FString(TEXT("ScreenShot")), EImageFormatType _format = EImageFormatType::PNG,
			int32 _quality = 100, bool bInsertTimeStampToFileName = true, bool bInShowUI = true, bool bAddFilenameSuffix = false);

	//截图全景
	UFUNCTION(BlueprintCallable, Category = "Utils")
	static void CaptureScreenshotPanoramic();

	//打开外部文件夹
	UFUNCTION(BlueprintCallable, Category = "Utils")
	static void OpenFile(FString FilePath);

	//获取用户目录下的Picture目录
	UFUNCTION(BlueprintCallable, Category = "Utils")
	static FString GetUserPicturePath();

	//读取 SPD = Safety product department 安全产品部 返回的数据
	UFUNCTION(BlueprintCallable, Category = "Utils")
	static FString ReadSDPJsonFile();

	//读取 用户设置导入的文件路径
	UFUNCTION(BlueprintCallable, Category = "Utils")
	static TArray<FString> ReadLocalSelectedDataSmithFiles(int32& nCounts);

	//读取 责任区域Json文件 Level
	UFUNCTION(BlueprintCallable, Category = "Utils")
	static TArray<FSPSafeTreeData> ReadLocal_area_of_responsibility_file();
	static void ReadLocal_area_of_responsibility_file_Recursion(const TSharedPtr<FJsonObject>*& ChildObj, TArray<FSPSafeTreeData>& subOutPutArr);

	//读取 风险识别和风险评价Json文件
	UFUNCTION(BlueprintCallable, Category = "Utils")
	static void risk_identification_and_evaluation();
};
