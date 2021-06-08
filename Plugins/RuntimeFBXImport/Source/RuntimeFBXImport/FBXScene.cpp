#include "FBXScene.h"
#include "UObjectGlobals.h"
#include "FBXActor.h"

AFBXScene::AFBXScene(const FObjectInitializer& Init)
	: Super(Init)
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
	PrimaryActorTick.TickInterval = 0.1f;
	SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
}

void AFBXScene::init(TMap<int32, UMaterialInstanceDynamic*> matMap, TMap<int32, TArray<UFBXMesh*>> matMeshMap)
{
	RootComponent = NewObject<USceneComponent>(this, TEXT("RootComponent"));
	RootComponent->SetMobility(EComponentMobility::Movable);
	RootComponent->bVisualizeComponent = true;
	AddInstanceComponent(RootComponent);

	for (auto pair : matMap)
	{
		UMaterialInstanceDynamic* pMat = pair.Value;
		TArray<UFBXMesh*> meshList = matMeshMap[pair.Key];
		traverseMeshTree(pMat, meshList, this);
	}
	RegisterAllComponents();
}

void AFBXScene::traverseMeshTree(UMaterialInstanceDynamic* pMat, TArray<UFBXMesh*> meshList, AActor* pParent)
{
	SpawnInfo.Owner = pParent;
	AFBXActor* fbxActor = GWorld->SpawnActor<AFBXActor>(AFBXActor::StaticClass(),
		FVector(), FRotator(0, 0, 0), SpawnInfo);
	fbxActor->init(pMat, meshList);
	fbxActor->SetActorLabel(pMat->GetName());
	fbxActor->SetOwner(pParent);
	fbxActor->AttachToActor(pParent, FAttachmentTransformRules::KeepRelativeTransform);
	/*
	if (mesh->Children.Num() > 0)
	{
		for (UFBXMesh* cMesh : mesh->Children)
		{
			traverseMeshTree(cMesh, fbxActor);
		}
	}*/
}

void AFBXScene::BeginPlay()
{
	Super::BeginPlay();
}

void AFBXScene::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
