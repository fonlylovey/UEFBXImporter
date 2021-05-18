// Fill out your copyright notice in the Description page of Project Settings.
/*
*	GameInstance ��ĿΨһʵ��
*/
#pragma once

#include "CoreMinimal.h"
#include "Tickable.h"
#include "Engine/StreamableManager.h"
#include "Engine/GameInstance.h"
#include "GamePlay/SPWorldActorsManager.h"
#include "SPGameInstance.generated.h"

extern FBXIMPORTDEMO_API class USPGameInstance* GGameInstance;

UCLASS(Blueprintable)
class FBXIMPORTDEMO_API USPGameInstance : public UGameInstance, public FTickableGameObject
{
	GENERATED_BODY()

public:
	USPGameInstance();
	~USPGameInstance();
	virtual void Init() override;

	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static USPGameInstance* DangerGameInstance(const UObject* WorldContextobject);

	// Begin FTickableGameObject Interface.
	virtual void Tick(float DeltaTime) override;
	virtual bool IsTickable() const override;
	virtual TStatId GetStatId() const override;
	// End FTickableGameObject Interface.
	virtual void StartGameInstance() override;

	FStreamableManager MobaStreamableManager;
	FStreamableManager& GetStreamableManager() { return MobaStreamableManager; }

	// ����Actor������
	UPROPERTY()
	UWorldActorsManager* m_pWorldActorsManager;

	// ��ȡ����Actor������
	UFUNCTION(BlueprintCallable)
	UWorldActorsManager* GetWorldActorsManager();

public:
	UPROPERTY(BlueprintReadOnly)
	bool IsValid = true;
};
