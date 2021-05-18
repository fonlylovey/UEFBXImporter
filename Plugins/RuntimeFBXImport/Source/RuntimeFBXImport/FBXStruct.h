// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NoExportTypes.h"
#include "FBXStruct.generated.h"

UCLASS()
class UFBXStruct : public UObject
{
	GENERATED_BODY()
public:

};

struct UFBXMesh : public FProcMeshSection
{
	UFBXMesh() {}

	UFBXMesh(int32 ID, FString strName);
	TArray<UFBXMesh*> Children;

	int32 MeshID;
	FString MeshName;
	FTransform MeshMatrix;
	UMaterialInstanceDynamic* DynamicMaterial = nullptr;;
};