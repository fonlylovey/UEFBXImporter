// Copyright 2018-2019, Athian Games. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "RuntimeFBXImportBPLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"
#include "HAL/FileManager.h"

#include "Windows/AllowWindowsPlatformTypes.h" 
#include <shlobj.h>
#include <ctime>
#include <iostream>
#include <sstream>
#include <Commdlg.h>
#include <excpt.h>
#include "Windows/HideWindowsPlatformTypes.h"

#include <fbxsdk.h>

#include "FBXMeshImport.generated.h"


struct FIndexAndZ
{
	float Z;
	int32 Index;

	/** Default constructor. */
	FIndexAndZ() {}

	/** Initialization constructor. */
	FIndexAndZ(int32 InIndex, FVector V)
	{
		Z = 0.30f * V.X + 0.33f * V.Y + 0.37f * V.Z;
		Index = InIndex;
	}
};


struct FJoint
{
	int32 Index;
	int32 ParentIndex;
	FbxNode* Node;
};




UCLASS(BlueprintType)
class UFBXMeshImport : public UObject
{
	GENERATED_BODY()

private:

	bool IsTaskActive;
	bool RequestDestroy;

public:


	void InitializeFBXMesh(FString fileName, int32 ImportID);

	UFBXMeshImport();
	~UFBXMeshImport();

	TArray<FbxNode*> GetMeshArray();
	APlayerController* PlayerController;
	TMap<FbxNode*, TArray<FbxNode*>> GetMeshArrayGroups(TArray<FbxNode*> MeshArray);
	TMap<FName, FJoint> Joints;

	void ProcessJointsAndAnimations(FbxNode* inNode);


	void FillFbxMeshArray(FbxNode* pNode, int32 Index, int32 ParentIndex);
	void CalculateGlobalTransformRecursive(FbxNode* pNode, FbxAMatrix lParentGX);

	FMaterialDynamicStructure CreateDynamicMaterialStructure(int32 MaterialID, FbxSurfaceMaterial& FbxMaterial);
	TMap<int32, FMaterialDynamicStructure> CreateNodeMaterials(FbxMesh* MeshNode);
	UTexture2D* LinkMaterialProperty(FbxSurfaceMaterial& FbxMaterial, const char* MaterialProperty, FName ParameterValue, bool bSetupAsNormalMap);

	TMap<int32, FProceduralMeshSection> CreateSingleFBXMesh(FbxNode* Node);
	void ConvertScene();


	void CreateVertexfromMesh(FbxMesh* Mesh, int32 TriangleIndex, int32 CornerIndex,
			TArray<FVector> &MeshTangents, TMap<int32, int32> &IndexMap, TArray<FVector> &VertexPositions,
			TArray<int32> &WedgeIndices, TArray<FVector> &WedgeTangentZ, TArray<FVector> &WedgeTangentX,
			TArray<FColor> &WedgeColors, TArray<FVector2D> &WedgeTexCoords);

	void Destroy();
	
	FbxAMatrix  GetGeometryTransformation(FbxNode* pNode);
	FbxAMatrix CalculateGlobalTransform(FbxNode* pNode, FbxAMatrix lParentGX);

	TArray<FProceduralMeshSection> ProcMeshSections;

	TMap<FbxNode*, FbxAMatrix> GSMatrixMap;
	TArray<FbxNode*> outMeshArray;
	TMap<FbxNode*, TArray<FbxNode*>> MeshArrayGroups;
	FbxManager* lSdkManager;
	FbxScene* Scene;
	bool IsImportFinished;
	bool lImportStatus;
	bool OddNegativeScale;
	FbxAMatrix TotalMatrix;
	FbxAMatrix TotalMatrixForNormal;

	TArray<FbxLayerElementUV const*> LayerElementUV;
	TArray<FbxLayerElement::EReferenceMode> UVReferenceMode;
	TArray<FbxLayerElement::EMappingMode> UVMappingMode;

	};
