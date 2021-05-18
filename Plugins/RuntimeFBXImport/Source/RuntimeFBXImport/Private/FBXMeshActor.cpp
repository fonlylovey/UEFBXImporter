// Copyright 2018-2019, Athian Games. All Rights Reserved. 

#include "FBXMeshActor.h"
#include "FBXImportManager.h"
#include "FBXLoader.h"

// Sets default values
AFBXMeshActor::AFBXMeshActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	DefaultMeshScale = 1;
}

// Called when the game starts or when spawned
void AFBXMeshActor::BeginPlay()
{
	Super::BeginPlay();

	
}

// Called every frame
void AFBXMeshActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AFBXMeshActor::CreateNode(int32 NodeID, FString NodeName)
{
	FFBXNodeStructure NewNodeStructure;
	NewNodeStructure.NodeName = NodeName;
	NodeSectionMap.Add(NodeID, NewNodeStructure);
}

void AFBXMeshActor::CreateSection(AFBXImportManager* FBXImportManager, FVector MeshLocation, int32 NodeID, int32 SectionID, 
	FProceduralMeshSection ProcMeshSection, UMaterialInterface* BaseMaterial, bool islastSection, bool IsCollisionMesh,
	EFBXCollisionType CollisionType)
{
	if (NodeSectionMap.Contains(NodeID))
	{
		if (IsCollisionMesh && CollisionType == EFBXCollisionType::NoCollision)
		{
			return;
		}

		FString MeshName = "FBXMesh_" + FString::FromInt(NodeID) + "_" + FString::FromInt(SectionID);
		UProceduralMeshComponent* ProcMesh = NewObject<UProceduralMeshComponent>(this, FName(*MeshName));
		ProcMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
		ProcMesh->SetWorldLocation(MeshLocation);
		UMaterialInstanceDynamic* DynamicMat = NULL;
		
		if (IsCollisionMesh && CollisionType == EFBXCollisionType::CustomCollisionFromSource)
		{
			ProcMesh->SetHiddenInGame(true);
		}
		else if (BaseMaterial)
		{
			DynamicMat = UMaterialInstanceDynamic::Create(BaseMaterial, this);
			if (ProcMeshSection.SectionMaterial.DiffuseTexture)
			{
				DynamicMat->SetTextureParameterValue("BaseTexture", ProcMeshSection.SectionMaterial.DiffuseTexture);

			}
			if (ProcMeshSection.SectionMaterial.EmissiveTexture)
			{
				DynamicMat->SetTextureParameterValue("EmissiveTexture", ProcMeshSection.SectionMaterial.EmissiveTexture);
			}
			if (ProcMeshSection.SectionMaterial.SpecularTexture)
			{
				DynamicMat->SetTextureParameterValue("SpecularTexture", ProcMeshSection.SectionMaterial.SpecularTexture);
			}
			if (ProcMeshSection.SectionMaterial.NormalTexture)
			{
				DynamicMat->SetTextureParameterValue("NormalTexture", ProcMeshSection.SectionMaterial.NormalTexture);
			}
			if (ProcMeshSection.SectionMaterial.OpacityTexture)
			{
				DynamicMat->SetTextureParameterValue("OpacityTexture", ProcMeshSection.SectionMaterial.OpacityTexture);
			}

			DynamicMat->SetVectorParameterValue("BaseColor", ProcMeshSection.SectionMaterial.DiffuseColor);
			DynamicMat->SetVectorParameterValue("EmissiveColor", ProcMeshSection.SectionMaterial.EmissiveColor);

		}
		else
		{
			DynamicMat = UMaterialInstanceDynamic::Create(UMaterial::GetDefaultMaterial(EMaterialDomain::MD_Surface), this);
		}

		if (DynamicMat)
		{
			ProcMesh->SetMaterial(0, DynamicMat);
		}

		ProcMesh->ContainsPhysicsTriMeshData(true);
		ProcMesh->bUseAsyncCooking = true;
		ProcMesh->bCastDynamicShadow = true;
		ProcMesh->bUseComplexAsSimpleCollision = IsCollisionMesh;
		ProcMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		ProcMesh->RegisterComponentWithWorld(GetWorld());


		FFBXSectionStructure NewSection;
		NewSection.NodeID = NodeID;
		NewSection.SectionID = SectionID;
		NewSection.FBXMeshComponent = ProcMesh;
		NewSection.SectionMaterial = ProcMeshSection.SectionMaterial;
		NewSection.BaseMaterial = BaseMaterial;
		NewSection.MeshSection = ProcMeshSection;
		NewSection.IsCollisionMesh = IsCollisionMesh;
		NewSection.CollisionType = CollisionType;

		NodeSectionMap[NodeID].NodeSections.Add(NewSection);

		ProceduralMeshes.Add(ProcMesh);


		auto sectionAsync = new FAsyncTask<CreateFBXMeshSectionAsync>(FBXImportManager, this, ProcMesh, 0,
			ProcMeshSection.Vertices,
			ProcMeshSection.Triangles, ProcMeshSection.Normals, ProcMeshSection.UVs,
			ProcMeshSection.VertexColors, ProcMeshSection.Tangents, true, DefaultMeshScale, islastSection);

		//FBXLoader loader;
		//auto meshMap = loader.loadModel("E:/Models/qiaodun.fbx");
		//sectionAsync->GetTask().mySection = meshMap.begin().Value();
		sectionAsync->StartBackgroundTask();

	}
}


