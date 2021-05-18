// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
class UTexture2D;
class UMaterialInterface;
class UTexture;
struct FFBXSectionStructure;
#ifdef RUNTIMEFBXIMPORT_FBXMeshActor_generated_h
#error "FBXMeshActor.generated.h already included, missing '#pragma once' in FBXMeshActor.h"
#endif
#define RUNTIMEFBXIMPORT_FBXMeshActor_generated_h

#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_SPARSE_DATA
#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHideSelection); \
	DECLARE_FUNCTION(execToggleIsolation); \
	DECLARE_FUNCTION(execUpdateVectorParam); \
	DECLARE_FUNCTION(execUpdateScalarParam); \
	DECLARE_FUNCTION(execUpdateTextureParam); \
	DECLARE_FUNCTION(execUpdateSectionMaterial); \
	DECLARE_FUNCTION(execGetVectorParamValue); \
	DECLARE_FUNCTION(execGetScalarParamValue); \
	DECLARE_FUNCTION(execGetTextureParamValue); \
	DECLARE_FUNCTION(execSelectNodeSection); \
	DECLARE_FUNCTION(execSelectNode);


#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHideSelection); \
	DECLARE_FUNCTION(execToggleIsolation); \
	DECLARE_FUNCTION(execUpdateVectorParam); \
	DECLARE_FUNCTION(execUpdateScalarParam); \
	DECLARE_FUNCTION(execUpdateTextureParam); \
	DECLARE_FUNCTION(execUpdateSectionMaterial); \
	DECLARE_FUNCTION(execGetVectorParamValue); \
	DECLARE_FUNCTION(execGetScalarParamValue); \
	DECLARE_FUNCTION(execGetTextureParamValue); \
	DECLARE_FUNCTION(execSelectNodeSection); \
	DECLARE_FUNCTION(execSelectNode);


#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFBXMeshActor(); \
	friend struct Z_Construct_UClass_AFBXMeshActor_Statics; \
public: \
	DECLARE_CLASS(AFBXMeshActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RuntimeFBXImport"), NO_API) \
	DECLARE_SERIALIZER(AFBXMeshActor)


#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAFBXMeshActor(); \
	friend struct Z_Construct_UClass_AFBXMeshActor_Statics; \
public: \
	DECLARE_CLASS(AFBXMeshActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RuntimeFBXImport"), NO_API) \
	DECLARE_SERIALIZER(AFBXMeshActor)


#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFBXMeshActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFBXMeshActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFBXMeshActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFBXMeshActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFBXMeshActor(AFBXMeshActor&&); \
	NO_API AFBXMeshActor(const AFBXMeshActor&); \
public:


#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFBXMeshActor(AFBXMeshActor&&); \
	NO_API AFBXMeshActor(const AFBXMeshActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFBXMeshActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFBXMeshActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFBXMeshActor)


#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_PRIVATE_PROPERTY_OFFSET
#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_22_PROLOG
#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_PRIVATE_PROPERTY_OFFSET \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_SPARSE_DATA \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_RPC_WRAPPERS \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_INCLASS \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_PRIVATE_PROPERTY_OFFSET \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_SPARSE_DATA \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_INCLASS_NO_PURE_DECLS \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<class AFBXMeshActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
