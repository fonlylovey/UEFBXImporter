// Copyright 2018-2019, Athian Games. All Rights Reserved. 

#include "FBXImportManager.h"
#include "FBXLoader.h"
#include "FBXScene.h"
// Sets default values
AFBXImportManager::AFBXImportManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	IsBusy = false;
}


// Called when the game starts or when spawned
void AFBXImportManager::BeginPlay()
{
	Super::BeginPlay();
	IsPlayEnded = false;
	URuntimeFBXImportBPLibrary::CreateImageWrapperModule();

}


void AFBXImportManager::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (ImportAsyncTask)
	{
		ImportAsyncTask->Cancel();
	}

	IsPlayEnded = true;
	Super::EndPlay(EndPlayReason);

}

// Called every frame
void AFBXImportManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}


void AFBXImportManager::ImportFBXFile(FString FileName, FVector Location, UMaterialInterface* BaseMaterial,
	EFBXCollisionType CollisionType, bool SpawnFBXActor)
{
	FActorSpawnParameters SpawnInfo;
	SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	FBXLoader loader;
	auto meshMap = loader.loadModel(FileName);
	AFBXScene* myActor = GetWorld()->SpawnActor<AFBXScene>(AFBXScene::StaticClass(),
		FVector(), FRotator(0, 0, 0), SpawnInfo);
	myActor->init(loader.getMaterial(), loader.getMatMeshMap());
	myActor->SetActorLocation(FVector(0, 0, 0));
	return;
	
	

	if (!IsBusy && !IsPlayEnded)
	{
		IsBusy = true;
		CurrentBaseMaterial = BaseMaterial;
		CurrentImportLocation = Location;
		CurrentCollisionType = CollisionType;

		int32 Count = FBXNodeMap.Num();
		FBXNodeMap.Add(Count + 1);
		
		if (SpawnFBXActor)
		{
			UClass* FBXActorClassRef = FBXActorClass ? FBXActorClass : AFBXMeshActor::StaticClass();

			AFBXMeshActor* CurrentFBXActor = GetWorld()->SpawnActor<AFBXMeshActor>(FBXActorClassRef,
				CurrentImportLocation, FRotator(0, 0, 0), SpawnInfo);

			if (CurrentFBXActor)
			{
				CurrentFBXActor->FullFileName = FileName;
				CurrentFBXActor->ActorName = FPaths::GetBaseFilename(FileName);
				CurrentFBXActor->IsBusy = true;


				FBXNodeMap[Count + 1] = CurrentFBXActor;
			}
		}
		
		ImportAsyncTask =
			new FAsyncTask<ImportFBXAsync>(this, Count, FileName, Location, SpawnFBXActor);

		ImportAsyncTask->StartBackgroundTask();
	}
	else
	{
		FBXImportStructure NewQueuedInfo;
		NewQueuedInfo.FileName = FileName;
		NewQueuedInfo.Location = Location;
		NewQueuedInfo.BaseMaterial = BaseMaterial;
		NewQueuedInfo.CollisionType = CollisionType;
		QueuedFiles.Add(NewQueuedInfo);

	}
}


void AFBXImportManager::InitializeNewFBXNode(int32 NodeIndex, FString NodeName)
{
	if (!IsPlayEnded)
	{
		FFBXNodeStructure NewNodeStructure;
		NewNodeStructure.NodeName = NodeName;

		int32 Count = FBXNodeMap.Num();
		if (Count >0 && FBXNodeMap.Contains(Count))
		{
			AFBXMeshActor* CurrentFBXActor = FBXNodeMap[Count];
			if (CurrentFBXActor)
			{
				CurrentFBXActor->CreateNode(NodeIndex, NodeName);

			}
		}
		else if (Count < 0)
			IsBusy = false;
	}

}

