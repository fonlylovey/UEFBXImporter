// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Materials/Material.h"
#include "Materials/MaterialInstance.h"
#include "Materials/MaterialInterface.h"
#include "SPWorldActorsManager.generated.h"

UCLASS()
class FBXIMPORTDEMO_API UWorldActorsManager : public UObject
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	UWorldActorsManager();
	~UWorldActorsManager();

	// 选中的Actor
	UPROPERTY(Category = "Variable (General Settings)", EditAnywhere, BlueprintReadWrite)
	AActor* m_pSelectedActor;

	// 选中
	UFUNCTION(BlueprintCallable)
	virtual void DoSelect();

	// 设置不选中
	UFUNCTION(BlueprintCallable)
	virtual void DoUnSelect();

	// 替换材质球
	UFUNCTION(BlueprintCallable)
	virtual void ChangeMaterials(UMaterialInstance* newMat);

	// 还原材质球
	UFUNCTION(BlueprintCallable)
	virtual void ResetMaterials(AActor* resetActor);

	// 跳转到选中的Actor视角
	UFUNCTION(BlueprintCallable)
	virtual void ViewToSelect();

	// 每个Actor FName:静态Mesh组件名称 TArray<UMaterialInterface*>:每个静态Mesh组件有的材质数组
	TMap<AActor*, TMap<FString, TArray<UMaterialInterface*>>> mapMaterials;
};
