// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFBXImport/Public/RuntimeFBXImportBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeFBXImportBPLibrary() {}
// Cross Module References
	RUNTIMEFBXIMPORT_API UEnum* Z_Construct_UEnum_RuntimeFBXImport_EFBXCollisionType();
	UPackage* Z_Construct_UPackage__Script_RuntimeFBXImport();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FFBXNodeStructure();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FFBXSectionStructure();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialDynamicStructure();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FProceduralMeshSection();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_URuntimeFBXImportBPLibrary_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_URuntimeFBXImportBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UFBXSaveGame_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_AFBXMeshActor_NoRegister();
// End Cross Module References
	static UEnum* EFBXCollisionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RuntimeFBXImport_EFBXCollisionType, Z_Construct_UPackage__Script_RuntimeFBXImport(), TEXT("EFBXCollisionType"));
		}
		return Singleton;
	}
	template<> RUNTIMEFBXIMPORT_API UEnum* StaticEnum<EFBXCollisionType>()
	{
		return EFBXCollisionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFBXCollisionType(EFBXCollisionType_StaticEnum, TEXT("/Script/RuntimeFBXImport"), TEXT("EFBXCollisionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RuntimeFBXImport_EFBXCollisionType_Hash() { return 2301202113U; }
	UEnum* Z_Construct_UEnum_RuntimeFBXImport_EFBXCollisionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeFBXImport();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFBXCollisionType"), 0, Get_Z_Construct_UEnum_RuntimeFBXImport_EFBXCollisionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFBXCollisionType::NoCollision", (int64)EFBXCollisionType::NoCollision },
				{ "EFBXCollisionType::MeshCollisionFromSource", (int64)EFBXCollisionType::MeshCollisionFromSource },
				{ "EFBXCollisionType::CustomCollisionFromSource", (int64)EFBXCollisionType::CustomCollisionFromSource },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CustomCollisionFromSource.DisplayName", "CustomCollisionFromSource" },
				{ "CustomCollisionFromSource.Name", "EFBXCollisionType::CustomCollisionFromSource" },
				{ "MeshCollisionFromSource.DisplayName", "MeshCollisionFromSource" },
				{ "MeshCollisionFromSource.Name", "EFBXCollisionType::MeshCollisionFromSource" },
				{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
				{ "NoCollision.DisplayName", "NoCollision" },
				{ "NoCollision.Name", "EFBXCollisionType::NoCollision" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
				nullptr,
				"EFBXCollisionType",
				"EFBXCollisionType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FFBXNodeStructure::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEFBXIMPORT_API uint32 Get_Z_Construct_UScriptStruct_FFBXNodeStructure_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFBXNodeStructure, Z_Construct_UPackage__Script_RuntimeFBXImport(), TEXT("FBXNodeStructure"), sizeof(FFBXNodeStructure), Get_Z_Construct_UScriptStruct_FFBXNodeStructure_Hash());
	}
	return Singleton;
}
template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<FFBXNodeStructure>()
{
	return FFBXNodeStructure::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFBXNodeStructure(FFBXNodeStructure::StaticStruct, TEXT("/Script/RuntimeFBXImport"), TEXT("FBXNodeStructure"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeFBXImport_StaticRegisterNativesFFBXNodeStructure
{
	FScriptStruct_RuntimeFBXImport_StaticRegisterNativesFFBXNodeStructure()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FBXNodeStructure")),new UScriptStruct::TCppStructOps<FFBXNodeStructure>);
	}
} ScriptStruct_RuntimeFBXImport_StaticRegisterNativesFFBXNodeStructure;
	struct Z_Construct_UScriptStruct_FFBXNodeStructure_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NodeName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeSections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeSections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NodeSections;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBXNodeStructure_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This structure represents FBX Node and contains group of Material Section.\n */" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
		{ "ToolTip", "This structure represents FBX Node and contains group of Material Section." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFBXNodeStructure_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFBXNodeStructure>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBXNodeStructure_Statics::NewProp_NodeName_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFBXNodeStructure_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBXNodeStructure, NodeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFBXNodeStructure_Statics::NewProp_NodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBXNodeStructure_Statics::NewProp_NodeName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFBXNodeStructure_Statics::NewProp_NodeSections_Inner = { "NodeSections", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFBXSectionStructure, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBXNodeStructure_Statics::NewProp_NodeSections_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFBXNodeStructure_Statics::NewProp_NodeSections = { "NodeSections", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBXNodeStructure, NodeSections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBXNodeStructure_Statics::NewProp_NodeSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBXNodeStructure_Statics::NewProp_NodeSections_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFBXNodeStructure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBXNodeStructure_Statics::NewProp_NodeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBXNodeStructure_Statics::NewProp_NodeSections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBXNodeStructure_Statics::NewProp_NodeSections,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFBXNodeStructure_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
		nullptr,
		&NewStructOps,
		"FBXNodeStructure",
		sizeof(FFBXNodeStructure),
		alignof(FFBXNodeStructure),
		Z_Construct_UScriptStruct_FFBXNodeStructure_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBXNodeStructure_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFBXNodeStructure_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBXNodeStructure_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFBXNodeStructure()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFBXNodeStructure_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeFBXImport();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FBXNodeStructure"), sizeof(FFBXNodeStructure), Get_Z_Construct_UScriptStruct_FFBXNodeStructure_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFBXNodeStructure_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFBXNodeStructure_Hash() { return 297679902U; }
class UScriptStruct* FFBXSectionStructure::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEFBXIMPORT_API uint32 Get_Z_Construct_UScriptStruct_FFBXSectionStructure_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFBXSectionStructure, Z_Construct_UPackage__Script_RuntimeFBXImport(), TEXT("FBXSectionStructure"), sizeof(FFBXSectionStructure), Get_Z_Construct_UScriptStruct_FFBXSectionStructure_Hash());
	}
	return Singleton;
}
template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<FFBXSectionStructure>()
{
	return FFBXSectionStructure::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFBXSectionStructure(FFBXSectionStructure::StaticStruct, TEXT("/Script/RuntimeFBXImport"), TEXT("FBXSectionStructure"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeFBXImport_StaticRegisterNativesFFBXSectionStructure
{
	FScriptStruct_RuntimeFBXImport_StaticRegisterNativesFFBXSectionStructure()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FBXSectionStructure")),new UScriptStruct::TCppStructOps<FFBXSectionStructure>);
	}
} ScriptStruct_RuntimeFBXImport_StaticRegisterNativesFFBXSectionStructure;
	struct Z_Construct_UScriptStruct_FFBXSectionStructure_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshSection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FBXMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FBXMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCollisionMesh_MetaData[];
#endif
		static void NewProp_IsCollisionMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCollisionMesh;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScalarParamInfo_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ScalarParamInfo_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalarParamInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ScalarParamInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorParamInfo_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_VectorParamInfo_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorParamInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_VectorParamInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureParamInfo_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TextureParamInfo_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureParamInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TextureParamInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This structure represents FBX Material Section and is mapped with the corresponding generated Procedural Mesh Component.\n */" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
		{ "ToolTip", "This structure represents FBX Material Section and is mapped with the corresponding generated Procedural Mesh Component." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFBXSectionStructure>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_NodeID_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBXSectionStructure, NodeID), METADATA_PARAMS(Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_NodeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_NodeID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_SectionID_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_SectionID = { "SectionID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBXSectionStructure, SectionID), METADATA_PARAMS(Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_SectionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_SectionID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_SectionMaterial_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_SectionMaterial = { "SectionMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBXSectionStructure, SectionMaterial), Z_Construct_UScriptStruct_FMaterialDynamicStructure, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_SectionMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_SectionMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_MeshSection_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_MeshSection = { "MeshSection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBXSectionStructure, MeshSection), Z_Construct_UScriptStruct_FProceduralMeshSection, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_MeshSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_MeshSection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_FBXMeshComponent_MetaData[] = {
		{ "Category", "Defaults" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_FBXMeshComponent = { "FBXMeshComponent", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBXSectionStructure, FBXMeshComponent), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_FBXMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_FBXMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_BaseMaterial_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_BaseMaterial = { "BaseMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBXSectionStructure, BaseMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_BaseMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_BaseMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_IsCollisionMesh_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_IsCollisionMesh_SetBit(void* Obj)
	{
		((FFBXSectionStructure*)Obj)->IsCollisionMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_IsCollisionMesh = { "IsCollisionMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFBXSectionStructure), &Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_IsCollisionMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_IsCollisionMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_IsCollisionMesh_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_CollisionType_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBXSectionStructure, CollisionType), Z_Construct_UEnum_RuntimeFBXImport_EFBXCollisionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_CollisionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_CollisionType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_ScalarParamInfo_ValueProp = { "ScalarParamInfo", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_ScalarParamInfo_Key_KeyProp = { "ScalarParamInfo_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_ScalarParamInfo_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_ScalarParamInfo = { "ScalarParamInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBXSectionStructure, ScalarParamInfo), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_ScalarParamInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_ScalarParamInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_VectorParamInfo_ValueProp = { "VectorParamInfo", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_VectorParamInfo_Key_KeyProp = { "VectorParamInfo_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_VectorParamInfo_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_VectorParamInfo = { "VectorParamInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBXSectionStructure, VectorParamInfo), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_VectorParamInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_VectorParamInfo_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_TextureParamInfo_ValueProp = { "TextureParamInfo", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_TextureParamInfo_Key_KeyProp = { "TextureParamInfo_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_TextureParamInfo_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_TextureParamInfo = { "TextureParamInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBXSectionStructure, TextureParamInfo), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_TextureParamInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_TextureParamInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_NodeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_SectionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_SectionMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_MeshSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_FBXMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_BaseMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_IsCollisionMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_CollisionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_CollisionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_ScalarParamInfo_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_ScalarParamInfo_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_ScalarParamInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_VectorParamInfo_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_VectorParamInfo_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_VectorParamInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_TextureParamInfo_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_TextureParamInfo_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::NewProp_TextureParamInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
		nullptr,
		&NewStructOps,
		"FBXSectionStructure",
		sizeof(FFBXSectionStructure),
		alignof(FFBXSectionStructure),
		Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFBXSectionStructure()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFBXSectionStructure_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeFBXImport();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FBXSectionStructure"), sizeof(FFBXSectionStructure), Get_Z_Construct_UScriptStruct_FFBXSectionStructure_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFBXSectionStructure_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFBXSectionStructure_Hash() { return 1625125111U; }
class UScriptStruct* FProceduralMeshSection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEFBXIMPORT_API uint32 Get_Z_Construct_UScriptStruct_FProceduralMeshSection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProceduralMeshSection, Z_Construct_UPackage__Script_RuntimeFBXImport(), TEXT("ProceduralMeshSection"), sizeof(FProceduralMeshSection), Get_Z_Construct_UScriptStruct_FProceduralMeshSection_Hash());
	}
	return Singleton;
}
template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<FProceduralMeshSection>()
{
	return FProceduralMeshSection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProceduralMeshSection(FProceduralMeshSection::StaticStruct, TEXT("/Script/RuntimeFBXImport"), TEXT("ProceduralMeshSection"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeFBXImport_StaticRegisterNativesFProceduralMeshSection
{
	FScriptStruct_RuntimeFBXImport_StaticRegisterNativesFProceduralMeshSection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProceduralMeshSection")),new UScriptStruct::TCppStructOps<FProceduralMeshSection>);
	}
} ScriptStruct_RuntimeFBXImport_StaticRegisterNativesFProceduralMeshSection;
	struct Z_Construct_UScriptStruct_FProceduralMeshSection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UVs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tangents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This structure represent Procedural Mesh data.\n */" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
		{ "ToolTip", "This structure represent Procedural Mesh data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProceduralMeshSection>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_Vertices_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralMeshSection, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_Vertices_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_Triangles_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralMeshSection, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_Triangles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_Normals_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralMeshSection, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_Normals_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_UVs_Inner = { "UVs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_UVs_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_UVs = { "UVs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralMeshSection, UVs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_UVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_UVs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_Tangents_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralMeshSection, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_Tangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_Tangents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_SectionMaterial_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_SectionMaterial = { "SectionMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralMeshSection, SectionMaterial), Z_Construct_UScriptStruct_FMaterialDynamicStructure, METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_SectionMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_SectionMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_Vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_Triangles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_Normals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_Normals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_UVs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_UVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_Tangents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_Tangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::NewProp_SectionMaterial,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
		nullptr,
		&NewStructOps,
		"ProceduralMeshSection",
		sizeof(FProceduralMeshSection),
		alignof(FProceduralMeshSection),
		Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProceduralMeshSection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProceduralMeshSection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeFBXImport();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProceduralMeshSection"), sizeof(FProceduralMeshSection), Get_Z_Construct_UScriptStruct_FProceduralMeshSection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProceduralMeshSection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProceduralMeshSection_Hash() { return 1373651340U; }
class UScriptStruct* FMaterialDynamicStructure::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEFBXIMPORT_API uint32 Get_Z_Construct_UScriptStruct_FMaterialDynamicStructure_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialDynamicStructure, Z_Construct_UPackage__Script_RuntimeFBXImport(), TEXT("MaterialDynamicStructure"), sizeof(FMaterialDynamicStructure), Get_Z_Construct_UScriptStruct_FMaterialDynamicStructure_Hash());
	}
	return Singleton;
}
template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<FMaterialDynamicStructure>()
{
	return FMaterialDynamicStructure::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialDynamicStructure(FMaterialDynamicStructure::StaticStruct, TEXT("/Script/RuntimeFBXImport"), TEXT("MaterialDynamicStructure"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeFBXImport_StaticRegisterNativesFMaterialDynamicStructure
{
	FScriptStruct_RuntimeFBXImport_StaticRegisterNativesFMaterialDynamicStructure()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialDynamicStructure")),new UScriptStruct::TCppStructOps<FMaterialDynamicStructure>);
	}
} ScriptStruct_RuntimeFBXImport_StaticRegisterNativesFMaterialDynamicStructure;
	struct Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiffuseTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DiffuseTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmissiveTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmissiveTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecularTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpecularTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NormalTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacityTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpacityTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiffuseColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DiffuseColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmissiveColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmissiveColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MaterialName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A structure containing the texture and color information to store the corresponding values read from each Material section from the source FBX file.\n */" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
		{ "ToolTip", "A structure containing the texture and color information to store the corresponding values read from each Material section from the source FBX file." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialDynamicStructure>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_DiffuseTexture_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_DiffuseTexture = { "DiffuseTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialDynamicStructure, DiffuseTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_DiffuseTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_DiffuseTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_EmissiveTexture_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_EmissiveTexture = { "EmissiveTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialDynamicStructure, EmissiveTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_EmissiveTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_EmissiveTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_SpecularTexture_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_SpecularTexture = { "SpecularTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialDynamicStructure, SpecularTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_SpecularTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_SpecularTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_NormalTexture_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_NormalTexture = { "NormalTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialDynamicStructure, NormalTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_NormalTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_NormalTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_OpacityTexture_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_OpacityTexture = { "OpacityTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialDynamicStructure, OpacityTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_OpacityTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_OpacityTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_DiffuseColor_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_DiffuseColor = { "DiffuseColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialDynamicStructure, DiffuseColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_DiffuseColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_DiffuseColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_EmissiveColor_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_EmissiveColor = { "EmissiveColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialDynamicStructure, EmissiveColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_EmissiveColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_EmissiveColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_MaterialName_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_MaterialName = { "MaterialName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialDynamicStructure, MaterialName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_MaterialName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_MaterialName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_DiffuseTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_EmissiveTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_SpecularTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_NormalTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_OpacityTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_DiffuseColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_EmissiveColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::NewProp_MaterialName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
		nullptr,
		&NewStructOps,
		"MaterialDynamicStructure",
		sizeof(FMaterialDynamicStructure),
		alignof(FMaterialDynamicStructure),
		Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialDynamicStructure()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialDynamicStructure_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeFBXImport();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialDynamicStructure"), sizeof(FMaterialDynamicStructure), Get_Z_Construct_UScriptStruct_FMaterialDynamicStructure_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialDynamicStructure_Hash() { return 2723160550U; }
	DEFINE_FUNCTION(URuntimeFBXImportBPLibrary::execGetFiles)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FullPathOfBaseDir);
		P_GET_UBOOL(Z_Param_Recursive);
		P_GET_PROPERTY(FStrProperty,Z_Param_FilterByExtension);
		P_GET_TARRAY_REF(FString,Z_Param_Out_FilenamesOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URuntimeFBXImportBPLibrary::GetFiles(Z_Param_FullPathOfBaseDir,Z_Param_Recursive,Z_Param_FilterByExtension,Z_Param_Out_FilenamesOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeFBXImportBPLibrary::execGetALLFBXSavedFiles)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BaseDirectory);
		P_GET_PROPERTY(FStrProperty,Z_Param_Extension);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UFBXSaveGame*>*)Z_Param__Result=URuntimeFBXImportBPLibrary::GetALLFBXSavedFiles(Z_Param_BaseDirectory,Z_Param_Extension);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeFBXImportBPLibrary::execSaveFBXGame)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveFileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveSlotName);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(AFBXMeshActor,Z_Param_FBXActorToSave);
		P_GET_UBOOL(Z_Param_bOverwrite);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URuntimeFBXImportBPLibrary::SaveFBXGame(Z_Param_SaveFileName,Z_Param_SaveSlotName,Z_Param_WorldContextObject,Z_Param_FBXActorToSave,Z_Param_bOverwrite);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeFBXImportBPLibrary::execCheckHitAtMouseCursor)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_objecthit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URuntimeFBXImportBPLibrary::CheckHitAtMouseCursor(Z_Param_Out_objecthit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeFBXImportBPLibrary::execCheckHitAtCameraLocation)
	{
		P_GET_OBJECT(UCameraComponent,Z_Param_CameraComponent);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_objecthit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URuntimeFBXImportBPLibrary::CheckHitAtCameraLocation(Z_Param_CameraComponent,Z_Param_Out_objecthit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeFBXImportBPLibrary::execLoadTexturefromPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_Texture);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Width);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Height);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URuntimeFBXImportBPLibrary::LoadTexturefromPath(Z_Param_FilePath,Z_Param_Out_Texture,Z_Param_Out_Width,Z_Param_Out_Height);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeFBXImportBPLibrary::execGetOpenFileDialogue)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_FileNames);
		P_GET_PROPERTY(FStrProperty,Z_Param_DialogueTitle);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileTypes);
		P_GET_UBOOL(Z_Param_multiselect);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URuntimeFBXImportBPLibrary::GetOpenFileDialogue(Z_Param_Out_FileNames,Z_Param_DialogueTitle,Z_Param_FileTypes,Z_Param_multiselect);
		P_NATIVE_END;
	}
	void URuntimeFBXImportBPLibrary::StaticRegisterNativesURuntimeFBXImportBPLibrary()
	{
		UClass* Class = URuntimeFBXImportBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckHitAtCameraLocation", &URuntimeFBXImportBPLibrary::execCheckHitAtCameraLocation },
			{ "CheckHitAtMouseCursor", &URuntimeFBXImportBPLibrary::execCheckHitAtMouseCursor },
			{ "GetALLFBXSavedFiles", &URuntimeFBXImportBPLibrary::execGetALLFBXSavedFiles },
			{ "GetFiles", &URuntimeFBXImportBPLibrary::execGetFiles },
			{ "GetOpenFileDialogue", &URuntimeFBXImportBPLibrary::execGetOpenFileDialogue },
			{ "LoadTexturefromPath", &URuntimeFBXImportBPLibrary::execLoadTexturefromPath },
			{ "SaveFBXGame", &URuntimeFBXImportBPLibrary::execSaveFBXGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtCameraLocation_Statics
	{
		struct RuntimeFBXImportBPLibrary_eventCheckHitAtCameraLocation_Parms
		{
			UCameraComponent* CameraComponent;
			FHitResult objecthit;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_objecthit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtCameraLocation_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtCameraLocation_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeFBXImportBPLibrary_eventCheckHitAtCameraLocation_Parms, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtCameraLocation_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtCameraLocation_Statics::NewProp_CameraComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtCameraLocation_Statics::NewProp_objecthit = { "objecthit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeFBXImportBPLibrary_eventCheckHitAtCameraLocation_Parms, objecthit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtCameraLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeFBXImportBPLibrary_eventCheckHitAtCameraLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtCameraLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RuntimeFBXImportBPLibrary_eventCheckHitAtCameraLocation_Parms), &Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtCameraLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtCameraLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtCameraLocation_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtCameraLocation_Statics::NewProp_objecthit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtCameraLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtCameraLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Misc" },
		{ "Comment", "/**\n\x09* Line trace from camera location and returns the hit component.\n\x09* @param  CameraComponent  the camercomponent acts as the start of the line trace.\n\x09* @param  objecthit  The hit result.\n\x09* @returns  bool if the hit is successful.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
		{ "ToolTip", "Line trace from camera location and returns the hit component.\n@param  CameraComponent  the camercomponent acts as the start of the line trace.\n@param  objecthit  The hit result.\n@returns  bool if the hit is successful." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtCameraLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeFBXImportBPLibrary, nullptr, "CheckHitAtCameraLocation", nullptr, nullptr, sizeof(RuntimeFBXImportBPLibrary_eventCheckHitAtCameraLocation_Parms), Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtCameraLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtCameraLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtCameraLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtCameraLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtCameraLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtCameraLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtMouseCursor_Statics
	{
		struct RuntimeFBXImportBPLibrary_eventCheckHitAtMouseCursor_Parms
		{
			FHitResult objecthit;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_objecthit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtMouseCursor_Statics::NewProp_objecthit = { "objecthit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeFBXImportBPLibrary_eventCheckHitAtMouseCursor_Parms, objecthit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtMouseCursor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeFBXImportBPLibrary_eventCheckHitAtMouseCursor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtMouseCursor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RuntimeFBXImportBPLibrary_eventCheckHitAtMouseCursor_Parms), &Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtMouseCursor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtMouseCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtMouseCursor_Statics::NewProp_objecthit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtMouseCursor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtMouseCursor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Misc" },
		{ "Comment", "/**\n\x09* Get Hit component at mouse cursor.\n\x09* @param  objecthit  The hit result.\n\x09* @returns if the hit is successful.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
		{ "ToolTip", "Get Hit component at mouse cursor.\n@param  objecthit  The hit result.\n@returns if the hit is successful." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtMouseCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeFBXImportBPLibrary, nullptr, "CheckHitAtMouseCursor", nullptr, nullptr, sizeof(RuntimeFBXImportBPLibrary_eventCheckHitAtMouseCursor_Parms), Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtMouseCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtMouseCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtMouseCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtMouseCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtMouseCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtMouseCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetALLFBXSavedFiles_Statics
	{
		struct RuntimeFBXImportBPLibrary_eventGetALLFBXSavedFiles_Parms
		{
			FString BaseDirectory;
			FString Extension;
			TArray<UFBXSaveGame*> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BaseDirectory;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Extension;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetALLFBXSavedFiles_Statics::NewProp_BaseDirectory = { "BaseDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeFBXImportBPLibrary_eventGetALLFBXSavedFiles_Parms, BaseDirectory), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetALLFBXSavedFiles_Statics::NewProp_Extension = { "Extension", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeFBXImportBPLibrary_eventGetALLFBXSavedFiles_Parms, Extension), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetALLFBXSavedFiles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFBXSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetALLFBXSavedFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeFBXImportBPLibrary_eventGetALLFBXSavedFiles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetALLFBXSavedFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetALLFBXSavedFiles_Statics::NewProp_BaseDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetALLFBXSavedFiles_Statics::NewProp_Extension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetALLFBXSavedFiles_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetALLFBXSavedFiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetALLFBXSavedFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "LoadandSave" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetALLFBXSavedFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeFBXImportBPLibrary, nullptr, "GetALLFBXSavedFiles", nullptr, nullptr, sizeof(RuntimeFBXImportBPLibrary_eventGetALLFBXSavedFiles_Parms), Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetALLFBXSavedFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetALLFBXSavedFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetALLFBXSavedFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetALLFBXSavedFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetALLFBXSavedFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetALLFBXSavedFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetFiles_Statics
	{
		struct RuntimeFBXImportBPLibrary_eventGetFiles_Parms
		{
			FString FullPathOfBaseDir;
			bool Recursive;
			FString FilterByExtension;
			TArray<FString> FilenamesOut;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FullPathOfBaseDir;
		static void NewProp_Recursive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Recursive;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilterByExtension;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilenamesOut_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FilenamesOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetFiles_Statics::NewProp_FullPathOfBaseDir = { "FullPathOfBaseDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeFBXImportBPLibrary_eventGetFiles_Parms, FullPathOfBaseDir), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetFiles_Statics::NewProp_Recursive_SetBit(void* Obj)
	{
		((RuntimeFBXImportBPLibrary_eventGetFiles_Parms*)Obj)->Recursive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetFiles_Statics::NewProp_Recursive = { "Recursive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RuntimeFBXImportBPLibrary_eventGetFiles_Parms), &Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetFiles_Statics::NewProp_Recursive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetFiles_Statics::NewProp_FilterByExtension = { "FilterByExtension", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeFBXImportBPLibrary_eventGetFiles_Parms, FilterByExtension), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetFiles_Statics::NewProp_FilenamesOut_Inner = { "FilenamesOut", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetFiles_Statics::NewProp_FilenamesOut = { "FilenamesOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeFBXImportBPLibrary_eventGetFiles_Parms, FilenamesOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetFiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeFBXImportBPLibrary_eventGetFiles_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RuntimeFBXImportBPLibrary_eventGetFiles_Parms), &Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetFiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetFiles_Statics::NewProp_FullPathOfBaseDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetFiles_Statics::NewProp_Recursive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetFiles_Statics::NewProp_FilterByExtension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetFiles_Statics::NewProp_FilenamesOut_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetFiles_Statics::NewProp_FilenamesOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetFiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "LoadandSave" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeFBXImportBPLibrary, nullptr, "GetFiles", nullptr, nullptr, sizeof(RuntimeFBXImportBPLibrary_eventGetFiles_Parms), Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetOpenFileDialogue_Statics
	{
		struct RuntimeFBXImportBPLibrary_eventGetOpenFileDialogue_Parms
		{
			TArray<FString> FileNames;
			FString DialogueTitle;
			FString FileTypes;
			bool multiselect;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileNames_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FileNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DialogueTitle;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileTypes;
		static void NewProp_multiselect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_multiselect;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetOpenFileDialogue_Statics::NewProp_FileNames_Inner = { "FileNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetOpenFileDialogue_Statics::NewProp_FileNames = { "FileNames", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeFBXImportBPLibrary_eventGetOpenFileDialogue_Parms, FileNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetOpenFileDialogue_Statics::NewProp_DialogueTitle = { "DialogueTitle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeFBXImportBPLibrary_eventGetOpenFileDialogue_Parms, DialogueTitle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetOpenFileDialogue_Statics::NewProp_FileTypes = { "FileTypes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeFBXImportBPLibrary_eventGetOpenFileDialogue_Parms, FileTypes), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetOpenFileDialogue_Statics::NewProp_multiselect_SetBit(void* Obj)
	{
		((RuntimeFBXImportBPLibrary_eventGetOpenFileDialogue_Parms*)Obj)->multiselect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetOpenFileDialogue_Statics::NewProp_multiselect = { "multiselect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RuntimeFBXImportBPLibrary_eventGetOpenFileDialogue_Parms), &Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetOpenFileDialogue_Statics::NewProp_multiselect_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetOpenFileDialogue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeFBXImportBPLibrary_eventGetOpenFileDialogue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetOpenFileDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RuntimeFBXImportBPLibrary_eventGetOpenFileDialogue_Parms), &Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetOpenFileDialogue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetOpenFileDialogue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetOpenFileDialogue_Statics::NewProp_FileNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetOpenFileDialogue_Statics::NewProp_FileNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetOpenFileDialogue_Statics::NewProp_DialogueTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetOpenFileDialogue_Statics::NewProp_FileTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetOpenFileDialogue_Statics::NewProp_multiselect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetOpenFileDialogue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetOpenFileDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "FIleBrowser" },
		{ "Comment", "/**\n\x09* Opens the File Open Dialogue Window.\n\x09*\n\x09* @param FileNames  The array of filenames selected for openiong.\n\x09* @param DialogueTitle  The Title that appears in the titlebar of the File Open Dialogue window.\n\x09* @param FileTypes  The allowed FileTypes for the File Open Dialogue window.\n\x09* @param multiselect  If user can select multiple files.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
		{ "ToolTip", "Opens the File Open Dialogue Window.\n\n@param FileNames  The array of filenames selected for openiong.\n@param DialogueTitle  The Title that appears in the titlebar of the File Open Dialogue window.\n@param FileTypes  The allowed FileTypes for the File Open Dialogue window.\n@param multiselect  If user can select multiple files." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetOpenFileDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeFBXImportBPLibrary, nullptr, "GetOpenFileDialogue", nullptr, nullptr, sizeof(RuntimeFBXImportBPLibrary_eventGetOpenFileDialogue_Parms), Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetOpenFileDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetOpenFileDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetOpenFileDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetOpenFileDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetOpenFileDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetOpenFileDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeFBXImportBPLibrary_LoadTexturefromPath_Statics
	{
		struct RuntimeFBXImportBPLibrary_eventLoadTexturefromPath_Parms
		{
			FString FilePath;
			UTexture2D* Texture;
			float Width;
			float Height;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_LoadTexturefromPath_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeFBXImportBPLibrary_eventLoadTexturefromPath_Parms, FilePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_LoadTexturefromPath_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeFBXImportBPLibrary_eventLoadTexturefromPath_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_LoadTexturefromPath_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeFBXImportBPLibrary_eventLoadTexturefromPath_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_LoadTexturefromPath_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeFBXImportBPLibrary_eventLoadTexturefromPath_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeFBXImportBPLibrary_LoadTexturefromPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeFBXImportBPLibrary_eventLoadTexturefromPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_LoadTexturefromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RuntimeFBXImportBPLibrary_eventLoadTexturefromPath_Parms), &Z_Construct_UFunction_URuntimeFBXImportBPLibrary_LoadTexturefromPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeFBXImportBPLibrary_LoadTexturefromPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_LoadTexturefromPath_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_LoadTexturefromPath_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_LoadTexturefromPath_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_LoadTexturefromPath_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_LoadTexturefromPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeFBXImportBPLibrary_LoadTexturefromPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Texture" },
		{ "Comment", "/**\n\x09* Loads Texture from the given file path.\n\x09* @param  FilePath  The given filepath to load the texture from.\n\x09* @param  Texture  The loaded output texture.\n\x09* @param  Width  The Width of the texture.\n\x09* @param  Height  The Height of the texture.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
		{ "ToolTip", "Loads Texture from the given file path.\n@param  FilePath  The given filepath to load the texture from.\n@param  Texture  The loaded output texture.\n@param  Width  The Width of the texture.\n@param  Height  The Height of the texture." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_LoadTexturefromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeFBXImportBPLibrary, nullptr, "LoadTexturefromPath", nullptr, nullptr, sizeof(RuntimeFBXImportBPLibrary_eventLoadTexturefromPath_Parms), Z_Construct_UFunction_URuntimeFBXImportBPLibrary_LoadTexturefromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeFBXImportBPLibrary_LoadTexturefromPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeFBXImportBPLibrary_LoadTexturefromPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeFBXImportBPLibrary_LoadTexturefromPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeFBXImportBPLibrary_LoadTexturefromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeFBXImportBPLibrary_LoadTexturefromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeFBXImportBPLibrary_SaveFBXGame_Statics
	{
		struct RuntimeFBXImportBPLibrary_eventSaveFBXGame_Parms
		{
			FString SaveFileName;
			FString SaveSlotName;
			UObject* WorldContextObject;
			AFBXMeshActor* FBXActorToSave;
			bool bOverwrite;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveFileName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveSlotName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FBXActorToSave;
		static void NewProp_bOverwrite_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverwrite;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_SaveFBXGame_Statics::NewProp_SaveFileName = { "SaveFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeFBXImportBPLibrary_eventSaveFBXGame_Parms, SaveFileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_SaveFBXGame_Statics::NewProp_SaveSlotName = { "SaveSlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeFBXImportBPLibrary_eventSaveFBXGame_Parms, SaveSlotName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_SaveFBXGame_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeFBXImportBPLibrary_eventSaveFBXGame_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_SaveFBXGame_Statics::NewProp_FBXActorToSave = { "FBXActorToSave", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeFBXImportBPLibrary_eventSaveFBXGame_Parms, FBXActorToSave), Z_Construct_UClass_AFBXMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeFBXImportBPLibrary_SaveFBXGame_Statics::NewProp_bOverwrite_SetBit(void* Obj)
	{
		((RuntimeFBXImportBPLibrary_eventSaveFBXGame_Parms*)Obj)->bOverwrite = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_SaveFBXGame_Statics::NewProp_bOverwrite = { "bOverwrite", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RuntimeFBXImportBPLibrary_eventSaveFBXGame_Parms), &Z_Construct_UFunction_URuntimeFBXImportBPLibrary_SaveFBXGame_Statics::NewProp_bOverwrite_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeFBXImportBPLibrary_SaveFBXGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeFBXImportBPLibrary_eventSaveFBXGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_SaveFBXGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RuntimeFBXImportBPLibrary_eventSaveFBXGame_Parms), &Z_Construct_UFunction_URuntimeFBXImportBPLibrary_SaveFBXGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeFBXImportBPLibrary_SaveFBXGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_SaveFBXGame_Statics::NewProp_SaveFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_SaveFBXGame_Statics::NewProp_SaveSlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_SaveFBXGame_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_SaveFBXGame_Statics::NewProp_FBXActorToSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_SaveFBXGame_Statics::NewProp_bOverwrite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFBXImportBPLibrary_SaveFBXGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeFBXImportBPLibrary_SaveFBXGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "LoadandSave" },
		{ "CPP_Default_bOverwrite", "true" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeFBXImportBPLibrary_SaveFBXGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeFBXImportBPLibrary, nullptr, "SaveFBXGame", nullptr, nullptr, sizeof(RuntimeFBXImportBPLibrary_eventSaveFBXGame_Parms), Z_Construct_UFunction_URuntimeFBXImportBPLibrary_SaveFBXGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeFBXImportBPLibrary_SaveFBXGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeFBXImportBPLibrary_SaveFBXGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeFBXImportBPLibrary_SaveFBXGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeFBXImportBPLibrary_SaveFBXGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeFBXImportBPLibrary_SaveFBXGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URuntimeFBXImportBPLibrary_NoRegister()
	{
		return URuntimeFBXImportBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeFBXImportBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeFBXImportBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeFBXImportBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtCameraLocation, "CheckHitAtCameraLocation" }, // 3458118471
		{ &Z_Construct_UFunction_URuntimeFBXImportBPLibrary_CheckHitAtMouseCursor, "CheckHitAtMouseCursor" }, // 1150096594
		{ &Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetALLFBXSavedFiles, "GetALLFBXSavedFiles" }, // 114590213
		{ &Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetFiles, "GetFiles" }, // 3618640993
		{ &Z_Construct_UFunction_URuntimeFBXImportBPLibrary_GetOpenFileDialogue, "GetOpenFileDialogue" }, // 2566923690
		{ &Z_Construct_UFunction_URuntimeFBXImportBPLibrary_LoadTexturefromPath, "LoadTexturefromPath" }, // 974027745
		{ &Z_Construct_UFunction_URuntimeFBXImportBPLibrary_SaveFBXGame, "SaveFBXGame" }, // 3426161442
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeFBXImportBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RuntimeFBXImportBPLibrary.h" },
		{ "ModuleRelativePath", "Public/RuntimeFBXImportBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeFBXImportBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeFBXImportBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URuntimeFBXImportBPLibrary_Statics::ClassParams = {
		&URuntimeFBXImportBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeFBXImportBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFBXImportBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeFBXImportBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URuntimeFBXImportBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URuntimeFBXImportBPLibrary, 1170246168);
	template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<URuntimeFBXImportBPLibrary>()
	{
		return URuntimeFBXImportBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeFBXImportBPLibrary(Z_Construct_UClass_URuntimeFBXImportBPLibrary, &URuntimeFBXImportBPLibrary::StaticClass, TEXT("/Script/RuntimeFBXImport"), TEXT("URuntimeFBXImportBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeFBXImportBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
