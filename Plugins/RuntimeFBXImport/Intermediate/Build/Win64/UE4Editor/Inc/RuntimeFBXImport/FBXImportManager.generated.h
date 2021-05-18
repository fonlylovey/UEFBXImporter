// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFBXSaveGame;
class AFBXMeshActor;
struct FFBXSectionStructure;
struct FLinearColor;
class UTexture2D;
class UMaterialInterface;
class UTexture;
class UPrimitiveComponent;
struct FVector;
enum class EFBXCollisionType : uint8;
 struct FProceduralMeshSection;
#ifdef RUNTIMEFBXIMPORT_FBXImportManager_generated_h
#error "FBXImportManager.generated.h already included, missing '#pragma once' in FBXImportManager.h"
#endif
#define RUNTIMEFBXIMPORT_FBXImportManager_generated_h

#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_SPARSE_DATA
#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadFBXFromSaveGameObject); \
	DECLARE_FUNCTION(execGetFBXSection); \
	DECLARE_FUNCTION(execUnHideAll); \
	DECLARE_FUNCTION(execHideSelection); \
	DECLARE_FUNCTION(execIsolateSelection); \
	DECLARE_FUNCTION(execUpdateVectorParam); \
	DECLARE_FUNCTION(execUpdateScalarParam); \
	DECLARE_FUNCTION(execUpdateTextureParam); \
	DECLARE_FUNCTION(execUpdateSectionMaterial); \
	DECLARE_FUNCTION(execGetVectorParamValue); \
	DECLARE_FUNCTION(execGetScalarParamValue); \
	DECLARE_FUNCTION(execGetTextureParamValue); \
	DECLARE_FUNCTION(execSelectNodeSection); \
	DECLARE_FUNCTION(execSelectNode); \
	DECLARE_FUNCTION(execDeSelectAllComponents); \
	DECLARE_FUNCTION(execSelectMeshComponent); \
	DECLARE_FUNCTION(execImportFBXFile); \
	DECLARE_FUNCTION(execFinishImport);


#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadFBXFromSaveGameObject); \
	DECLARE_FUNCTION(execGetFBXSection); \
	DECLARE_FUNCTION(execUnHideAll); \
	DECLARE_FUNCTION(execHideSelection); \
	DECLARE_FUNCTION(execIsolateSelection); \
	DECLARE_FUNCTION(execUpdateVectorParam); \
	DECLARE_FUNCTION(execUpdateScalarParam); \
	DECLARE_FUNCTION(execUpdateTextureParam); \
	DECLARE_FUNCTION(execUpdateSectionMaterial); \
	DECLARE_FUNCTION(execGetVectorParamValue); \
	DECLARE_FUNCTION(execGetScalarParamValue); \
	DECLARE_FUNCTION(execGetTextureParamValue); \
	DECLARE_FUNCTION(execSelectNodeSection); \
	DECLARE_FUNCTION(execSelectNode); \
	DECLARE_FUNCTION(execDeSelectAllComponents); \
	DECLARE_FUNCTION(execSelectMeshComponent); \
	DECLARE_FUNCTION(execImportFBXFile); \
	DECLARE_FUNCTION(execFinishImport);


#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_EVENT_PARMS \
	struct FBXImportManager_eventOnFBXActorSelected_Parms \
	{ \
		AFBXMeshActor* SelectedMeshActor; \
	}; \
	struct FBXImportManager_eventOnFBXNodeProgressChanged_Parms \
	{ \
		int32 NodeIndex; \
		FString NodeName; \
		int32 NodeCount; \
	}; \
	struct FBXImportManager_eventOnFBXSectionImported_Parms \
	{ \
		TMap<int32,FProceduralMeshSection> ProcMeshSectionMap; \
	}; \
	struct FBXImportManager_eventOnFBXSectionProgressChanged_Parms \
	{ \
		int32 SectionIndex; \
		FString SectionName; \
		int32 SectionCount; \
	}; \
	struct FBXImportManager_eventOnImportCompleted_Parms \
	{ \
		AFBXMeshActor* CurrentFBXMeshActor; \
	}; \
	struct FBXImportManager_eventOnNewFBXImportStarted_Parms \
	{ \
		FString FileName; \
	};


#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_CALLBACK_WRAPPERS
#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFBXImportManager(); \
	friend struct Z_Construct_UClass_AFBXImportManager_Statics; \
public: \
	DECLARE_CLASS(AFBXImportManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RuntimeFBXImport"), NO_API) \
	DECLARE_SERIALIZER(AFBXImportManager)


#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAFBXImportManager(); \
	friend struct Z_Construct_UClass_AFBXImportManager_Statics; \
public: \
	DECLARE_CLASS(AFBXImportManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RuntimeFBXImport"), NO_API) \
	DECLARE_SERIALIZER(AFBXImportManager)


#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFBXImportManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFBXImportManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFBXImportManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFBXImportManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFBXImportManager(AFBXImportManager&&); \
	NO_API AFBXImportManager(const AFBXImportManager&); \
public:


#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFBXImportManager(AFBXImportManager&&); \
	NO_API AFBXImportManager(const AFBXImportManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFBXImportManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFBXImportManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFBXImportManager)


#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_PRIVATE_PROPERTY_OFFSET
#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_19_PROLOG \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_EVENT_PARMS


#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_PRIVATE_PROPERTY_OFFSET \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_SPARSE_DATA \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_RPC_WRAPPERS \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_CALLBACK_WRAPPERS \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_INCLASS \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_PRIVATE_PROPERTY_OFFSET \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_SPARSE_DATA \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_CALLBACK_WRAPPERS \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_INCLASS_NO_PURE_DECLS \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<class AFBXImportManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
