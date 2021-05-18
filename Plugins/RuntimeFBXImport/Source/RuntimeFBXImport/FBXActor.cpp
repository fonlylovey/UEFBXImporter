#include "FBXActor.h"
#include "UObjectGlobals.h"

AFBXActor::AFBXActor(const FObjectInitializer& Init)
	: Super(Init)
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
	PrimaryActorTick.TickInterval = 0.1f;
}

void AFBXActor::init(UFBXMesh* mesh)
{
	UProceduralMeshComponent* ProcMesh = NewObject<UProceduralMeshComponent>(this, FName(mesh->MeshName));
	FProcMeshSection section = *mesh;
	ProcMesh->SetProcMeshSection(0, section);
	ProcMesh->SetMaterial(0, mesh->DynamicMaterial);
	ProcMesh->SetRelativeTransform(mesh->MeshMatrix);
	ProcMesh->RegisterComponent();
	RootComponent = ProcMesh;
}

void AFBXActor::BeginPlay()
{
	Super::BeginPlay();
}

void AFBXActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
