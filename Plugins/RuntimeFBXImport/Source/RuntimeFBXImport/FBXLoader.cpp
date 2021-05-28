#include "FBXLoader.h"
#include <fbxsdk/scene/geometry/fbxlayer.h>
#include <string>
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "LogMacros.h"

TMap<int32, UFBXMesh*> FBXLoader::loadModel(FString strPath)
{
	m_strDIr = strPath;
	std::string stdStrPath(TCHAR_TO_UTF8(*strPath));
	m_strDIr = FPaths::GetPath(strPath);
	m_pFbxmanager = FbxManager::Create();
	FbxIOSettings* ios = FbxIOSettings::Create(m_pFbxmanager, IOSROOT);
	m_pFbxmanager->SetIOSettings(ios);

	FbxImporter* fbxImporter = FbxImporter::Create(m_pFbxmanager, "");

	bool status = fbxImporter->Initialize(stdStrPath.c_str(), -1, ios);
	FbxScene* scene = FbxScene::Create(m_pFbxmanager, "");
	status = fbxImporter->Import(scene);
	loadingModelData(scene);
	
	return ProcMeshMap;
}

TMap<int32, UMaterialInstanceDynamic*> FBXLoader::getMaterial()
{
	return UMaterialMap;
}

FBXLoader::~FBXLoader()
{
	m_pFbxmanager = nullptr;
}

void FBXLoader::loadingModelData(FbxScene* scene)
{
	ConvertScene(scene);
	FbxNode* rootNode = scene->GetRootNode();
	int nodeCount = rootNode->GetChildCount();
	int matCount = scene->GetMaterialCount();
	int texCount = scene->GetTextureCount();
	rootNode->ConvertPivotAnimationRecursive(NULL, FbxNode::EPivotSet::eDestinationPivot, 30);
	FbxAMatrix parMat;
	parMat.IsIdentity();
	UFBXMesh* mesh = new UFBXMesh(rootNode->GetUniqueID(), UTF8_TO_TCHAR(rootNode->GetName()));
	ProcMeshMap.Add(rootNode->GetUniqueID(), mesh);

	traverseNode(rootNode, mesh);
	int meshCount = ProcMeshMap.Num();
}

void FBXLoader::ConvertScene(FbxScene* pScene)
{
	if (pScene)
	{

		FbxAxisSystem FileAxisSystem = pScene->GetGlobalSettings().GetAxisSystem();
		FbxSystemUnit FileUnitSystem = pScene->GetGlobalSettings().GetSystemUnit();

		FbxAxisSystem::ECoordSystem CoordSystem = FbxAxisSystem::eRightHanded;
		FbxAxisSystem::EUpVector UpVector = FbxAxisSystem::eZAxis;
		FbxAxisSystem::EFrontVector FrontVector = (FbxAxisSystem::EFrontVector)-FbxAxisSystem::eParityOdd;

		FbxAxisSystem UnrealImportAxis(UpVector, FrontVector, CoordSystem);

		FbxAxisSystem SourceSetup = pScene->GetGlobalSettings().GetAxisSystem();

		if (SourceSetup != UnrealImportAxis)
		{
			FbxRootNodeUtility::RemoveAllFbxRoots(pScene);
			UnrealImportAxis.ConvertScene(pScene);
			FbxAMatrix JointOrientationMatrix;
			JointOrientationMatrix.SetIdentity();
		}
		pScene->GetAnimationEvaluator()->Reset();
	}
}

void FBXLoader::traverseNode(FbxNode* pNode, UFBXMesh* pMesh)
{
	FString strName = FString(UTF8_TO_TCHAR(pNode->GetName()));
	pMesh->MeshMatrix = readTransform(pNode);
	if (pNode->GetNodeAttribute())
	{
		FbxNodeAttribute::EType attributeType = pNode->GetNodeAttribute()->GetAttributeType();
		switch (attributeType)
		{
		case FbxNodeAttribute::eMesh:
			loadMesh(pNode, pMesh);
			loadMaterial(pNode, pMesh);
			break;
		case FbxNodeAttribute::eSkeleton:
			//loadSkeleton(pNode);
			break;
		case FbxNodeAttribute::eLight:
			//loadLight(pNode);
			break;
		case FbxNodeAttribute::eCamera:
			//loadCamera(pNode);
			break;
		}
		
	}

	for (int i = 0; i < pNode->GetChildCount(); ++i)
	{
		FbxNode* child = pNode->GetChild(i);
		UFBXMesh* cMesh = new UFBXMesh(child->GetUniqueID(), child->GetName());
		pMesh->Children.Add(cMesh);

		traverseNode(child, cMesh);
	}
}

