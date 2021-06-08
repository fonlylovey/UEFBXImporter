// Copyright 2018-2019, Athian Games. All Rights Reserved. 

#include "FBXMeshImport.h"


FbxLayerElementNormal* LayerElementNormal;
FbxLayerElementTangent* LayerElementTangent;
FbxLayerElementBinormal* LayerElementBinormal;

FbxLayerElement::EReferenceMode NormalReferenceMode(FbxLayerElement::eDirect);
FbxLayerElement::EMappingMode NormalMappingMode(FbxLayerElement::eByControlPoint);

FbxLayerElementVertexColor* LayerElementVertexColor;;
FbxLayerElement::EReferenceMode VertexColorReferenceMode(FbxLayerElement::eDirect);
FbxLayerElement::EMappingMode VertexColorMappingMode(FbxLayerElement::eByControlPoint);

FbxLayerElement::EReferenceMode TangentReferenceMode(FbxLayerElement::eDirect);
FbxLayerElement::EMappingMode TangentMappingMode(FbxLayerElement::eByControlPoint);

FString FileBasePath1;

void UFBXMeshImport::ConvertScene()
{
	if (Scene)
	{

		FbxAxisSystem FileAxisSystem = Scene->GetGlobalSettings().GetAxisSystem();
		FbxSystemUnit FileUnitSystem = Scene->GetGlobalSettings().GetSystemUnit();

			FbxAxisSystem::ECoordSystem CoordSystem = FbxAxisSystem::eRightHanded;
			FbxAxisSystem::EUpVector UpVector = FbxAxisSystem::eZAxis;
			FbxAxisSystem::EFrontVector FrontVector = (FbxAxisSystem::EFrontVector) - FbxAxisSystem::eParityOdd;

			FbxAxisSystem UnrealImportAxis(UpVector, FrontVector, CoordSystem);

			FbxAxisSystem SourceSetup = Scene->GetGlobalSettings().GetAxisSystem();

			if (SourceSetup != UnrealImportAxis)
			{
				FbxRootNodeUtility::RemoveAllFbxRoots(Scene);
				UnrealImportAxis.ConvertScene(Scene);
				FbxAMatrix JointOrientationMatrix;
				JointOrientationMatrix.SetIdentity();
			}
		Scene->GetAnimationEvaluator()->Reset();
	}
}

void UFBXMeshImport::InitializeFBXMesh(FString fileName, int32 ImportID)
{
	if (GEngine->GameViewport)
	{
		UWorld* World = GEngine->GameViewport->GetWorld();
		if (World)
		{
			PlayerController = UGameplayStatics::GetPlayerController(World, 0);

		}
	}

	Joints.Empty();

	if (!RequestDestroy)
	{
		IsTaskActive = true;

		outMeshArray.Empty();
		ProcMeshSections.Empty();

		lSdkManager = FbxManager::GetDefaultManager();

		if (!lSdkManager)
		{
			lSdkManager = FbxManager::Create();

		}

		std::string iossettingsname(TCHAR_TO_UTF8(*("IOSROOT" + FString::FromInt(ImportID))));
		char* iosname = _strdup(iossettingsname.c_str());

		FbxIOSettings *ios = FbxIOSettings::Create(lSdkManager, iosname);
		lSdkManager->SetIOSettings(ios);

		std::string importername(TCHAR_TO_UTF8(*("Importer" + FString::FromInt(ImportID))));
		char* iname = _strdup(importername.c_str());

		FbxImporter* lImporter = FbxImporter::Create(lSdkManager, iname);

		std::string lFilenamestring(TCHAR_TO_UTF8(*fileName));
		const char* lFilename = lFilenamestring.c_str();

	
		lImportStatus = lImporter->Initialize(lFilename, - 1, ios);

		FDateTime CurrentDateAndTime1 = FDateTime::UtcNow();

		if (lImportStatus)
		{
			std::string fname(TCHAR_TO_UTF8(*("MyScene" + FString::FromInt(ImportID))));
			char* fn = _strdup(fname.c_str());


			Scene = FbxScene::Create(lSdkManager, fn);
			lImporter->Import(Scene);

		
			lImporter->Destroy();
			ios->Destroy();

			int nbMetaData = Scene->GetSrcObjectCount<FbxObjectMetaData>();
			
			for (int i = 0; i < nbMetaData; i++)
			{
				FbxObjectMetaData* metaData = Scene->GetSrcObject<FbxObjectMetaData>(i);
			}

			ConvertScene();

			FbxNode* lRootNode = Scene->GetRootNode();
			int count = Scene->GetNodeCount();
			

			if (lRootNode)
			{
				
				FbxAMatrix lParentGX;
				lParentGX.SetIdentity();
				FillFbxMeshArray(lRootNode, 0 , -1);
				lRootNode->ConvertPivotAnimationRecursive(NULL, FbxNode::EPivotSet::eDestinationPivot, 30);
				CalculateGlobalTransformRecursive(lRootNode, lParentGX);


			}
		}


		IsTaskActive = false;

	}

}

UFBXMeshImport::UFBXMeshImport()
{
	IsTaskActive = false;
	RequestDestroy = false;
}


UFBXMeshImport::~UFBXMeshImport()
{
	if (IsTaskActive)
	{
		RequestDestroy = true;
	}
}


