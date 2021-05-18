// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFBXImport/Public/FBXSaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBXSaveGame() {}
// Cross Module References
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UFBXSaveGame_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UFBXSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_RuntimeFBXImport();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FFBXNodeStructure();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	void UFBXSaveGame::StaticRegisterNativesUFBXSaveGame()
	{
	}
	UClass* Z_Construct_UClass_UFBXSaveGame_NoRegister()
	{
		return UFBXSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UFBXSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveSlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveSlotName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeSectionMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeSectionMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeSectionMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_NodeSectionMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFBXSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBXSaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FBXSaveGame.h" },
		{ "ModuleRelativePath", "Public/FBXSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBXSaveGame_Statics::NewProp_ObjectName_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/FBXSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFBXSaveGame_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFBXSaveGame, ObjectName), METADATA_PARAMS(Z_Construct_UClass_UFBXSaveGame_Statics::NewProp_ObjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFBXSaveGame_Statics::NewProp_ObjectName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBXSaveGame_Statics::NewProp_SaveSlotName_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/FBXSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFBXSaveGame_Statics::NewProp_SaveSlotName = { "SaveSlotName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFBXSaveGame, SaveSlotName), METADATA_PARAMS(Z_Construct_UClass_UFBXSaveGame_Statics::NewProp_SaveSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFBXSaveGame_Statics::NewProp_SaveSlotName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFBXSaveGame_Statics::NewProp_NodeSectionMap_ValueProp = { "NodeSectionMap", nullptr, (EPropertyFlags)0x0000008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FFBXNodeStructure, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFBXSaveGame_Statics::NewProp_NodeSectionMap_Key_KeyProp = { "NodeSectionMap_Key", nullptr, (EPropertyFlags)0x0000008000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBXSaveGame_Statics::NewProp_NodeSectionMap_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/FBXSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFBXSaveGame_Statics::NewProp_NodeSectionMap = { "NodeSectionMap", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFBXSaveGame, NodeSectionMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFBXSaveGame_Statics::NewProp_NodeSectionMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFBXSaveGame_Statics::NewProp_NodeSectionMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBXSaveGame_Statics::NewProp_ObjectTransform_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/FBXSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFBXSaveGame_Statics::NewProp_ObjectTransform = { "ObjectTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFBXSaveGame, ObjectTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UFBXSaveGame_Statics::NewProp_ObjectTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFBXSaveGame_Statics::NewProp_ObjectTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFBXSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFBXSaveGame_Statics::NewProp_ObjectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFBXSaveGame_Statics::NewProp_SaveSlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFBXSaveGame_Statics::NewProp_NodeSectionMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFBXSaveGame_Statics::NewProp_NodeSectionMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFBXSaveGame_Statics::NewProp_NodeSectionMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFBXSaveGame_Statics::NewProp_ObjectTransform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFBXSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFBXSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFBXSaveGame_Statics::ClassParams = {
		&UFBXSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFBXSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFBXSaveGame_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFBXSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFBXSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFBXSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFBXSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFBXSaveGame, 293962106);
	template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<UFBXSaveGame>()
	{
		return UFBXSaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFBXSaveGame(Z_Construct_UClass_UFBXSaveGame, &UFBXSaveGame::StaticClass, TEXT("/Script/RuntimeFBXImport"), TEXT("UFBXSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFBXSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