void FBXLoader::loadMesh(FbxNode* pNode, UFBXMesh* pMesh)
{
	FbxMesh* fbxMesh = pNode->GetMesh();
	
	if (fbxMesh != nullptr)
	{
		//如果模型没有三角化，先转换成三角形
		if (!fbxMesh->IsTriangleMesh())
		{
			FbxGeometryConverter GeometryConverter(m_pFbxmanager);
			FbxNodeAttribute* ConvertedNode = GeometryConverter.Triangulate(pNode->GetNodeAttribute(), true);
			if (ConvertedNode != nullptr && ConvertedNode->GetAttributeType() == FbxNodeAttribute::eMesh)
			{
				fbxMesh = (FbxMesh*)ConvertedNode;
			}
			else
			{
				FString strMsg = "Mesh 三角化失败:" + FString(UTF8_TO_TCHAR(pNode->GetName()));
				UE_LOG(LogTemp, Error, TEXT("%s"), *strMsg);
			}
		}

		FbxVector4* pVertexArray = fbxMesh->GetControlPoints();
		FbxLayerElementVertexColor* pVertexColorArray =  fbxMesh->GetElementVertexColor();
		FbxLayerElementNormal* pVertexNormalArray = fbxMesh->GetElementNormal(0);
		FbxLayerElementUV* pUV0Array = fbxMesh->GetElementUV(0);
		FbxLayerElementUV* pUV1Array = fbxMesh->GetElementUV(1);
		FbxLayerElementTangent* pTangentArray = fbxMesh->GetElementTangent(0);

		FString strName = UTF8_TO_TCHAR(pNode->GetName());

		//三角面的
		int triangleCount = fbxMesh->GetPolygonCount();
		int count = fbxMesh->GetPolygonVertexCount();
		int vertexCount = fbxMesh->GetControlPointsCount();

		int meshVexIndex = 0;
		for (int i = 0; i < triangleCount; i++)
		{
			FProcMeshVertex firstVertex;
			int ployVexterSize = fbxMesh->GetPolygonSize(i);
			for (int j = 0; j < ployVexterSize; j++)
			{
				FProcMeshVertex vertex;
				//获取该顶点在mesh顶点数组中的顶点索引
				int vertexIndex = fbxMesh->GetPolygonVertex(i, j);
				pMesh->ProcIndexBuffer.Add(meshVexIndex);
				
				FbxAMatrix fbxMat;
				fbxMat.SetIdentity();
				vertex.Position = readVertex(pVertexArray, vertexIndex, fbxMat);

				vertex.Color = FColor(0.8, 0.8, 0.8, 1);
				if (pVertexColorArray != nullptr)
				{
					vertex.Color = readColor(pVertexColorArray, vertexIndex, meshVexIndex);
				}

				int textureIndex = fbxMesh->GetTextureUVIndex(i, j);
				if (pUV0Array != nullptr)
				{
					vertex.UV0 = readUV(pUV0Array, vertexIndex, textureIndex, 0);
				}
				if (pUV1Array != nullptr)
				{
					vertex.UV1 = readUV(pUV1Array, vertexIndex, textureIndex, 1);
				}
				
				
				if (pVertexNormalArray != nullptr)
				{
					vertex.Normal = readNormal(pVertexNormalArray, vertexIndex, meshVexIndex, fbxMat);
				}
				
				if (pTangentArray != nullptr)
				{
					vertex.Tangent = readTangent(pTangentArray, vertexIndex, meshVexIndex);
				}

				pMesh->ProcVertexBuffer.Add(vertex);
				//处理包围盒
				pMesh->SectionLocalBox += vertex.Position;
				meshVexIndex++;
			}
		}
	}
}

