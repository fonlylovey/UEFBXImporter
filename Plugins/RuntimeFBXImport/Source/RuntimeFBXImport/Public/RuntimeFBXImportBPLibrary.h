// Copyright 2018-2019, Athian Games. All Rights Reserved. 

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "ProceduralMeshComponent.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Misc/FileHelper.h"
#include "SaveGameSystem.h"
#include "GameFrameWork/SaveGame.h"

#include "RuntimeFBXImportBPLibrary.generated.h"


class UFBXSaveGame;
class AFBXMeshActor;

struct FSaveFBXFileVersion
{
	enum Type
	{
		InitialVersion = 1,
		AddedCustomVersions = 2,

		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1
	};
};


UENUM(BlueprintType)
enum class EFBXCollisionType : uint8
{
	NoCollision   UMETA(DisplayName = "NoCollision"),
	MeshCollisionFromSource 	    UMETA(DisplayName = "MeshCollisionFromSource"),
	CustomCollisionFromSource   UMETA(DisplayName = "CustomCollisionFromSource"),
};

/**
 * A structure containing the texture and color information to store the corresponding values read from each Material section from the source FBX file.
 */
USTRUCT(BlueprintType)
struct FMaterialDynamicStructure
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Defaults")
		UTexture2D* DiffuseTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Defaults")
		UTexture2D* EmissiveTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Defaults")
		UTexture2D* SpecularTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Defaults")
		UTexture2D* NormalTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Defaults")
		UTexture2D* OpacityTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Defaults")
		FLinearColor DiffuseColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Defaults")
		FLinearColor EmissiveColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Defaults")
		FString MaterialName;

	FMaterialDynamicStructure()
	{
		DiffuseColor = FLinearColor(1, 1, 1, 1);
		EmissiveColor = FLinearColor(1, 1, 1, 1);
		DiffuseTexture = NULL;
		EmissiveTexture = NULL;
		SpecularTexture = NULL;
		NormalTexture = NULL;
		OpacityTexture = NULL;
	}
};

/**
 * This structure represent Procedural Mesh data.
 */
USTRUCT(BlueprintType)
struct FProceduralMeshSection
{

	GENERATED_BODY()

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Defaults")
		TArray<FVector> Vertices;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Defaults")
		TArray<int32> Triangles;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Defaults")
		TArray<FVector> Normals;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Defaults")
		TArray<FVector2D> UVs;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Defaults")
		TArray<FVector> Tangents;

	TArray<FColor> VertexColors;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Defaults")
		FMaterialDynamicStructure SectionMaterial;

};


/**
 * This structure represents FBX Material Section and is mapped with the corresponding generated Procedural Mesh Component.
 */
USTRUCT(BlueprintType)
struct FFBXSectionStructure
{
	GENERATED_BODY()

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Defaults")
		int32 NodeID;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Defaults")
		int32 SectionID;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Defaults")
		FMaterialDynamicStructure SectionMaterial;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Defaults")
		FProceduralMeshSection MeshSection;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Defaults")
		UProceduralMeshComponent* FBXMeshComponent;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Defaults")
		UMaterialInterface* BaseMaterial;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Defaults")
		bool IsCollisionMesh;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Defaults")
		EFBXCollisionType CollisionType;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Defaults")
		TMap<FName, float> ScalarParamInfo;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Defaults")
		TMap<FName, FLinearColor> VectorParamInfo;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Defaults")
		TMap<FName, UTexture2D*> TextureParamInfo;

};



/**
 * This structure represents FBX Node and contains group of Material Section.
 */
USTRUCT(BlueprintType)
struct FFBXNodeStructure
{
	GENERATED_BODY()

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Defaults")
		FString NodeName;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Defaults")
		TArray<FFBXSectionStructure> NodeSections;

};

/**
 * This structure is used to queue multiple imports, as multiple FBX files can be selected for import, 
 but only one FBX file is being processed at a time.
 */
struct FBXImportStructure
{
	FString FileName;
	FVector Location;
	UMaterialInterface* BaseMaterial;
	EFBXCollisionType CollisionType;
};





UCLASS()
class URuntimeFBXImportBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	

public:

	static void CreateImageWrapperModule();
	static UWorld* GetGameWorld();
	static bool SaveGameData(USaveGame* SaveGameObject, FString FileName);
	static USaveGame* LoadGameData(FString FileName);


	/**
	* Opens the File Open Dialogue Window.
	*
	* @param FileNames  The array of filenames selected for openiong.
	* @param DialogueTitle  The Title that appears in the titlebar of the File Open Dialogue window.
	* @param FileTypes  The allowed FileTypes for the File Open Dialogue window.
	* @param multiselect  If user can select multiple files.
	*/
	UFUNCTION(BlueprintCallable, Category = "FIleBrowser")
		static bool GetOpenFileDialogue(TArray<FString>& FileNames, FString DialogueTitle, FString FileTypes,
			bool multiselect);


	/**
	* Loads Texture from the given file path.
	* @param  FilePath  The given filepath to load the texture from.
	* @param  Texture  The loaded output texture.
	* @param  Width  The Width of the texture.
	* @param  Height  The Height of the texture.
	*/
	UFUNCTION(BlueprintCallable, Category = "Texture")
		static bool LoadTexturefromPath(FString FilePath, UTexture2D* &Texture, float &Width, float &Height);

	/**
	* Create Line Trace from from given start location to end loaction and returns the hit result.
	* @param  startlocation  The start location of the trace.
	* @param  endlocation  The end location of the trace.
	* @param  OutHit  The Hit result returned from the given trace.
	* @returns true if a successful hit result is received.
	*/
	static bool CreateCameraTrace(FVector startlocation, FVector endlocation, FHitResult &OutHit);


	/**
	* Line trace from camera location and returns the hit component.
	* @param  CameraComponent  the camercomponent acts as the start of the line trace.
	* @param  objecthit  The hit result.
	* @returns  bool if the hit is successful.
	*/
	UFUNCTION(BlueprintCallable, Category = "Misc")
		static bool CheckHitAtCameraLocation(UCameraComponent* CameraComponent, FHitResult &objecthit);


	/**
	* Get Hit component at mouse cursor.
	* @param  objecthit  The hit result.
	* @returns if the hit is successful.
	*/
	UFUNCTION(BlueprintCallable, Category = "Misc")
		static bool CheckHitAtMouseCursor(FHitResult &objecthit);


	UFUNCTION(BlueprintCallable, Category = "LoadandSave", meta = (WorldContext = WorldContextObject))
		static bool SaveFBXGame(FString SaveFileName, FString SaveSlotName, UObject* WorldContextObject, AFBXMeshActor* FBXActorToSave, bool bOverwrite = true);

	UFUNCTION(BlueprintCallable, Category = "LoadandSave")
		static TArray<UFBXSaveGame*> GetALLFBXSavedFiles(FString BaseDirectory, FString Extension);

	UFUNCTION(BlueprintCallable, Category = "LoadandSave")
			static bool GetFiles(FString FullPathOfBaseDir, bool Recursive, FString FilterByExtension, TArray<FString>& FilenamesOut);


};
