// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "ProceduralMeshComponent.h"
#include "FBXStruct.h"
#include "fbxsdk.h"



struct FBXMaterial
{

};

class FBXLoader
{
public:
	TMap<int32, UFBXMesh*> loadModel(FString strPath);

	TMap<int32, UMaterialInstanceDynamic*> getMaterial();

	~FBXLoader();

private:
	void loadingModelData(FbxScene* scene);

	void ConvertScene(FbxScene* pScene);

	void traverseNode(FbxNode* pNode, UFBXMesh* pMesh);
	
	void loadMesh(FbxNode* pNode, UFBXMesh* pMesh);

	void loadSkeleton(FbxNode* pNode);

	void loadCamera(FbxNode* pNode);

	void loadLight(FbxNode* pNode);

	FVector ConvertPos(FbxVector4 Vector);

	FVector ConvertScale(FbxVector4 Vector);

	FQuat ConvertRotToQuat(FbxVector4 Vector);

	FVector readVertex(FbxVector4* pVertexArray, int vertexIndex, FbxAMatrix globalMatrix);

	FVector readNormal(FbxLayerElementNormal* pNormalArray, int vertexIndex, int meshVertexIndex, FbxAMatrix globalMatrix);

	FColor readColor(FbxLayerElementVertexColor* pColorArray, int vertexIndex, int meshVertexIndex);

	FVector2D readUV(FbxLayerElementUV* pUVArray, int vertexIndex, int meshTextureIndex, int layer);

	FProcMeshTangent readTangent(FbxLayerElementTangent* pTangentArray, int vertexIndex, int meshVertexIndex);

	FTransform readTransform(FbxNode* pNode);

	void readMaterial(FbxLayerElementMaterial* pMaterial);

	//材质系统读取 材质分为 普通材质、纹理、shader三部分

	void loadMaterial(FbxNode* pNode, UFBXMesh* pMesh);

	UTexture2D* readTexture(const char* texTypeName, FbxSurfaceMaterial* pSurfaceMaterial);

	void readShader(FbxSurfaceMaterial* pSurfaceMaterial, UMaterialInstanceDynamic* dynamicMat);

	UTexture2D* loadImage(FString strPath);

	void fetchFbxProperty(FString propertyName, FbxSurfaceMaterial* pSurfaceMaterial, UMaterialInstanceDynamic* dynamicMat);

	void fetchFbxTexture(FString textureName, FbxSurfaceMaterial* pSurfaceMaterial, UMaterialInstanceDynamic* dynamicMat);
private:
	FString m_strDIr;
	FbxManager* m_pFbxmanager;
	TMap<int32, UFBXMesh*> ProcMeshMap;
	TMap<int32, FbxAMatrix> NodeMatrixMap;
	TMap<int32, UMaterialInstanceDynamic*> UMaterialMap;
};
