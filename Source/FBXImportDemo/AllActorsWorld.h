// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AllActorsWorld.generated.h"


USTRUCT(BlueprintType)
struct FTreeData
{
	GENERATED_USTRUCT_BODY()
public:
	FTreeData()
	{
		nLevel = 0;
		children.Reset(0);
	}
	int nLevel;
	TArray<AActor*> children;
};

/**
 * 
 */
UCLASS()
class FBXIMPORTDEMO_API UAllActorsWorld : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct()override;
};
