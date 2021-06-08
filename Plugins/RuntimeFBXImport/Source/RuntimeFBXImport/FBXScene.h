// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/Material.h"
#include "FBXStruct.h"
#include "FBXScene.generated.h"

UCLASS()
class AFBXScene : public AActor
{
	GENERATED_BODY()
public:
	AFBXScene(const FObjectInitializer& Init);
	
	void init(TMap<int32, UMaterialInstanceDynamic*> matMap, TMap<int32, TArray<UFBXMesh*>> matMeshMap);

	void traverseMeshTree(UMaterialInstanceDynamic* pMat, TArray<UFBXMesh*> meshList, AActor* pParent);

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

private:
	FActorSpawnParameters SpawnInfo;
};