FVector ConvertPos(FbxVector4 Vector)
{
	FVector Out;
	Out[0] = Vector[0];
	Out[1] = -Vector[1];
	Out[2] = Vector[2];
	return Out;
}


TArray<FVector> GetNormals(FbxMesh* lMesh)
{
	TArray<FVector> Normals;
	if (lMesh)
	{
		FbxGeometryElementNormal* lNormalElement = lMesh->GetElementNormal();
		if (lNormalElement)
		{
			if (lNormalElement->GetMappingMode() == FbxGeometryElement::eByControlPoint)
			{
				for (int lVertexIndex = 0; lVertexIndex < lMesh->GetControlPointsCount(); lVertexIndex++)
				{
					int lNormalIndex = 0;
					if (lNormalElement->GetReferenceMode() == FbxGeometryElement::eDirect)
						lNormalIndex = lVertexIndex;
					if (lNormalElement->GetReferenceMode() == FbxGeometryElement::eIndexToDirect)
						lNormalIndex = lNormalElement->GetIndexArray().GetAt(lVertexIndex);
					FbxVector4 lNormal = lNormalElement->GetDirectArray().GetAt(lNormalIndex);

					FVector Normal;
					Normal.X = (float)lNormal.mData[0];
					Normal.Y = (float)lNormal.mData[1];
					Normal.Z = (float)lNormal.mData[2];

					Normals.Add(Normal);

				}
			}
			else if (lNormalElement->GetMappingMode() == FbxGeometryElement::eByPolygonVertex)
			{
				int lIndexByPolygonVertex = 0;
				for (int lPolygonIndex = 0; lPolygonIndex < lMesh->GetPolygonCount(); lPolygonIndex++)
				{
					int lPolygonSize = lMesh->GetPolygonSize(lPolygonIndex);
					for (int i = 0; i < lPolygonSize; i++)
					{
						int lNormalIndex = 0;
						if (lNormalElement->GetReferenceMode() == FbxGeometryElement::eDirect)
							lNormalIndex = lIndexByPolygonVertex;
						if (lNormalElement->GetReferenceMode() == FbxGeometryElement::eIndexToDirect)
							lNormalIndex = lNormalElement->GetIndexArray().GetAt(lIndexByPolygonVertex);
						FbxVector4 lNormal = lNormalElement->GetDirectArray().GetAt(lNormalIndex);
						lIndexByPolygonVertex++;

						FVector Normal;
						Normal.X = (float)lNormal.mData[0];
						Normal.Y = (float)lNormal.mData[1];
						Normal.Z = (float)lNormal.mData[2];

						Normals.Add(Normal);

					}
				}
			}
		}
	}

	return Normals;
}

FbxVector4* GetTangents(FbxMesh* lMesh)
{
	FbxVector4* Tangents = new FbxVector4[1];

	if (lMesh)
	{
		FbxGeometryElementTangent* lTangentElement = lMesh->GetElementTangent();
		if (lTangentElement)
		{
			if (lTangentElement->GetMappingMode() == FbxGeometryElement::eByControlPoint)
			{
				int numControlPoints = lMesh->GetControlPointsCount();
				Tangents = new FbxVector4[numControlPoints];
				for (int lVertexIndex = 0; lVertexIndex < numControlPoints; lVertexIndex++)
				{
					int lTangentIndex = 0;
					if (lTangentElement->GetReferenceMode() == FbxGeometryElement::eDirect)
						lTangentIndex = lVertexIndex;
					if (lTangentElement->GetReferenceMode() == FbxGeometryElement::eIndexToDirect)
						lTangentIndex = lTangentElement->GetIndexArray().GetAt(lVertexIndex);
					FbxVector4 lTangent = lTangentElement->GetDirectArray().GetAt(lTangentIndex);

					Tangents[lVertexIndex] = lTangent;
				}
			}
			else if (lTangentElement->GetMappingMode() == FbxGeometryElement::eByPolygonVertex)
			{
				int lIndexByPolygonVertex = 0;
				int numPolygons = lMesh->GetPolygonCount();
				Tangents = new FbxVector4[numPolygons];
				for (int lPolygonIndex = 0; lPolygonIndex < numPolygons; lPolygonIndex++)
				{
					int lPolygonSize = lMesh->GetPolygonSize(lPolygonIndex);
					for (int i = 0; i < lPolygonSize; i++)
					{
						int lTangentIndex = 0;
						if (lTangentElement->GetReferenceMode() == FbxGeometryElement::eDirect)
							lTangentIndex = lIndexByPolygonVertex;
						if (lTangentElement->GetReferenceMode() == FbxGeometryElement::eIndexToDirect)
							lTangentIndex = lTangentElement->GetIndexArray().GetAt(lIndexByPolygonVertex);
						FbxVector4 lTangent = lTangentElement->GetDirectArray().GetAt(lTangentIndex);
						lIndexByPolygonVertex++;

						Tangents[lPolygonIndex] = lTangent;

					}
				}
			}
		}
	}

	return Tangents;

}

FVector ConvertDir(FbxVector4 Vector)
{
	FVector Out;
	Out[0] = Vector[0];
	Out[1] = -Vector[1];
	Out[2] = Vector[2];
	return Out;
}