void FBXLoader::loadSkeleton(FbxNode* pNode)
{

}

void FBXLoader::loadCamera(FbxNode* pNode)
{

}

void FBXLoader::loadLight(FbxNode* pNode)
{

}

FVector FBXLoader::ConvertPos(FbxVector4 Vector)
{
	FVector Out;
	Out[0] = Vector[0];
	Out[1] = -Vector[1];
	Out[2] = Vector[2];
	return Out;
}

FVector FBXLoader::ConvertScale(FbxVector4 Vector)
{
	FVector Out;
	Out[0] = Vector[0];
	Out[1] = Vector[1];
	Out[2] = Vector[2];
	return Out;
}

FQuat FBXLoader::ConvertRotToQuat(FbxVector4 Vector)
{
	FbxAMatrix temp;
	temp.SetIdentity();
	temp.SetR(Vector);
	FbxQuaternion quat = temp.GetQ();
	FQuat UnrealQuat;
	UnrealQuat.X = quat[0];
	UnrealQuat.Y = -quat[1];
	UnrealQuat.Z = quat[2];
	UnrealQuat.W = -quat[3];
	return UnrealQuat;
}

FVector FBXLoader::readVertex(FbxVector4* meshVertexArray, int vertexIndex, FbxAMatrix globalMatrix)
{
	FbxVector4 vec4 = meshVertexArray[vertexIndex];
	FVector vertex = ConvertPos(vec4);
	return vertex;
}

FVector FBXLoader::readNormal(FbxLayerElementNormal* pVertexNormalArray, int vertexIndex, int meshVertexIndex, FbxAMatrix globalMatrix)
{
	FbxVector4 normal;
	switch (pVertexNormalArray->GetMappingMode())
	{
	case FbxLayerElement::eByControlPoint:
	{
		if (pVertexNormalArray->GetReferenceMode() == FbxLayerElement::eDirect)
		{
			normal = pVertexNormalArray->GetDirectArray().GetAt(vertexIndex);
		}
		else  if (pVertexNormalArray->GetReferenceMode() == FbxLayerElement::eIndexToDirect)
		{
			int index = pVertexNormalArray->GetIndexArray().GetAt(vertexIndex);
			normal = pVertexNormalArray->GetDirectArray().GetAt(index);
		}
	}
	break;
	case FbxLayerElement::eByPolygonVertex:
	{
		if (pVertexNormalArray->GetReferenceMode() == FbxLayerElement::eDirect)
		{
			normal = pVertexNormalArray->GetDirectArray().GetAt(meshVertexIndex);
		}
		else if(pVertexNormalArray->GetReferenceMode() == FbxLayerElement::eIndexToDirect)
		{
			int index = pVertexNormalArray->GetIndexArray().GetAt(meshVertexIndex);
			normal = pVertexNormalArray->GetDirectArray().GetAt(index);
		}
	}
	break;
	}
	FbxAMatrix globalNormalMatrix = globalMatrix.Inverse();
	globalNormalMatrix = globalNormalMatrix.Transpose();
	globalNormalMatrix.MultT(normal);
	FVector ueNormal = ConvertPos(normal);
	ueNormal = ueNormal.GetSafeNormal();
	return ueNormal;
}

