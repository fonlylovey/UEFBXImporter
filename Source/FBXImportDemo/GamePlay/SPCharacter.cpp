// Fill out your copyright notice in the Description page of Project Settings.


#include "SPCharacter.h"

// Sets default values
ASPCharacter::ASPCharacter()
	: IsFlyCamMode(false)
	, ForwardMovementAxis(0.f)
	, MovementSpeed(2.f)
	, LeftMovementAxis(0.f)
	, TiltAxis(0.f)
	, MaximumMovementSpeed(0.f)
	, CameraYaw(0.f)
	, CameraPitch(0.f)
	, FlySpeed(0.f)
	, PanSpeed(0.f)
	, TiltSpeed(0.f)
	, HitLocation(FVector::ZeroVector)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASPCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASPCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASPCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

// 添加UI列表
void ASPCharacter::AddUIListToView()
{

}

// 操作模式切换 飞行/行走
void ASPCharacter::ChangeOperatorMode(EMovementMode emMode)
{
	if (emMode == MOVE_Walking)
	{
		// 打开碰撞
	}
	else if (emMode == MOVE_Flying)
	{
		// 关闭角色碰撞
	}
}

// 查看模式切换 VR模式/普通模式
void ASPCharacter::ChangeViewMode(bool isFly)
{

}