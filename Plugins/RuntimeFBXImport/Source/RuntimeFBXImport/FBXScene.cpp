#include "FBXScene.h"
#include "UObjectGlobals.h"

AFBXScene::AFBXScene(const FObjectInitializer& Init)
	: Super(Init)
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
	PrimaryActorTick.TickInterval = 0.1f;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent->SetMobility(EComponentMobility::Movable);
	RootComponent->bVisualizeComponent = true;
	AddInstanceComponent(RootComponent);
	SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
}

void AFBXScene::init(TMap<int32, UFBXMesh*> meshMap)
{
	for (auto pair : meshMap)
	{
		UFBXMesh* mesh = pair.Value;
		traverseMeshTree(mesh, RootComponent);
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

void AFBXScene::traverseMeshTree(UFBXMesh* mesh, USceneComponent* pParent)
{
	UProceduralMeshComponent* ProcMesh = NewObject<UProceduralMeshComponent>(this, FName(mesh->MeshName));
	FProcMeshSection section = *mesh;
	ProcMesh->SetProcMeshSection(0, section);
	ProcMesh->SetMaterial(0, mesh->DynamicMaterial);
	ProcMesh->SetRelativeTransform(mesh->MeshMatrix);
	ProcMesh->AttachToComponent(pParent, FAttachmentTransformRules::KeepRelativeTransform);

	if (mesh->Children.Num() > 0)
	{                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
		for (UFBXMesh* cMesh : mesh->Children)
		{
			traverseMeshTree(cMesh, ProcMesh);
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