FColor FBXLoader::readColor(FbxLayerElementVertexColor* pColorArray, int vertexIndex, int meshVertexIndex)
{
	FColor color;
	switch (pColorArray->GetMappingMode())
	{
	case FbxLayerElement::eByControlPoint:
	{
		if (pColorArray->GetReferenceMode() == FbxLayerElement::eDirect)
		{
			color.R = pColorArray->GetDirectArray().GetAt(vertexIndex)[0];
			color.G = pColorArray->GetDirectArray().GetAt(vertexIndex)[1];
			color.B = pColorArray->GetDirectArray().GetAt(vertexIndex)[2];
			color.A = pColorArray->GetDirectArray().GetAt(vertexIndex)[3];
		}
		else  if (pColorArray->GetReferenceMode() == FbxLayerElement::eIndexToDirect)
		{
			int index = pColorArray->GetIndexArray().GetAt(vertexIndex);
			color.R = pColorArray->GetDirectArray().GetAt(index)[0];
			color.G = pColorArray->GetDirectArray().GetAt(index)[1];
			color.B = pColorArray->GetDirectArray().GetAt(index)[2];
			color.A = pColorArray->GetDirectArray().GetAt(index)[3];
		}				
	}
	break;
	case FbxLayerElement::eByPolygonVertex:
	{
		if (pColorArray->GetReferenceMode() == FbxLayerElement::eDirect)
		{
			color.R = pColorArray->GetDirectArray().GetAt(meshVertexIndex)[0];
			color.G = pColorArray->GetDirectArray().GetAt(meshVertexIndex)[1];
			color.B = pColorArray->GetDirectArray().GetAt(meshVertexIndex)[2];
			color.A = pColorArray->GetDirectArray().GetAt(meshVertexIndex)[3];
		}
		else if (pColorArray->GetReferenceMode() == FbxLayerElement::eIndexToDirect)
		{
			int index = pColorArray->GetIndexArray().GetAt(meshVertexIndex);
			color.R = pColorArray->GetDirectArray().GetAt(index)[0];
			color.G = pColorArray->GetDirectArray().GetAt(index)[1];
			color.B = pColorArray->GetDirectArray().GetAt(index)[2];
			color.A = pColorArray->GetDirectArray().GetAt(index)[3];
		}
	}
	break;
	}
	return color;
}

FVector2D FBXLoader::readUV(FbxLayerElementUV* pUVArray, int vertexIndex, int meshTextureIndex, int layer)
{
	FVector2D uv;
	if (pUVArray->GetMappingMode() == FbxLayerElement::eByControlPoint)
	{
		if (pUVArray->GetReferenceMode() == FbxLayerElement::eDirect)
		{
			uv.X = pUVArray->GetDirectArray().GetAt(vertexIndex)[0];
			uv.Y = pUVArray->GetDirectArray().GetAt(vertexIndex)[1];
		}
		else  if (pUVArray->GetReferenceMode() == FbxLayerElement::eIndexToDirect)
		{
			int index = pUVArray->GetIndexArray().GetAt(vertexIndex);
			uv.X = pUVArray->GetDirectArray().GetAt(index)[0];
			uv.Y = pUVArray->GetDirectArray().GetAt(index)[1];
		}
	}
	else
	{
		uv.X = pUVArray->GetDirectArray().GetAt(meshTextureIndex)[0];
		uv.Y = pUVArray->GetDirectArray().GetAt(meshTextureIndex)[1];
	}
	return uv;
}

FProcMeshTangent FBXLoader::readTangent(FbxLayerElementTangent* pTangentArray, int vertexIndex, int meshVertexIndex)
{
	FProcMeshTangent tangent;
	switch (pTangentArray->GetMappingMode())
	{
	case FbxLayerElement::eByControlPoint:
	{
		if (pTangentArray->GetReferenceMode() == FbxLayerElement::eDirect)
		{
			tangent.TangentX.X = pTangentArray->GetDirectArray().GetAt(vertexIndex)[0];
			tangent.TangentX.Y = pTangentArray->GetDirectArray().GetAt(vertexIndex)[1];
			tangent.TangentX.Z = pTangentArray->GetDirectArray().GetAt(vertexIndex)[2];
		}
		else  if (pTangentArray->GetReferenceMode() == FbxLayerElement::eIndexToDirect)
		{
			int id = pTangentArray->GetIndexArray().GetAt(vertexIndex);
			tangent.TangentX.X = pTangentArray->GetDirectArray().GetAt(id)[0];
			tangent.TangentX.Y = pTangentArray->GetDirectArray().GetAt(id)[1];
			tangent.TangentX.Z = pTangentArray->GetDirectArray().GetAt(id)[2];
		}
	}
	break;
	case FbxLayerElement::eByPolygonVertex:
	{
		if (pTangentArray->GetReferenceMode() == FbxLayerElement::eDirect)
		{
			tangent.TangentX.X = pTangentArray->GetDirectArray().GetAt(meshVertexIndex)[0];
			tangent.TangentX.Y = pTangentArray->GetDirectArray().GetAt(meshVertexIndex)[1];
			tangent.TangentX.Z = pTangentArray->GetDirectArray().GetAt(meshVertexIndex)[2];
		}
		else if (pTangentArray->GetReferenceMode() == FbxLayerElement::eIndexToDirect)
		{
			int index = pTangentArray->GetIndexArray().GetAt(meshVertexIndex);
			tangent.TangentX.X = pTangentArray->GetDirectArray().GetAt(index)[0];
			tangent.TangentX.Y = pTangentArray->GetDirectArray().GetAt(index)[1];
			tangent.TangentX.Z = pTangentArray->GetDirectArray().GetAt(index)[2];
		}
	}
	break;
	}
	return tangent;
}

