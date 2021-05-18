// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFBXImport/Public/Widgets/FBXColorPicker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBXColorPicker() {}
// Cross Module References
	RUNTIMEFBXIMPORT_API UFunction* Z_Construct_UDelegateFunction_UFBXColorPicker_OnLinearColorChanged__DelegateSignature();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UFBXColorPicker();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UFBXColorPicker_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_RuntimeFBXImport();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UFBXColorPicker_OnLinearColorChanged__DelegateSignature_Statics
	{
		struct FBXColorPicker_eventOnLinearColorChanged_Parms
		{
			FLinearColor NewColor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UFBXColorPicker_OnLinearColorChanged__DelegateSignature_Statics::NewProp_NewColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UFBXColorPicker_OnLinearColorChanged__DelegateSignature_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXColorPicker_eventOnLinearColorChanged_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UDelegateFunction_UFBXColorPicker_OnLinearColorChanged__DelegateSignature_Statics::NewProp_NewColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UFBXColorPicker_OnLinearColorChanged__DelegateSignature_Statics::NewProp_NewColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UFBXColorPicker_OnLinearColorChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UFBXColorPicker_OnLinearColorChanged__DelegateSignature_Statics::NewProp_NewColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UFBXColorPicker_OnLinearColorChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/FBXColorPicker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UFBXColorPicker_OnLinearColorChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBXColorPicker, nullptr, "OnLinearColorChanged__DelegateSignature", nullptr, nullptr, sizeof(FBXColorPicker_eventOnLinearColorChanged_Parms), Z_Construct_UDelegateFunction_UFBXColorPicker_OnLinearColorChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UFBXColorPicker_OnLinearColorChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00D30000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UFBXColorPicker_OnLinearColorChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UFBXColorPicker_OnLinearColorChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UFBXColorPicker_OnLinearColorChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UFBXColorPicker_OnLinearColorChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UFBXColorPicker::execSetColorPicker)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InitialColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorPicker(Z_Param_InitialColor);
		P_NATIVE_END;
	}
	void UFBXColorPicker::StaticRegisterNativesUFBXColorPicker()
	{
		UClass* Class = UFBXColorPicker::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetColorPicker", &UFBXColorPicker::execSetColorPicker },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFBXColorPicker_SetColorPicker_Statics
	{
		struct FBXColorPicker_eventSetColorPicker_Parms
		{
			FLinearColor InitialColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFBXColorPicker_SetColorPicker_Statics::NewProp_InitialColor = { "InitialColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBXColorPicker_eventSetColorPicker_Parms, InitialColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBXColorPicker_SetColorPicker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBXColorPicker_SetColorPicker_Statics::NewProp_InitialColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBXColorPicker_SetColorPicker_Statics::Function_MetaDataParams[] = {
		{ "Category", "ColorPicker" },
		{ "Comment", "/**\n\x09* Set Initial Color value of the Color Picker.\n\x09* @param\x09InitialColor  The color to set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Widgets/FBXColorPicker.h" },
		{ "ToolTip", "Set Initial Color value of the Color Picker.\n@param        InitialColor  The color to set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBXColorPicker_SetColorPicker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBXColorPicker, nullptr, "SetColorPicker", nullptr, nullptr, sizeof(FBXColorPicker_eventSetColorPicker_Parms), Z_Construct_UFunction_UFBXColorPicker_SetColorPicker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBXColorPicker_SetColorPicker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBXColorPicker_SetColorPicker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBXColorPicker_SetColorPicker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBXColorPicker_SetColorPicker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBXColorPicker_SetColorPicker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFBXColorPicker_NoRegister()
	{
		return UFBXColorPicker::StaticClass();
	}
	struct Z_Construct_UClass_UFBXColorPicker_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderColorAndOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BorderColorAndOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnColorValueChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnColorValueChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFBXColorPicker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFBXColorPicker_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UFBXColorPicker_OnLinearColorChanged__DelegateSignature, "OnLinearColorChanged__DelegateSignature" }, // 1474615080
		{ &Z_Construct_UFunction_UFBXColorPicker_SetColorPicker, "SetColorPicker" }, // 1116939675
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBXColorPicker_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UMG Widget control which adds a Color Picker in Viewport\n */" },
		{ "IncludePath", "Widgets/FBXColorPicker.h" },
		{ "ModuleRelativePath", "Public/Widgets/FBXColorPicker.h" },
		{ "ToolTip", "UMG Widget control which adds a Color Picker in Viewport" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBXColorPicker_Statics::NewProp_BorderColorAndOpacity_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Background color of the color picker. */" },
		{ "ModuleRelativePath", "Public/Widgets/FBXColorPicker.h" },
		{ "ToolTip", "Background color of the color picker." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFBXColorPicker_Statics::NewProp_BorderColorAndOpacity = { "BorderColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFBXColorPicker, BorderColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UFBXColorPicker_Statics::NewProp_BorderColorAndOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFBXColorPicker_Statics::NewProp_BorderColorAndOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBXColorPicker_Statics::NewProp_OnColorValueChanged_MetaData[] = {
		{ "Category", "ColorPicker" },
		{ "Comment", "/** A delegate being called when the Color value is changed. */" },
		{ "ModuleRelativePath", "Public/Widgets/FBXColorPicker.h" },
		{ "ToolTip", "A delegate being called when the Color value is changed." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFBXColorPicker_Statics::NewProp_OnColorValueChanged = { "OnColorValueChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFBXColorPicker, OnColorValueChanged), Z_Construct_UDelegateFunction_UFBXColorPicker_OnLinearColorChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFBXColorPicker_Statics::NewProp_OnColorValueChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFBXColorPicker_Statics::NewProp_OnColorValueChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFBXColorPicker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFBXColorPicker_Statics::NewProp_BorderColorAndOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFBXColorPicker_Statics::NewProp_OnColorValueChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFBXColorPicker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFBXColorPicker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFBXColorPicker_Statics::ClassParams = {
		&UFBXColorPicker::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFBXColorPicker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFBXColorPicker_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFBXColorPicker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFBXColorPicker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFBXColorPicker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFBXColorPicker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFBXColorPicker, 3590876338);
	template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<UFBXColorPicker>()
	{
		return UFBXColorPicker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFBXColorPicker(Z_Construct_UClass_UFBXColorPicker, &UFBXColorPicker::StaticClass, TEXT("/Script/RuntimeFBXImport"), TEXT("UFBXColorPicker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFBXColorPicker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