bool IsOddNegativeScale(FbxAMatrix& totalMatrix)
{
	FbxVector4 Scale = totalMatrix.GetS();
	int32 NegativeNum = 0;

	if (Scale[0] < 0) NegativeNum++;
	if (Scale[1] < 0) NegativeNum++;
	if (Scale[2] < 0) NegativeNum++;

	return NegativeNum == 1 || NegativeNum == 3;
}

FbxAMatrix  UFBXMeshImport::GetGeometryTransformation(FbxNode* pNode)
{
	if (!pNode)
	{
		throw std::exception("Null for mesh geometry");
	}

	const FbxVector4 lT = pNode->GetGeometricTranslation(FbxNode::eSourcePivot);
	const FbxVector4 lR = pNode->GetGeometricRotation(FbxNode::eSourcePivot);
	const FbxVector4 lS = pNode->GetGeometricScaling(FbxNode::eSourcePivot);

	return FbxAMatrix(lT, lR, lS);
}

FbxAMatrix UFBXMeshImport::CalculateGlobalTransform(FbxNode* pNode, FbxAMatrix lParentGX)
{
	FbxAMatrix lTranlationM, lScalingM, lScalingPivotM, lScalingOffsetM, lRotationOffsetM, lRotationPivotM, \
		lPreRotationM, lRotationM, lPostRotationM, lTransform;
	FbxAMatrix lGlobalT, lGlobalRS;
	
	if (!pNode)
	{
		lTransform.SetIdentity();
		return lTransform;
	}
	
	// Construct translation matrix
	FbxVector4 lTranslation = pNode->LclTranslation.Get();
	lTranlationM.SetT(lTranslation);

	// Construct rotation matrices
	FbxVector4 lRotation = pNode->LclRotation.Get();
	lRotationM.SetR(lRotation);

	FbxVector4 lPreRotation = pNode->PreRotation.Get();
	lPreRotationM.SetR(lPreRotation);

	FbxVector4 lPostRotation = pNode->PostRotation.Get();
	lPostRotationM.SetR(lPostRotation);

	// Construct scaling matrix
	FbxVector4 lScaling = pNode->LclScaling.Get();
	lScalingM.SetS(lScaling);


	// Construct offset and pivot matrices
	FbxVector4 lScalingOffset = pNode->ScalingOffset.Get();
	lScalingOffsetM.SetT(lScalingOffset);

	FbxVector4 lScalingPivot = pNode->ScalingPivot.Get();
	lScalingPivotM.SetT(lScalingPivot);

	FbxVector4 lRotationOffset = pNode->RotationOffset.Get();
	lRotationOffsetM.SetT(lRotationOffset);

	FbxVector4 lRotationPivot = pNode->RotationPivot.Get();
	lRotationPivotM.SetT(lRotationPivot);

	//// Calculate the global transform matrix of the parent node
	FbxNode* lParentNode = pNode->GetParent();

	//if (lParentNode)
	//{
	//	FbxAMatrix pgx;
	//	lParentGX = CalculateGlobalTransform(lParentNode, pgx);
	//}
	//else
	//{
	//	lParentGX.SetIdentity();
	//}

	//Construct Global Rotation
	FbxAMatrix lLRM, lParentGRM;
	FbxVector4 lParentGR = lParentGX.GetR();
	lParentGRM.SetR(lParentGR);
	lLRM = lPreRotationM * lRotationM * lPostRotationM;

	FbxAMatrix lLSM, lParentGSM, lParentGRSM, lParentTM;
	FbxVector4 lParentGT = lParentGX.GetT();
	lParentTM.SetT(lParentGT);
	lParentGRSM = lParentTM.Inverse() * lParentGX;
	lParentGSM = lParentGRM.Inverse() * lParentGRSM;
	lLSM = lScalingM;
    
	FbxTransform::EInheritType lInheritType = pNode->InheritType.Get();
	if (lInheritType == FbxTransform::eInheritRrSs)
	{
		lGlobalRS = lParentGRM * lLRM * lParentGSM * lLSM;
	}
	else if (lInheritType == FbxTransform::eInheritRSrs)
	{
		lGlobalRS = lParentGRM * lParentGSM * lLRM * lLSM;
	}
	else if (lInheritType == FbxTransform::eInheritRrs)
	{
		FbxAMatrix lParentLSM;

		if (lParentNode && lParentNode->LclScaling.IsValid())
		{
			FbxVector4 lParentLS = lParentNode->LclScaling.Get();
			lParentLSM.SetS(lParentLS);

		}

		FbxAMatrix lParentGSM_noLocal = lParentGSM * lParentLSM.Inverse();
		lGlobalRS = lParentGRM * lLRM * lParentGSM_noLocal * lLSM;
	}
	else
	{
		FBXSDK_printf("error, unknown inherit type! \n");
	}

	lTransform = lTranlationM * lRotationOffsetM * lRotationPivotM * lPreRotationM * lRotationM * lPostRotationM * lRotationPivotM.Inverse()\
		* lScalingOffsetM * lScalingPivotM * lScalingM * lScalingPivotM.Inverse();
	FbxVector4 lLocalTWithAllPivotAndOffsetInfo = lTransform.GetT();

	FbxVector4 lGlobalTranslation = lParentGX.MultT(lLocalTWithAllPivotAndOffsetInfo);
	lGlobalT.SetT(lGlobalTranslation);

	lTransform = lGlobalT * lGlobalRS;

	return lTransform;
}