FTransform FBXLoader::readTransform(FbxNode* pNode)
{

	FVector RotOffset = ConvertPos(pNode->GetRotationOffset(FbxNode::EPivotSet::eSourcePivot));
	FVector ScaleOffset = ConvertPos(pNode->GetScalingOffset(FbxNode::EPivotSet::eSourcePivot));

	FbxVector4& LocalTrans = pNode->GetScene()->GetAnimationEvaluator()->GetNodeLocalTranslation(pNode);
	FbxVector4& LocalScale = pNode->GetScene()->GetAnimationEvaluator()->GetNodeLocalScaling(pNode);
	FbxVector4& LocalRot = pNode->GetScene()->GetAnimationEvaluator()->GetNodeLocalRotation(pNode);

	FbxAMatrix Temp = pNode->EvaluateLocalTransform();
	FVector4 Trans = ConvertPos(Temp.GetT());
	FVector4 Scale = ConvertScale(Temp.GetS());
	FQuat Rotation = ConvertRotToQuat(Temp.GetR());

	FVector RotEuler = Rotation.Euler();
	
	// Avoid singularity around 90 degree pitch, as UE4 doesn't seem to support it very well
	// See UE-75467 and UE-83049
	if (FMath::IsNearlyEqual(abs(RotEuler.Y), 90.0f))
	{
		Rotation.W += 1e-3;
		Rotation.Normalize();
	}

	// Converting exactly 180.0 degree quaternions into Euler is unreliable, so add some
	// small noise so that it produces the correct actor transform
	if (abs(RotEuler.X) == 180.0f ||
		abs(RotEuler.Y) == 180.0f ||
		abs(RotEuler.Z) == 180.0f)
	{
		Rotation.W += 1.e-7;
		Rotation.Normalize();
	}
	
	FbxVector4 geoTrans = pNode->GetGeometricTranslation(FbxNode::EPivotSet::eSourcePivot);
	FbxVector4 geoScale = pNode->GetGeometricScaling(FbxNode::EPivotSet::eSourcePivot);
	FbxVector4 geoRot = pNode->GetGeometricRotation(FbxNode::EPivotSet::eSourcePivot);

	FTransform FbxGeo;
	FbxGeo.SetTranslation(ConvertPos(geoTrans));
	FbxGeo.SetScale3D(ConvertScale(geoScale));
	FbxGeo.SetRotation(ConvertRotToQuat(geoRot));

	FTransform NewTransform;
	NewTransform.SetTranslation(Trans + RotOffset + ScaleOffset);
	NewTransform.SetScale3D(Scale);
	NewTransform.SetRotation(Rotation);
	return FbxGeo * NewTransform;
}

