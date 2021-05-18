// Copyright 2018-2019, Athian Games. All Rights Reserved. 

#include "ImportFBXAsync.h"
#include "FBXMeshImport.h"
#include "FBXImportManager.h"
#include "FBXMeshActor.h"
#include "FBXLoader.h"
#include "FBXActor.h"

static UFBXMeshImport* MeshImportObjectHandle;

ImportFBXAsync::ImportFBXAsync(AFBXImportManager* FBXImportManager, int32 importID, FString fileName,  FVector InitialLocation, bool spawnFBXActor)
{
	CurrentFBXImportManager = FBXImportManager;
	FileName = fileName;
	ImportID = importID;
	ImpactLocation = InitialLocation;
	SpawnFBXActor = spawnFBXActor;
}

ImportFBXAsync::~ImportFBXAsync()
{
	if (MeshImportObjectHandle && MeshImportObjectHandle->IsValidLowLevel())
	{
		MeshImportObjectHandle->Destroy();
	}

}

void ImportFBXAsync::DoWork()
{

		TArray<FString> FBXUNiqueFiles;
		AFBXImportManager* FBXImportManager = CurrentFBXImportManager;

		if (FBXImportManager && FBXImportManager->IsValidLowLevel() && !FBXImportManager->IsPlayEnded)
		{
			
			FString fname = FPaths::GetBaseFilename(FileName);

			AsyncTask(ENamedThreads::GameThread, [FBXImportManager, fname]()
				{
					if (FBXImportManager && FBXImportManager->IsValidLowLevel() && !FBXImportManager->IsPlayEnded)
					{
						FBXImportManager->OnNewFBXImportStarted(fname);
					}
				});


			MeshImportObjectHandle = NewObject<UFBXMeshImport>(FBXImportManager);
			MeshImportObjectHandle->InitializeFBXMesh(FileName, ImportID);

			TArray<FbxNode*> MeshArray = MeshImportObjectHandle->GetMeshArray();

			if (MeshArray.Num() > 0)
			{
				
				FString uniqueFileName = fname;
				int32 count = 0;

				while (FBXUNiqueFiles.Contains(uniqueFileName))
				{
					count++;
					uniqueFileName = uniqueFileName + FString::FromInt(count);
				}

				FBXUNiqueFiles.Add(uniqueFileName);


				FVector CImpactLoc = ImpactLocation;

				for (int i = 0; i < MeshArray.Num(); i++)
				{
					
					FString NodeName = MeshArray[i]->GetName();
					int32 ArrayIndex = i;
					int32 ArrayCount = MeshArray.Num();

					AsyncTask(ENamedThreads::GameThread, [FBXImportManager, fname, ArrayIndex, NodeName, ArrayCount]()
						{
							if (FBXImportManager && FBXImportManager->IsValidLowLevel() && !FBXImportManager->IsPlayEnded)
							{
								FBXImportManager->OnFBXNodeProgressChanged(ArrayIndex, NodeName, ArrayCount);
							}
						});

					bool IsCollisionMesh = NodeName.StartsWith("UCX_");

					const TMap<int32, FProceduralMeshSection> ProcMeshSectionMap = MeshImportObjectHandle->CreateSingleFBXMesh(MeshArray[i]);


#pragma region SpawnProcMesh


					float ProgressPercent = (float)(i + 1) / MeshArray.Num();

					bool bLast = (i == MeshArray.Num() - 1) ? true : false;

					AsyncTask(ENamedThreads::GameThread, [FBXImportManager, ProcMeshSectionMap]()
						{
							if (FBXImportManager && FBXImportManager->IsValidLowLevel() && !FBXImportManager->IsPlayEnded)
							{
								FBXImportManager->OnFBXSectionImported(ProcMeshSectionMap);
							}
						});

					if (SpawnFBXActor)
					{
						AsyncTask(ENamedThreads::GameThread, [uniqueFileName, ArrayIndex, ProcMeshSectionMap, FBXImportManager, NodeName, bLast]()
							{
								if (FBXImportManager && FBXImportManager->IsValidLowLevel() && !FBXImportManager->IsPlayEnded)
								{
									FBXImportManager->InitializeNewFBXNode(ArrayIndex, NodeName);
								}
							});

						TArray<int32> MaterialIndices;
						ProcMeshSectionMap.GetKeys(MaterialIndices);

						int32 SectionCount = MaterialIndices.Num();
						for (int j = 0; j < MaterialIndices.Num(); j++)
						{

							int32 MaterialIndex = j;

							AsyncTask(ENamedThreads::GameThread, [uniqueFileName, IsCollisionMesh, ArrayIndex, SectionCount, MaterialIndex, ProcMeshSectionMap, FBXImportManager,
								MaterialIndices, bLast]()
								{
									bool bLastSection = (MaterialIndex == SectionCount - 1) ? bLast : false;

									int32 SectionIndex = MaterialIndices[MaterialIndex];
									FProceduralMeshSection ProcMeshSection = ProcMeshSectionMap[SectionIndex];

									FBXImportManager->CreateNewFBXMesh(uniqueFileName, ArrayIndex, SectionIndex, ProcMeshSection, bLastSection, SectionCount, IsCollisionMesh);
								});

						}
					}
					


#pragma endregion

				}
			}
			else
			{
				MeshImportObjectHandle->Destroy();
				AsyncTask(ENamedThreads::GameThread, [FBXImportManager]()
					{
						if (!FBXImportManager->IsPlayEnded)
						{
							FBXImportManager->OnImportCompleted(NULL);
							FBXImportManager->FinishImport();
						}
					});
			}

		}
}