void AFBXImportManager::CreateNewFBXMesh(FString FBXFileName, int32 ArrayIndex , int32 SectionIndex, FProceduralMeshSection ProcMeshSection, 
	bool islastSection, int32 SectionCount, bool IsCollisionMesh)
{
	if (!IsPlayEnded)
	{
		if (GEngine->GameViewport && GEngine->GameViewport->GetWorld())
		{
			int32 Count = FBXNodeMap.Num();
			if (Count > 0 && FBXNodeMap.Contains(Count))
			{

				AFBXMeshActor* CurrentFBXActor = FBXNodeMap[Count];
				if (CurrentFBXActor)
				{

					OnFBXSectionProgressChanged(SectionIndex, ProcMeshSection.SectionMaterial.MaterialName, SectionCount);

					CurrentFBXActor->CreateSection(this, CurrentImportLocation, ArrayIndex, SectionIndex, ProcMeshSection, 
						CurrentBaseMaterial, islastSection, IsCollisionMesh, CurrentCollisionType);
				}

			}
			else if (Count < 0)
				IsBusy = false;
		}
	}
	
}

void AFBXImportManager::FinishImport()
{
	IsBusy = false;

	if (QueuedFiles.Num() > 0)
	{
		auto qFileInfo = QueuedFiles[0];
		QueuedFiles.RemoveAt(0);
		ImportFBXFile(qFileInfo.FileName, qFileInfo.Location, qFileInfo.BaseMaterial, qFileInfo.CollisionType);

	}
}


void AFBXImportManager::SelectMeshComponent(UPrimitiveComponent* ComponentToSelect, bool SelectActor, bool& IsSection, 
	FFBXSectionStructure& Section, AFBXMeshActor*& SelectedMeshActor)
{
	UProceduralMeshComponent* ProcMeshComponent = Cast<UProceduralMeshComponent>(ComponentToSelect);
	if(ProcMeshComponent)
	{
		AFBXMeshActor* OuterActor = Cast<AFBXMeshActor>(ProcMeshComponent->GetOuter());
		if (OuterActor && !OuterActor->IsBusy)
		{
			

			if (SelectActor)
			{
				DeSelectAllComponents(OuterActor, false);
				if (SelectedActor == OuterActor)
				{
					Section = OuterActor->SelectSpecificComponent(ProcMeshComponent);
					IsSection = true;
				}
				else
				{
					OuterActor->SelectAllComponents();
					SelectedMeshActor = OuterActor;
					SelectedActor = OuterActor;
					OnFBXActorSelected(OuterActor);

					IsSection = false;

				}
			}
			else
			{
				SelectedMeshActor = OuterActor;
				SelectedActor = OuterActor;
				Section = OuterActor->SelectSpecificComponent(ProcMeshComponent);
				IsSection = true;

			}

		}

	}

}

void AFBXImportManager::DeSelectAllComponents(AFBXMeshActor* MeshActor, bool ResetSelection)
{
	if (MeshActor)
	{
		MeshActor->DeSelectCurrentComponents();
		if (ResetSelection)
		{
			SelectedActor = NULL;
		}

	}
}


TArray<FFBXSectionStructure> AFBXImportManager::SelectNode(AFBXMeshActor* MeshActor, int32 NodeID, bool DeSelectRest)
{
	TArray<FFBXSectionStructure> NodeSections;

		if (MeshActor)
		{
			NodeSections = MeshActor->SelectNode(NodeID, DeSelectRest);
		}

	return NodeSections;
}


void AFBXImportManager::SelectNodeSection(AFBXMeshActor* MeshActor, int32 NodeID, int32 SectionID, bool DeSelectRest)
{
	if (MeshActor)
	{
		MeshActor->SelectNodeSection(NodeID, SectionID, DeSelectRest);
	}

}

bool AFBXImportManager::GetTextureParamValue(AFBXMeshActor* MeshActor, FName ParameterName, int32 NodeID, int32 SectionID, 
	UTexture*& Texture)
{
	if (MeshActor)
	{
		return MeshActor->GetTextureParamValue(ParameterName, NodeID, SectionID, Texture);
	}

	return false;
}

