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
	FString code;			//����
	FString area_name;		//��������
	FString level_of_risk;	//���յȼ�
	TArray<FSPSafeTreeData> children;	//�Ӽ�
};

/**
 * Read/Write json file.
 */
UCLASS()
class FBXIMPORTDEMO_API UUtilsLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	//Log���
	UFUNCTION(BlueprintCallable, Category = "Utils")
	static void Log(FString str, bool bScreen = false, float fFtime = 5, FColor color = FColor::Green);
	
	//Adjust roation
	UFUNCTION(BlueprintCallable, Category = "Utils")
	static void FaceToTarget(AActor *pTarget, AActor *pSelf);
	
	//Pico���������ַ�������, ���������˴˷���
	UFUNCTION(BlueprintCallable, Category = "Utils")
	static bool NameCompare(FString s1, FString s2);

	UFUNCTION(BlueprintCallable, Category = "Utils")
	static UObject* CreateAsset(FString AssetPath);

	
	//��ͼ����4K
	UFUNCTION(BlueprintCallable, Category = "Utils")
	static void OnCaptureScreenshotComplete(int32 InWidth, int32 InHeight, const TArray<FColor>& InColors);
	UFUNCTION(BlueprintCallable, Category = "Utils")
	static void CaptureScreenshot();

	//��ͼ�Ǹ��� ��2DUI, ���ܲ�ʵ��. �ù��ܿ�����΢�Ž�ͼ����
	UFUNCTION(BlueprintCallable, Category = "Utils")
	static void OnScreenshotCapturedInternal(int32 Width, int32 Height, const TArray<FColor>& Bitmap);
	UFUNCTION(BlueprintCallable, meta = (AdvancedDisplay = "1"), Category = "Utils")
	static void TakeScreenShot(const FString fineName = FString(TEXT("ScreenShot")), EImageFormatType _format = EImageFormatType::PNG,
			int32 _quality = 100, bool bInsertTimeStampToFileName = true, bool bInShowUI = true, bool bAddFilenameSuffix = false);

	//��ͼȫ��
	UFUNCTION(BlueprintCallable, Category = "Utils")
	static void CaptureScreenshotPanoramic();

	//���ⲿ�ļ���
	UFUNCTION(BlueprintCallable, Category = "Utils")
	static void OpenFile(FString FilePath);

	//��ȡ�û�Ŀ¼�µ�PictureĿ¼
	UFUNCTION(BlueprintCallable, Category = "Utils")
	static FString GetUserPicturePath();

	//��ȡ SPD = Safety product department ��ȫ��Ʒ�� ���ص�����
	UFUNCTION(BlueprintCallable, Category = "Utils")
	static FString ReadSDPJsonFile();

	//��ȡ �û����õ�����ļ�·��
	UFUNCTION(BlueprintCallable, Category = "Utils")
	static TArray<FString> ReadLocalSelectedDataSmithFiles(int32& nCounts);

	//��ȡ ��������Json�ļ� Level
	UFUNCTION(BlueprintCallable, Category = "Utils")
	static TArray<FSPSafeTreeData> ReadLocal_area_of_responsibility_file();
	static void ReadLocal_area_of_responsibility_file_Recursion(const TSharedPtr<FJsonObject>*& ChildObj, TArray<FSPSafeTreeData>& subOutPutArr);

	//��ȡ ����ʶ��ͷ�������Json�ļ�
	UFUNCTION(BlueprintCallable, Category = "Utils")
	static void risk_identification_and_evaluation();
};
