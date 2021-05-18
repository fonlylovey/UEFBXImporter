// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/Material.h"
#include "FBXStruct.h"
#include "FBXActor.generated.h"

UCLASS()
class AFBXActor : public AActor
{
	GENERATED_BODY()
public:
	AFBXActor(const FObjectInitializer& Init);

	void init(UFBXMesh* mesh);

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

private:
};
