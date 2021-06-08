#include "FBXActor.h"
#include "UObjectGlobals.h"

AFBXActor::AFBXActor(const FObjectInitializer& Init)
	: Super(Init)
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
	PrimaryActorTick.TickInterval = 0.1f;
}

void AFBXActor::init(UMaterialInstanceDynamic* PMat, TArray<UFBXMesh*> meshList)
{
	UProceduralMeshComponent* ProcMesh = NewObject<UProceduralMeshComponent>(this, FName(PMat->GetName()));
	//ProcMesh->SetRelativeTransform(mesh->MeshMatrix);
	int sectionIndex = 0;
	for (UFBXMesh* mesh : meshList)
	{
		FProcMeshSection section = *mesh;
		ProcMesh->SetProcMeshSection(sectionIndex, section);
		ProcMesh->SetMaterial(sectionIndex, PMat);
		sectionIndex++;
	}
	
	ProcMesh->RegisterComponent();
	RootComponent = ProcMesh;
	AddInstanceComponent(ProcMesh);
}

void AFBXActor::BeginPlay()
{
	Super::BeginPlay();
}

void AFBXActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