void FBXLoader::loadMaterial(FbxNode* pNode, UFBXMesh* pMesh)
{
	FbxMesh* fbxMesh = pNode->GetMesh();
	
	if (fbxMesh == nullptr)
		return;
	int matCount = pNode->GetMaterialCount();
	int elemCount = fbxMesh->GetElementMaterialCount();

	FString strMsg = FString::Printf(TEXT("节点：%s MaterialCount : %d  ElementMaterialCount : %d"),
		UTF8_TO_TCHAR(pNode->GetName()), matCount, elemCount);
	UE_LOG(LogTemp, Error, TEXT("%s"), *strMsg);

	FbxLayerElementMaterial* fbxLayerElementMat = fbxMesh->GetElementMaterial();
	if (fbxLayerElementMat != nullptr)
	{
		FString strBase = "/Game/Materials/FBXMaterial";
		FString strBrown = "/Engine/EditorMaterials/Cloth/CameraLitDoubleSided";
		FString strTexture = "/Engine/EngineDebugMaterials/BoneWeightMaterial";
		

		FbxLayerElementArrayTemplate<int> matIndex = fbxLayerElementMat->GetIndexArray();
		int elemIndexCount = matIndex.GetCount();

		for (int i = 0; i < elemCount; i++)
		{
			FbxSurfaceMaterial* pSurfaceMaterial = nullptr;
			if (fbxLayerElementMat->GetMappingMode() == FbxLayerElement::eByPolygon)
			{
				pSurfaceMaterial = pNode->GetMaterial(0);
			}
			else if (fbxLayerElementMat->GetMappingMode() == FbxLayerElement::eAllSame)
			{
				int index = fbxLayerElementMat->GetIndexArray()[0];
				pSurfaceMaterial = pNode->GetMaterial(index);
			}

			if (pSurfaceMaterial == nullptr)
			{
				//UE_LOG(LogTemp, Error, TEXT("材质为空"));
				continue;
			}

			FString strMatName = UTF8_TO_TCHAR(pSurfaceMaterial->GetName());
			UMaterialInterface* baseMat = Cast<UMaterialInterface>(StaticLoadObject(UMaterialInterface::StaticClass(), nullptr, *strBase));
			UMaterialInstanceDynamic* dynamicMaterial = UMaterialInstanceDynamic::Create(baseMat, nullptr, FName(strMatName));
			pMesh->DynamicMaterial = dynamicMaterial;
			
			fetchFbxProperty(TEXT("EmissiveColor"), pSurfaceMaterial, dynamicMaterial);
			fetchFbxProperty(TEXT("EmissiveFactor"), pSurfaceMaterial, dynamicMaterial);
			fetchFbxProperty(TEXT("AmbientColor"), pSurfaceMaterial, dynamicMaterial);
			fetchFbxProperty(TEXT("AmbientFactor"), pSurfaceMaterial, dynamicMaterial);
			fetchFbxProperty(TEXT("DiffuseColor"), pSurfaceMaterial, dynamicMaterial);
			fetchFbxProperty(TEXT("DiffuseFactor"), pSurfaceMaterial, dynamicMaterial);
			fetchFbxProperty(TEXT("BumpFactor"), pSurfaceMaterial, dynamicMaterial);
			fetchFbxProperty(TEXT("TransparentColor"), pSurfaceMaterial, dynamicMaterial);
			fetchFbxProperty(TEXT("TransparencyFactor"), pSurfaceMaterial, dynamicMaterial);
			fetchFbxProperty(TEXT("DisplacementColor"), pSurfaceMaterial, dynamicMaterial);
			fetchFbxProperty(TEXT("DisplacementFactor"), pSurfaceMaterial, dynamicMaterial);
			fetchFbxProperty(TEXT("VectorDisplacementColor"), pSurfaceMaterial, dynamicMaterial);
			fetchFbxProperty(TEXT("VectorDisplacementFactor"), pSurfaceMaterial, dynamicMaterial);
			fetchFbxProperty(TEXT("SpecularColor"), pSurfaceMaterial, dynamicMaterial);
			fetchFbxProperty(TEXT("SpecularFactor"), pSurfaceMaterial, dynamicMaterial);
			fetchFbxProperty(TEXT("ReflectionColor"), pSurfaceMaterial, dynamicMaterial);
			fetchFbxProperty(TEXT("ReflectionFactor"), pSurfaceMaterial, dynamicMaterial);
			fetchFbxProperty(TEXT("Shininess"), pSurfaceMaterial, dynamicMaterial);
			fetchFbxProperty(TEXT("ShininessExponent"), pSurfaceMaterial, dynamicMaterial);
			fetchFbxProperty(TEXT("Opacity"), pSurfaceMaterial, dynamicMaterial);
			fetchFbxProperty(TEXT("Reflectivity"), pSurfaceMaterial, dynamicMaterial);

			
			fetchFbxTexture(TEXT("Bump"), pSurfaceMaterial, dynamicMaterial);
			fetchFbxTexture(TEXT("NormalMap"), pSurfaceMaterial, dynamicMaterial);
			fetchFbxTexture(TEXT("DiffuseColor"), pSurfaceMaterial, dynamicMaterial);
			fetchFbxTexture(TEXT("SpecularColor"), pSurfaceMaterial, dynamicMaterial);
			fetchFbxTexture(TEXT("ReflectionColor"), pSurfaceMaterial, dynamicMaterial);
			fetchFbxTexture(TEXT("TransparentColor"), pSurfaceMaterial, dynamicMaterial);
			fetchFbxTexture(TEXT("EmissiveColor"), pSurfaceMaterial, dynamicMaterial);
			fetchFbxTexture(TEXT("Shininess"), pSurfaceMaterial, dynamicMaterial);
			
			readShader(pSurfaceMaterial, dynamicMaterial);

		}
	}
	
}

