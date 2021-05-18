// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFBXImport/FBXScene.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBXScene() {}
// Cross Module References
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_AFBXScene_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_AFBXScene();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RuntimeFBXImport();
// End Cross Module References
	void AFBXScene::StaticRegisterNativesAFBXScene()
	{
	}
	UClass* Z_Construct_UClass_AFBXScene_NoRegister()
	{
		return AFBXScene::StaticClass();
	}
	struct Z_Construct_UClass_AFBXScene_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFBXScene_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXScene_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FBXScene.h" },
		{ "ModuleRelativePath", "FBXScene.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFBXScene_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFBXScene>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFBXScene_Statics::ClassParams = {
		&AFBXScene::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFBXScene_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXScene_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFBXScene()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFBXScene_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFBXScene, 963967764);
	template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<AFBXScene>()
	{
		return AFBXScene::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFBXScene(Z_Construct_UClass_AFBXScene, &AFBXScene::StaticClass, TEXT("/Script/RuntimeFBXImport"), TEXT("AFBXScene"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFBXScene);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