UTexture2D* UFBXMeshImport::LinkMaterialProperty(FbxSurfaceMaterial& FbxMaterial, const char* MaterialProperty, FName ParameterValue,bool bSetupAsNormalMap)
{
	bool bCreated = false;

	UTexture2D* FBXTexture = NULL;

	FbxProperty FbxProperty = FbxMaterial.FindProperty(MaterialProperty);
	if (FbxProperty.IsValid())
	{
		int32 LayeredTextureCount = FbxProperty.GetSrcObjectCount<FbxLayeredTexture>();
		int32 TextureCount = FbxProperty.GetSrcObjectCount<FbxTexture>();
		if (TextureCount > 0)
		{
			for (int32 TextureIndex = 0; TextureIndex < TextureCount; ++TextureIndex)
			{
				FbxFileTexture* FbxTexture = FbxProperty.GetSrcObject<FbxFileTexture>(TextureIndex);

				if (FbxTexture)
				{
					FString AbsoluteFilename = UTF8_TO_TCHAR(FbxTexture->GetFileName());

					FString FinalFilePath;
					if (IFileManager::Get().FileExists(*AbsoluteFilename))
					{
						FinalFilePath = AbsoluteFilename;
					}
					else if (IFileManager::Get().FileExists(*(FileBasePath1 / UTF8_TO_TCHAR(FbxTexture->GetRelativeFileName()))))
					{
						FinalFilePath = FileBasePath1 / UTF8_TO_TCHAR(FbxTexture->GetRelativeFileName());
					}
					else if (IFileManager::Get().FileExists(*(FileBasePath1 / AbsoluteFilename)))
					{
						FinalFilePath = FileBasePath1 / AbsoluteFilename;
					}

					float width, height;
					URuntimeFBXImportBPLibrary::LoadTexturefromPath(FinalFilePath, FBXTexture, width, height);
				}
				
			}
		}
	}

	return FBXTexture;
}

FMaterialDynamicStructure UFBXMeshImport::CreateDynamicMaterialStructure(int32 MaterialID, FbxSurfaceMaterial& FbxMaterial)
{


		 FMaterialDynamicStructure NewDynamicMatStructure;

		 if (!RequestDestroy)
		 {
			 //NewDynamicMatStructure.DiffuseTexture = LinkMaterialProperty(FbxMaterial, FbxSurfaceMaterial::sDiffuse, "BaseTexture", false);
			// NewDynamicMatStructure.EmissiveTexture = LinkMaterialProperty(FbxMaterial, FbxSurfaceMaterial::sEmissive, "EmissiveTexture", false);
			 //NewDynamicMatStructure.SpecularTexture = LinkMaterialProperty(FbxMaterial, FbxSurfaceMaterial::sSpecular, "SpecularTexture", false);
			// NewDynamicMatStructure.NormalTexture = LinkMaterialProperty(FbxMaterial, FbxSurfaceMaterial::sNormalMap, "NormalTexture", true);
			 //NewDynamicMatStructure.OpacityTexture = LinkMaterialProperty(FbxMaterial, FbxSurfaceMaterial::sTransparentColor, "OpacityTexture", true);
			 
		 }

		 NewDynamicMatStructure.MaterialName =  FbxMaterial.GetName();

		 if (!NewDynamicMatStructure.NormalTexture)
		 {
			 NewDynamicMatStructure.NormalTexture = LinkMaterialProperty(FbxMaterial, FbxSurfaceMaterial::sBump, "NormalTexture", true);
		 }
		 
			 FbxDouble3 DiffuseColor;
			 bool DiffuseOverrideColor = false;

			 if (FbxMaterial.GetClassId().Is(FbxSurfacePhong::ClassId))
			 {
				 DiffuseColor = ((FbxSurfacePhong&)(FbxMaterial)).Diffuse.Get();
				 DiffuseOverrideColor = true;
			 }
			 else if (FbxMaterial.GetClassId().Is(FbxSurfaceLambert::ClassId))
			 {
				 DiffuseColor = ((FbxSurfaceLambert&)(FbxMaterial)).Diffuse.Get();
				 DiffuseOverrideColor = true;
			 }
			 if (DiffuseOverrideColor)
			 {
				 FLinearColor LinearColor((float)DiffuseColor[0], (float)DiffuseColor[1], (float)DiffuseColor[2]);
				 NewDynamicMatStructure.DiffuseColor = LinearColor;
			 }
			 else
			 {
				 NewDynamicMatStructure.DiffuseColor = FLinearColor(1,1,1,1);
			 }
			 /*
			 FbxDouble3 EmissiveColor;
			 bool EmissiveOverrideColor = false;

			 if (FbxMaterial.GetClassId().Is(FbxSurfacePhong::ClassId))
			 {
				 EmissiveColor = ((FbxSurfacePhong&)(FbxMaterial)).Emissive.Get();
				 EmissiveOverrideColor = true;
			 }
			 else if (FbxMaterial.GetClassId().Is(FbxSurfaceLambert::ClassId))
			 {
				 EmissiveColor = ((FbxSurfaceLambert&)(FbxMaterial)).Emissive.Get();
				 EmissiveOverrideColor = true;
			 }
			 if (EmissiveOverrideColor)
			 {

				 FLinearColor LinearColor((float)EmissiveColor[0], (float)EmissiveColor[1], (float)EmissiveColor[2]);
				 NewDynamicMatStructure.EmissiveColor = LinearColor;

			 }
			 else
			 {
				 NewDynamicMatStructure.EmissiveColor = FLinearColor(1, 1, 1, 1);
			 }*/
			 

	return NewDynamicMatStructure;

}