void AFBXMeshActor::CreateMeshFromSavedFile(AFBXImportManager* FBXImportManager, TMap<int32, FFBXNodeStructure> LoadedSection)
{

	TArray<int32> LoadedNodes;
	LoadedSection.GetKeys(LoadedNodes);

	for (int i = 0; i < LoadedNodes.Num(); i++)
	{
		CreateNode(LoadedNodes[i], LoadedSection[LoadedNodes[i]].NodeName);

		TArray<FFBXSectionStructure> LoadedNodeSections = LoadedSection[LoadedNodes[i]].NodeSections;
		for (int j = 0; j < LoadedNodeSections.Num(); j ++)
		{
			bool IsLastSection = LoadedNodeSections.Num() - 1 == j;
			CreateSection(FBXImportManager, GetActorLocation(), LoadedNodes[i], LoadedNodeSections[j].SectionID,
				LoadedNodeSections[j].MeshSection, LoadedNodeSections[j].BaseMaterial, IsLastSection, LoadedNodeSections[j].IsCollisionMesh,
				LoadedNodeSections[j].CollisionType);

			TArray<FName> ScalarParamNames;
			LoadedNodeSections[j].ScalarParamInfo.GetKeys(ScalarParamNames);
			for (auto sName : ScalarParamNames)
			{
				UpdateScalarParam(sName, LoadedNodeSections[j].ScalarParamInfo[sName], LoadedNodes[i], LoadedNodeSections[j].SectionID);
			}

			TArray<FName> VectorParamNames;
			LoadedNodeSections[j].VectorParamInfo.GetKeys(VectorParamNames);
			for (auto sName : VectorParamNames)
			{
				UpdateVectorParam(sName, LoadedNodeSections[j].VectorParamInfo[sName], LoadedNodes[i], LoadedNodeSections[j].SectionID);
			}

			TArray<FName> TextureParamNames;
			LoadedNodeSections[j].TextureParamInfo.GetKeys(TextureParamNames);
			for (auto sName : TextureParamNames)
			{
				UpdateTextureParam(sName, LoadedNodeSections[j].TextureParamInfo[sName], LoadedNodes[i], LoadedNodeSections[j].SectionID);
			}
			
		}
	}
}


void AFBXMeshActor::SelectAllComponents()
{
	for (auto Child : ProceduralMeshes)
	{
		if (Child)
		{
			Child->bRenderCustomDepth = true;
			Child->SetCustomDepthStencilValue(255);
			Child->ReregisterComponent();

			CurrentSelectedComponents.Add(Child);
		}
	}
}

void AFBXMeshActor::DeSelectCurrentComponents()
{
	for (auto Child : CurrentSelectedComponents)
	{
		if (Child)
		{
			Child->bRenderCustomDepth = false;
			Child->ReregisterComponent();
		}
	}

	CurrentSelectedComponents.Empty();
}

FFBXSectionStructure AFBXMeshActor::SelectSpecificComponent(UProceduralMeshComponent* ComponentToSelect, bool deselectrest)
{
	FFBXSectionStructure Section;
	if (deselectrest)
	{
		DeSelectCurrentComponents();
	}

	if (ComponentToSelect)
	{
		ComponentToSelect->bRenderCustomDepth = true;
		ComponentToSelect->SetCustomDepthStencilValue(255);
		ComponentToSelect->ReregisterComponent();

		CurrentSelectedComponents.Add(ComponentToSelect);

		TArray<int32> Nodes;
		NodeSectionMap.GetKeys(Nodes);

		for (auto node : Nodes)
		{
			TArray<FFBXSectionStructure> NodeSections = NodeSectionMap[node].NodeSections;
			for (auto nSection : NodeSections)
			{
				if (nSection.FBXMeshComponent == ComponentToSelect)
				{
					return nSection;
				}
			}
		}
	}

	return Section;
}