bool AFBXImportManager::GetScalarParamValue(AFBXMeshActor* MeshActor, FName ParameterName, int32 NodeID, int32 SectionID, float& ScalarValue)
{
	if (MeshActor)
	{
		return MeshActor->GetScalarParamValue(ParameterName, NodeID, SectionID, ScalarValue);
	}

	return false;

}
bool AFBXImportManager::GetVectorParamValue(AFBXMeshActor* MeshActor, FName ParameterName, int32 NodeID, int32 SectionID, FLinearColor& Value)
{
	if (MeshActor)
	{
		return MeshActor->GetVectorParamValue(ParameterName, NodeID, SectionID, Value);
	}

	return false;
}

void AFBXImportManager::UpdateSectionMaterial(AFBXMeshActor* MeshActor, UMaterialInterface* NewMaterial, int32 NodeID, int32 SectionID)
{
	if (NewMaterial)
	{
		if (MeshActor)
		{
			MeshActor->UpdateSectionMaterial(NewMaterial, NodeID, SectionID);
		}
	}

}

void AFBXImportManager::UpdateTextureParam(AFBXMeshActor* MeshActor, FName ParameterName, UTexture2D* NewTexture, int32 NodeID, int32 SectionID)
{
	if (NewTexture)
	{
		if (MeshActor)
		{
			MeshActor->UpdateTextureParam(ParameterName, NewTexture, NodeID, SectionID);
		}
	}
}

void AFBXImportManager::UpdateScalarParam(AFBXMeshActor* MeshActor, FName ParameterName, float Value, int32 NodeID, int32 SectionID)
{
	if (MeshActor)
	{
		MeshActor->UpdateScalarParam(ParameterName, Value, NodeID, SectionID);
	}

}

void AFBXImportManager::UpdateVectorParam(AFBXMeshActor* MeshActor, FName ParameterName, FLinearColor Value, int32 NodeID, int32 SectionID)
{
	if (MeshActor)
	{
		MeshActor->UpdateVectorParam(ParameterName, Value, NodeID, SectionID);
	}
}



void AFBXImportManager::IsolateSelection(AFBXMeshActor* MeshActor)
{
	if (MeshActor)
	{
		UnHideAll(MeshActor);
		MeshActor->ToggleIsolation(true);
	}
	
}


void AFBXImportManager::HideSelection(AFBXMeshActor* MeshActor)
{
	if (MeshActor)
	{
		MeshActor->HideSelection();
	}

}

void AFBXImportManager::UnHideAll(AFBXMeshActor* MeshActor)
{
	if (MeshActor)
	{
		MeshActor->ToggleIsolation(false);
	}
}


bool AFBXImportManager::GetFBXSection(AFBXMeshActor* MeshActor, int32 NodeID, int32 SectionID, FFBXSectionStructure& FBXSection)
{
	if (MeshActor)
	{
		return MeshActor->GetFBXSection(NodeID, SectionID, FBXSection);
	}

	return false;
}


void AFBXImportManager::LoadFBXFromSaveGameObject(UFBXSaveGame* SaveGameObject)
{
	if (SaveGameObject)
	{
		FTransform LoadedTransform = SaveGameObject->ObjectTransform;

		FActorSpawnParameters SpawnInfo;
		SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		int32 Count = FBXNodeMap.Num();
		FBXNodeMap.Add(Count + 1);

		UClass* FBXActorClassRef = FBXActorClass ? FBXActorClass : AFBXMeshActor::StaticClass();

		AFBXMeshActor* CurrentFBXActor = GetWorld()->SpawnActor<AFBXMeshActor>(FBXActorClassRef, LoadedTransform, SpawnInfo);


		if (CurrentFBXActor)
		{
			CurrentFBXActor->FullFileName = SaveGameObject->ObjectName;
			CurrentFBXActor->ActorName = FPaths::GetBaseFilename(SaveGameObject->ObjectName);
			CurrentFBXActor->IsBusy = true;

			FBXNodeMap[Count + 1] = CurrentFBXActor;

			TMap<int32, FFBXNodeStructure> LoadedNodeSectionMap = SaveGameObject->NodeSectionMap;
			CurrentFBXActor->CreateMeshFromSavedFile(this, LoadedNodeSectionMap);

		}

	}
}