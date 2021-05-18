// Fill out your copyright notice in the Description page of Project Settings.

#include "SPGameInstance.h"
#include "Engine/DataTable.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/Engine.h"


USPGameInstance* GGameInstance = nullptr;

USPGameInstance::USPGameInstance()
	:m_pWorldActorsManager(nullptr)
{
	GGameInstance = this;
}

USPGameInstance::~USPGameInstance()
{
}

void USPGameInstance::Init()
{
	Super::Init();

	GetWorldActorsManager();

	IsValid = true;
}

UWorldActorsManager* USPGameInstance::GetWorldActorsManager()
{
	if (!m_pWorldActorsManager)
	{
		m_pWorldActorsManager = NewObject<UWorldActorsManager>(this);
	}

	return m_pWorldActorsManager;
}

void USPGameInstance::StartGameInstance()
{
	Super::StartGameInstance();

	if (GGameInstance == nullptr) GGameInstance = this;
}

USPGameInstance* USPGameInstance::DangerGameInstance(const UObject* WorldContextobject)
{
	return Cast<USPGameInstance>(UGameplayStatics::GetGameInstance(WorldContextobject));

}

void USPGameInstance::Tick(float DeltaTime)
{  
	static FString levelName = "";
	FString OtherLevelName = UGameplayStatics::GetCurrentLevelName(this);
	if (levelName != OtherLevelName)
	{
		levelName = OtherLevelName;
		GEngine->AddOnScreenDebugMessage(0, 100.f, FColor::Green, levelName);
	}
}

bool USPGameInstance::IsTickable() const
{
	return true;
}

TStatId USPGameInstance::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(USPGameInstance, STATGROUP_Tickables);
}