UTexture2D* FBXLoader::readTexture(const char* texTypeName, FbxSurfaceMaterial* pSurfaceMaterial)
{
	int TextureID = 0;
	UTexture2D* ueTexture = nullptr;
	FbxProperty pProperty = pSurfaceMaterial->FindProperty(texTypeName);
	int textureCount = pProperty.GetSrcObjectCount<FbxTexture>();
	if (textureCount > 1)
	{
		int aaa = 1;
	}
	if (pProperty.IsValid())
	{
		FbxFileTexture* fileTexture = pProperty.GetSrcObject<FbxFileTexture>();
		if (fileTexture != nullptr)
		{
			FString AbsoluteFilename = UTF8_TO_TCHAR(fileTexture->GetFileName());
			FString strTexturePath;
			if (IFileManager::Get().FileExists(*AbsoluteFilename))
			{
				strTexturePath = AbsoluteFilename;
			}
			else if (IFileManager::Get().FileExists(*(m_strDIr / UTF8_TO_TCHAR(fileTexture->GetRelativeFileName()))))
			{
				strTexturePath = m_strDIr / UTF8_TO_TCHAR(fileTexture->GetRelativeFileName());
			}
			else if (IFileManager::Get().FileExists(*(m_strDIr / AbsoluteFilename)))
			{
				strTexturePath = m_strDIr / AbsoluteFilename;
			}
			ueTexture = loadImage(strTexturePath);
		}
	}
	return ueTexture;
}

void FBXLoader::readShader(FbxSurfaceMaterial* pSurfaceMaterial, UMaterialInstanceDynamic* dynamicMat)
{
	
}

UTexture2D* FBXLoader::loadImage(FString strPath)
{
	UTexture2D* texture = nullptr;
	FString Extension = FPaths::GetExtension(strPath);
	EImageFormat ImageFormat = EImageFormat::Invalid;
	IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
	if (strPath.EndsWith(".png"))
	{
		ImageFormat = EImageFormat::PNG;
	}
	else if (strPath.EndsWith(".jpg") || strPath.EndsWith(".jpeg"))
	{
		ImageFormat = EImageFormat::JPEG;
	}
	else if (strPath.EndsWith(".bmp"))
	{
		ImageFormat = EImageFormat::BMP;
	}
	else if (strPath.EndsWith(".ico"))
	{
		ImageFormat = EImageFormat::ICO;

	}
	else if (strPath.EndsWith("exr"))
	{
		ImageFormat = EImageFormat::EXR;
	}
	else if (strPath.EndsWith(".icns"))
	{
		ImageFormat = EImageFormat::ICNS;
	}
	TArray<uint8> RawFileData;
	if (!FFileHelper::LoadFileToArray(RawFileData, *strPath))
	{
		return false;
	}

	TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(ImageFormat);
	if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(RawFileData.GetData(), RawFileData.Num()))
	{
		TArray<uint8> UncompressedBGRA;
		if (ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, UncompressedBGRA))
		{
			texture = UTexture2D::CreateTransient(ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), PF_B8G8R8A8);
			void* TextureData = texture->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
			FMemory::Memcpy(TextureData, UncompressedBGRA.GetData(), UncompressedBGRA.Num());
			texture->PlatformData->Mips[0].BulkData.Unlock();

			texture->UpdateResource();
		}
	}

	return texture;
}

