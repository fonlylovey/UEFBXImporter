// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef RUNTIMEFBXIMPORT_FBXColorPicker_generated_h
#error "FBXColorPicker.generated.h already included, missing '#pragma once' in FBXColorPicker.h"
#endif
#define RUNTIMEFBXIMPORT_FBXColorPicker_generated_h

#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_43_DELEGATE \
struct FBXColorPicker_eventOnLinearColorChanged_Parms \
{ \
	FLinearColor NewColor; \
}; \
static inline void FOnLinearColorChanged_DelegateWrapper(const FMulticastScriptDelegate& OnLinearColorChanged, FLinearColor const& NewColor) \
{ \
	FBXColorPicker_eventOnLinearColorChanged_Parms Parms; \
	Parms.NewColor=NewColor; \
	OnLinearColorChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_SPARSE_DATA
#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetColorPicker);


#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetColorPicker);


#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFBXColorPicker(); \
	friend struct Z_Construct_UClass_UFBXColorPicker_Statics; \
public: \
	DECLARE_CLASS(UFBXColorPicker, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeFBXImport"), NO_API) \
	DECLARE_SERIALIZER(UFBXColorPicker)


#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUFBXColorPicker(); \
	friend struct Z_Construct_UClass_UFBXColorPicker_Statics; \
public: \
	DECLARE_CLASS(UFBXColorPicker, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeFBXImport"), NO_API) \
	DECLARE_SERIALIZER(UFBXColorPicker)


#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFBXColorPicker(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFBXColorPicker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFBXColorPicker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFBXColorPicker); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFBXColorPicker(UFBXColorPicker&&); \
	NO_API UFBXColorPicker(const UFBXColorPicker&); \
public:


#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFBXColorPicker(UFBXColorPicker&&); \
	NO_API UFBXColorPicker(const UFBXColorPicker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFBXColorPicker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFBXColorPicker); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFBXColorPicker)


#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_PRIVATE_PROPERTY_OFFSET
#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_17_PROLOG
#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_PRIVATE_PROPERTY_OFFSET \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_SPARSE_DATA \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_RPC_WRAPPERS \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_INCLASS \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_PRIVATE_PROPERTY_OFFSET \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_SPARSE_DATA \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_INCLASS_NO_PURE_DECLS \
	FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<class UFBXColorPicker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FBXImport4__26_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