CreateFBXMeshSectionAsync::CreateFBXMeshSectionAsync(AFBXImportManager* FBXImportManager, AFBXMeshActor* FBXMeshActor,
	UProceduralMeshComponent* MeshComponent, int32 SectionIndex, const TArray<FVector>& Vertices,
	const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0,
	const TArray<FColor>& VertexColors, const TArray<FVector>& Tangents, bool breateCollision, float vertexScale, bool bLast)
{
	FBXMeshComponent = MeshComponent;

	FBXNewSection = FProcMeshSection();
	FBXVertices = Vertices;
	FBXTriangles = Triangles;
	FBXNormals = Normals;
	FBXUV0 = UV0;
	FBXVertexColors = VertexColors;
	FBXTangents = Tangents;
	bFBXCreateCollision = breateCollision;
	FBXSectionIndex = SectionIndex;
	LastSection = bLast;
	CurrentFBXMeshActor = FBXMeshActor;
	CurrentFBXImportManager = FBXImportManager;
	VertexScale = vertexScale;
}

CreateFBXMeshSectionAsync::~CreateFBXMeshSectionAsync()
{

}


void CreateFBXMeshSectionAsync::DoWork()
{
	const int32 NumVerts = FBXVertices.Num();
	FBXNewSection.ProcVertexBuffer.Reset();
	FBXNewSection.ProcVertexBuffer.AddUninitialized(NumVerts);
	AFBXMeshActor* FBXMeshActor = CurrentFBXMeshActor;
	if (FBXMeshActor && FBXMeshActor->IsValidLowLevel())
	{

		for (int32 VertIdx = 0; VertIdx < NumVerts; VertIdx++)
		{
			FProcMeshVertex& Vertex = FBXNewSection.ProcVertexBuffer[VertIdx];

			Vertex.Position = FBXVertices[VertIdx];
			Vertex.Normal = (FBXNormals.Num() == NumVerts) ? FBXNormals[VertIdx] : FVector(0.f, 0.f, 1.f);
			Vertex.UV0 = (FBXUV0.Num() == NumVerts) ? FBXUV0[VertIdx] : FVector2D(0.f, 0.f);
			Vertex.Color = (FBXVertexColors.Num() == NumVerts) ? FBXVertexColors[VertIdx] : FColor(255, 255, 255);
			Vertex.Tangent = (FBXTangents.Num() == NumVerts) ? FProcMeshTangent(FBXTangents[VertIdx], false) : FProcMeshTangent();
			FBXNewSection.SectionLocalBox += Vertex.Position;
		}

		int32 NumTriIndices = FBXTriangles.Num();
		NumTriIndices = (NumTriIndices / 3) * 3; 
		FBXNewSection.ProcIndexBuffer.Reset();
		FBXNewSection.ProcIndexBuffer.AddUninitialized(NumTriIndices);
		for (int32 IndexIdx = 0; IndexIdx < NumTriIndices; IndexIdx++)
		{
			FString SectionString = FString::FromInt(IndexIdx + 1) + "/" + FString::FromInt(NumTriIndices);
			float ProgressPercent = (float)(IndexIdx + 1) / NumTriIndices;

			FBXNewSection.ProcIndexBuffer[IndexIdx] = FMath::Min(FBXTriangles[IndexIdx], NumVerts - 1);
		}
		
		FBXNewSection.bEnableCollision = bFBXCreateCollision;
		auto newsection = FBXNewSection;
		auto mcomponent = FBXMeshComponent;

		FActorSpawnParameters SpawnInfo;
		SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		AsyncTask(ENamedThreads::GameThread, [newsection, mcomponent]()
		{
			mcomponent->SetProcMeshSection(0, newsection);
		});

		if (LastSection)
		{
				
			if (CurrentFBXImportManager && CurrentFBXImportManager->IsValidLowLevel())
			{
				AFBXImportManager* FBXImportManager = CurrentFBXImportManager;
				int32 SectionIndex = FBXSectionIndex;
				AsyncTask(ENamedThreads::GameThread, [FBXMeshActor, FBXImportManager, SectionIndex]()
					{
						if (!FBXImportManager->IsPlayEnded)
						{
							FBXMeshActor->IsBusy = false;
							FBXImportManager->OnImportCompleted(FBXMeshActor);


							FVector Origin;
							FVector BoxExtent;
							FBXMeshActor->GetActorBounds(false, Origin, BoxExtent);

							FString BoxName = "CollisionBox";
							UBoxComponent* CollisionBox = NewObject<UBoxComponent>(FBXMeshActor, FName(*BoxName));
							CollisionBox->AttachToComponent(FBXMeshActor->GetRootComponent(), 
								FAttachmentTransformRules::KeepRelativeTransform);
						
							CollisionBox->SetBoxExtent(BoxExtent);
							CollisionBox->SetWorldLocation(Origin);
							CollisionBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

							FBXImportManager->FinishImport();
						}
					});
			}
		}

	}
}
