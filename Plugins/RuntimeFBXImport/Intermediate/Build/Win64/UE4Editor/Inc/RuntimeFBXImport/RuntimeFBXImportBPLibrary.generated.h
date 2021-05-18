// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFBXSaveGame;
class UObject;
class AFBXMeshActor;
struct FHitResult;
class UCameraComponent;
class UTexture2D;
#ifdef RUNTIMEFBXIMPORT_RuntimeFBXImportBPLibrary_generated_h
#error "RuntimeFBXImportBPLibrary.generated.h already included, missing '#pragma once' in RuntimeFBXImportBPLibrary.h"
#endif
#define RUNTIMEFBXIMPORT_RuntimeFBXImportBPLibrary_generated_h

#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_169_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFBXNodeStructure_Statics; \
	RUNTIMEFBXIMPORT_API static class UScriptStruct* StaticStruct();


template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<struct FFBXNodeStructure>();

#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_124_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFBXSectionStructure_Statics; \
	RUNTIMEFBXIMPORT_API static class UScriptStruct* StaticStruct();


template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<struct FFBXSectionStructure>();

#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProceduralMeshSection_Statics; \
	RUNTIMEFBXIMPORT_API static class UScriptStruct* StaticStruct();


template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<struct FProceduralMeshSection>();

#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics; \
	RUNTIMEFBXIMPORT_API static class UScriptStruct* StaticStruct();


template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<struct FMaterialDynamicStructure>();

#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_198_SPARSE_DATA
#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_198_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFiles); \
	DECLARE_FUNCTION(execGetALLFBXSavedFiles); \
	DECLARE_FUNCTION(execSaveFBXGame); \
	DECLARE_FUNCTION(execCheckHitAtMouseCursor); \
	DECLARE_FUNCTION(execCheckHitAtCameraLocation); \
	DECLARE_FUNCTION(execLoadTexturefromPath); \
	DECLARE_FUNCTION(execGetOpenFileDialogue);


#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_198_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFiles); \
	DECLARE_FUNCTION(execGetALLFBXSavedFiles); \
	DECLARE_FUNCTION(execSaveFBXGame); \
	DECLARE_FUNCTION(execCheckHitAtMouseCursor); \
	DECLARE_FUNCTION(execCheckHitAtCameraLocation); \
	DECLARE_FUNCTION(execLoadTexturefromPath); \
	DECLARE_FUNCTION(execGetOpenFileDialogue);


#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_198_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeFBXImportBPLibrary(); \
	friend struct Z_Construct_UClass_URuntimeFBXImportBPLibrary_Statics; \
public: \
	DECLARE_CLASS(URuntimeFBXImportBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeFBXImport"), NO_API) \
	DECLARE_SERIALIZER(URuntimeFBXImportBPLibrary)


#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_198_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeFBXImportBPLibrary(); \
	friend struct Z_Construct_UClass_URuntimeFBXImportBPLibrary_Statics; \
public: \
	DECLARE_CLASS(URuntimeFBXImportBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeFBXImport"), NO_API) \
	DECLARE_SERIALIZER(URuntimeFBXImportBPLibrary)


#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_198_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeFBXImportBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeFBXImportBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeFBXImportBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeFBXImportBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeFBXImportBPLibrary(URuntimeFBXImportBPLibrary&&); \
	NO_API URuntimeFBXImportBPLibrary(const URuntimeFBXImportBPLibrary&); \
public:


#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_198_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeFBXImportBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeFBXImportBPLibrary(URuntimeFBXImportBPLibrary&&); \
	NO_API URuntimeFBXImportBPLibrary(const URuntimeFBXImportBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeFBXImportBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeFBXImportBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeFBXImportBPLibrary)


#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_198_PRIVATE_PROPERTY_OFFSET
#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_195_PROLOG
#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_198_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_198_PRIVATE_PROPERTY_OFFSET \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_198_SPARSE_DATA \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_198_RPC_WRAPPERS \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_198_INCLASS \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_198_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_198_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_198_PRIVATE_PROPERTY_OFFSET \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_198_SPARSE_DATA \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_198_RPC_WRAPPERS_NO_PURE_DECLS \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_198_INCLASS_NO_PURE_DECLS \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_198_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<class URuntimeFBXImportBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h


#define FOREACH_ENUM_EFBXCOLLISIONTYPE(op) \
	op(EFBXCollisionType::NoCollision) \
	op(EFBXCollisionType::MeshCollisionFromSource) \
	op(EFBXCollisionType::CustomCollisionFromSource) 

enum class EFBXCollisionType : uint8;
template<> RUNTIMEFBXIMPORT_API UEnum* StaticEnum<EFBXCollisionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
