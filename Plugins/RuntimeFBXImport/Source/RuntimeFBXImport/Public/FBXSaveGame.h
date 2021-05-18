// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "RuntimeFBXImportBPLibrary.h"
#include "FBXMeshActor.h"

#include "FBXSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class RUNTIMEFBXIMPORT_API UFBXSaveGame : public USaveGame
{
	GENERATED_BODY()
	
public:


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Defaults)
		FString ObjectName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Defaults)
		FString SaveSlotName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Defaults)
		TMap<int32, FFBXNodeStructure> NodeSectionMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Defaults)
		FTransform ObjectTransform;

	void SaveComponents(AFBXMeshActor* FBXActorToSave);

};
