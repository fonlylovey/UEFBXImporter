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

	// ѡ�е�Actor
	UPROPERTY(Category = "Variable (General Settings)", EditAnywhere, BlueprintReadWrite)
	AActor* m_pSelectedActor;

	// ѡ��
	UFUNCTION(BlueprintCallable)
	virtual void DoSelect();

	// ���ò�ѡ��
	UFUNCTION(BlueprintCallable)
	virtual void DoUnSelect();

	// �滻������
	UFUNCTION(BlueprintCallable)
	virtual void ChangeMaterials(UMaterialInstance* newMat);

	// ��ԭ������
	UFUNCTION(BlueprintCallable)
	virtual void ResetMaterials(AActor* resetActor);

	// ��ת��ѡ�е�Actor�ӽ�
	UFUNCTION(BlueprintCallable)
	virtual void ViewToSelect();

	// ÿ��Actor FName:��̬Mesh������� TArray<UMaterialInterface*>:ÿ����̬Mesh����еĲ�������
	TMap<AActor*, TMap<FString, TArray<UMaterialInterface*>>> mapMaterials;
};