TArray<FFBXSectionStructure> AFBXMeshActor::SelectNode(int32 NodeID, bool DeSelectRest)
{
	TArray<FFBXSectionStructure> NodeSections;
	FFBXNodeStructure* Node = NodeSectionMap.Find(NodeID);
	if (Node)
	{
		if (DeSelectRest)
		{
			DeSelectCurrentComponents();
		}
		for (auto section : Node->NodeSections)
		{
			SelectSpecificComponent(section.FBXMeshComponent, false);
		}

		NodeSections = Node->NodeSections;
	}
	
	return NodeSections;
}


bool AFBXMeshActor::GetFBXSection(int32 NodeID, int32 SectionID, FFBXSectionStructure& FBXSection)
{
	FFBXNodeStructure* Node = NodeSectionMap.Find(NodeID);
	if (Node)
	{
		for (auto section : Node->NodeSections)
		{
			if (section.SectionID == SectionID)
			{
				FBXSection = section;
				return true;
			}
		}
	}

	return false;
}

void AFBXMeshActor::SetFBXSection(int32 NodeID, int32 SectionID, FFBXSectionStructure FBXSection)
{
	FFBXNodeStructure* Node = NodeSectionMap.Find(NodeID);
	if (Node)
	{
		for (int i = 0; i < Node->NodeSections.Num(); i++)
		{
			if (Node->NodeSections[i].SectionID == SectionID)
			{
				NodeSectionMap[NodeID].NodeSections[i] = FBXSection;
				return;
			}

		}
	}
}

void AFBXMeshActor::SelectNodeSection(int32 NodeID, int32 SectionID, bool DeSelectRest)
{
	FFBXSectionStructure FBXSection;
	if (GetFBXSection(NodeID, SectionID, FBXSection))
	{
		if (DeSelectRest)
		{
			DeSelectCurrentComponents();
		}

		SelectSpecificComponent(FBXSection.FBXMeshComponent, false);

	}
	
}


void AFBXMeshActor::UpdateSectionMaterial(UMaterialInterface* NewMaterial, int32 NodeID, int32 SectionID)
{
	if (NewMaterial)
	{
		FFBXSectionStructure FBXSection;
		if (GetFBXSection(NodeID, SectionID, FBXSection))
		{
			UProceduralMeshComponent* SectionMesh = FBXSection.FBXMeshComponent;
			if (SectionMesh)
			{

				UMaterialInstanceDynamic* DynamicMat = UMaterialInstanceDynamic::Create(NewMaterial, this);
				if (DynamicMat)
				{
					SectionMesh->SetMaterial(0, DynamicMat);
					FBXSection.BaseMaterial = NewMaterial;
					SetFBXSection(NodeID, SectionID, FBXSection);

				}
			}

		}
		
	}
}


bool AFBXMeshActor::GetTextureParamValue(FName ParameterName, int32 NodeID, int32 SectionID, UTexture*& Texture)
{

	FFBXSectionStructure FBXSection;
	if (GetFBXSection(NodeID, SectionID, FBXSection))
	{
		UProceduralMeshComponent* SectionMesh = FBXSection.FBXMeshComponent;
		if (SectionMesh)
		{
			if (UMaterialInterface * SectionMaterial = SectionMesh->GetMaterial(0))
			{
				
				if (SectionMaterial)
				{
					FMaterialParameterInfo MatParamInfo;
					MatParamInfo.Name = ParameterName;
					return SectionMaterial->GetTextureParameterValue(MatParamInfo, Texture);
				}
			}
		}

	}
	return false;
}

bool AFBXMeshActor::GetScalarParamValue(FName ParameterName, int32 NodeID, int32 SectionID, float& ScalarValue)
{
	FFBXSectionStructure FBXSection;
	if (GetFBXSection(NodeID, SectionID, FBXSection))
	{
		UProceduralMeshComponent* SectionMesh = FBXSection.FBXMeshComponent;
		if (SectionMesh)
		{
			if (UMaterialInterface * SectionMaterial = SectionMesh->GetMaterial(0))
			{

				if (SectionMaterial)
				{
					FMaterialParameterInfo MatParamInfo;
					MatParamInfo.Name = ParameterName;
					return SectionMaterial->GetScalarParameterValue(MatParamInfo, ScalarValue);
				}
			}
		}

	}

	return false;
}