void FBXLoader::fetchFbxProperty(FString propertyName, FbxSurfaceMaterial* pSurfaceMaterial, UMaterialInstanceDynamic* dynamicMat)
{
	FbxProperty Prop = pSurfaceMaterial->FindProperty(TCHAR_TO_UTF8(*propertyName));
	switch (Prop.GetPropertyDataType().GetType())
	{
	case eFbxFloat:
	{
		float Value = Prop.Get<FbxFloat>();
		dynamicMat->SetScalarParameterValue(FName(propertyName), Value);
		break;
	}
	case eFbxDouble:
	{
		float Value = Prop.Get<FbxFloat>();
		Value = Prop.Get<FbxDouble>();
		dynamicMat->SetScalarParameterValue(FName(propertyName), Value);
		break;
	}
	case eFbxDouble3:
	{
		FLinearColor Value;
		FbxVector4 v = Prop.Get<FbxVector4>();
		Value.R = v.mData[0];
		Value.G = v.mData[1];
		Value.B = v.mData[2];
		Value.A = 0.0f;
		dynamicMat->SetVectorParameterValue(FName(propertyName), Value);
		break;
	}
	case eFbxDouble4:
	{
		FLinearColor Value;
		FbxVector4 v = Prop.Get<FbxVector4>();
		Value.R = v.mData[0];
		Value.G = v.mData[1];
		Value.B = v.mData[2];
		Value.A = v.mData[3];
		dynamicMat->SetVectorParameterValue(FName(propertyName), Value);
		break;
	}
	default:
		return;
	}
}

void FBXLoader::fetchFbxTexture(FString textureName, FbxSurfaceMaterial* pSurfaceMaterial, UMaterialInstanceDynamic* dynamicMat)
{
	FbxProperty Prop = pSurfaceMaterial->FindProperty(TCHAR_TO_UTF8(*textureName));
	if (Prop.GetSrcObjectCount<FbxTexture>() > 0)
	{
		FbxFileTexture* FbxTex = FbxCast<FbxFileTexture>(Prop.GetSrcObject<FbxFileTexture>(0));
		FString Path = UTF8_TO_TCHAR(FbxTex->GetName());
		if (Path.IsEmpty())
		{
			return;
		}

		Path = FPaths::GetCleanFilename(Path);
		//Path = FPaths::Combine(TextureDir, Path);
		Path = UTF8_TO_TCHAR(FbxTex->GetFileName());
		if (!FPaths::FileExists(Path))
		{
			return;
		}

		FString TextureName = textureName;
		TextureName.RemoveFromEnd(TEXT("Color"));	// DiffuseColor -> Diffuse
		TextureName.RemoveFromEnd(TEXT("Map"));	    // NormalMap -> Normal
		TextureName = TextureName + TEXT("Texture");	// Diffuse -> DiffuseTexture

		UTexture2D* texture = loadImage(Path);
		dynamicMat->SetTextureParameterValue(FName(TextureName), texture);
		/*
		FbxDouble3 v = FbxTex->Translation.Get();
		Tex.Translation.X = v[0];
		Tex.Translation.Y = v[1];
		Tex.Translation.Z = v[2];

		v = FbxTex->Rotation.Get();
		Tex.Rotation.X = v[0] * 1.f / 360.f;
		Tex.Rotation.Y = v[1] * 1.f / 360.f;
		Tex.Rotation.Z = v[2] * 1.f / 360.f;

		v = FbxTex->Scaling.Get();
		Tex.Scale.X = v[0];
		Tex.Scale.Y = v[1];
		Tex.Scale.Z = v[2];
		*/
	}
}

