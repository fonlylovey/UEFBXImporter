// Copyright 2018-2019, Athian Games. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Async/AsyncWork.h"
#include "Async/Async.h"
#include "Components/BoxComponent.h"
#include "FBXMeshImport.h"
#include "RuntimeFBXImportBPLibrary.h"
#include "ProceduralMeshComponent.h"

class AFBXMeshActor;
class AFBXImportManager;

/**
 * 
 */
class ImportFBXAsync : public FNonAbandonableTask
{

private:

	FString FileName;
	int32 ImportID;
	FVector ImpactLocation;
	UMaterialInterface* FBXBaseMaterial;
	TArray<FProceduralMeshSection> ProcMeshSections;
	FVector CurrentLocation;
	AFBXImportManager* CurrentFBXImportManager;
	bool SpawnFBXActor;

public:


	ImportFBXAsync(AFBXImportManager* FBXImportManager, int32 importID, FString fileName, FVector InitialLocation, bool spawnFBXActor);

	virtual ~ImportFBXAsync();

	friend class FAsyncTask<ImportFBXAsync>;

	virtual void DoWork();

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(ImportFBXAsyncTask, STATGROUP_ThreadPoolAsyncTasks);
	}


};

class CreateFBXMeshSectionAsync : public FNonAbandonableTask
{
	CreateFBXMeshSectionAsync(AFBXImportManager* FBXImportManager, AFBXMeshActor* FBXMeshActor, UProceduralMeshComponent* MeshComponent, int32 SectionIndex, const TArray<FVector>& Vertices,
		const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0,
		const TArray<FColor>& VertexColors, const TArray<FVector>& Tangents, bool breateCollision, float vertexScale, bool bLast);

	virtual ~CreateFBXMeshSectionAsync();

	TArray<FVector> FBXVertices;
	TArray<int32> FBXTriangles;
	TArray<FVector> FBXNormals;
	TArray<FVector2D> FBXUV0;
	TArray<FColor> FBXVertexColors;
	TArray<FVector> FBXTangents;
	bool bFBXCreateCollision;
	int32 FBXSectionIndex;
	UProceduralMeshComponent* FBXMeshComponent;
	FProcMeshSection FBXNewSection;
	AFBXMeshActor* CurrentFBXMeshActor;
	AFBXImportManager* CurrentFBXImportManager;

public:
	FProcMeshSection mySection;

	bool LastSection;
	float VertexScale;

	friend class FAsyncTask<CreateFBXMeshSectionAsync>;

	virtual void DoWork();

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(CreateFBXMeshSectionAsyncTask, STATGROUP_ThreadPoolAsyncTasks);
	}

};