TMap<int32, FMaterialDynamicStructure> UFBXMeshImport::CreateNodeMaterials(FbxMesh* MeshNode)
{
	FbxNode* Node = MeshNode->GetNode();
	int32 MaterialCount = Node->GetMaterialCount();
	int32 elematerialcount = MeshNode->GetElementMaterialCount();
	TArray<FbxSurfaceMaterial*> UsedSurfaceMaterials;
	TSet<int32> UsedMaterialIndexes;

	TMap<int32, FMaterialDynamicStructure> FBXDynamicMaterialMap;

	if (MeshNode)
	{

		for (int32 ElementMaterialIndex = 0; ElementMaterialIndex < MeshNode->GetElementMaterialCount(); ++ElementMaterialIndex)
		{
			FbxLayerElementMaterial *ElementMaterial = MeshNode->GetLayer(0)->GetMaterials();

			int trianglecount = ElementMaterial->GetIndexArray().GetCount();
			switch (ElementMaterial->GetMappingMode())
			{
			case FbxLayerElement::eAllSame:
			{
				if (ElementMaterial->GetIndexArray().GetCount() > 0)
				{
					UsedMaterialIndexes.Add(ElementMaterial->GetIndexArray()[0]);
				}
			}
			break;
			case FbxLayerElement::eByPolygon:
			{
				for (int32 MaterialIndex = 0; MaterialIndex < trianglecount; MaterialIndex++)
				{
					UsedMaterialIndexes.Add(ElementMaterial->GetIndexArray()[MaterialIndex]);
				}
			}
			break;
			}
		}
	}


	for (int32 MaterialIndex = 0; MaterialIndex < MaterialCount; ++MaterialIndex)
	{
		if (MeshNode == nullptr || UsedMaterialIndexes.Contains(MaterialIndex))
		{
			FbxSurfaceMaterial *FbxMaterial = Node->GetMaterial(MaterialIndex);

			if (FbxMaterial)
			{
				
				FMaterialDynamicStructure DynamicMaterialStructure = CreateDynamicMaterialStructure(MaterialIndex, *FbxMaterial);
				FBXDynamicMaterialMap.Add(MaterialIndex, DynamicMaterialStructure);
			}
		}

		
	}

	return FBXDynamicMaterialMap;
}

void UFBXMeshImport::CalculateGlobalTransformRecursive(FbxNode* pNode, FbxAMatrix lParentGX)
{
	FbxAMatrix currentgs = CalculateGlobalTransform(pNode, lParentGX);

	if (pNode->GetMesh())
	{
		if (pNode->GetMesh()->GetPolygonVertexCount() > 0)
		{
			GSMatrixMap.Add(pNode, currentgs);

		}
	}

	for (int32 ChildIndex = 0; ChildIndex < pNode->GetChildCount(); ChildIndex++)
	{
		CalculateGlobalTransformRecursive(pNode->GetChild(ChildIndex), currentgs);
	}
}

void UFBXMeshImport::FillFbxMeshArray(FbxNode* pNode, int32 Index, int32 ParentIndex)
{
	if (pNode->GetNodeAttribute() && pNode->GetNodeAttribute()->GetAttributeType() && pNode->GetNodeAttribute()->GetAttributeType() == FbxNodeAttribute::eSkeleton)
	{
		FJoint currJoint;
		currJoint.Index = Index;
		currJoint.ParentIndex = ParentIndex;
		Joints.Add(pNode->GetName(), currJoint);

	}


	if (pNode->GetMesh())
	{
		
		if (pNode->GetMesh()->GetPolygonVertexCount() > 0)
		{
			FbxVector4 lZero(0, 0, 0);
			/*
			pNode->SetPivotState(FbxNode::eSourcePivot, FbxNode::ePivotActive);
			pNode->SetPivotState(FbxNode::eDestinationPivot, FbxNode::ePivotActive);

			pNode->SetPostRotation(FbxNode::eDestinationPivot, lZero);
			pNode->SetPreRotation(FbxNode::eDestinationPivot, lZero);
			pNode->SetRotationOffset(FbxNode::eDestinationPivot, lZero);
			pNode->SetScalingOffset(FbxNode::eDestinationPivot, lZero);
			pNode->SetRotationPivot(FbxNode::eDestinationPivot, lZero);
			pNode->SetScalingPivot(FbxNode::eDestinationPivot, lZero);

			FbxEuler::EOrder lRotationOrder;
			pNode->GetRotationOrder(FbxNode::eSourcePivot, lRotationOrder);
			pNode->SetRotationOrder(FbxNode::eDestinationPivot, lRotationOrder);

			pNode->SetGeometricTranslation(FbxNode::eDestinationPivot, pNode->GetGeometricTranslation(FbxNode::eSourcePivot));
			pNode->SetGeometricRotation(FbxNode::eDestinationPivot, pNode->GetGeometricRotation(FbxNode::eSourcePivot));
			pNode->SetGeometricScaling(FbxNode::eDestinationPivot, pNode->GetGeometricScaling(FbxNode::eSourcePivot));

			pNode->SetQuaternionInterpolation(FbxNode::eDestinationPivot, pNode->GetQuaternionInterpolation(FbxNode::eSourcePivot));

			pNode->ResetPivotSet(FbxNode::EPivotSet::eDestinationPivot);*/
			outMeshArray.Add(pNode);

		}
		
	}

	for (int32 ChildIndex = 0; ChildIndex < pNode->GetChildCount(); ChildIndex++)
	{
		 FillFbxMeshArray(pNode->GetChild(ChildIndex), Joints.Num(), Index);
	}

}


