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

	// ���UI�б�
	UFUNCTION(BlueprintCallable)
	virtual void AddUIListToView();

	// ����ģʽ�л� ����/����
	UFUNCTION(BlueprintCallable)
	virtual void ChangeOperatorMode(EMovementMode emMode);

	// �鿴ģʽ�л� VRģʽ/��ͨģʽ
	UFUNCTION(BlueprintCallable)
	virtual void ChangeViewMode(bool isFly);

	//�Ƿ�Ϊ����ģʽ
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
