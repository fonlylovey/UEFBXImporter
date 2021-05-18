// Fill out your copyright notice in the Description page of Project Settings.


#include "SPWorldActorsManager.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/KismetSystemLibrary.h"

static UWorldActorsManager* pWAM = nullptr;

// Sets default values
UWorldActorsManager::UWorldActorsManager()
	: m_pSelectedActor(nullptr)
{
	mapMaterials.Reset();
}

UWorldActorsManager::~UWorldActorsManager()
{

}

// ѡ��
void UWorldActorsManager::DoSelect()
{
	if (!m_pSelectedActor)
		return;

	TArray<UActorComponent*> arrCm = m_pSelectedActor->K2_GetComponentsByClass(UStaticMeshComponent::StaticClass());
	for (auto cm : arrCm)
	{
		UStaticMeshComponent* umc = Cast<UStaticMeshComponent>(cm);
		if (!umc) continue;

		umc->SetRenderCustomDepth(true);
		umc->SetCustomDepthStencilValue(255);
	}
}

// ���ò�ѡ��
void UWorldActorsManager::DoUnSelect()
{
	if (!m_pSelectedActor)
		return;

	TArray<UActorComponent*> arrCm = m_pSelectedActor->K2_GetComponentsByClass(UStaticMeshComponent::StaticClass());
	for (auto cm : arrCm)
	{
		UStaticMeshComponent* umc = Cast<UStaticMeshComponent>(cm);
		if (!umc) continue;

		umc->SetRenderCustomDepth(false);
		//umc->SetCustomDepthStencilValue(255);
	}

	m_pSelectedActor = nullptr;
}

// �滻������
void UWorldActorsManager::ChangeMaterials(UMaterialInstance* newMat)
{
	if (!m_pSelectedActor) return;

	//���ȸĲ���֮ǰ�ȶ�֮ǰ�Ĳ�����һ������
	TMap<FString, TArray<UMaterialInterface*>>& arr1 = mapMaterials.FindOrAdd(m_pSelectedActor);
	if (arr1.Num() > 0)
	{
		//��ֵ֤��, ֮ǰ��ӹ�������
	}
	else
	{
		TArray<UActorComponent*> arrCm = m_pSelectedActor->K2_GetComponentsByClass(UStaticMeshComponent::StaticClass());
		for (auto cm : arrCm)
		{
			UStaticMeshComponent* umc = Cast<UStaticMeshComponent>(cm);
			if (!umc) continue;

			FString sName = UKismetSystemLibrary::GetDisplayName(umc);
			for (int32 i = 0; i < umc->GetNumMaterials(); i++)
			{
				arr1.FindOrAdd(sName).Add(umc->GetMaterial(i));
			}
			/*for (auto a1 : umc->GetMaterials())
			{
				arr1.FindOrAdd(sName).Add(a1);
			}*/
		}
	}

	TArray<UActorComponent*> arrCm = m_pSelectedActor->K2_GetComponentsByClass(UStaticMeshComponent::StaticClass());
	for (auto cm : arrCm)
	{
		UStaticMeshComponent* umc = Cast<UStaticMeshComponent>(cm);
		if (!umc) continue;

		for (int32 i = 0; i < umc->GetNumMaterials(); i++)
		{
			umc->SetMaterial(i, newMat);
		}
	}
}

// ��ԭ������
void UWorldActorsManager::ResetMaterials(AActor* resetActor)
{
	if (!resetActor) return;
	TMap<FString, TArray<UMaterialInterface*>>& arr1 = mapMaterials.FindOrAdd(resetActor);
	if (arr1.Num() <= 0) return;

	TArray<UActorComponent*> arrCm = m_pSelectedActor->K2_GetComponentsByClass(UStaticMeshComponent::StaticClass());
	for (auto cm : arrCm)
	{
		UStaticMeshComponent* umc = Cast<UStaticMeshComponent>(cm);
		if (!umc) continue;

		FString sName = UKismetSystemLibrary::GetDisplayName(umc);
		TArray<UMaterialInterface*> findArr = arr1[sName];
		for (int i = 0 ; i < findArr.Num(); i++)
		{
			umc->SetMaterial(i, findArr[i]);
		}
	}
}

// ��ת��ѡ�е�Actor�ӽ�
void UWorldActorsManager::ViewToSelect()
{

}