void UFBXMeshImport::CreateVertexfromMesh(FbxMesh* Mesh, int32 TriangleIndex, int32 CornerIndex,
	TArray<FVector> &MeshTangents, TMap<int32, int32> &IndexMap, TArray<FVector> &VertexPositions,
	TArray<int32> &Triangles, TArray<FVector> &Normals, TArray<FVector> &WedgeTangentX,
	TArray<FColor> &VertexColors, TArray<FVector2D> &TexCoords)
{
		int32 ControlPointIndex = Mesh->GetPolygonVertex(TriangleIndex, CornerIndex);

		int32* ExistingIndex = IndexMap.Find(ControlPointIndex);

		if (ExistingIndex)
		{
			Triangles.Add(*ExistingIndex);
		}
		else
		{
			FbxVector4 FbxPosition = Mesh->GetControlPoints()[ControlPointIndex];
			FbxVector4 FinalPosition = TotalMatrix.MultT(FbxPosition);

			FVector VFinalPosition = ConvertPos(FinalPosition);

			int32 VertexIndex = VertexPositions.Add(VFinalPosition);
			Triangles.Add(VertexIndex);

			IndexMap.Add(ControlPointIndex, VertexIndex);


			if (LayerElementNormal)
			{
				if (RequestDestroy)
					return;

				int TriangleCornerIndex = TriangleIndex * 3 + CornerIndex;
				int NormalMapIndex = (NormalMappingMode == FbxLayerElement::eByControlPoint) ?
					ControlPointIndex : TriangleCornerIndex;
				int NormalValueIndex = (NormalReferenceMode == FbxLayerElement::eDirect) ?
					NormalMapIndex : LayerElementNormal->GetIndexArray().GetAt(NormalMapIndex);

				int count = LayerElementNormal->GetDirectArray().GetCount();

				FbxVector4 TempValue = LayerElementNormal->GetDirectArray().GetAt(NormalValueIndex);
				TempValue = TotalMatrixForNormal.MultT(TempValue);
				FVector TangentZ = ConvertDir(TempValue);
				Normals.Add(TangentZ.GetSafeNormal());
			}

			if (LayerElementTangent)
			{
				if (RequestDestroy)
					return;

				int TriangleCornerIndex = TriangleIndex * 3 + CornerIndex;

				int TangentMapIndex = (TangentMappingMode == FbxLayerElement::eByControlPoint) ?
					ControlPointIndex : TriangleCornerIndex;
				int TangentValueIndex = (TangentReferenceMode == FbxLayerElement::eDirect) ?
					TangentMapIndex : LayerElementTangent->GetIndexArray().GetAt(TangentMapIndex);


				FbxVector4 TempValue = LayerElementTangent->GetDirectArray().GetAt(TangentValueIndex);
				TempValue = TotalMatrixForNormal.MultT(TempValue);
				FVector TangentX = ConvertDir(TempValue);
				WedgeTangentX.Add(TangentX.GetSafeNormal());

				MeshTangents.Add(TangentX.GetSafeNormal());
			}

			if (LayerElementVertexColor)
			{
				if (RequestDestroy)
					return;

				int32 VertexColorMappingIndex = (VertexColorMappingMode == FbxLayerElement::eByControlPoint) ?
					Mesh->GetPolygonVertex(TriangleIndex, CornerIndex) : (TriangleIndex * 3 + CornerIndex);

				int32 VectorColorIndex = (VertexColorReferenceMode == FbxLayerElement::eDirect) ?
					VertexColorMappingIndex : LayerElementVertexColor->GetIndexArray().GetAt(VertexColorMappingIndex);

				FbxColor VertexColor = LayerElementVertexColor->GetDirectArray().GetAt(VectorColorIndex);

				VertexColors.Add(FColor(
					uint8(255.f*VertexColor.mRed),
					uint8(255.f*VertexColor.mGreen),
					uint8(255.f*VertexColor.mBlue),
					uint8(255.f*VertexColor.mAlpha)
				));
			}
			else
			{
				VertexColors.Add(FColor::White);
			}

			if (LayerElementUV[0])
			{
				if (RequestDestroy)
					return;

				int UVMapIndex = (UVMappingMode[0] == FbxLayerElement::eByControlPoint) ?
					ControlPointIndex : TriangleIndex * 3 + CornerIndex;


				int32 UVIndex = (UVReferenceMode[0] == FbxLayerElement::eDirect) ?
					UVMapIndex : LayerElementUV[0]->GetIndexArray().GetAt(UVMapIndex);


				FbxVector2	UVVector = LayerElementUV[0]->GetDirectArray().GetAt(UVIndex);

				FVector2D NewUV = FVector2D(static_cast<float>(UVVector[0]), 1.f - static_cast<float>(UVVector[1]));
				TexCoords.Add(NewUV);
			}
		}

}


