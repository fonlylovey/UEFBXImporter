// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFBXImport/Public/FBXMeshActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBXMeshActor() {}
// Cross Module References
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_AFBXMeshActor_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_AFBXMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RuntimeFBXImport();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FFBXSectionStructure();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FFBXNodeStructure();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFBXMeshActor::execHideSelection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideSelection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXMeshActor::execToggleIsolation)
	{
		P_GET_UBOOL(Z_Param_Isolate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleIsolation(Z_Param_Isolate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXMeshActor::execUpdateVectorParam)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT(FLinearColor,Z_Param_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeID);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateVectorParam(Z_Param_ParameterName,Z_Param_Value,Z_Param_NodeID,Z_Param_SectionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXMeshActor::execUpdateScalarParam)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeID);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateScalarParam(Z_Param_ParameterName,Z_Param_Value,Z_Param_NodeID,Z_Param_SectionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXMeshActor::execUpdateTextureParam)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_OBJECT(UTexture2D,Z_Param_NewTexture);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeID);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTextureParam(Z_Param_ParameterName,Z_Param_NewTexture,Z_Param_NodeID,Z_Param_SectionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXMeshActor::execUpdateSectionMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeID);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSectionMaterial(Z_Param_NewMaterial,Z_Param_NodeID,Z_Param_SectionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXMeshActor::execGetVectorParamValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeID);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionID);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVectorParamValue(Z_Param_ParameterName,Z_Param_NodeID,Z_Param_SectionID,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXMeshActor::execGetScalarParamValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeID);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionID);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ScalarValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetScalarParamValue(Z_Param_ParameterName,Z_Param_NodeID,Z_Param_SectionID,Z_Param_Out_ScalarValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXMeshActor::execGetTextureParamValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeID);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionID);
		P_GET_OBJECT_REF(UTexture,Z_Param_Out_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTextureParamValue(Z_Param_ParameterName,Z_Param_NodeID,Z_Param_SectionID,Z_Param_Out_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXMeshActor::execSelectNodeSection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeID);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionID);
		P_GET_UBOOL(Z_Param_DeSelectRest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectNodeSection(Z_Param_NodeID,Z_Param_SectionID,Z_Param_DeSelectRest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXMeshActor::execSelectNode)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeID);
		P_GET_UBOOL(Z_Param_DeSelectRest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FFBXSectionStructure>*)Z_Param__Result=P_THIS->SelectNode(Z_Param_NodeID,Z_Param_DeSelectRest);
		P_NATIVE_END;
	}
	void AFBXMeshActor::StaticRegisterNativesAFBXMeshActor()
	{
		UClass* Class = AFBXMeshActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScalarParamValue", &AFBXMeshActor::execGetScalarParamValue },
			{ "GetTextureParamValue", &AFBXMeshActor::execGetTextureParamValue },
			{ "GetVectorParamValue", &AFBXMeshActor::execGetVectorParamValue },
			{ "HideSelection", &AFBXMeshActor::execHideSelection },
			{ "SelectNode", &AFBXMeshActor::execSelectNode },
			{ "SelectNodeSection", &AFBXMeshActor::execSelectNodeSection },
			{ "ToggleIsolation", &AFBXMeshActor::execToggleIsolation },
			{ "UpdateScalarParam", &AFBXMeshActor::execUpdateScalarParam },
			{ "UpdateSectionMaterial", &AFBXMeshActor::execUpdateSectionMaterial },
			{ "UpdateTextureParam", &AFBXMeshActor::execUpdateTextureParam },
			{ "UpdateVectorParam", &AFBXMeshActor::execUpdateVectorParam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFBXMeshActor_GetScalarParamValue_Statics
	{
		struct FBXMeshActor_eventGetScalarParamValue_Parms
		{
			FName ParameterName;
			int32 NodeID;
			int32 SectionID;
			float ScalarValue;
			bool ReturnValue;
		};
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFBXMeshActor_GetScalarParamValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXMeshActor_eventGetScalarParamValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXMeshActor_GetScalarParamValue_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXMeshActor_eventGetScalarParamValue_Parms, NodeID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXMeshActor_GetScalarParamValue_Statics::NewProp_SectionID = { "SectionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXMeshActor_eventGetScalarParamValue_Parms, SectionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFBXMeshActor_GetScalarParamValue_Statics::NewProp_ScalarValue = { "ScalarValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXMeshActor_eventGetScalarParamValue_Parms, ScalarValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFBXMeshActor_GetScalarParamValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FBXMeshActor_eventGetScalarParamValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFBXMeshActor_GetScalarParamValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBXMeshActor_eventGetScalarParamValue_Parms), &Z_Construct_UFunction_AFBXMeshActor_GetScalarParamValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXMeshActor_GetScalarParamValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_GetScalarParamValue_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_GetScalarParamValue_Statics::NewProp_NodeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_GetScalarParamValue_Statics::NewProp_SectionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_GetScalarParamValue_Statics::NewProp_ScalarValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_GetScalarParamValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_GetScalarParamValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBX" },
		{ "Comment", "/**\n\x09* Get Scalar parameter of the material for the given Section.\n\x09* @param  ParameterName  The Parameter name.\n\x09* @param  NodeID  The Node ID.\n\x09* @param  SectionID  The Section ID.\n\x09* @param  ScalarValue  The Scalar parameter value returned.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FBXMeshActor.h" },
		{ "ToolTip", "Get Scalar parameter of the material for the given Section.\n@param  ParameterName  The Parameter name.\n@param  NodeID  The Node ID.\n@param  SectionID  The Section ID.\n@param  ScalarValue  The Scalar parameter value returned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXMeshActor_GetScalarParamValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXMeshActor, nullptr, "GetScalarParamValue", nullptr, nullptr, sizeof(FBXMeshActor_eventGetScalarParamValue_Parms), Z_Construct_UFunction_AFBXMeshActor_GetScalarParamValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_GetScalarParamValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_GetScalarParamValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_GetScalarParamValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXMeshActor_GetScalarParamValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXMeshActor_GetScalarParamValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXMeshActor_GetTextureParamValue_Statics
	{
		struct FBXMeshActor_eventGetTextureParamValue_Parms
		{
			FName ParameterName;
			int32 NodeID;
			int32 SectionID;
			UTexture* Texture;
			bool ReturnValue;
		};
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFBXMeshActor_GetTextureParamValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXMeshActor_eventGetTextureParamValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXMeshActor_GetTextureParamValue_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXMeshActor_eventGetTextureParamValue_Parms, NodeID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXMeshActor_GetTextureParamValue_Statics::NewProp_SectionID = { "SectionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXMeshActor_eventGetTextureParamValue_Parms, SectionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXMeshActor_GetTextureParamValue_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXMeshActor_eventGetTextureParamValue_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFBXMeshActor_GetTextureParamValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FBXMeshActor_eventGetTextureParamValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFBXMeshActor_GetTextureParamValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBXMeshActor_eventGetTextureParamValue_Parms), &Z_Construct_UFunction_AFBXMeshActor_GetTextureParamValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXMeshActor_GetTextureParamValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_GetTextureParamValue_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_GetTextureParamValue_Statics::NewProp_NodeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_GetTextureParamValue_Statics::NewProp_SectionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_GetTextureParamValue_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_GetTextureParamValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_GetTextureParamValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBX" },
		{ "Comment", "/**\n\x09* Get Texture parameter of the material for the given Section.\n\x09* @param  ParameterName  The Parameter name.\n\x09* @param  NodeID  The Node ID.\n\x09* @param  SectionID  The Section ID.\n\x09* @param  Texture  The Texture parameter value returned.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FBXMeshActor.h" },
		{ "ToolTip", "Get Texture parameter of the material for the given Section.\n@param  ParameterName  The Parameter name.\n@param  NodeID  The Node ID.\n@param  SectionID  The Section ID.\n@param  Texture  The Texture parameter value returned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXMeshActor_GetTextureParamValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXMeshActor, nullptr, "GetTextureParamValue", nullptr, nullptr, sizeof(FBXMeshActor_eventGetTextureParamValue_Parms), Z_Construct_UFunction_AFBXMeshActor_GetTextureParamValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_GetTextureParamValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_GetTextureParamValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_GetTextureParamValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXMeshActor_GetTextureParamValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXMeshActor_GetTextureParamValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXMeshActor_GetVectorParamValue_Statics
	{
		struct FBXMeshActor_eventGetVectorParamValue_Parms
		{
			FName ParameterName;
			int32 NodeID;
			int32 SectionID;
			FLinearColor Value;
			bool ReturnValue;
		};
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFBXMeshActor_GetVectorParamValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXMeshActor_eventGetVectorParamValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXMeshActor_GetVectorParamValue_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXMeshActor_eventGetVectorParamValue_Parms, NodeID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXMeshActor_GetVectorParamValue_Statics::NewProp_SectionID = { "SectionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXMeshActor_eventGetVectorParamValue_Parms, SectionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFBXMeshActor_GetVectorParamValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXMeshActor_eventGetVectorParamValue_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFBXMeshActor_GetVectorParamValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FBXMeshActor_eventGetVectorParamValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFBXMeshActor_GetVectorParamValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBXMeshActor_eventGetVectorParamValue_Parms), &Z_Construct_UFunction_AFBXMeshActor_GetVectorParamValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXMeshActor_GetVectorParamValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_GetVectorParamValue_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_GetVectorParamValue_Statics::NewProp_NodeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_GetVectorParamValue_Statics::NewProp_SectionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_GetVectorParamValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_GetVectorParamValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_GetVectorParamValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBX" },
		{ "Comment", "/**\n\x09* Get Vector parameter of the material for the given Section.\n\x09* @param  ParameterName  The Parameter name.\n\x09* @param  NodeID  The Node ID.\n\x09* @param  SectionID  The Section ID.\n\x09* @param  Value  The Color parameter value returned.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FBXMeshActor.h" },
		{ "ToolTip", "Get Vector parameter of the material for the given Section.\n@param  ParameterName  The Parameter name.\n@param  NodeID  The Node ID.\n@param  SectionID  The Section ID.\n@param  Value  The Color parameter value returned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXMeshActor_GetVectorParamValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXMeshActor, nullptr, "GetVectorParamValue", nullptr, nullptr, sizeof(FBXMeshActor_eventGetVectorParamValue_Parms), Z_Construct_UFunction_AFBXMeshActor_GetVectorParamValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_GetVectorParamValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_GetVectorParamValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_GetVectorParamValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXMeshActor_GetVectorParamValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXMeshActor_GetVectorParamValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXMeshActor_HideSelection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_HideSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBX" },
		{ "Comment", "/**\n\x09* Hide Selected Components.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FBXMeshActor.h" },
		{ "ToolTip", "Hide Selected Components." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXMeshActor_HideSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXMeshActor, nullptr, "HideSelection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_HideSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_HideSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXMeshActor_HideSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXMeshActor_HideSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXMeshActor_SelectNode_Statics
	{
		struct FBXMeshActor_eventSelectNode_Parms
		{
			int32 NodeID;
			bool DeSelectRest;
			TArray<FFBXSectionStructure> ReturnValue;
		};
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXMeshActor_SelectNode_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXMeshActor_eventSelectNode_Parms, NodeID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFBXMeshActor_SelectNode_Statics::NewProp_DeSelectRest_SetBit(void* Obj)
	{
		((FBXMeshActor_eventSelectNode_Parms*)Obj)->DeSelectRest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFBXMeshActor_SelectNode_Statics::NewProp_DeSelectRest = { "DeSelectRest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBXMeshActor_eventSelectNode_Parms), &Z_Construct_UFunction_AFBXMeshActor_SelectNode_Statics::NewProp_DeSelectRest_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFBXMeshActor_SelectNode_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFBXSectionStructure, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFBXMeshActor_SelectNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXMeshActor_eventSelectNode_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXMeshActor_SelectNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_SelectNode_Statics::NewProp_NodeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_SelectNode_Statics::NewProp_DeSelectRest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_SelectNode_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_SelectNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_SelectNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBX" },
		{ "Comment", "/**\n\x09* Select a given Node.\n\x09* @param  NodeID  The NodeID for the Node to be Selected.\n\x09* @param  DeSelectRest  If the rest of the nodes to be DeSelected.\n\x09* @returns  Sections corresponding to the Selected Node.\n\x09*/" },
		{ "CPP_Default_DeSelectRest", "true" },
		{ "ModuleRelativePath", "Public/FBXMeshActor.h" },
		{ "ToolTip", "Select a given Node.\n@param  NodeID  The NodeID for the Node to be Selected.\n@param  DeSelectRest  If the rest of the nodes to be DeSelected.\n@returns  Sections corresponding to the Selected Node." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXMeshActor_SelectNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXMeshActor, nullptr, "SelectNode", nullptr, nullptr, sizeof(FBXMeshActor_eventSelectNode_Parms), Z_Construct_UFunction_AFBXMeshActor_SelectNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_SelectNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_SelectNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_SelectNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXMeshActor_SelectNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXMeshActor_SelectNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXMeshActor_SelectNodeSection_Statics
	{
		struct FBXMeshActor_eventSelectNodeSection_Parms
		{
			int32 NodeID;
			int32 SectionID;
			bool DeSelectRest;
		};
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXMeshActor_SelectNodeSection_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXMeshActor_eventSelectNodeSection_Parms, NodeID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXMeshActor_SelectNodeSection_Statics::NewProp_SectionID = { "SectionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXMeshActor_eventSelectNodeSection_Parms, SectionID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFBXMeshActor_SelectNodeSection_Statics::NewProp_DeSelectRest_SetBit(void* Obj)
	{
		((FBXMeshActor_eventSelectNodeSection_Parms*)Obj)->DeSelectRest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFBXMeshActor_SelectNodeSection_Statics::NewProp_DeSelectRest = { "DeSelectRest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBXMeshActor_eventSelectNodeSection_Parms), &Z_Construct_UFunction_AFBXMeshActor_SelectNodeSection_Statics::NewProp_DeSelectRest_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXMeshActor_SelectNodeSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_SelectNodeSection_Statics::NewProp_NodeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_SelectNodeSection_Statics::NewProp_SectionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_SelectNodeSection_Statics::NewProp_DeSelectRest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_SelectNodeSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBX" },
		{ "Comment", "/**\n\x09* Select a given Node Section.\n\x09* @param  NodeID  The NodeID for the Node corresponding to the Section to be Selected.\n\x09* @param  SectionID  The SectionID for the Section to be Selected.\n\x09* @param  DeSelectRest  If the rest of the Sections to be DeSelected.\n\x09*/" },
		{ "CPP_Default_DeSelectRest", "true" },
		{ "ModuleRelativePath", "Public/FBXMeshActor.h" },
		{ "ToolTip", "Select a given Node Section.\n@param  NodeID  The NodeID for the Node corresponding to the Section to be Selected.\n@param  SectionID  The SectionID for the Section to be Selected.\n@param  DeSelectRest  If the rest of the Sections to be DeSelected." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXMeshActor_SelectNodeSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXMeshActor, nullptr, "SelectNodeSection", nullptr, nullptr, sizeof(FBXMeshActor_eventSelectNodeSection_Parms), Z_Construct_UFunction_AFBXMeshActor_SelectNodeSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_SelectNodeSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_SelectNodeSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_SelectNodeSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXMeshActor_SelectNodeSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXMeshActor_SelectNodeSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXMeshActor_ToggleIsolation_Statics
	{
		struct FBXMeshActor_eventToggleIsolation_Parms
		{
			bool Isolate;
		};
		static void NewProp_Isolate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Isolate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFBXMeshActor_ToggleIsolation_Statics::NewProp_Isolate_SetBit(void* Obj)
	{
		((FBXMeshActor_eventToggleIsolation_Parms*)Obj)->Isolate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFBXMeshActor_ToggleIsolation_Statics::NewProp_Isolate = { "Isolate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBXMeshActor_eventToggleIsolation_Parms), &Z_Construct_UFunction_AFBXMeshActor_ToggleIsolation_Statics::NewProp_Isolate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXMeshActor_ToggleIsolation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_ToggleIsolation_Statics::NewProp_Isolate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_ToggleIsolation_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBX" },
		{ "Comment", "/**\n\x09* Enable or Disable Isolation for the Selected Components.\n\x09* @param  Isolate  Is Isolation should be enabled or disabled.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FBXMeshActor.h" },
		{ "ToolTip", "Enable or Disable Isolation for the Selected Components.\n@param  Isolate  Is Isolation should be enabled or disabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXMeshActor_ToggleIsolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXMeshActor, nullptr, "ToggleIsolation", nullptr, nullptr, sizeof(FBXMeshActor_eventToggleIsolation_Parms), Z_Construct_UFunction_AFBXMeshActor_ToggleIsolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_ToggleIsolation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_ToggleIsolation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_ToggleIsolation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXMeshActor_ToggleIsolation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXMeshActor_ToggleIsolation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParam_Statics
	{
		struct FBXMeshActor_eventUpdateScalarParam_Parms
		{
			FName ParameterName;
			float Value;
			int32 NodeID;
			int32 SectionID;
		};
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParam_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXMeshActor_eventUpdateScalarParam_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParam_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXMeshActor_eventUpdateScalarParam_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParam_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXMeshActor_eventUpdateScalarParam_Parms, NodeID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParam_Statics::NewProp_SectionID = { "SectionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXMeshActor_eventUpdateScalarParam_Parms, SectionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParam_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParam_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParam_Statics::NewProp_NodeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParam_Statics::NewProp_SectionID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBX" },
		{ "Comment", "/**\n\x09* Update the given Section material with New Scalar parameter.\n\x09* @param  ParameterName  The Parameter name.\n\x09* @param  Value  The Section parameter to be applied.\n\x09* @param  NodeID  The Node ID.\n\x09* @param  SectionID  The Section ID.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FBXMeshActor.h" },
		{ "ToolTip", "Update the given Section material with New Scalar parameter.\n@param  ParameterName  The Parameter name.\n@param  Value  The Section parameter to be applied.\n@param  NodeID  The Node ID.\n@param  SectionID  The Section ID." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXMeshActor, nullptr, "UpdateScalarParam", nullptr, nullptr, sizeof(FBXMeshActor_eventUpdateScalarParam_Parms), Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics
	{
		struct FBXMeshActor_eventUpdateSectionMaterial_Parms
		{
			UMaterialInterface* NewMaterial;
			int32 NodeID;
			int32 SectionID;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXMeshActor_eventUpdateSectionMaterial_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXMeshActor_eventUpdateSectionMaterial_Parms, NodeID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::NewProp_SectionID = { "SectionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXMeshActor_eventUpdateSectionMaterial_Parms, SectionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::NewProp_NewMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::NewProp_NodeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::NewProp_SectionID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBX" },
		{ "Comment", "/**\n\x09* Update the given Section with New Material.\n\x09* @param  NewMaterial  The material to be applied to the given section.\n\x09* @param  NodeID  The Node ID.\n\x09* @param  SectionID  The Section ID.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FBXMeshActor.h" },
		{ "ToolTip", "Update the given Section with New Material.\n@param  NewMaterial  The material to be applied to the given section.\n@param  NodeID  The Node ID.\n@param  SectionID  The Section ID." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXMeshActor, nullptr, "UpdateSectionMaterial", nullptr, nullptr, sizeof(FBXMeshActor_eventUpdateSectionMaterial_Parms), Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParam_Statics
	{
		struct FBXMeshActor_eventUpdateTextureParam_Parms
		{
			FName ParameterName;
			UTexture2D* NewTexture;
			int32 NodeID;
			int32 SectionID;
		};
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParam_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXMeshActor_eventUpdateTextureParam_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParam_Statics::NewProp_NewTexture = { "NewTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXMeshActor_eventUpdateTextureParam_Parms, NewTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParam_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXMeshActor_eventUpdateTextureParam_Parms, NodeID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParam_Statics::NewProp_SectionID = { "SectionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXMeshActor_eventUpdateTextureParam_Parms, SectionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParam_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParam_Statics::NewProp_NewTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParam_Statics::NewProp_NodeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParam_Statics::NewProp_SectionID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBX" },
		{ "Comment", "/**\n\x09* Update the given Section material with New Texture parameter.\n\x09* @param  ParameterName  The Parameter name.\n\x09* @param  NewTexture  The Texture parameter to be applied.\n\x09* @param  NodeID  The Node ID.\n\x09* @param  SectionID  The Section ID.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FBXMeshActor.h" },
		{ "ToolTip", "Update the given Section material with New Texture parameter.\n@param  ParameterName  The Parameter name.\n@param  NewTexture  The Texture parameter to be applied.\n@param  NodeID  The Node ID.\n@param  SectionID  The Section ID." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXMeshActor, nullptr, "UpdateTextureParam", nullptr, nullptr, sizeof(FBXMeshActor_eventUpdateTextureParam_Parms), Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParam_Statics
	{
		struct FBXMeshActor_eventUpdateVectorParam_Parms
		{
			FName ParameterName;
			FLinearColor Value;
			int32 NodeID;
			int32 SectionID;
		};
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParam_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXMeshActor_eventUpdateVectorParam_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParam_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXMeshActor_eventUpdateVectorParam_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParam_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXMeshActor_eventUpdateVectorParam_Parms, NodeID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParam_Statics::NewProp_SectionID = { "SectionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXMeshActor_eventUpdateVectorParam_Parms, SectionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParam_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParam_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParam_Statics::NewProp_NodeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParam_Statics::NewProp_SectionID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBX" },
		{ "Comment", "/**\n\x09* Update the given Section material with New Vector parameter.\n\x09* @param  ParameterName  The Parameter name.\n\x09* @param  Value  The Section parameter to be applied.\n\x09* @param  NodeID  The Node ID.\n\x09* @param  SectionID  The Section ID.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FBXMeshActor.h" },
		{ "ToolTip", "Update the given Section material with New Vector parameter.\n@param  ParameterName  The Parameter name.\n@param  Value  The Section parameter to be applied.\n@param  NodeID  The Node ID.\n@param  SectionID  The Section ID." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXMeshActor, nullptr, "UpdateVectorParam", nullptr, nullptr, sizeof(FBXMeshActor_eventUpdateVectorParam_Parms), Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFBXMeshActor_NoRegister()
	{
		return AFBXMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_AFBXMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMeshScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultMeshScale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeSectionMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeSectionMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeSectionMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_NodeSectionMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProceduralMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProceduralMeshes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentSelectedComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSelectedComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentSelectedComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FullFileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsBusy_MetaData[];
#endif
		static void NewProp_IsBusy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBusy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFBXMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFBXMeshActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFBXMeshActor_GetScalarParamValue, "GetScalarParamValue" }, // 2959779192
		{ &Z_Construct_UFunction_AFBXMeshActor_GetTextureParamValue, "GetTextureParamValue" }, // 3390225423
		{ &Z_Construct_UFunction_AFBXMeshActor_GetVectorParamValue, "GetVectorParamValue" }, // 4202803943
		{ &Z_Construct_UFunction_AFBXMeshActor_HideSelection, "HideSelection" }, // 4292318200
		{ &Z_Construct_UFunction_AFBXMeshActor_SelectNode, "SelectNode" }, // 360079298
		{ &Z_Construct_UFunction_AFBXMeshActor_SelectNodeSection, "SelectNodeSection" }, // 3979437104
		{ &Z_Construct_UFunction_AFBXMeshActor_ToggleIsolation, "ToggleIsolation" }, // 548863840
		{ &Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParam, "UpdateScalarParam" }, // 3883380903
		{ &Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial, "UpdateSectionMaterial" }, // 3248691681
		{ &Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParam, "UpdateTextureParam" }, // 2963128525
		{ &Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParam, "UpdateVectorParam" }, // 1929740819
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXMeshActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This class is spawned for every FBX file imported, and contains all the corresponding procedural mesh components\nconstructed against the given nodes and material sections as read from the source file.\n */" },
		{ "IncludePath", "FBXMeshActor.h" },
		{ "ModuleRelativePath", "Public/FBXMeshActor.h" },
		{ "ToolTip", "This class is spawned for every FBX file imported, and contains all the corresponding procedural mesh components\nconstructed against the given nodes and material sections as read from the source file." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_DefaultMeshScale_MetaData[] = {
		{ "Category", "FBX" },
		{ "ModuleRelativePath", "Public/FBXMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_DefaultMeshScale = { "DefaultMeshScale", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFBXMeshActor, DefaultMeshScale), METADATA_PARAMS(Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_DefaultMeshScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_DefaultMeshScale_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_NodeSectionMap_ValueProp = { "NodeSectionMap", nullptr, (EPropertyFlags)0x0000008000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FFBXNodeStructure, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_NodeSectionMap_Key_KeyProp = { "NodeSectionMap_Key", nullptr, (EPropertyFlags)0x0000008000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_NodeSectionMap_MetaData[] = {
		{ "Category", "FBX" },
		{ "Comment", "/** A mapping between every node and array of Mesh Components parented by the corresponding node. */" },
		{ "ModuleRelativePath", "Public/FBXMeshActor.h" },
		{ "ToolTip", "A mapping between every node and array of Mesh Components parented by the corresponding node." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_NodeSectionMap = { "NodeSectionMap", nullptr, (EPropertyFlags)0x0010008000030015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFBXMeshActor, NodeSectionMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_NodeSectionMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_NodeSectionMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_ProceduralMeshes_Inner = { "ProceduralMeshes", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_ProceduralMeshes_MetaData[] = {
		{ "Comment", "/** Array of all mesh components generated for the given FBX file. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FBXMeshActor.h" },
		{ "ToolTip", "Array of all mesh components generated for the given FBX file." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_ProceduralMeshes = { "ProceduralMeshes", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFBXMeshActor, ProceduralMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_ProceduralMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_ProceduralMeshes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_CurrentSelectedComponents_Inner = { "CurrentSelectedComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_CurrentSelectedComponents_MetaData[] = {
		{ "Comment", "/** Array of selected mesh components. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FBXMeshActor.h" },
		{ "ToolTip", "Array of selected mesh components." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_CurrentSelectedComponents = { "CurrentSelectedComponents", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFBXMeshActor, CurrentSelectedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_CurrentSelectedComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_CurrentSelectedComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_FullFileName_MetaData[] = {
		{ "Category", "FBX" },
		{ "Comment", "/** Full file name(with path information) for the given FBX file. */" },
		{ "ModuleRelativePath", "Public/FBXMeshActor.h" },
		{ "ToolTip", "Full file name(with path information) for the given FBX file." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_FullFileName = { "FullFileName", nullptr, (EPropertyFlags)0x0010000000030015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFBXMeshActor, FullFileName), METADATA_PARAMS(Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_FullFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_FullFileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_ActorName_MetaData[] = {
		{ "Category", "FBX" },
		{ "Comment", "/** Base File name for the given FBX file. */" },
		{ "ModuleRelativePath", "Public/FBXMeshActor.h" },
		{ "ToolTip", "Base File name for the given FBX file." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_ActorName = { "ActorName", nullptr, (EPropertyFlags)0x0010000000030015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFBXMeshActor, ActorName), METADATA_PARAMS(Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_ActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_ActorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_IsBusy_MetaData[] = {
		{ "Category", "FBX" },
		{ "Comment", "/** If the FBX import for this actor is currently being executed. */" },
		{ "ModuleRelativePath", "Public/FBXMeshActor.h" },
		{ "ToolTip", "If the FBX import for this actor is currently being executed." },
	};
#endif
	void Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_IsBusy_SetBit(void* Obj)
	{
		((AFBXMeshActor*)Obj)->IsBusy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_IsBusy = { "IsBusy", nullptr, (EPropertyFlags)0x0010000000030015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFBXMeshActor), &Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_IsBusy_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_IsBusy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_IsBusy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFBXMeshActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_DefaultMeshScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_NodeSectionMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_NodeSectionMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_NodeSectionMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_ProceduralMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_ProceduralMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_CurrentSelectedComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_CurrentSelectedComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_FullFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_ActorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_IsBusy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFBXMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFBXMeshActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFBXMeshActor_Statics::ClassParams = {
		&AFBXMeshActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFBXMeshActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFBXMeshActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFBXMeshActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFBXMeshActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFBXMeshActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFBXMeshActor, 315092059);
	template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<AFBXMeshActor>()
	{
		return AFBXMeshActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFBXMeshActor(Z_Construct_UClass_AFBXMeshActor, &AFBXMeshActor::StaticClass, TEXT("/Script/RuntimeFBXImport"), TEXT("AFBXMeshActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFBXMeshActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
