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

void AFBXScene::init(TMap<int32, UFBXMesh*> meshMap)
{
	for (auto pair : meshMap)
	{
		UFBXMesh* mesh = pair.Value;
		if (mesh->MeshName == "RootNode")
		{
			RootComponent = NewObject<USceneComponent>(this, TEXT("RootComponent"));
			RootComponent->SetMobility(EComponentMobility::Movable);
			RootComponent->bVisualizeComponent = true;
			AddInstanceComponent(RootComponent);
		}
		traverseMeshTree(mesh, this);
	}
	RegisterAllComponents();
}



void AFBXScene::init(UFBXMesh* mesh)
{
	UProceduralMeshComponent* ProcMesh = NewObject<UProceduralMeshComponent>(this, FName(mesh->MeshName));
	FProcMeshSection section = *mesh;
	ProcMesh->SetProcMeshSection(0, section);
	ProcMesh->SetMaterial(0, mesh->DynamicMaterial);
	ProcMesh->SetRelativeTransform(mesh->MeshMatrix);
	ProcMesh->RegisterComponent();
	ProcMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

void AFBXScene::traverseMeshTree(UFBXMesh* mesh, AActor* pParent)
{
	SpawnInfo.Owner = pParent;
	AFBXActor* fbxActor = GWorld->SpawnActor<AFBXActor>(AFBXActor::StaticClass(),
		FVector(), FRotator(0, 0, 0), SpawnInfo);
	fbxActor->init(mesh);
	fbxActor->SetActorLabel(mesh->MeshName);
	fbxActor->SetOwner(pParent);
	fbxActor->AttachToActor(pParent, FAttachmentTransformRules::KeepRelativeTransform);
	if (mesh->Children.Num() > 0)
	{                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
		for (UFBXMesh* cMesh : mesh->Children)
		{
			traverseMeshTree(cMesh, fbxActor);
		}
	}
}

void AFBXScene::BeginPlay()
{
	Super::BeginPlay();
}

void AFBXScene::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