void UFBXMeshImport::ProcessJointsAndAnimations(FbxNode* inNode)
{

}

TMap<int32, FProceduralMeshSection> UFBXMeshImport::CreateSingleFBXMesh(FbxNode* Node)
{
	TMap<int32, FProceduralMeshSection> ProcMeshSectionMap;
	
	if (!RequestDestroy && Node)
	{
		IsTaskActive = true;
		FbxMesh* Mesh = Node->GetMesh();

		if (Mesh != NULL)
		{
			FbxNode* ParentNode = Node->GetParent();


			if (GSMatrixMap.Contains(Node))
			{
				TotalMatrix = GSMatrixMap[Node];
			}
			Mesh->RemoveBadPolygons();

			if (Mesh->GetLayerCount() == 0)
			{
				return ProcMeshSectionMap;
			}
			FbxLayer* BaseLayer = Mesh->GetLayer(0);

			if (BaseLayer == NULL)
			{
				return ProcMeshSectionMap;
			}
			BaseLayer->GetUVs();

			FbxGeometryConverter GeometryConverter(Node->GetFbxManager());

#pragma region MeshInitialization

			if (!Mesh->IsTriangleMesh())
			{

				FbxNodeAttribute* ConvertedNode = GeometryConverter.Triangulate(Node->GetNodeAttribute(), true);

				if (ConvertedNode != NULL && ConvertedNode->GetAttributeType() == FbxNodeAttribute::eMesh)
				{
					Mesh = (fbxsdk::FbxMesh*)ConvertedNode;
				}
				else
				{
					return ProcMeshSectionMap;
				}
			}


			int32 MaterialCount = Node->GetMaterialCount();

			TMap<int32, FMaterialDynamicStructure> FBXDynamicMaterialMap = CreateNodeMaterials(Mesh);


			BaseLayer = Mesh->GetLayer(0);

			if (BaseLayer == NULL)
			{
				return ProcMeshSectionMap;
			}
			FbxLayerElementMaterial* LayerElementMaterial = BaseLayer->GetMaterials();
			FbxLayerElement::EMappingMode MaterialMappingMode = LayerElementMaterial ?
				LayerElementMaterial->GetMappingMode() : FbxLayerElement::eByPolygon;


#pragma endregion

#pragma region SmoothingGroup


			bool bSmoothingAvailable = false;

			FbxLayerElementSmoothing const* SmoothingInfo = BaseLayer->GetSmoothing();
			FbxLayerElement::EReferenceMode SmoothingReferenceMode(FbxLayerElement::eDirect);
			FbxLayerElement::EMappingMode SmoothingMappingMode(FbxLayerElement::eByEdge);
			if (SmoothingInfo)
			{

				if (SmoothingInfo->GetMappingMode() == FbxLayerElement::eByPolygon)
				{
					bSmoothingAvailable = true;
				}

				SmoothingReferenceMode = SmoothingInfo->GetReferenceMode();
				SmoothingMappingMode = SmoothingInfo->GetMappingMode();
			}

#pragma endregion


			LayerElementVertexColor = BaseLayer->GetVertexColors();
			if (LayerElementVertexColor)
			{
				VertexColorReferenceMode = LayerElementVertexColor->GetReferenceMode();
				VertexColorMappingMode = LayerElementVertexColor->GetMappingMode();
			}

#pragma region NormalInitialization

			LayerElementNormal = BaseLayer->GetNormals();
			LayerElementTangent = BaseLayer->GetTangents();
			LayerElementBinormal = BaseLayer->GetBinormals();

			bool bHasNTBInformation = LayerElementNormal && LayerElementTangent && LayerElementBinormal;


			if (LayerElementNormal)
			{
				NormalReferenceMode = LayerElementNormal->GetReferenceMode();
				NormalMappingMode = LayerElementNormal->GetMappingMode();
			}


			if (LayerElementTangent)
			{
				TangentReferenceMode = LayerElementTangent->GetReferenceMode();
				TangentMappingMode = LayerElementTangent->GetMappingMode();
			}

			FbxLayerElement::EReferenceMode BinormalReferenceMode(FbxLayerElement::eDirect);
			FbxLayerElement::EMappingMode BinormalMappingMode(FbxLayerElement::eByControlPoint);
			if (LayerElementBinormal)
			{
				BinormalReferenceMode = LayerElementBinormal->GetReferenceMode();
				BinormalMappingMode = LayerElementBinormal->GetMappingMode();
			}


#pragma endregion

			FbxVector4 llocalTransform1 = Node->EvaluateLocalTransform().GetT();
			FVector  LTranslation1 = ConvertPos(llocalTransform1);

			FVector LocationOffset = LTranslation1;

			/*FbxAMatrix parentmatrix;
			TotalMatrix = CalculateGlobalTransform(Node, parentmatrix);*/


			TotalMatrixForNormal = TotalMatrix.Inverse();
			TotalMatrixForNormal = TotalMatrixForNormal.Transpose();

			int32 TriangleCount = Mesh->GetPolygonCount();

			if (TriangleCount == 0)
			{
				return ProcMeshSectionMap;
			}

			int32 VertexCount = Mesh->GetControlPointsCount();
			int32 WedgeCount = TriangleCount * 3;
			OddNegativeScale = IsOddNegativeScale(TotalMatrix);

			int32 MaxMaterialIndex = 0;

			TArray<int32> FaceSmoothingMasks;
			FaceSmoothingMasks.AddZeroed(TriangleCount);

			TArray<int32> FaceMaterialIndices;
			FaceMaterialIndices.AddZeroed(TriangleCount);


			int32 LayerCount = Mesh->GetLayerCount();
			if (LayerCount > 0)
			{
				LayerElementUV.AddZeroed(1);
				UVReferenceMode.AddZeroed(1);
				UVMappingMode.AddZeroed(1);

				FbxLayer* lLayer = Mesh->GetLayer(0);
				int UVSetCount = lLayer->GetUVSetCount();
				if (UVSetCount)
				{
					FbxArray<FbxLayerElementUV const*> EleUVs = lLayer->GetUVSets();
					FbxLayerElementUV const* ElementUV = EleUVs[0];

					if (ElementUV)
					{
						LayerElementUV[0] = ElementUV;
						UVReferenceMode[0] = ElementUV->GetReferenceMode();
						UVMappingMode[0] = ElementUV->GetMappingMode();

					}
				}
			}


			for (int32 TriangleIndex = 0; TriangleIndex < TriangleCount; TriangleIndex++)
			{

#pragma region Materials

				int32 MaterialIndex = 0;
				if (MaterialCount > 0)
				{
					if (LayerElementMaterial)
					{
						switch (MaterialMappingMode)
						{
						case FbxLayerElement::eAllSame:
						{
							MaterialIndex = LayerElementMaterial->GetIndexArray().GetAt(0);
							
						}
						break;
						case FbxLayerElement::eByPolygon:
						{
							MaterialIndex = LayerElementMaterial->GetIndexArray().GetAt(TriangleIndex);
						}
						break;
						}
					}
				}

				if (MaterialIndex >= MaterialCount || MaterialIndex < 0)
				{
					MaterialIndex = 0;
				}

				FaceMaterialIndices[TriangleIndex] = MaterialIndex;


#pragma endregion	    
				

				int polyVertCount = Mesh->GetPolygonSize(TriangleIndex);
				

				if (!ProcMeshSectionMap.Contains(MaterialIndex))
				{
					FProceduralMeshSection ProcMeshSection;

					if (FBXDynamicMaterialMap.Contains(MaterialIndex))
					{
						ProcMeshSection.SectionMaterial = FBXDynamicMaterialMap[MaterialIndex];
					}

					ProcMeshSectionMap.Add(MaterialIndex, ProcMeshSection);

				}

				if (ProcMeshSectionMap.Contains(MaterialIndex))
				{
					for (int32 CornerIndex = 0; CornerIndex < polyVertCount; CornerIndex++)
					{
						TArray<FVector> WedgeTangentX;
						TMap<int32, int32> IndexMap;


						CreateVertexfromMesh(Mesh, TriangleIndex, CornerIndex, ProcMeshSectionMap[MaterialIndex].Tangents, IndexMap, 
							ProcMeshSectionMap[MaterialIndex].Vertices, ProcMeshSectionMap[MaterialIndex].Triangles, 
							ProcMeshSectionMap[MaterialIndex].Normals, WedgeTangentX, ProcMeshSectionMap[MaterialIndex].VertexColors,
							ProcMeshSectionMap[MaterialIndex].UVs);
					}

				}


			}

		}

		IsTaskActive = false;

		if (RequestDestroy)
		{
			Destroy();
			RequestDestroy = false;
		}
	}

	return ProcMeshSectionMap;

}


TArray<FbxNode*> UFBXMeshImport::GetMeshArray()
{
	return outMeshArray;
}

TMap<FbxNode*, TArray<FbxNode*>> UFBXMeshImport::GetMeshArrayGroups(TArray<FbxNode*> MeshArray)
{
	TMap<FbxNode*, TArray<FbxNode*>> MeshArrayGroup;

	for (int i = 0; i < MeshArray.Num(); i++)
	{
		FbxNode* ParentNode = MeshArray[i]->GetParent();
		if (ParentNode)
		{
			if (!MeshArrayGroup.Contains(ParentNode))
			{
				MeshArrayGroup.Add(ParentNode);

			}

			MeshArrayGroup[ParentNode].Add(MeshArray[i]);
		}
	}

	return MeshArrayGroup;
}


void UFBXMeshImport::Destroy()
{
	RequestDestroy = true;
	if (Scene)
	{
		
		Scene->Destroy();
		Scene = NULL;
	}

	if (lSdkManager)
	{
		lSdkManager->Destroy();
		lSdkManager = NULL;

	}

	IsImportFinished = false;
	lImportStatus = false;

}


