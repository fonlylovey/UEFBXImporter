// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Engine/EngineTypes.h"
#include "SPCharacter.generated.h"

UCLASS()
class FBXIMPORTDEMO_API ASPCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASPCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// 添加UI列表
	UFUNCTION(BlueprintCallable)
	virtual void AddUIListToView();

	// 操作模式切换 飞行/行走
	UFUNCTION(BlueprintCallable)
	virtual void ChangeOperatorMode(EMovementMode emMode);

	// 查看模式切换 VR模式/普通模式
	UFUNCTION(BlueprintCallable)
	virtual void ChangeViewMode(bool isFly);

	//是否为飞行模式
	UPROPERTY(Category = "Variable (General Settings)", EditAnywhere, BlueprintReadWrite)
	bool IsFlyCamMode;

	UPROPERTY(Category = "Variable (General Settings)", EditAnywhere, BlueprintReadWrite)
	float ForwardMovementAxis;

	UPROPERTY(Category = "Variable (General Settings)", EditAnywhere, BlueprintReadWrite)
	float MovementSpeed;

	UPROPERTY(Category = "Variable (General Settings)", EditAnywhere, BlueprintReadWrite)
	float LeftMovementAxis;

	UPROPERTY(Category = "Variable (General Settings)", EditAnywhere, BlueprintReadWrite)
	float TiltAxis;

	UPROPERTY(Category = "Variable (General Settings)", EditAnywhere, BlueprintReadWrite)
	float MaximumMovementSpeed;

	UPROPERTY(Category = "Variable (General Settings)", EditAnywhere, BlueprintReadWrite)
	float CameraYaw;

	UPROPERTY(Category = "Variable (General Settings)", EditAnywhere, BlueprintReadWrite)
	float CameraPitch;

	UPROPERTY(Category = "Variable (General Settings)", EditAnywhere, BlueprintReadWrite)
	float FlySpeed;

	UPROPERTY(Category = "Variable (General Settings)", EditAnywhere, BlueprintReadWrite)
	float PanSpeed;

	UPROPERTY(Category = "Variable (General Settings)", EditAnywhere, BlueprintReadWrite)
	float TiltSpeed;

	UPROPERTY(Category = "Variable (General Settings)", EditAnywhere, BlueprintReadWrite)
	FVector HitLocation;
};
