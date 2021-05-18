// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFBXImport/FBXActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBXActor() {}
// Cross Module References
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_AFBXActor_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_AFBXActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RuntimeFBXImport();
// End Cross Module References
	void AFBXActor::StaticRegisterNativesAFBXActor()
	{
	}
	UClass* Z_Construct_UClass_AFBXActor_NoRegister()
	{
		return AFBXActor::StaticClass();
	}
	struct Z_Construct_UClass_AFBXActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFBXActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FBXActor.h" },
		{ "ModuleRelativePath", "FBXActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFBXActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFBXActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFBXActor_Statics::ClassParams = {
		&AFBXActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFBXActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFBXActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFBXActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFBXActor, 4213302091);
	template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<AFBXActor>()
	{
		return AFBXActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFBXActor(Z_Construct_UClass_AFBXActor, &AFBXActor::StaticClass, TEXT("/Script/RuntimeFBXImport"), TEXT("AFBXActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFBXActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
