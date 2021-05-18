// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFBXImport/Public/FBXMeshImport.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBXMeshImport() {}
// Cross Module References
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UFBXMeshImport_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UFBXMeshImport();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RuntimeFBXImport();
// End Cross Module References
	void UFBXMeshImport::StaticRegisterNativesUFBXMeshImport()
	{
	}
	UClass* Z_Construct_UClass_UFBXMeshImport_NoRegister()
	{
		return UFBXMeshImport::StaticClass();
	}
	struct Z_Construct_UClass_UFBXMeshImport_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFBXMeshImport_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBXMeshImport_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FBXMeshImport.h" },
		{ "ModuleRelativePath", "Public/FBXMeshImport.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFBXMeshImport_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFBXMeshImport>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFBXMeshImport_Statics::ClassParams = {
		&UFBXMeshImport::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFBXMeshImport_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFBXMeshImport_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFBXMeshImport()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFBXMeshImport_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFBXMeshImport, 3873692311);
	template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<UFBXMeshImport>()
	{
		return UFBXMeshImport::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFBXMeshImport(Z_Construct_UClass_UFBXMeshImport, &UFBXMeshImport::StaticClass, TEXT("/Script/RuntimeFBXImport"), TEXT("UFBXMeshImport"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFBXMeshImport);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
