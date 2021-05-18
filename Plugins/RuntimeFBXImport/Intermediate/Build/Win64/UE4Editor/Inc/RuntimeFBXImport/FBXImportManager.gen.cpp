// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFBXImport/Public/FBXImportManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBXImportManager() {}
// Cross Module References
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_AFBXImportManager_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_AFBXImportManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RuntimeFBXImport();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_AFBXMeshActor_NoRegister();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FFBXSectionStructure();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	RUNTIMEFBXIMPORT_API UEnum* Z_Construct_UEnum_RuntimeFBXImport_EFBXCollisionType();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UFBXSaveGame_NoRegister();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FProceduralMeshSection();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(AFBXImportManager::execLoadFBXFromSaveGameObject)
	{
		P_GET_OBJECT(UFBXSaveGame,Z_Param_SaveGameObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadFBXFromSaveGameObject(Z_Param_SaveGameObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXImportManager::execGetFBXSection)
	{
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeID);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionID);
		P_GET_STRUCT_REF(FFBXSectionStructure,Z_Param_Out_FBXSection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFBXSection(Z_Param_MeshActor,Z_Param_NodeID,Z_Param_SectionID,Z_Param_Out_FBXSection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXImportManager::execUnHideAll)
	{
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnHideAll(Z_Param_MeshActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXImportManager::execHideSelection)
	{
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideSelection(Z_Param_MeshActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXImportManager::execIsolateSelection)
	{
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IsolateSelection(Z_Param_MeshActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXImportManager::execUpdateVectorParam)
	{
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT(FLinearColor,Z_Param_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeID);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateVectorParam(Z_Param_MeshActor,Z_Param_ParameterName,Z_Param_Value,Z_Param_NodeID,Z_Param_SectionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXImportManager::execUpdateScalarParam)
	{
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeID);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateScalarParam(Z_Param_MeshActor,Z_Param_ParameterName,Z_Param_Value,Z_Param_NodeID,Z_Param_SectionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXImportManager::execUpdateTextureParam)
	{
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_OBJECT(UTexture2D,Z_Param_NewTexture);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeID);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTextureParam(Z_Param_MeshActor,Z_Param_ParameterName,Z_Param_NewTexture,Z_Param_NodeID,Z_Param_SectionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXImportManager::execUpdateSectionMaterial)
	{
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor);
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeID);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSectionMaterial(Z_Param_MeshActor,Z_Param_NewMaterial,Z_Param_NodeID,Z_Param_SectionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXImportManager::execGetVectorParamValue)
	{
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeID);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionID);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVectorParamValue(Z_Param_MeshActor,Z_Param_ParameterName,Z_Param_NodeID,Z_Param_SectionID,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXImportManager::execGetScalarParamValue)
	{
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeID);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionID);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ScalarValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetScalarParamValue(Z_Param_MeshActor,Z_Param_ParameterName,Z_Param_NodeID,Z_Param_SectionID,Z_Param_Out_ScalarValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXImportManager::execGetTextureParamValue)
	{
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeID);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionID);
		P_GET_OBJECT_REF(UTexture,Z_Param_Out_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTextureParamValue(Z_Param_MeshActor,Z_Param_ParameterName,Z_Param_NodeID,Z_Param_SectionID,Z_Param_Out_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXImportManager::execSelectNodeSection)
	{
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeID);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionID);
		P_GET_UBOOL(Z_Param_DeSelectRest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectNodeSection(Z_Param_MeshActor,Z_Param_NodeID,Z_Param_SectionID,Z_Param_DeSelectRest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXImportManager::execSelectNode)
	{
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeID);
		P_GET_UBOOL(Z_Param_DeSelectRest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FFBXSectionStructure>*)Z_Param__Result=P_THIS->SelectNode(Z_Param_MeshActor,Z_Param_NodeID,Z_Param_DeSelectRest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXImportManager::execDeSelectAllComponents)
	{
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor);
		P_GET_UBOOL(Z_Param_ResetSelection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeSelectAllComponents(Z_Param_MeshActor,Z_Param_ResetSelection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXImportManager::execSelectMeshComponent)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToSelect);
		P_GET_UBOOL(Z_Param_SelectActor);
		P_GET_UBOOL_REF(Z_Param_Out_IsSection);
		P_GET_STRUCT_REF(FFBXSectionStructure,Z_Param_Out_Section);
		P_GET_OBJECT_REF(AFBXMeshActor,Z_Param_Out_SelectedMeshActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectMeshComponent(Z_Param_ComponentToSelect,Z_Param_SelectActor,Z_Param_Out_IsSection,Z_Param_Out_Section,Z_Param_Out_SelectedMeshActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXImportManager::execImportFBXFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_OBJECT(UMaterialInterface,Z_Param_BaseMaterial);
		P_GET_ENUM(EFBXCollisionType,Z_Param_CollisionType);
		P_GET_UBOOL(Z_Param_SpawnFBXActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ImportFBXFile(Z_Param_FileName,Z_Param_Location,Z_Param_BaseMaterial,EFBXCollisionType(Z_Param_CollisionType),Z_Param_SpawnFBXActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXImportManager::execFinishImport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishImport();
		P_NATIVE_END;
	}
	static FName NAME_AFBXImportManager_OnFBXActorSelected = FName(TEXT("OnFBXActorSelected"));
	void AFBXImportManager::OnFBXActorSelected(AFBXMeshActor* SelectedMeshActor)
	{
		FBXImportManager_eventOnFBXActorSelected_Parms Parms;
		Parms.SelectedMeshActor=SelectedMeshActor;
		ProcessEvent(FindFunctionChecked(NAME_AFBXImportManager_OnFBXActorSelected),&Parms);
	}
	static FName NAME_AFBXImportManager_OnFBXNodeProgressChanged = FName(TEXT("OnFBXNodeProgressChanged"));
	void AFBXImportManager::OnFBXNodeProgressChanged(int32 NodeIndex, const FString& NodeName, int32 NodeCount)
	{
		FBXImportManager_eventOnFBXNodeProgressChanged_Parms Parms;
		Parms.NodeIndex=NodeIndex;
		Parms.NodeName=NodeName;
		Parms.NodeCount=NodeCount;
		ProcessEvent(FindFunctionChecked(NAME_AFBXImportManager_OnFBXNodeProgressChanged),&Parms);
	}
	static FName NAME_AFBXImportManager_OnFBXSectionImported = FName(TEXT("OnFBXSectionImported"));
	void AFBXImportManager::OnFBXSectionImported(TMap<int32,FProceduralMeshSection> const& ProcMeshSectionMap)
	{
		FBXImportManager_eventOnFBXSectionImported_Parms Parms;
		Parms.ProcMeshSectionMap=ProcMeshSectionMap;
		ProcessEvent(FindFunctionChecked(NAME_AFBXImportManager_OnFBXSectionImported),&Parms);
	}
	static FName NAME_AFBXImportManager_OnFBXSectionProgressChanged = FName(TEXT("OnFBXSectionProgressChanged"));
	void AFBXImportManager::OnFBXSectionProgressChanged(int32 SectionIndex, const FString& SectionName, int32 SectionCount)
	{
		FBXImportManager_eventOnFBXSectionProgressChanged_Parms Parms;
		Parms.SectionIndex=SectionIndex;
		Parms.SectionName=SectionName;
		Parms.SectionCount=SectionCount;
		ProcessEvent(FindFunctionChecked(NAME_AFBXImportManager_OnFBXSectionProgressChanged),&Parms);
	}
	static FName NAME_AFBXImportManager_OnImportCompleted = FName(TEXT("OnImportCompleted"));
	void AFBXImportManager::OnImportCompleted(AFBXMeshActor* CurrentFBXMeshActor)
	{
		FBXImportManager_eventOnImportCompleted_Parms Parms;
		Parms.CurrentFBXMeshActor=CurrentFBXMeshActor;
		ProcessEvent(FindFunctionChecked(NAME_AFBXImportManager_OnImportCompleted),&Parms);
	}
	static FName NAME_AFBXImportManager_OnNewFBXImportStarted = FName(TEXT("OnNewFBXImportStarted"));
	void AFBXImportManager::OnNewFBXImportStarted(const FString& FileName)
	{
		FBXImportManager_eventOnNewFBXImportStarted_Parms Parms;
		Parms.FileName=FileName;
		ProcessEvent(FindFunctionChecked(NAME_AFBXImportManager_OnNewFBXImportStarted),&Parms);
	}
	void AFBXImportManager::StaticRegisterNativesAFBXImportManager()
	{
		UClass* Class = AFBXImportManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeSelectAllComponents", &AFBXImportManager::execDeSelectAllComponents },
			{ "FinishImport", &AFBXImportManager::execFinishImport },
			{ "GetFBXSection", &AFBXImportManager::execGetFBXSection },
			{ "GetScalarParamValue", &AFBXImportManager::execGetScalarParamValue },
			{ "GetTextureParamValue", &AFBXImportManager::execGetTextureParamValue },
			{ "GetVectorParamValue", &AFBXImportManager::execGetVectorParamValue },
			{ "HideSelection", &AFBXImportManager::execHideSelection },
			{ "ImportFBXFile", &AFBXImportManager::execImportFBXFile },
			{ "IsolateSelection", &AFBXImportManager::execIsolateSelection },
			{ "LoadFBXFromSaveGameObject", &AFBXImportManager::execLoadFBXFromSaveGameObject },
			{ "SelectMeshComponent", &AFBXImportManager::execSelectMeshComponent },
			{ "SelectNode", &AFBXImportManager::execSelectNode },
			{ "SelectNodeSection", &AFBXImportManager::execSelectNodeSection },
			{ "UnHideAll", &AFBXImportManager::execUnHideAll },
			{ "UpdateScalarParam", &AFBXImportManager::execUpdateScalarParam },
			{ "UpdateSectionMaterial", &AFBXImportManager::execUpdateSectionMaterial },
			{ "UpdateTextureParam", &AFBXImportManager::execUpdateTextureParam },
			{ "UpdateVectorParam", &AFBXImportManager::execUpdateVectorParam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFBXImportManager_DeSelectAllComponents_Statics
	{
		struct FBXImportManager_eventDeSelectAllComponents_Parms
		{
			AFBXMeshActor* MeshActor;
			bool ResetSelection;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshActor;
		static void NewProp_ResetSelection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ResetSelection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXImportManager_DeSelectAllComponents_Statics::NewProp_MeshActor = { "MeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventDeSelectAllComponents_Parms, MeshActor), Z_Construct_UClass_AFBXMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFBXImportManager_DeSelectAllComponents_Statics::NewProp_ResetSelection_SetBit(void* Obj)
	{
		((FBXImportManager_eventDeSelectAllComponents_Parms*)Obj)->ResetSelection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFBXImportManager_DeSelectAllComponents_Statics::NewProp_ResetSelection = { "ResetSelection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBXImportManager_eventDeSelectAllComponents_Parms), &Z_Construct_UFunction_AFBXImportManager_DeSelectAllComponents_Statics::NewProp_ResetSelection_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_DeSelectAllComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_DeSelectAllComponents_Statics::NewProp_MeshActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_DeSelectAllComponents_Statics::NewProp_ResetSelection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_DeSelectAllComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBX" },
		{ "Comment", "/**\n\x09* Deselect All Selected Components.\n\x09* @param  MeshActor  The parent FBXMesh Actor corresponding to the select components\n\x09* @param  ResetSelection  If the SelectedActor will be reset\n\n\x09*/" },
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
		{ "ToolTip", "Deselect All Selected Components.\n@param  MeshActor  The parent FBXMesh Actor corresponding to the select components\n@param  ResetSelection  If the SelectedActor will be reset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_DeSelectAllComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "DeSelectAllComponents", nullptr, nullptr, sizeof(FBXImportManager_eventDeSelectAllComponents_Parms), Z_Construct_UFunction_AFBXImportManager_DeSelectAllComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_DeSelectAllComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_DeSelectAllComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_DeSelectAllComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_DeSelectAllComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXImportManager_DeSelectAllComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_FinishImport_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_FinishImport_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09*Called after the import of the given file is completed.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
		{ "ToolTip", "Called after the import of the given file is completed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_FinishImport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "FinishImport", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_FinishImport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_FinishImport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_FinishImport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXImportManager_FinishImport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_GetFBXSection_Statics
	{
		struct FBXImportManager_eventGetFBXSection_Parms
		{
			AFBXMeshActor* MeshActor;
			int32 NodeID;
			int32 SectionID;
			FFBXSectionStructure FBXSection;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshActor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FBXSection;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXImportManager_GetFBXSection_Statics::NewProp_MeshActor = { "MeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventGetFBXSection_Parms, MeshActor), Z_Construct_UClass_AFBXMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_GetFBXSection_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventGetFBXSection_Parms, NodeID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_GetFBXSection_Statics::NewProp_SectionID = { "SectionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventGetFBXSection_Parms, SectionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFBXImportManager_GetFBXSection_Statics::NewProp_FBXSection = { "FBXSection", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventGetFBXSection_Parms, FBXSection), Z_Construct_UScriptStruct_FFBXSectionStructure, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFBXImportManager_GetFBXSection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FBXImportManager_eventGetFBXSection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFBXImportManager_GetFBXSection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBXImportManager_eventGetFBXSection_Parms), &Z_Construct_UFunction_AFBXImportManager_GetFBXSection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_GetFBXSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_GetFBXSection_Statics::NewProp_MeshActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_GetFBXSection_Statics::NewProp_NodeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_GetFBXSection_Statics::NewProp_SectionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_GetFBXSection_Statics::NewProp_FBXSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_GetFBXSection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_GetFBXSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBX" },
		{ "Comment", "/**\n\x09* Returns the FBXSection with the given SectionID and NodeID.\n\x09* @param  MeshActor  The parent FBXMesh Actor.\n\x09* @param  NodeID  The Node ID.\n\x09* @param  SectionID  The Section ID.\n\x09* @param  FBXSection  The FBXSection being returned.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
		{ "ToolTip", "Returns the FBXSection with the given SectionID and NodeID.\n@param  MeshActor  The parent FBXMesh Actor.\n@param  NodeID  The Node ID.\n@param  SectionID  The Section ID.\n@param  FBXSection  The FBXSection being returned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_GetFBXSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "GetFBXSection", nullptr, nullptr, sizeof(FBXImportManager_eventGetFBXSection_Parms), Z_Construct_UFunction_AFBXImportManager_GetFBXSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_GetFBXSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_GetFBXSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_GetFBXSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_GetFBXSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXImportManager_GetFBXSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_GetScalarParamValue_Statics
	{
		struct FBXImportManager_eventGetScalarParamValue_Parms
		{
			AFBXMeshActor* MeshActor;
			FName ParameterName;
			int32 NodeID;
			int32 SectionID;
			float ScalarValue;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshActor;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScalarValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXImportManager_GetScalarParamValue_Statics::NewProp_MeshActor = { "MeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventGetScalarParamValue_Parms, MeshActor), Z_Construct_UClass_AFBXMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFBXImportManager_GetScalarParamValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventGetScalarParamValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_GetScalarParamValue_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventGetScalarParamValue_Parms, NodeID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_GetScalarParamValue_Statics::NewProp_SectionID = { "SectionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventGetScalarParamValue_Parms, SectionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFBXImportManager_GetScalarParamValue_Statics::NewProp_ScalarValue = { "ScalarValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventGetScalarParamValue_Parms, ScalarValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFBXImportManager_GetScalarParamValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FBXImportManager_eventGetScalarParamValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFBXImportManager_GetScalarParamValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBXImportManager_eventGetScalarParamValue_Parms), &Z_Construct_UFunction_AFBXImportManager_GetScalarParamValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_GetScalarParamValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_GetScalarParamValue_Statics::NewProp_MeshActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_GetScalarParamValue_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_GetScalarParamValue_Statics::NewProp_NodeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_GetScalarParamValue_Statics::NewProp_SectionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_GetScalarParamValue_Statics::NewProp_ScalarValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_GetScalarParamValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_GetScalarParamValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBX" },
		{ "Comment", "/**\n\x09* Get Scalar parameter of the material for the given Section.\n\x09* @param  MeshActor  The parent FBXMesh Actor corresponding to the Section being addressed here.\n\x09* @param  ParameterName  The Parameter name.\n\x09* @param  NodeID  The Node ID.\n\x09* @param  SectionID  The Section ID.\n\x09* @param  ScalarValue  The Scalar parameter value returned.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
		{ "ToolTip", "Get Scalar parameter of the material for the given Section.\n@param  MeshActor  The parent FBXMesh Actor corresponding to the Section being addressed here.\n@param  ParameterName  The Parameter name.\n@param  NodeID  The Node ID.\n@param  SectionID  The Section ID.\n@param  ScalarValue  The Scalar parameter value returned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_GetScalarParamValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "GetScalarParamValue", nullptr, nullptr, sizeof(FBXImportManager_eventGetScalarParamValue_Parms), Z_Construct_UFunction_AFBXImportManager_GetScalarParamValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_GetScalarParamValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_GetScalarParamValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_GetScalarParamValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_GetScalarParamValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXImportManager_GetScalarParamValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_GetTextureParamValue_Statics
	{
		struct FBXImportManager_eventGetTextureParamValue_Parms
		{
			AFBXMeshActor* MeshActor;
			FName ParameterName;
			int32 NodeID;
			int32 SectionID;
			UTexture* Texture;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshActor;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXImportManager_GetTextureParamValue_Statics::NewProp_MeshActor = { "MeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventGetTextureParamValue_Parms, MeshActor), Z_Construct_UClass_AFBXMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFBXImportManager_GetTextureParamValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventGetTextureParamValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_GetTextureParamValue_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventGetTextureParamValue_Parms, NodeID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_GetTextureParamValue_Statics::NewProp_SectionID = { "SectionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventGetTextureParamValue_Parms, SectionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXImportManager_GetTextureParamValue_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventGetTextureParamValue_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFBXImportManager_GetTextureParamValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FBXImportManager_eventGetTextureParamValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFBXImportManager_GetTextureParamValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBXImportManager_eventGetTextureParamValue_Parms), &Z_Construct_UFunction_AFBXImportManager_GetTextureParamValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_GetTextureParamValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_GetTextureParamValue_Statics::NewProp_MeshActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_GetTextureParamValue_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_GetTextureParamValue_Statics::NewProp_NodeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_GetTextureParamValue_Statics::NewProp_SectionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_GetTextureParamValue_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_GetTextureParamValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_GetTextureParamValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBX" },
		{ "Comment", "/**\n\x09* Get Texture parameter of the material for the given Section.\n\x09* @param  MeshActor  The parent FBXMesh Actor corresponding to the Section being addressed here.\n\x09* @param  ParameterName  The Parameter name.\n\x09* @param  NodeID  The Node ID.\n\x09* @param  SectionID  The Section ID.\n\x09* @param  Texture  The Texture parameter value returned.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
		{ "ToolTip", "Get Texture parameter of the material for the given Section.\n@param  MeshActor  The parent FBXMesh Actor corresponding to the Section being addressed here.\n@param  ParameterName  The Parameter name.\n@param  NodeID  The Node ID.\n@param  SectionID  The Section ID.\n@param  Texture  The Texture parameter value returned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_GetTextureParamValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "GetTextureParamValue", nullptr, nullptr, sizeof(FBXImportManager_eventGetTextureParamValue_Parms), Z_Construct_UFunction_AFBXImportManager_GetTextureParamValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_GetTextureParamValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_GetTextureParamValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_GetTextureParamValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_GetTextureParamValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXImportManager_GetTextureParamValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_GetVectorParamValue_Statics
	{
		struct FBXImportManager_eventGetVectorParamValue_Parms
		{
			AFBXMeshActor* MeshActor;
			FName ParameterName;
			int32 NodeID;
			int32 SectionID;
			FLinearColor Value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshActor;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXImportManager_GetVectorParamValue_Statics::NewProp_MeshActor = { "MeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventGetVectorParamValue_Parms, MeshActor), Z_Construct_UClass_AFBXMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFBXImportManager_GetVectorParamValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventGetVectorParamValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_GetVectorParamValue_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventGetVectorParamValue_Parms, NodeID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_GetVectorParamValue_Statics::NewProp_SectionID = { "SectionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventGetVectorParamValue_Parms, SectionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFBXImportManager_GetVectorParamValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventGetVectorParamValue_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFBXImportManager_GetVectorParamValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FBXImportManager_eventGetVectorParamValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFBXImportManager_GetVectorParamValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBXImportManager_eventGetVectorParamValue_Parms), &Z_Construct_UFunction_AFBXImportManager_GetVectorParamValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_GetVectorParamValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_GetVectorParamValue_Statics::NewProp_MeshActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_GetVectorParamValue_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_GetVectorParamValue_Statics::NewProp_NodeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_GetVectorParamValue_Statics::NewProp_SectionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_GetVectorParamValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_GetVectorParamValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_GetVectorParamValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBX" },
		{ "Comment", "/**\n\x09* Get Vector parameter of the material for the given Section.\n\x09* @param  MeshActor  The parent FBXMesh Actor corresponding to the Section being addressed here.\n\x09* @param  ParameterName  The Parameter name.\n\x09* @param  NodeID  The Node ID.\n\x09* @param  SectionID  The Section ID.\n\x09* @param  Value  The Color parameter value returned.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
		{ "ToolTip", "Get Vector parameter of the material for the given Section.\n@param  MeshActor  The parent FBXMesh Actor corresponding to the Section being addressed here.\n@param  ParameterName  The Parameter name.\n@param  NodeID  The Node ID.\n@param  SectionID  The Section ID.\n@param  Value  The Color parameter value returned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_GetVectorParamValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "GetVectorParamValue", nullptr, nullptr, sizeof(FBXImportManager_eventGetVectorParamValue_Parms), Z_Construct_UFunction_AFBXImportManager_GetVectorParamValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_GetVectorParamValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_GetVectorParamValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_GetVectorParamValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_GetVectorParamValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXImportManager_GetVectorParamValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_HideSelection_Statics
	{
		struct FBXImportManager_eventHideSelection_Parms
		{
			AFBXMeshActor* MeshActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXImportManager_HideSelection_Statics::NewProp_MeshActor = { "MeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventHideSelection_Parms, MeshActor), Z_Construct_UClass_AFBXMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_HideSelection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_HideSelection_Statics::NewProp_MeshActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_HideSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBX" },
		{ "Comment", "/**\n\x09* Hide Selected Components.\n\x09* @param  MeshActor  The parent FBXMesh Actor for the Selected Mesh Components.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
		{ "ToolTip", "Hide Selected Components.\n@param  MeshActor  The parent FBXMesh Actor for the Selected Mesh Components." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_HideSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "HideSelection", nullptr, nullptr, sizeof(FBXImportManager_eventHideSelection_Parms), Z_Construct_UFunction_AFBXImportManager_HideSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_HideSelection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_HideSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_HideSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_HideSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXImportManager_HideSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics
	{
		struct FBXImportManager_eventImportFBXFile_Parms
		{
			FString FileName;
			FVector Location;
			UMaterialInterface* BaseMaterial;
			EFBXCollisionType CollisionType;
			bool SpawnFBXActor;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseMaterial;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
		static void NewProp_SpawnFBXActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SpawnFBXActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventImportFBXFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventImportFBXFile_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::NewProp_BaseMaterial = { "BaseMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventImportFBXFile_Parms, BaseMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventImportFBXFile_Parms, CollisionType), Z_Construct_UEnum_RuntimeFBXImport_EFBXCollisionType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::NewProp_SpawnFBXActor_SetBit(void* Obj)
	{
		((FBXImportManager_eventImportFBXFile_Parms*)Obj)->SpawnFBXActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::NewProp_SpawnFBXActor = { "SpawnFBXActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBXImportManager_eventImportFBXFile_Parms), &Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::NewProp_SpawnFBXActor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::NewProp_BaseMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::NewProp_CollisionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::NewProp_CollisionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::NewProp_SpawnFBXActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBXImport" },
		{ "Comment", "/**\n\x09* Imports an FBX file from the given filepath.\n\x09* @param  FileName  Full file name with path information, for the FBX file to be imported.\n\x09* @param  Location  World location where the meshes from the FBX file would be created.\n\x09* @param  BaseMaterial  Parameterized material that will be applied to the created mesh by default, with the textures\n\x09 and color information as read from the source file, provided the naming convention for the parameters is followed.\n\x09* @param  CollisionType  The Mesh can either have no collision , or custom collision can be read from the source,\n\x09  with the UCX_ prefix used for identification of node with collision\n\x09* @param SpawnFBXActor shold Spawn the actor in the scene, or just import the file and return the imported data for later use\n\x09*/" },
		{ "CPP_Default_SpawnFBXActor", "true" },
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
		{ "ToolTip", "Imports an FBX file from the given filepath.\n@param  FileName  Full file name with path information, for the FBX file to be imported.\n@param  Location  World location where the meshes from the FBX file would be created.\n@param  BaseMaterial  Parameterized material that will be applied to the created mesh by default, with the textures\n        and color information as read from the source file, provided the naming convention for the parameters is followed.\n@param  CollisionType  The Mesh can either have no collision , or custom collision can be read from the source,\n         with the UCX_ prefix used for identification of node with collision\n@param SpawnFBXActor shold Spawn the actor in the scene, or just import the file and return the imported data for later use" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "ImportFBXFile", nullptr, nullptr, sizeof(FBXImportManager_eventImportFBXFile_Parms), Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_ImportFBXFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_IsolateSelection_Statics
	{
		struct FBXImportManager_eventIsolateSelection_Parms
		{
			AFBXMeshActor* MeshActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXImportManager_IsolateSelection_Statics::NewProp_MeshActor = { "MeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventIsolateSelection_Parms, MeshActor), Z_Construct_UClass_AFBXMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_IsolateSelection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_IsolateSelection_Statics::NewProp_MeshActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_IsolateSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBX" },
		{ "Comment", "/**\n\x09* Isolate Selected Components for the given FBX mesh actor.\n\x09* @param  MeshActor  The parent FBXMesh Actor for the Selected Mesh Components.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
		{ "ToolTip", "Isolate Selected Components for the given FBX mesh actor.\n@param  MeshActor  The parent FBXMesh Actor for the Selected Mesh Components." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_IsolateSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "IsolateSelection", nullptr, nullptr, sizeof(FBXImportManager_eventIsolateSelection_Parms), Z_Construct_UFunction_AFBXImportManager_IsolateSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_IsolateSelection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_IsolateSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_IsolateSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_IsolateSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXImportManager_IsolateSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_LoadFBXFromSaveGameObject_Statics
	{
		struct FBXImportManager_eventLoadFBXFromSaveGameObject_Parms
		{
			UFBXSaveGame* SaveGameObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveGameObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXImportManager_LoadFBXFromSaveGameObject_Statics::NewProp_SaveGameObject = { "SaveGameObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventLoadFBXFromSaveGameObject_Parms, SaveGameObject), Z_Construct_UClass_UFBXSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_LoadFBXFromSaveGameObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_LoadFBXFromSaveGameObject_Statics::NewProp_SaveGameObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_LoadFBXFromSaveGameObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBX" },
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_LoadFBXFromSaveGameObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "LoadFBXFromSaveGameObject", nullptr, nullptr, sizeof(FBXImportManager_eventLoadFBXFromSaveGameObject_Parms), Z_Construct_UFunction_AFBXImportManager_LoadFBXFromSaveGameObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_LoadFBXFromSaveGameObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_LoadFBXFromSaveGameObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_LoadFBXFromSaveGameObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_LoadFBXFromSaveGameObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXImportManager_LoadFBXFromSaveGameObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_OnFBXActorSelected_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedMeshActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXImportManager_OnFBXActorSelected_Statics::NewProp_SelectedMeshActor = { "SelectedMeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventOnFBXActorSelected_Parms, SelectedMeshActor), Z_Construct_UClass_AFBXMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_OnFBXActorSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_OnFBXActorSelected_Statics::NewProp_SelectedMeshActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_OnFBXActorSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBX" },
		{ "Comment", "/**\n\x09* Called and defined in BP, when a new FBX Actor is selected.\n\x09* @param  SelectedActor  The Selected Actor.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
		{ "ToolTip", "Called and defined in BP, when a new FBX Actor is selected.\n@param  SelectedActor  The Selected Actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_OnFBXActorSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "OnFBXActorSelected", nullptr, nullptr, sizeof(FBXImportManager_eventOnFBXActorSelected_Parms), Z_Construct_UFunction_AFBXImportManager_OnFBXActorSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_OnFBXActorSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_OnFBXActorSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_OnFBXActorSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_OnFBXActorSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXImportManager_OnFBXActorSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_OnFBXNodeProgressChanged_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NodeName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_OnFBXNodeProgressChanged_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventOnFBXNodeProgressChanged_Parms, NodeIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_OnFBXNodeProgressChanged_Statics::NewProp_NodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFBXImportManager_OnFBXNodeProgressChanged_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventOnFBXNodeProgressChanged_Parms, NodeName), METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_OnFBXNodeProgressChanged_Statics::NewProp_NodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_OnFBXNodeProgressChanged_Statics::NewProp_NodeName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_OnFBXNodeProgressChanged_Statics::NewProp_NodeCount = { "NodeCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventOnFBXNodeProgressChanged_Parms, NodeCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_OnFBXNodeProgressChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_OnFBXNodeProgressChanged_Statics::NewProp_NodeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_OnFBXNodeProgressChanged_Statics::NewProp_NodeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_OnFBXNodeProgressChanged_Statics::NewProp_NodeCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_OnFBXNodeProgressChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBXImport" },
		{ "Comment", "/**\n\x09* Delegate event being called when a new FBX Node is read and imported, for the current FBX scene.\n\x09* @param  NodeIndex  Node Index .\n\x09*/" },
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
		{ "ToolTip", "Delegate event being called when a new FBX Node is read and imported, for the current FBX scene.\n@param  NodeIndex  Node Index ." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_OnFBXNodeProgressChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "OnFBXNodeProgressChanged", nullptr, nullptr, sizeof(FBXImportManager_eventOnFBXNodeProgressChanged_Parms), Z_Construct_UFunction_AFBXImportManager_OnFBXNodeProgressChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_OnFBXNodeProgressChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_OnFBXNodeProgressChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_OnFBXNodeProgressChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_OnFBXNodeProgressChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXImportManager_OnFBXNodeProgressChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_OnFBXSectionImported_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProcMeshSectionMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProcMeshSectionMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcMeshSectionMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ProcMeshSectionMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFBXImportManager_OnFBXSectionImported_Statics::NewProp_ProcMeshSectionMap_ValueProp = { "ProcMeshSectionMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FProceduralMeshSection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_OnFBXSectionImported_Statics::NewProp_ProcMeshSectionMap_Key_KeyProp = { "ProcMeshSectionMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_OnFBXSectionImported_Statics::NewProp_ProcMeshSectionMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AFBXImportManager_OnFBXSectionImported_Statics::NewProp_ProcMeshSectionMap = { "ProcMeshSectionMap", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventOnFBXSectionImported_Parms, ProcMeshSectionMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_OnFBXSectionImported_Statics::NewProp_ProcMeshSectionMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_OnFBXSectionImported_Statics::NewProp_ProcMeshSectionMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_OnFBXSectionImported_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_OnFBXSectionImported_Statics::NewProp_ProcMeshSectionMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_OnFBXSectionImported_Statics::NewProp_ProcMeshSectionMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_OnFBXSectionImported_Statics::NewProp_ProcMeshSectionMap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_OnFBXSectionImported_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBXImport" },
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_OnFBXSectionImported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "OnFBXSectionImported", nullptr, nullptr, sizeof(FBXImportManager_eventOnFBXSectionImported_Parms), Z_Construct_UFunction_AFBXImportManager_OnFBXSectionImported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_OnFBXSectionImported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_OnFBXSectionImported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_OnFBXSectionImported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_OnFBXSectionImported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXImportManager_OnFBXSectionImported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_OnFBXSectionProgressChanged_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SectionName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_OnFBXSectionProgressChanged_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventOnFBXSectionProgressChanged_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_OnFBXSectionProgressChanged_Statics::NewProp_SectionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFBXImportManager_OnFBXSectionProgressChanged_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventOnFBXSectionProgressChanged_Parms, SectionName), METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_OnFBXSectionProgressChanged_Statics::NewProp_SectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_OnFBXSectionProgressChanged_Statics::NewProp_SectionName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_OnFBXSectionProgressChanged_Statics::NewProp_SectionCount = { "SectionCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventOnFBXSectionProgressChanged_Parms, SectionCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_OnFBXSectionProgressChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_OnFBXSectionProgressChanged_Statics::NewProp_SectionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_OnFBXSectionProgressChanged_Statics::NewProp_SectionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_OnFBXSectionProgressChanged_Statics::NewProp_SectionCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_OnFBXSectionProgressChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBXImport" },
		{ "Comment", "/**\n\x09* Delegate event being called when a new FBX section is read and imported, for the current FBX scene.\n\x09* @param  SectionIndex  Index.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
		{ "ToolTip", "Delegate event being called when a new FBX section is read and imported, for the current FBX scene.\n@param  SectionIndex  Index." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_OnFBXSectionProgressChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "OnFBXSectionProgressChanged", nullptr, nullptr, sizeof(FBXImportManager_eventOnFBXSectionProgressChanged_Parms), Z_Construct_UFunction_AFBXImportManager_OnFBXSectionProgressChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_OnFBXSectionProgressChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_OnFBXSectionProgressChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_OnFBXSectionProgressChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_OnFBXSectionProgressChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXImportManager_OnFBXSectionProgressChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_OnImportCompleted_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentFBXMeshActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXImportManager_OnImportCompleted_Statics::NewProp_CurrentFBXMeshActor = { "CurrentFBXMeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventOnImportCompleted_Parms, CurrentFBXMeshActor), Z_Construct_UClass_AFBXMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_OnImportCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_OnImportCompleted_Statics::NewProp_CurrentFBXMeshActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_OnImportCompleted_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBXImport" },
		{ "Comment", "/**\n\x09* Delegate event being called when the current FBX scene is completely loaded.\n\x09* @param  CurrentFBXMeshActor  FBXMeshActor generated from the current FBX file, which contains all the \n\x09""corresponding mesh components.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
		{ "ToolTip", "Delegate event being called when the current FBX scene is completely loaded.\n@param  CurrentFBXMeshActor  FBXMeshActor generated from the current FBX file, which contains all the\n       corresponding mesh components." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_OnImportCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "OnImportCompleted", nullptr, nullptr, sizeof(FBXImportManager_eventOnImportCompleted_Parms), Z_Construct_UFunction_AFBXImportManager_OnImportCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_OnImportCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_OnImportCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_OnImportCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_OnImportCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXImportManager_OnImportCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_OnNewFBXImportStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_OnNewFBXImportStarted_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFBXImportManager_OnNewFBXImportStarted_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventOnNewFBXImportStarted_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_OnNewFBXImportStarted_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_OnNewFBXImportStarted_Statics::NewProp_FileName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_OnNewFBXImportStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_OnNewFBXImportStarted_Statics::NewProp_FileName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_OnNewFBXImportStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBXImport" },
		{ "Comment", "/**\n\x09* Delegate event being called when a new FBX Import is started.\n\x09* @param  FBXFileName  FBX file being imported.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
		{ "ToolTip", "Delegate event being called when a new FBX Import is started.\n@param  FBXFileName  FBX file being imported." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_OnNewFBXImportStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "OnNewFBXImportStarted", nullptr, nullptr, sizeof(FBXImportManager_eventOnNewFBXImportStarted_Parms), Z_Construct_UFunction_AFBXImportManager_OnNewFBXImportStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_OnNewFBXImportStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_OnNewFBXImportStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_OnNewFBXImportStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_OnNewFBXImportStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXImportManager_OnNewFBXImportStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_SelectMeshComponent_Statics
	{
		struct FBXImportManager_eventSelectMeshComponent_Parms
		{
			UPrimitiveComponent* ComponentToSelect;
			bool SelectActor;
			bool IsSection;
			FFBXSectionStructure Section;
			AFBXMeshActor* SelectedMeshActor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentToSelect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentToSelect;
		static void NewProp_SelectActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SelectActor;
		static void NewProp_IsSection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSection;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Section;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedMeshActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_SelectMeshComponent_Statics::NewProp_ComponentToSelect_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXImportManager_SelectMeshComponent_Statics::NewProp_ComponentToSelect = { "ComponentToSelect", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventSelectMeshComponent_Parms, ComponentToSelect), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_SelectMeshComponent_Statics::NewProp_ComponentToSelect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_SelectMeshComponent_Statics::NewProp_ComponentToSelect_MetaData)) };
	void Z_Construct_UFunction_AFBXImportManager_SelectMeshComponent_Statics::NewProp_SelectActor_SetBit(void* Obj)
	{
		((FBXImportManager_eventSelectMeshComponent_Parms*)Obj)->SelectActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFBXImportManager_SelectMeshComponent_Statics::NewProp_SelectActor = { "SelectActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBXImportManager_eventSelectMeshComponent_Parms), &Z_Construct_UFunction_AFBXImportManager_SelectMeshComponent_Statics::NewProp_SelectActor_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFBXImportManager_SelectMeshComponent_Statics::NewProp_IsSection_SetBit(void* Obj)
	{
		((FBXImportManager_eventSelectMeshComponent_Parms*)Obj)->IsSection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFBXImportManager_SelectMeshComponent_Statics::NewProp_IsSection = { "IsSection", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBXImportManager_eventSelectMeshComponent_Parms), &Z_Construct_UFunction_AFBXImportManager_SelectMeshComponent_Statics::NewProp_IsSection_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFBXImportManager_SelectMeshComponent_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventSelectMeshComponent_Parms, Section), Z_Construct_UScriptStruct_FFBXSectionStructure, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXImportManager_SelectMeshComponent_Statics::NewProp_SelectedMeshActor = { "SelectedMeshActor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventSelectMeshComponent_Parms, SelectedMeshActor), Z_Construct_UClass_AFBXMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_SelectMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_SelectMeshComponent_Statics::NewProp_ComponentToSelect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_SelectMeshComponent_Statics::NewProp_SelectActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_SelectMeshComponent_Statics::NewProp_IsSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_SelectMeshComponent_Statics::NewProp_Section,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_SelectMeshComponent_Statics::NewProp_SelectedMeshActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_SelectMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBX" },
		{ "Comment", "/**\n\x09* Select a given Mesh Component.\n\x09* @param  ComponentToSelect  The Mesh Component to Select.\n\x09* @param  SelectActor  If Entire actor to be Selected.\n\x09* @param  IsSection  Returns if a Mesh Section is Selected.\n\x09* @param  Section  Returns Selected Section.\n\x09* @param  SelectedMeshActor  The FBXMesh Actor for the Selected component.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
		{ "ToolTip", "Select a given Mesh Component.\n@param  ComponentToSelect  The Mesh Component to Select.\n@param  SelectActor  If Entire actor to be Selected.\n@param  IsSection  Returns if a Mesh Section is Selected.\n@param  Section  Returns Selected Section.\n@param  SelectedMeshActor  The FBXMesh Actor for the Selected component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_SelectMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "SelectMeshComponent", nullptr, nullptr, sizeof(FBXImportManager_eventSelectMeshComponent_Parms), Z_Construct_UFunction_AFBXImportManager_SelectMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_SelectMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_SelectMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_SelectMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_SelectMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXImportManager_SelectMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_SelectNode_Statics
	{
		struct FBXImportManager_eventSelectNode_Parms
		{
			AFBXMeshActor* MeshActor;
			int32 NodeID;
			bool DeSelectRest;
			TArray<FFBXSectionStructure> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshActor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeID;
		static void NewProp_DeSelectRest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeSelectRest;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXImportManager_SelectNode_Statics::NewProp_MeshActor = { "MeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventSelectNode_Parms, MeshActor), Z_Construct_UClass_AFBXMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_SelectNode_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventSelectNode_Parms, NodeID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFBXImportManager_SelectNode_Statics::NewProp_DeSelectRest_SetBit(void* Obj)
	{
		((FBXImportManager_eventSelectNode_Parms*)Obj)->DeSelectRest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFBXImportManager_SelectNode_Statics::NewProp_DeSelectRest = { "DeSelectRest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBXImportManager_eventSelectNode_Parms), &Z_Construct_UFunction_AFBXImportManager_SelectNode_Statics::NewProp_DeSelectRest_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFBXImportManager_SelectNode_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFBXSectionStructure, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFBXImportManager_SelectNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventSelectNode_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_SelectNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_SelectNode_Statics::NewProp_MeshActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_SelectNode_Statics::NewProp_NodeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_SelectNode_Statics::NewProp_DeSelectRest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_SelectNode_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_SelectNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_SelectNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBX" },
		{ "Comment", "/**\n\x09* Select a given Node.\n\x09* @param  MeshActor  The parent FBXMesh Actor corresponding to the Node to select\n\x09* @param  NodeID  The NodeID for the Node to be Selected.\n\x09* @param  DeSelectRest  If the rest of the nodes to be DeSelected.\n\x09* @returns  Sections corresponding to the Selected Node.\n\x09*/" },
		{ "CPP_Default_DeSelectRest", "true" },
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
		{ "ToolTip", "Select a given Node.\n@param  MeshActor  The parent FBXMesh Actor corresponding to the Node to select\n@param  NodeID  The NodeID for the Node to be Selected.\n@param  DeSelectRest  If the rest of the nodes to be DeSelected.\n@returns  Sections corresponding to the Selected Node." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_SelectNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "SelectNode", nullptr, nullptr, sizeof(FBXImportManager_eventSelectNode_Parms), Z_Construct_UFunction_AFBXImportManager_SelectNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_SelectNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_SelectNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_SelectNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_SelectNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXImportManager_SelectNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_SelectNodeSection_Statics
	{
		struct FBXImportManager_eventSelectNodeSection_Parms
		{
			AFBXMeshActor* MeshActor;
			int32 NodeID;
			int32 SectionID;
			bool DeSelectRest;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshActor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionID;
		static void NewProp_DeSelectRest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeSelectRest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXImportManager_SelectNodeSection_Statics::NewProp_MeshActor = { "MeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventSelectNodeSection_Parms, MeshActor), Z_Construct_UClass_AFBXMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_SelectNodeSection_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventSelectNodeSection_Parms, NodeID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_SelectNodeSection_Statics::NewProp_SectionID = { "SectionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventSelectNodeSection_Parms, SectionID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFBXImportManager_SelectNodeSection_Statics::NewProp_DeSelectRest_SetBit(void* Obj)
	{
		((FBXImportManager_eventSelectNodeSection_Parms*)Obj)->DeSelectRest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFBXImportManager_SelectNodeSection_Statics::NewProp_DeSelectRest = { "DeSelectRest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBXImportManager_eventSelectNodeSection_Parms), &Z_Construct_UFunction_AFBXImportManager_SelectNodeSection_Statics::NewProp_DeSelectRest_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_SelectNodeSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_SelectNodeSection_Statics::NewProp_MeshActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_SelectNodeSection_Statics::NewProp_NodeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_SelectNodeSection_Statics::NewProp_SectionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_SelectNodeSection_Statics::NewProp_DeSelectRest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_SelectNodeSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBX" },
		{ "Comment", "/**\n\x09* Select a given Node Section.\n\x09* @param  MeshActor  The parent FBXMesh Actor corresponding to the Section to select\n\x09* @param  NodeID  The NodeID for the Node corresponding to the Section to be Selected.\n\x09* @param  SectionID  The SectionID for the Section to be Selected.\n\x09* @param  DeSelectRest  If the rest of the Sections to be DeSelected.\n\x09*/" },
		{ "CPP_Default_DeSelectRest", "true" },
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
		{ "ToolTip", "Select a given Node Section.\n@param  MeshActor  The parent FBXMesh Actor corresponding to the Section to select\n@param  NodeID  The NodeID for the Node corresponding to the Section to be Selected.\n@param  SectionID  The SectionID for the Section to be Selected.\n@param  DeSelectRest  If the rest of the Sections to be DeSelected." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_SelectNodeSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "SelectNodeSection", nullptr, nullptr, sizeof(FBXImportManager_eventSelectNodeSection_Parms), Z_Construct_UFunction_AFBXImportManager_SelectNodeSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_SelectNodeSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_SelectNodeSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_SelectNodeSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_SelectNodeSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXImportManager_SelectNodeSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_UnHideAll_Statics
	{
		struct FBXImportManager_eventUnHideAll_Parms
		{
			AFBXMeshActor* MeshActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXImportManager_UnHideAll_Statics::NewProp_MeshActor = { "MeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventUnHideAll_Parms, MeshActor), Z_Construct_UClass_AFBXMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_UnHideAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_UnHideAll_Statics::NewProp_MeshActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_UnHideAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBX" },
		{ "Comment", "/**\n\x09* UnHide All Components.\n\x09* @param  MeshActor  The parent FBXMesh Actor for the Selected Mesh Components.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
		{ "ToolTip", "UnHide All Components.\n@param  MeshActor  The parent FBXMesh Actor for the Selected Mesh Components." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_UnHideAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "UnHideAll", nullptr, nullptr, sizeof(FBXImportManager_eventUnHideAll_Parms), Z_Construct_UFunction_AFBXImportManager_UnHideAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_UnHideAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_UnHideAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_UnHideAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_UnHideAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXImportManager_UnHideAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_UpdateScalarParam_Statics
	{
		struct FBXImportManager_eventUpdateScalarParam_Parms
		{
			AFBXMeshActor* MeshActor;
			FName ParameterName;
			float Value;
			int32 NodeID;
			int32 SectionID;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshActor;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXImportManager_UpdateScalarParam_Statics::NewProp_MeshActor = { "MeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventUpdateScalarParam_Parms, MeshActor), Z_Construct_UClass_AFBXMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFBXImportManager_UpdateScalarParam_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventUpdateScalarParam_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFBXImportManager_UpdateScalarParam_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventUpdateScalarParam_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_UpdateScalarParam_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventUpdateScalarParam_Parms, NodeID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_UpdateScalarParam_Statics::NewProp_SectionID = { "SectionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventUpdateScalarParam_Parms, SectionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_UpdateScalarParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_UpdateScalarParam_Statics::NewProp_MeshActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_UpdateScalarParam_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_UpdateScalarParam_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_UpdateScalarParam_Statics::NewProp_NodeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_UpdateScalarParam_Statics::NewProp_SectionID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_UpdateScalarParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBX" },
		{ "Comment", "/**\n\x09* Update the given Section material with New Scalar parameter.\n\x09* @param  MeshActor  The parent FBXMesh Actor corresponding to the Section being addressed here.\n\x09* @param  ParameterName  The Parameter name.\n\x09* @param  Value  The Section parameter to be applied.\n\x09* @param  NodeID  The Node ID.\n\x09* @param  SectionID  The Section ID.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
		{ "ToolTip", "Update the given Section material with New Scalar parameter.\n@param  MeshActor  The parent FBXMesh Actor corresponding to the Section being addressed here.\n@param  ParameterName  The Parameter name.\n@param  Value  The Section parameter to be applied.\n@param  NodeID  The Node ID.\n@param  SectionID  The Section ID." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_UpdateScalarParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "UpdateScalarParam", nullptr, nullptr, sizeof(FBXImportManager_eventUpdateScalarParam_Parms), Z_Construct_UFunction_AFBXImportManager_UpdateScalarParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_UpdateScalarParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_UpdateScalarParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_UpdateScalarParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_UpdateScalarParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXImportManager_UpdateScalarParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_UpdateSectionMaterial_Statics
	{
		struct FBXImportManager_eventUpdateSectionMaterial_Parms
		{
			AFBXMeshActor* MeshActor;
			UMaterialInterface* NewMaterial;
			int32 NodeID;
			int32 SectionID;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXImportManager_UpdateSectionMaterial_Statics::NewProp_MeshActor = { "MeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventUpdateSectionMaterial_Parms, MeshActor), Z_Construct_UClass_AFBXMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXImportManager_UpdateSectionMaterial_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventUpdateSectionMaterial_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_UpdateSectionMaterial_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventUpdateSectionMaterial_Parms, NodeID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_UpdateSectionMaterial_Statics::NewProp_SectionID = { "SectionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventUpdateSectionMaterial_Parms, SectionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_UpdateSectionMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_UpdateSectionMaterial_Statics::NewProp_MeshActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_UpdateSectionMaterial_Statics::NewProp_NewMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_UpdateSectionMaterial_Statics::NewProp_NodeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_UpdateSectionMaterial_Statics::NewProp_SectionID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_UpdateSectionMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBX" },
		{ "Comment", "/**\n\x09* Update the given Section with New Material.\n\x09* @param  MeshActor  The parent FBXMesh Actor corresponding to the Section being addressed here.\n\x09* @param  NewMaterial  The material to be applied to the given section.\n\x09* @param  NodeID  The Node ID.\n\x09* @param  SectionID  The Section ID.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
		{ "ToolTip", "Update the given Section with New Material.\n@param  MeshActor  The parent FBXMesh Actor corresponding to the Section being addressed here.\n@param  NewMaterial  The material to be applied to the given section.\n@param  NodeID  The Node ID.\n@param  SectionID  The Section ID." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_UpdateSectionMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "UpdateSectionMaterial", nullptr, nullptr, sizeof(FBXImportManager_eventUpdateSectionMaterial_Parms), Z_Construct_UFunction_AFBXImportManager_UpdateSectionMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_UpdateSectionMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_UpdateSectionMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_UpdateSectionMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_UpdateSectionMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXImportManager_UpdateSectionMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_UpdateTextureParam_Statics
	{
		struct FBXImportManager_eventUpdateTextureParam_Parms
		{
			AFBXMeshActor* MeshActor;
			FName ParameterName;
			UTexture2D* NewTexture;
			int32 NodeID;
			int32 SectionID;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshActor;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewTexture;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXImportManager_UpdateTextureParam_Statics::NewProp_MeshActor = { "MeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventUpdateTextureParam_Parms, MeshActor), Z_Construct_UClass_AFBXMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFBXImportManager_UpdateTextureParam_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventUpdateTextureParam_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXImportManager_UpdateTextureParam_Statics::NewProp_NewTexture = { "NewTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventUpdateTextureParam_Parms, NewTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_UpdateTextureParam_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventUpdateTextureParam_Parms, NodeID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_UpdateTextureParam_Statics::NewProp_SectionID = { "SectionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventUpdateTextureParam_Parms, SectionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_UpdateTextureParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_UpdateTextureParam_Statics::NewProp_MeshActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_UpdateTextureParam_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_UpdateTextureParam_Statics::NewProp_NewTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_UpdateTextureParam_Statics::NewProp_NodeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_UpdateTextureParam_Statics::NewProp_SectionID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_UpdateTextureParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBX" },
		{ "Comment", "/**\n\x09* Update the given Section material with New Texture parameter.\n\x09* @param  MeshActor  The parent FBXMesh Actor corresponding to the Section being addressed here.\n\x09* @param  ParameterName  The Parameter name.\n\x09* @param  NewTexture  The Texture parameter to be applied.\n\x09* @param  NodeID  The Node ID.\n\x09* @param  SectionID  The Section ID.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
		{ "ToolTip", "Update the given Section material with New Texture parameter.\n@param  MeshActor  The parent FBXMesh Actor corresponding to the Section being addressed here.\n@param  ParameterName  The Parameter name.\n@param  NewTexture  The Texture parameter to be applied.\n@param  NodeID  The Node ID.\n@param  SectionID  The Section ID." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_UpdateTextureParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "UpdateTextureParam", nullptr, nullptr, sizeof(FBXImportManager_eventUpdateTextureParam_Parms), Z_Construct_UFunction_AFBXImportManager_UpdateTextureParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_UpdateTextureParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_UpdateTextureParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_UpdateTextureParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_UpdateTextureParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXImportManager_UpdateTextureParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_UpdateVectorParam_Statics
	{
		struct FBXImportManager_eventUpdateVectorParam_Parms
		{
			AFBXMeshActor* MeshActor;
			FName ParameterName;
			FLinearColor Value;
			int32 NodeID;
			int32 SectionID;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshActor;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXImportManager_UpdateVectorParam_Statics::NewProp_MeshActor = { "MeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventUpdateVectorParam_Parms, MeshActor), Z_Construct_UClass_AFBXMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFBXImportManager_UpdateVectorParam_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventUpdateVectorParam_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFBXImportManager_UpdateVectorParam_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventUpdateVectorParam_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_UpdateVectorParam_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventUpdateVectorParam_Parms, NodeID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_UpdateVectorParam_Statics::NewProp_SectionID = { "SectionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXImportManager_eventUpdateVectorParam_Parms, SectionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_UpdateVectorParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_UpdateVectorParam_Statics::NewProp_MeshActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_UpdateVectorParam_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_UpdateVectorParam_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_UpdateVectorParam_Statics::NewProp_NodeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_UpdateVectorParam_Statics::NewProp_SectionID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_UpdateVectorParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBX" },
		{ "Comment", "/**\n\x09* Update the given Section material with New Vector parameter.\n\x09* @param  MeshActor  The parent FBXMesh Actor corresponding to the Section being addressed here.\n\x09* @param  ParameterName  The Parameter name.\n\x09* @param  Value  The Section parameter to be applied.\n\x09* @param  NodeID  The Node ID.\n\x09* @param  SectionID  The Section ID.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
		{ "ToolTip", "Update the given Section material with New Vector parameter.\n@param  MeshActor  The parent FBXMesh Actor corresponding to the Section being addressed here.\n@param  ParameterName  The Parameter name.\n@param  Value  The Section parameter to be applied.\n@param  NodeID  The Node ID.\n@param  SectionID  The Section ID." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_UpdateVectorParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "UpdateVectorParam", nullptr, nullptr, sizeof(FBXImportManager_eventUpdateVectorParam_Parms), Z_Construct_UFunction_AFBXImportManager_UpdateVectorParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_UpdateVectorParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_UpdateVectorParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_UpdateVectorParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_UpdateVectorParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXImportManager_UpdateVectorParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFBXImportManager_NoRegister()
	{
		return AFBXImportManager::StaticClass();
	}
	struct Z_Construct_UClass_AFBXImportManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBaseMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentBaseMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentImportLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentImportLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPlayEnded_MetaData[];
#endif
		static void NewProp_IsPlayEnded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPlayEnded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsBusy_MetaData[];
#endif
		static void NewProp_IsBusy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBusy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedActor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentCollisionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCollisionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentCollisionType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FBXActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FBXActorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFBXImportManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFBXImportManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFBXImportManager_DeSelectAllComponents, "DeSelectAllComponents" }, // 366235503
		{ &Z_Construct_UFunction_AFBXImportManager_FinishImport, "FinishImport" }, // 2605664968
		{ &Z_Construct_UFunction_AFBXImportManager_GetFBXSection, "GetFBXSection" }, // 4048485552
		{ &Z_Construct_UFunction_AFBXImportManager_GetScalarParamValue, "GetScalarParamValue" }, // 3220434657
		{ &Z_Construct_UFunction_AFBXImportManager_GetTextureParamValue, "GetTextureParamValue" }, // 3566670625
		{ &Z_Construct_UFunction_AFBXImportManager_GetVectorParamValue, "GetVectorParamValue" }, // 3913118761
		{ &Z_Construct_UFunction_AFBXImportManager_HideSelection, "HideSelection" }, // 2636146580
		{ &Z_Construct_UFunction_AFBXImportManager_ImportFBXFile, "ImportFBXFile" }, // 1859376560
		{ &Z_Construct_UFunction_AFBXImportManager_IsolateSelection, "IsolateSelection" }, // 26686000
		{ &Z_Construct_UFunction_AFBXImportManager_LoadFBXFromSaveGameObject, "LoadFBXFromSaveGameObject" }, // 3495734312
		{ &Z_Construct_UFunction_AFBXImportManager_OnFBXActorSelected, "OnFBXActorSelected" }, // 3583852587
		{ &Z_Construct_UFunction_AFBXImportManager_OnFBXNodeProgressChanged, "OnFBXNodeProgressChanged" }, // 891555085
		{ &Z_Construct_UFunction_AFBXImportManager_OnFBXSectionImported, "OnFBXSectionImported" }, // 1729517069
		{ &Z_Construct_UFunction_AFBXImportManager_OnFBXSectionProgressChanged, "OnFBXSectionProgressChanged" }, // 1706067579
		{ &Z_Construct_UFunction_AFBXImportManager_OnImportCompleted, "OnImportCompleted" }, // 1088945704
		{ &Z_Construct_UFunction_AFBXImportManager_OnNewFBXImportStarted, "OnNewFBXImportStarted" }, // 38476579
		{ &Z_Construct_UFunction_AFBXImportManager_SelectMeshComponent, "SelectMeshComponent" }, // 3444514983
		{ &Z_Construct_UFunction_AFBXImportManager_SelectNode, "SelectNode" }, // 118579010
		{ &Z_Construct_UFunction_AFBXImportManager_SelectNodeSection, "SelectNodeSection" }, // 501155603
		{ &Z_Construct_UFunction_AFBXImportManager_UnHideAll, "UnHideAll" }, // 1958643844
		{ &Z_Construct_UFunction_AFBXImportManager_UpdateScalarParam, "UpdateScalarParam" }, // 2879712652
		{ &Z_Construct_UFunction_AFBXImportManager_UpdateSectionMaterial, "UpdateSectionMaterial" }, // 2940627726
		{ &Z_Construct_UFunction_AFBXImportManager_UpdateTextureParam, "UpdateTextureParam" }, // 3461768130
		{ &Z_Construct_UFunction_AFBXImportManager_UpdateVectorParam, "UpdateVectorParam" }, // 3215617113
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXImportManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This class acts as a manager which handles all the functionalities related to asynchronous FBX Import\n */" },
		{ "IncludePath", "FBXImportManager.h" },
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
		{ "ToolTip", "This class acts as a manager which handles all the functionalities related to asynchronous FBX Import" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXImportManager_Statics::NewProp_CurrentBaseMaterial_MetaData[] = {
		{ "Comment", "/** Current Base Material to be applied for the Procedural mesh component corresponding to the latest FBX file(s) to import. */" },
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
		{ "ToolTip", "Current Base Material to be applied for the Procedural mesh component corresponding to the latest FBX file(s) to import." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFBXImportManager_Statics::NewProp_CurrentBaseMaterial = { "CurrentBaseMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFBXImportManager, CurrentBaseMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_CurrentBaseMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_CurrentBaseMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXImportManager_Statics::NewProp_CurrentImportLocation_MetaData[] = {
		{ "Comment", "/** World Location where the current FBX is being imported*/" },
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
		{ "ToolTip", "World Location where the current FBX is being imported" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFBXImportManager_Statics::NewProp_CurrentImportLocation = { "CurrentImportLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFBXImportManager, CurrentImportLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_CurrentImportLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_CurrentImportLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXImportManager_Statics::NewProp_IsPlayEnded_MetaData[] = {
		{ "Comment", "/** If Playmode is ended*/" },
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
		{ "ToolTip", "If Playmode is ended" },
	};
#endif
	void Z_Construct_UClass_AFBXImportManager_Statics::NewProp_IsPlayEnded_SetBit(void* Obj)
	{
		((AFBXImportManager*)Obj)->IsPlayEnded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFBXImportManager_Statics::NewProp_IsPlayEnded = { "IsPlayEnded", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFBXImportManager), &Z_Construct_UClass_AFBXImportManager_Statics::NewProp_IsPlayEnded_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_IsPlayEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_IsPlayEnded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXImportManager_Statics::NewProp_IsBusy_MetaData[] = {
		{ "Comment", "/** If FBX operation is currently being executed*/" },
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
		{ "ToolTip", "If FBX operation is currently being executed" },
	};
#endif
	void Z_Construct_UClass_AFBXImportManager_Statics::NewProp_IsBusy_SetBit(void* Obj)
	{
		((AFBXImportManager*)Obj)->IsBusy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFBXImportManager_Statics::NewProp_IsBusy = { "IsBusy", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFBXImportManager), &Z_Construct_UClass_AFBXImportManager_Statics::NewProp_IsBusy_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_IsBusy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_IsBusy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXImportManager_Statics::NewProp_SelectedActor_MetaData[] = {
		{ "Comment", "/** Selected Mesh Actor. */" },
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
		{ "ToolTip", "Selected Mesh Actor." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFBXImportManager_Statics::NewProp_SelectedActor = { "SelectedActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFBXImportManager, SelectedActor), Z_Construct_UClass_AFBXMeshActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_SelectedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_SelectedActor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFBXImportManager_Statics::NewProp_CurrentCollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXImportManager_Statics::NewProp_CurrentCollisionType_MetaData[] = {
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFBXImportManager_Statics::NewProp_CurrentCollisionType = { "CurrentCollisionType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFBXImportManager, CurrentCollisionType), Z_Construct_UEnum_RuntimeFBXImport_EFBXCollisionType, METADATA_PARAMS(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_CurrentCollisionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_CurrentCollisionType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXImportManager_Statics::NewProp_FBXActorClass_MetaData[] = {
		{ "Category", "FBXImport" },
		{ "ModuleRelativePath", "Public/FBXImportManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFBXImportManager_Statics::NewProp_FBXActorClass = { "FBXActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFBXImportManager, FBXActorClass), Z_Construct_UClass_AFBXMeshActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_FBXActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_FBXActorClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFBXImportManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXImportManager_Statics::NewProp_CurrentBaseMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXImportManager_Statics::NewProp_CurrentImportLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXImportManager_Statics::NewProp_IsPlayEnded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXImportManager_Statics::NewProp_IsBusy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXImportManager_Statics::NewProp_SelectedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXImportManager_Statics::NewProp_CurrentCollisionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXImportManager_Statics::NewProp_CurrentCollisionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXImportManager_Statics::NewProp_FBXActorClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFBXImportManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFBXImportManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFBXImportManager_Statics::ClassParams = {
		&AFBXImportManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFBXImportManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFBXImportManager_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFBXImportManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXImportManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFBXImportManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFBXImportManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFBXImportManager, 1471380282);
	template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<AFBXImportManager>()
	{
		return AFBXImportManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFBXImportManager(Z_Construct_UClass_AFBXImportManager, &AFBXImportManager::StaticClass, TEXT("/Script/RuntimeFBXImport"), TEXT("AFBXImportManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFBXImportManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