bool AFBXMeshActor::GetVectorParamValue(FName ParameterName, int32 NodeID, int32 SectionID, FLinearColor& Value)
{
	FFBXSectionStructure FBXSection;
	if (GetFBXSection(NodeID, SectionID, FBXSection))
	{
		UProceduralMeshComponent* SectionMesh = FBXSection.FBXMeshComponent;
		if (SectionMesh)
		{
			if (UMaterialInterface * SectionMaterial = SectionMesh->GetMaterial(0))
			{

				if (SectionMaterial)
				{
					FMaterialParameterInfo MatParamInfo;
					MatParamInfo.Name = ParameterName;
					return SectionMaterial->GetVectorParameterValue(MatParamInfo, Value);
				}
			}
		}

	}

	return false;
}


void AFBXMeshActor::UpdateTextureParam(FName ParameterName, UTexture2D* NewTexture, int32 NodeID, int32 SectionID)
{
	if (NewTexture)
	{
		FFBXSectionStructure FBXSection;
		if (GetFBXSection(NodeID, SectionID, FBXSection))
		{
			UProceduralMeshComponent* SectionMesh = FBXSection.FBXMeshComponent;
			if (SectionMesh)
			{
				if (UMaterialInstanceDynamic * SectionMaterial = Cast<UMaterialInstanceDynamic>(SectionMesh->GetMaterial(0)))
				{
					SectionMaterial->SetTextureParameterValue(ParameterName, NewTexture);

					if (FBXSection.TextureParamInfo.Contains(ParameterName))
					{
						FBXSection.TextureParamInfo[ParameterName] = NewTexture;
					}
					else
					{
						FBXSection.TextureParamInfo.Add(ParameterName, NewTexture);
					}

					SetFBXSection(NodeID, SectionID, FBXSection);

				}
			}

		}
		
	}
}

void AFBXMeshActor::UpdateScalarParam(FName ParameterName, float Value, int32 NodeID, int32 SectionID)
{
	FFBXSectionStructure FBXSection;
	if (GetFBXSection(NodeID, SectionID, FBXSection))
	{
		UProceduralMeshComponent* SectionMesh = FBXSection.FBXMeshComponent;
		if (SectionMesh)
		{
			if (UMaterialInstanceDynamic * SectionMaterial = Cast<UMaterialInstanceDynamic>(SectionMesh->GetMaterial(0)))
			{
				SectionMaterial->SetScalarParameterValue(ParameterName, Value);

				if (FBXSection.ScalarParamInfo.Contains(ParameterName))
				{
					FBXSection.ScalarParamInfo[ParameterName] = Value;
				}
				else
				{
					FBXSection.ScalarParamInfo.Add(ParameterName, Value);
				}

				SetFBXSection(NodeID, SectionID, FBXSection);

			}
		}

	}



}

void AFBXMeshActor::UpdateVectorParam(FName ParameterName, FLinearColor Value, int32 NodeID, int32 SectionID)
{
	FFBXSectionStructure FBXSection;
	if (GetFBXSection(NodeID, SectionID, FBXSection))
	{
		UProceduralMeshComponent* SectionMesh = FBXSection.FBXMeshComponent;
		if (SectionMesh)
		{
			if (UMaterialInstanceDynamic * SectionMaterial = Cast<UMaterialInstanceDynamic>(SectionMesh->GetMaterial(0)))
			{
				SectionMaterial->SetVectorParameterValue(ParameterName, Value);

				if (FBXSection.VectorParamInfo.Contains(ParameterName))
				{
					FBXSection.VectorParamInfo[ParameterName] = Value;
				}
				else
				{
					FBXSection.VectorParamInfo.Add(ParameterName, Value);
				}

				SetFBXSection(NodeID, SectionID, FBXSection);

			}


		}

	}

}

void AFBXMeshActor::ToggleIsolation(bool Isolate)
{
	for (auto Child : ProceduralMeshes)
	{
		if (Isolate)
		{

			if (Child && CurrentSelectedComponents.Contains(Child))
			{
				continue;
			}
			else
			{
				Child->SetHiddenInGame(true);
			}
		}
		else
		{
			Child->SetHiddenInGame(false);
		}
	}
}


void AFBXMeshActor::HideSelection()
{
	for (auto Child : ProceduralMeshes)
	{

		if (Child && CurrentSelectedComponents.Contains(Child))
		{
			Child->SetHiddenInGame(true);
		}
	}

}


