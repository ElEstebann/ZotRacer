// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinimapPlugin/Public/MapIconComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapIconComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapIconComponent();
	MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapIconComponent_NoRegister();
	MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapRendererComponent_NoRegister();
	MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapViewComponent_NoRegister();
	MINIMAPPLUGIN_API UEnum* Z_Construct_UEnum_MinimapPlugin_EIconBackgroundInteraction();
	MINIMAPPLUGIN_API UEnum* Z_Construct_UEnum_MinimapPlugin_EIconFogInteraction();
	MINIMAPPLUGIN_API UEnum* Z_Construct_UEnum_MinimapPlugin_EIconSizeUnit();
	MINIMAPPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapIconAppearanceChangedSignature__DelegateSignature();
	MINIMAPPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapIconClickedSignature__DelegateSignature();
	MINIMAPPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapIconDestroyedSignature__DelegateSignature();
	MINIMAPPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapIconEnteredViewSignature__DelegateSignature();
	MINIMAPPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverEndSignature__DelegateSignature();
	MINIMAPPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverStartSignature__DelegateSignature();
	MINIMAPPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapIconLeftViewSignature__DelegateSignature();
	MINIMAPPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialChangedSignature__DelegateSignature();
	MINIMAPPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialInstancesChangedSignature__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MinimapPlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialChangedSignature__DelegateSignature_Statics
	{
		struct _Script_MinimapPlugin_eventMapIconMaterialChangedSignature_Parms
		{
			UMapIconComponent* MapIcon;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MapIcon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialChangedSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialChangedSignature__DelegateSignature_Statics::NewProp_MapIcon = { "MapIcon", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapIconMaterialChangedSignature_Parms, MapIcon), Z_Construct_UClass_UMapIconComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialChangedSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialChangedSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialChangedSignature__DelegateSignature_Statics::NewProp_MapIcon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// MapIconComponent event signatures\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "MapIconComponent event signatures" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin, nullptr, "MapIconMaterialChangedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialChangedSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapIconMaterialChangedSignature_Parms), Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialChangedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialChangedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialInstancesChangedSignature__DelegateSignature_Statics
	{
		struct _Script_MinimapPlugin_eventMapIconMaterialInstancesChangedSignature_Parms
		{
			UMapIconComponent* MapIcon;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MapIcon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialInstancesChangedSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialInstancesChangedSignature__DelegateSignature_Statics::NewProp_MapIcon = { "MapIcon", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapIconMaterialInstancesChangedSignature_Parms, MapIcon), Z_Construct_UClass_UMapIconComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialInstancesChangedSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialInstancesChangedSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialInstancesChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialInstancesChangedSignature__DelegateSignature_Statics::NewProp_MapIcon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialInstancesChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialInstancesChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin, nullptr, "MapIconMaterialInstancesChangedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialInstancesChangedSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapIconMaterialInstancesChangedSignature_Parms), Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialInstancesChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialInstancesChangedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialInstancesChangedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialInstancesChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialInstancesChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialInstancesChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MinimapPlugin_MapIconAppearanceChangedSignature__DelegateSignature_Statics
	{
		struct _Script_MinimapPlugin_eventMapIconAppearanceChangedSignature_Parms
		{
			UMapIconComponent* MapIcon;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MapIcon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapIconAppearanceChangedSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapIconAppearanceChangedSignature__DelegateSignature_Statics::NewProp_MapIcon = { "MapIcon", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapIconAppearanceChangedSignature_Parms, MapIcon), Z_Construct_UClass_UMapIconComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconAppearanceChangedSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconAppearanceChangedSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinimapPlugin_MapIconAppearanceChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapIconAppearanceChangedSignature__DelegateSignature_Statics::NewProp_MapIcon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapIconAppearanceChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MinimapPlugin_MapIconAppearanceChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin, nullptr, "MapIconAppearanceChangedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconAppearanceChangedSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapIconAppearanceChangedSignature_Parms), Z_Construct_UDelegateFunction_MinimapPlugin_MapIconAppearanceChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconAppearanceChangedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconAppearanceChangedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconAppearanceChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapIconAppearanceChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinimapPlugin_MapIconAppearanceChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MinimapPlugin_MapIconEnteredViewSignature__DelegateSignature_Statics
	{
		struct _Script_MinimapPlugin_eventMapIconEnteredViewSignature_Parms
		{
			UMapIconComponent* MapIcon;
			UMapViewComponent* View;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MapIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_View_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_View;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapIconEnteredViewSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapIconEnteredViewSignature__DelegateSignature_Statics::NewProp_MapIcon = { "MapIcon", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapIconEnteredViewSignature_Parms, MapIcon), Z_Construct_UClass_UMapIconComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconEnteredViewSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconEnteredViewSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapIconEnteredViewSignature__DelegateSignature_Statics::NewProp_View_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapIconEnteredViewSignature__DelegateSignature_Statics::NewProp_View = { "View", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapIconEnteredViewSignature_Parms, View), Z_Construct_UClass_UMapViewComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconEnteredViewSignature__DelegateSignature_Statics::NewProp_View_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconEnteredViewSignature__DelegateSignature_Statics::NewProp_View_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinimapPlugin_MapIconEnteredViewSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapIconEnteredViewSignature__DelegateSignature_Statics::NewProp_MapIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapIconEnteredViewSignature__DelegateSignature_Statics::NewProp_View,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapIconEnteredViewSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MinimapPlugin_MapIconEnteredViewSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin, nullptr, "MapIconEnteredViewSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconEnteredViewSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapIconEnteredViewSignature_Parms), Z_Construct_UDelegateFunction_MinimapPlugin_MapIconEnteredViewSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconEnteredViewSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconEnteredViewSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconEnteredViewSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapIconEnteredViewSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinimapPlugin_MapIconEnteredViewSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MinimapPlugin_MapIconLeftViewSignature__DelegateSignature_Statics
	{
		struct _Script_MinimapPlugin_eventMapIconLeftViewSignature_Parms
		{
			UMapIconComponent* MapIcon;
			UMapViewComponent* View;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MapIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_View_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_View;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapIconLeftViewSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapIconLeftViewSignature__DelegateSignature_Statics::NewProp_MapIcon = { "MapIcon", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapIconLeftViewSignature_Parms, MapIcon), Z_Construct_UClass_UMapIconComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconLeftViewSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconLeftViewSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapIconLeftViewSignature__DelegateSignature_Statics::NewProp_View_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapIconLeftViewSignature__DelegateSignature_Statics::NewProp_View = { "View", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapIconLeftViewSignature_Parms, View), Z_Construct_UClass_UMapViewComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconLeftViewSignature__DelegateSignature_Statics::NewProp_View_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconLeftViewSignature__DelegateSignature_Statics::NewProp_View_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinimapPlugin_MapIconLeftViewSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapIconLeftViewSignature__DelegateSignature_Statics::NewProp_MapIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapIconLeftViewSignature__DelegateSignature_Statics::NewProp_View,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapIconLeftViewSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MinimapPlugin_MapIconLeftViewSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin, nullptr, "MapIconLeftViewSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconLeftViewSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapIconLeftViewSignature_Parms), Z_Construct_UDelegateFunction_MinimapPlugin_MapIconLeftViewSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconLeftViewSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconLeftViewSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconLeftViewSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapIconLeftViewSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinimapPlugin_MapIconLeftViewSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MinimapPlugin_MapIconDestroyedSignature__DelegateSignature_Statics
	{
		struct _Script_MinimapPlugin_eventMapIconDestroyedSignature_Parms
		{
			UMapIconComponent* MapIcon;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MapIcon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapIconDestroyedSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapIconDestroyedSignature__DelegateSignature_Statics::NewProp_MapIcon = { "MapIcon", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapIconDestroyedSignature_Parms, MapIcon), Z_Construct_UClass_UMapIconComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconDestroyedSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconDestroyedSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinimapPlugin_MapIconDestroyedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapIconDestroyedSignature__DelegateSignature_Statics::NewProp_MapIcon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapIconDestroyedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MinimapPlugin_MapIconDestroyedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin, nullptr, "MapIconDestroyedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconDestroyedSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapIconDestroyedSignature_Parms), Z_Construct_UDelegateFunction_MinimapPlugin_MapIconDestroyedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconDestroyedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconDestroyedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconDestroyedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapIconDestroyedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinimapPlugin_MapIconDestroyedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverStartSignature__DelegateSignature_Statics
	{
		struct _Script_MinimapPlugin_eventMapIconHoverStartSignature_Parms
		{
			UMapIconComponent* MapIcon;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MapIcon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverStartSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverStartSignature__DelegateSignature_Statics::NewProp_MapIcon = { "MapIcon", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapIconHoverStartSignature_Parms, MapIcon), Z_Construct_UClass_UMapIconComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverStartSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverStartSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverStartSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverStartSignature__DelegateSignature_Statics::NewProp_MapIcon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverStartSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverStartSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin, nullptr, "MapIconHoverStartSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverStartSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapIconHoverStartSignature_Parms), Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverStartSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverStartSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverStartSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverStartSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverStartSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverStartSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverEndSignature__DelegateSignature_Statics
	{
		struct _Script_MinimapPlugin_eventMapIconHoverEndSignature_Parms
		{
			UMapIconComponent* MapIcon;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MapIcon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverEndSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverEndSignature__DelegateSignature_Statics::NewProp_MapIcon = { "MapIcon", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapIconHoverEndSignature_Parms, MapIcon), Z_Construct_UClass_UMapIconComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverEndSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverEndSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverEndSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverEndSignature__DelegateSignature_Statics::NewProp_MapIcon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverEndSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverEndSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin, nullptr, "MapIconHoverEndSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverEndSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapIconHoverEndSignature_Parms), Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverEndSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverEndSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverEndSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverEndSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverEndSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverEndSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MinimapPlugin_MapIconClickedSignature__DelegateSignature_Statics
	{
		struct _Script_MinimapPlugin_eventMapIconClickedSignature_Parms
		{
			UMapIconComponent* MapIcon;
			bool bIsLeftMouse;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MapIcon;
		static void NewProp_bIsLeftMouse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLeftMouse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapIconClickedSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapIconClickedSignature__DelegateSignature_Statics::NewProp_MapIcon = { "MapIcon", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapIconClickedSignature_Parms, MapIcon), Z_Construct_UClass_UMapIconComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconClickedSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconClickedSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData)) };
	void Z_Construct_UDelegateFunction_MinimapPlugin_MapIconClickedSignature__DelegateSignature_Statics::NewProp_bIsLeftMouse_SetBit(void* Obj)
	{
		((_Script_MinimapPlugin_eventMapIconClickedSignature_Parms*)Obj)->bIsLeftMouse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapIconClickedSignature__DelegateSignature_Statics::NewProp_bIsLeftMouse = { "bIsLeftMouse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_MinimapPlugin_eventMapIconClickedSignature_Parms), &Z_Construct_UDelegateFunction_MinimapPlugin_MapIconClickedSignature__DelegateSignature_Statics::NewProp_bIsLeftMouse_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinimapPlugin_MapIconClickedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapIconClickedSignature__DelegateSignature_Statics::NewProp_MapIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapIconClickedSignature__DelegateSignature_Statics::NewProp_bIsLeftMouse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapIconClickedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MinimapPlugin_MapIconClickedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin, nullptr, "MapIconClickedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconClickedSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapIconClickedSignature_Parms), Z_Construct_UDelegateFunction_MinimapPlugin_MapIconClickedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconClickedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconClickedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconClickedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapIconClickedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinimapPlugin_MapIconClickedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UMapIconComponent::execReceiveClicked)
	{
		P_GET_UBOOL(Z_Param_bIsLeftMouseButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveClicked(Z_Param_bIsLeftMouseButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execReceiveHoverEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveHoverEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execReceiveHoverStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveHoverStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execIsRenderedInView)
	{
		P_GET_OBJECT(UMapViewComponent,Z_Param_View);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRenderedInView(Z_Param_View);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execMarkRenderedInView)
	{
		P_GET_OBJECT(UMapViewComponent,Z_Param_View);
		P_GET_UBOOL(Z_Param_bNewIsRendered);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MarkRenderedInView(Z_Param_View,Z_Param_bNewIsRendered);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execGetIconFogRevealThreshold)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetIconFogRevealThreshold();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execSetIconFogRevealThreshold)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewFogRevealThreshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIconFogRevealThreshold(Z_Param_NewFogRevealThreshold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execGetIconFogInteraction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EIconFogInteraction*)Z_Param__Result=P_THIS->GetIconFogInteraction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execSetIconFogInteraction)
	{
		P_GET_ENUM(EIconFogInteraction,Z_Param_NewFogInteraction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIconFogInteraction(EIconFogInteraction(Z_Param_NewFogInteraction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execGetIconBackgroundInteraction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EIconBackgroundInteraction*)Z_Param__Result=P_THIS->GetIconBackgroundInteraction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execSetIconBackgroundInteraction)
	{
		P_GET_ENUM(EIconBackgroundInteraction,Z_Param_NewBackgroundInteraction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIconBackgroundInteraction(EIconBackgroundInteraction(Z_Param_NewBackgroundInteraction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execGetObjectiveArrowSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetObjectiveArrowSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execSetObjectiveArrowSize)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewObjectiveArrowSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetObjectiveArrowSize(Z_Param_NewObjectiveArrowSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execDoesObjectiveArrowRotate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesObjectiveArrowRotate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execSetObjectiveArrowRotates)
	{
		P_GET_UBOOL(Z_Param_bNewRotates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetObjectiveArrowRotates(Z_Param_bNewRotates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execGetObjectiveArrowTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetObjectiveArrowTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execSetObjectiveArrowTexture)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_NewTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetObjectiveArrowTexture(Z_Param_NewTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execIsObjectiveArrowEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsObjectiveArrowEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execSetObjectiveArrowEnabled)
	{
		P_GET_UBOOL(Z_Param_bNewObjectiveArrowEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetObjectiveArrowEnabled(Z_Param_bNewObjectiveArrowEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execGetIconZOrder)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetIconZOrder();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execSetIconZOrder)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewZOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIconZOrder(Z_Param_NewZOrder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execGetIconDrawColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetIconDrawColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execSetIconDrawColor)
	{
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_NewDrawColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIconDrawColor(Z_Param_Out_NewDrawColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execGetIconSizeUnit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EIconSizeUnit*)Z_Param__Result=P_THIS->GetIconSizeUnit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execGetIconSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetIconSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execSetIconSize)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewIconSize);
		P_GET_ENUM(EIconSizeUnit,Z_Param_NewIconSizeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIconSize(Z_Param_NewIconSize,EIconSizeUnit(Z_Param_NewIconSizeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execDoesIconRotate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesIconRotate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execSetIconRotates)
	{
		P_GET_UBOOL(Z_Param_bNewRotates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIconRotates(Z_Param_bNewRotates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execIsIconInteractable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsIconInteractable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execSetIconInteractable)
	{
		P_GET_UBOOL(Z_Param_bNewInteractable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIconInteractable(Z_Param_bNewInteractable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execIsIconVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsIconVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execSetIconVisible)
	{
		P_GET_UBOOL(Z_Param_bNewVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIconVisible(Z_Param_bNewVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execGetIconTooltipText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetIconTooltipText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execSetIconTooltipText)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewIconName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIconTooltipText(Z_Param_NewIconName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execGetIconTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetIconTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execSetIconTexture)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_NewIcon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIconTexture(Z_Param_NewIcon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execGetIconMaterialInstancesForCanvas)
	{
		P_GET_TARRAY_REF(UMaterialInstanceDynamic*,Z_Param_Out_MaterialInstances);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetIconMaterialInstancesForCanvas(Z_Param_Out_MaterialInstances);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execResetIconMaterialForCanvas)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetIconMaterialForCanvas();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execGetObjectiveArrowMaterialForCanvas)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetObjectiveArrowMaterialForCanvas();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execGetIconMaterialForCanvas)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetIconMaterialForCanvas();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execSetIconMaterialForCanvas)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIconMaterialForCanvas(Z_Param_NewMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execRegisterMaterialInstanceFromUMG)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_IconWidget);
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MatInst);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterMaterialInstanceFromUMG(Z_Param_IconWidget,Z_Param_MatInst);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execGetIconMaterialInstancesForUMG)
	{
		P_GET_TARRAY_REF(UMaterialInstanceDynamic*,Z_Param_Out_MaterialInstances);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetIconMaterialInstancesForUMG(Z_Param_Out_MaterialInstances);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execResetIconMaterialForUMG)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetIconMaterialForUMG();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execGetObjectiveArrowMaterialForUMG)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetObjectiveArrowMaterialForUMG();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execGetIconMaterialForUMG)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetIconMaterialForUMG();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapIconComponent::execSetIconMaterialForUMG)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIconMaterialForUMG(Z_Param_NewMaterial);
		P_NATIVE_END;
	}
	void UMapIconComponent::StaticRegisterNativesUMapIconComponent()
	{
		UClass* Class = UMapIconComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoesIconRotate", &UMapIconComponent::execDoesIconRotate },
			{ "DoesObjectiveArrowRotate", &UMapIconComponent::execDoesObjectiveArrowRotate },
			{ "GetIconBackgroundInteraction", &UMapIconComponent::execGetIconBackgroundInteraction },
			{ "GetIconDrawColor", &UMapIconComponent::execGetIconDrawColor },
			{ "GetIconFogInteraction", &UMapIconComponent::execGetIconFogInteraction },
			{ "GetIconFogRevealThreshold", &UMapIconComponent::execGetIconFogRevealThreshold },
			{ "GetIconMaterialForCanvas", &UMapIconComponent::execGetIconMaterialForCanvas },
			{ "GetIconMaterialForUMG", &UMapIconComponent::execGetIconMaterialForUMG },
			{ "GetIconMaterialInstancesForCanvas", &UMapIconComponent::execGetIconMaterialInstancesForCanvas },
			{ "GetIconMaterialInstancesForUMG", &UMapIconComponent::execGetIconMaterialInstancesForUMG },
			{ "GetIconSize", &UMapIconComponent::execGetIconSize },
			{ "GetIconSizeUnit", &UMapIconComponent::execGetIconSizeUnit },
			{ "GetIconTexture", &UMapIconComponent::execGetIconTexture },
			{ "GetIconTooltipText", &UMapIconComponent::execGetIconTooltipText },
			{ "GetIconZOrder", &UMapIconComponent::execGetIconZOrder },
			{ "GetObjectiveArrowMaterialForCanvas", &UMapIconComponent::execGetObjectiveArrowMaterialForCanvas },
			{ "GetObjectiveArrowMaterialForUMG", &UMapIconComponent::execGetObjectiveArrowMaterialForUMG },
			{ "GetObjectiveArrowSize", &UMapIconComponent::execGetObjectiveArrowSize },
			{ "GetObjectiveArrowTexture", &UMapIconComponent::execGetObjectiveArrowTexture },
			{ "IsIconInteractable", &UMapIconComponent::execIsIconInteractable },
			{ "IsIconVisible", &UMapIconComponent::execIsIconVisible },
			{ "IsObjectiveArrowEnabled", &UMapIconComponent::execIsObjectiveArrowEnabled },
			{ "IsRenderedInView", &UMapIconComponent::execIsRenderedInView },
			{ "MarkRenderedInView", &UMapIconComponent::execMarkRenderedInView },
			{ "ReceiveClicked", &UMapIconComponent::execReceiveClicked },
			{ "ReceiveHoverEnd", &UMapIconComponent::execReceiveHoverEnd },
			{ "ReceiveHoverStart", &UMapIconComponent::execReceiveHoverStart },
			{ "RegisterMaterialInstanceFromUMG", &UMapIconComponent::execRegisterMaterialInstanceFromUMG },
			{ "ResetIconMaterialForCanvas", &UMapIconComponent::execResetIconMaterialForCanvas },
			{ "ResetIconMaterialForUMG", &UMapIconComponent::execResetIconMaterialForUMG },
			{ "SetIconBackgroundInteraction", &UMapIconComponent::execSetIconBackgroundInteraction },
			{ "SetIconDrawColor", &UMapIconComponent::execSetIconDrawColor },
			{ "SetIconFogInteraction", &UMapIconComponent::execSetIconFogInteraction },
			{ "SetIconFogRevealThreshold", &UMapIconComponent::execSetIconFogRevealThreshold },
			{ "SetIconInteractable", &UMapIconComponent::execSetIconInteractable },
			{ "SetIconMaterialForCanvas", &UMapIconComponent::execSetIconMaterialForCanvas },
			{ "SetIconMaterialForUMG", &UMapIconComponent::execSetIconMaterialForUMG },
			{ "SetIconRotates", &UMapIconComponent::execSetIconRotates },
			{ "SetIconSize", &UMapIconComponent::execSetIconSize },
			{ "SetIconTexture", &UMapIconComponent::execSetIconTexture },
			{ "SetIconTooltipText", &UMapIconComponent::execSetIconTooltipText },
			{ "SetIconVisible", &UMapIconComponent::execSetIconVisible },
			{ "SetIconZOrder", &UMapIconComponent::execSetIconZOrder },
			{ "SetObjectiveArrowEnabled", &UMapIconComponent::execSetObjectiveArrowEnabled },
			{ "SetObjectiveArrowRotates", &UMapIconComponent::execSetObjectiveArrowRotates },
			{ "SetObjectiveArrowSize", &UMapIconComponent::execSetObjectiveArrowSize },
			{ "SetObjectiveArrowTexture", &UMapIconComponent::execSetObjectiveArrowTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMapIconComponent_DoesIconRotate_Statics
	{
		struct MapIconComponent_eventDoesIconRotate_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMapIconComponent_DoesIconRotate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MapIconComponent_eventDoesIconRotate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapIconComponent_DoesIconRotate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MapIconComponent_eventDoesIconRotate_Parms), &Z_Construct_UFunction_UMapIconComponent_DoesIconRotate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_DoesIconRotate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_DoesIconRotate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_DoesIconRotate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves whether the icon should rotate to represent its actor's rotation\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Retrieves whether the icon should rotate to represent its actor's rotation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_DoesIconRotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "DoesIconRotate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_DoesIconRotate_Statics::MapIconComponent_eventDoesIconRotate_Parms), Z_Construct_UFunction_UMapIconComponent_DoesIconRotate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_DoesIconRotate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_DoesIconRotate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_DoesIconRotate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_DoesIconRotate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_DoesIconRotate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_DoesObjectiveArrowRotate_Statics
	{
		struct MapIconComponent_eventDoesObjectiveArrowRotate_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMapIconComponent_DoesObjectiveArrowRotate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MapIconComponent_eventDoesObjectiveArrowRotate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapIconComponent_DoesObjectiveArrowRotate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MapIconComponent_eventDoesObjectiveArrowRotate_Parms), &Z_Construct_UFunction_UMapIconComponent_DoesObjectiveArrowRotate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_DoesObjectiveArrowRotate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_DoesObjectiveArrowRotate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_DoesObjectiveArrowRotate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves whether the icon should point to its actor when shown at the minimap's edge\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Retrieves whether the icon should point to its actor when shown at the minimap's edge" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_DoesObjectiveArrowRotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "DoesObjectiveArrowRotate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_DoesObjectiveArrowRotate_Statics::MapIconComponent_eventDoesObjectiveArrowRotate_Parms), Z_Construct_UFunction_UMapIconComponent_DoesObjectiveArrowRotate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_DoesObjectiveArrowRotate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_DoesObjectiveArrowRotate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_DoesObjectiveArrowRotate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_DoesObjectiveArrowRotate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_DoesObjectiveArrowRotate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_GetIconBackgroundInteraction_Statics
	{
		struct MapIconComponent_eventGetIconBackgroundInteraction_Parms
		{
			EIconBackgroundInteraction ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMapIconComponent_GetIconBackgroundInteraction_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMapIconComponent_GetIconBackgroundInteraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventGetIconBackgroundInteraction_Parms, ReturnValue), Z_Construct_UEnum_MinimapPlugin_EIconBackgroundInteraction, METADATA_PARAMS(nullptr, 0) }; // 2520601228
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_GetIconBackgroundInteraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_GetIconBackgroundInteraction_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_GetIconBackgroundInteraction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_GetIconBackgroundInteraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves how the icon's visibility reacts to multi-level backgrounds.\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Retrieves how the icon's visibility reacts to multi-level backgrounds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_GetIconBackgroundInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "GetIconBackgroundInteraction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_GetIconBackgroundInteraction_Statics::MapIconComponent_eventGetIconBackgroundInteraction_Parms), Z_Construct_UFunction_UMapIconComponent_GetIconBackgroundInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetIconBackgroundInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_GetIconBackgroundInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetIconBackgroundInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_GetIconBackgroundInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_GetIconBackgroundInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_GetIconDrawColor_Statics
	{
		struct MapIconComponent_eventGetIconDrawColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapIconComponent_GetIconDrawColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventGetIconDrawColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_GetIconDrawColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_GetIconDrawColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_GetIconDrawColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves the icon's draw color, which is multiplied by the texture sample to obtain the final color\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Retrieves the icon's draw color, which is multiplied by the texture sample to obtain the final color" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_GetIconDrawColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "GetIconDrawColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_GetIconDrawColor_Statics::MapIconComponent_eventGetIconDrawColor_Parms), Z_Construct_UFunction_UMapIconComponent_GetIconDrawColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetIconDrawColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_GetIconDrawColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetIconDrawColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_GetIconDrawColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_GetIconDrawColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_GetIconFogInteraction_Statics
	{
		struct MapIconComponent_eventGetIconFogInteraction_Parms
		{
			EIconFogInteraction ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMapIconComponent_GetIconFogInteraction_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMapIconComponent_GetIconFogInteraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventGetIconFogInteraction_Parms, ReturnValue), Z_Construct_UEnum_MinimapPlugin_EIconFogInteraction, METADATA_PARAMS(nullptr, 0) }; // 1328590264
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_GetIconFogInteraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_GetIconFogInteraction_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_GetIconFogInteraction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_GetIconFogInteraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves how the icon's visibility reacts to fog.\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Retrieves how the icon's visibility reacts to fog." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_GetIconFogInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "GetIconFogInteraction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_GetIconFogInteraction_Statics::MapIconComponent_eventGetIconFogInteraction_Parms), Z_Construct_UFunction_UMapIconComponent_GetIconFogInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetIconFogInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_GetIconFogInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetIconFogInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_GetIconFogInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_GetIconFogInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_GetIconFogRevealThreshold_Statics
	{
		struct MapIconComponent_eventGetIconFogRevealThreshold_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapIconComponent_GetIconFogRevealThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventGetIconFogRevealThreshold_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_GetIconFogRevealThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_GetIconFogRevealThreshold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_GetIconFogRevealThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves the required fog reveal factor to make the icon appear\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Retrieves the required fog reveal factor to make the icon appear" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_GetIconFogRevealThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "GetIconFogRevealThreshold", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_GetIconFogRevealThreshold_Statics::MapIconComponent_eventGetIconFogRevealThreshold_Parms), Z_Construct_UFunction_UMapIconComponent_GetIconFogRevealThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetIconFogRevealThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_GetIconFogRevealThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetIconFogRevealThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_GetIconFogRevealThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_GetIconFogRevealThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_GetIconMaterialForCanvas_Statics
	{
		struct MapIconComponent_eventGetIconMaterialForCanvas_Parms
		{
			UMaterialInterface* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapIconComponent_GetIconMaterialForCanvas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventGetIconMaterialForCanvas_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_GetIconMaterialForCanvas_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_GetIconMaterialForCanvas_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_GetIconMaterialForCanvas_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves the material used to render the icon on UCanvas\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Retrieves the material used to render the icon on UCanvas" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_GetIconMaterialForCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "GetIconMaterialForCanvas", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_GetIconMaterialForCanvas_Statics::MapIconComponent_eventGetIconMaterialForCanvas_Parms), Z_Construct_UFunction_UMapIconComponent_GetIconMaterialForCanvas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetIconMaterialForCanvas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_GetIconMaterialForCanvas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetIconMaterialForCanvas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_GetIconMaterialForCanvas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_GetIconMaterialForCanvas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_GetIconMaterialForUMG_Statics
	{
		struct MapIconComponent_eventGetIconMaterialForUMG_Parms
		{
			UMaterialInterface* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapIconComponent_GetIconMaterialForUMG_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventGetIconMaterialForUMG_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_GetIconMaterialForUMG_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_GetIconMaterialForUMG_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_GetIconMaterialForUMG_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves the material used to render the icon in UMG\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Retrieves the material used to render the icon in UMG" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_GetIconMaterialForUMG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "GetIconMaterialForUMG", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_GetIconMaterialForUMG_Statics::MapIconComponent_eventGetIconMaterialForUMG_Parms), Z_Construct_UFunction_UMapIconComponent_GetIconMaterialForUMG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetIconMaterialForUMG_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_GetIconMaterialForUMG_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetIconMaterialForUMG_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_GetIconMaterialForUMG()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_GetIconMaterialForUMG_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForCanvas_Statics
	{
		struct MapIconComponent_eventGetIconMaterialInstancesForCanvas_Parms
		{
			TArray<UMaterialInstanceDynamic*> MaterialInstances;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstances_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialInstances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForCanvas_Statics::NewProp_MaterialInstances_Inner = { "MaterialInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForCanvas_Statics::NewProp_MaterialInstances = { "MaterialInstances", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventGetIconMaterialInstancesForCanvas_Parms, MaterialInstances), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForCanvas_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForCanvas_Statics::NewProp_MaterialInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForCanvas_Statics::NewProp_MaterialInstances,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForCanvas_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Gets all current canvas icon material instances for this icon\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Gets all current canvas icon material instances for this icon" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "GetIconMaterialInstancesForCanvas", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForCanvas_Statics::MapIconComponent_eventGetIconMaterialInstancesForCanvas_Parms), Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForCanvas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForCanvas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForCanvas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForCanvas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForCanvas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForCanvas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForUMG_Statics
	{
		struct MapIconComponent_eventGetIconMaterialInstancesForUMG_Parms
		{
			TArray<UMaterialInstanceDynamic*> MaterialInstances;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstances_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialInstances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForUMG_Statics::NewProp_MaterialInstances_Inner = { "MaterialInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForUMG_Statics::NewProp_MaterialInstances = { "MaterialInstances", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventGetIconMaterialInstancesForUMG_Parms, MaterialInstances), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForUMG_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForUMG_Statics::NewProp_MaterialInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForUMG_Statics::NewProp_MaterialInstances,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForUMG_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Gets all current UMG icon material instances for this icon\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Gets all current UMG icon material instances for this icon" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForUMG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "GetIconMaterialInstancesForUMG", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForUMG_Statics::MapIconComponent_eventGetIconMaterialInstancesForUMG_Parms), Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForUMG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForUMG_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForUMG_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForUMG_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForUMG()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForUMG_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_GetIconSize_Statics
	{
		struct MapIconComponent_eventGetIconSize_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapIconComponent_GetIconSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventGetIconSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_GetIconSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_GetIconSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_GetIconSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves the icon's render size in pixels prior to DPI scaling\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Retrieves the icon's render size in pixels prior to DPI scaling" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_GetIconSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "GetIconSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_GetIconSize_Statics::MapIconComponent_eventGetIconSize_Parms), Z_Construct_UFunction_UMapIconComponent_GetIconSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetIconSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_GetIconSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetIconSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_GetIconSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_GetIconSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_GetIconSizeUnit_Statics
	{
		struct MapIconComponent_eventGetIconSizeUnit_Parms
		{
			EIconSizeUnit ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMapIconComponent_GetIconSizeUnit_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMapIconComponent_GetIconSizeUnit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventGetIconSizeUnit_Parms, ReturnValue), Z_Construct_UEnum_MinimapPlugin_EIconSizeUnit, METADATA_PARAMS(nullptr, 0) }; // 3756336531
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_GetIconSizeUnit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_GetIconSizeUnit_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_GetIconSizeUnit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_GetIconSizeUnit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves whether the icon size is defined in pixels (prior to applying DPI scaling) or world units.\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Retrieves whether the icon size is defined in pixels (prior to applying DPI scaling) or world units." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_GetIconSizeUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "GetIconSizeUnit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_GetIconSizeUnit_Statics::MapIconComponent_eventGetIconSizeUnit_Parms), Z_Construct_UFunction_UMapIconComponent_GetIconSizeUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetIconSizeUnit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_GetIconSizeUnit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetIconSizeUnit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_GetIconSizeUnit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_GetIconSizeUnit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_GetIconTexture_Statics
	{
		struct MapIconComponent_eventGetIconTexture_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapIconComponent_GetIconTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventGetIconTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_GetIconTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_GetIconTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_GetIconTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves the icon's texture\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Retrieves the icon's texture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_GetIconTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "GetIconTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_GetIconTexture_Statics::MapIconComponent_eventGetIconTexture_Parms), Z_Construct_UFunction_UMapIconComponent_GetIconTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetIconTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_GetIconTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetIconTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_GetIconTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_GetIconTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_GetIconTooltipText_Statics
	{
		struct MapIconComponent_eventGetIconTooltipText_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMapIconComponent_GetIconTooltipText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventGetIconTooltipText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_GetIconTooltipText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_GetIconTooltipText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_GetIconTooltipText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves the icon's name to be displayed in mouse-over tooltips\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Retrieves the icon's name to be displayed in mouse-over tooltips" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_GetIconTooltipText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "GetIconTooltipText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_GetIconTooltipText_Statics::MapIconComponent_eventGetIconTooltipText_Parms), Z_Construct_UFunction_UMapIconComponent_GetIconTooltipText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetIconTooltipText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_GetIconTooltipText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetIconTooltipText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_GetIconTooltipText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_GetIconTooltipText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_GetIconZOrder_Statics
	{
		struct MapIconComponent_eventGetIconZOrder_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMapIconComponent_GetIconZOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventGetIconZOrder_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_GetIconZOrder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_GetIconZOrder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_GetIconZOrder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves the icon's Z order. Icons with higher Z-Order are rendered on top.\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Retrieves the icon's Z order. Icons with higher Z-Order are rendered on top." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_GetIconZOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "GetIconZOrder", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_GetIconZOrder_Statics::MapIconComponent_eventGetIconZOrder_Parms), Z_Construct_UFunction_UMapIconComponent_GetIconZOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetIconZOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_GetIconZOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetIconZOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_GetIconZOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_GetIconZOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowMaterialForCanvas_Statics
	{
		struct MapIconComponent_eventGetObjectiveArrowMaterialForCanvas_Parms
		{
			UMaterialInterface* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowMaterialForCanvas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventGetObjectiveArrowMaterialForCanvas_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowMaterialForCanvas_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowMaterialForCanvas_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowMaterialForCanvas_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves the material used to render the objective arrow on UCanvas\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Retrieves the material used to render the objective arrow on UCanvas" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowMaterialForCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "GetObjectiveArrowMaterialForCanvas", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowMaterialForCanvas_Statics::MapIconComponent_eventGetObjectiveArrowMaterialForCanvas_Parms), Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowMaterialForCanvas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowMaterialForCanvas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowMaterialForCanvas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowMaterialForCanvas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowMaterialForCanvas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowMaterialForCanvas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowMaterialForUMG_Statics
	{
		struct MapIconComponent_eventGetObjectiveArrowMaterialForUMG_Parms
		{
			UMaterialInterface* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowMaterialForUMG_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventGetObjectiveArrowMaterialForUMG_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowMaterialForUMG_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowMaterialForUMG_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowMaterialForUMG_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves the material used to render the objective arrow in UMG\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Retrieves the material used to render the objective arrow in UMG" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowMaterialForUMG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "GetObjectiveArrowMaterialForUMG", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowMaterialForUMG_Statics::MapIconComponent_eventGetObjectiveArrowMaterialForUMG_Parms), Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowMaterialForUMG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowMaterialForUMG_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowMaterialForUMG_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowMaterialForUMG_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowMaterialForUMG()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowMaterialForUMG_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowSize_Statics
	{
		struct MapIconComponent_eventGetObjectiveArrowSize_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventGetObjectiveArrowSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves the icon's render size in pixels prior to DPI scaling\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Retrieves the icon's render size in pixels prior to DPI scaling" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "GetObjectiveArrowSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowSize_Statics::MapIconComponent_eventGetObjectiveArrowSize_Parms), Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowTexture_Statics
	{
		struct MapIconComponent_eventGetObjectiveArrowTexture_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventGetObjectiveArrowTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves what texture to use when showing at the minimap's edge\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Retrieves what texture to use when showing at the minimap's edge" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "GetObjectiveArrowTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowTexture_Statics::MapIconComponent_eventGetObjectiveArrowTexture_Parms), Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_IsIconInteractable_Statics
	{
		struct MapIconComponent_eventIsIconInteractable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMapIconComponent_IsIconInteractable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MapIconComponent_eventIsIconInteractable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapIconComponent_IsIconInteractable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MapIconComponent_eventIsIconInteractable_Parms), &Z_Construct_UFunction_UMapIconComponent_IsIconInteractable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_IsIconInteractable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_IsIconInteractable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_IsIconInteractable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves whether the icon is interactable. If the icon is not interactable, it will not respond to mouse-over or click events.\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Retrieves whether the icon is interactable. If the icon is not interactable, it will not respond to mouse-over or click events." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_IsIconInteractable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "IsIconInteractable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_IsIconInteractable_Statics::MapIconComponent_eventIsIconInteractable_Parms), Z_Construct_UFunction_UMapIconComponent_IsIconInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_IsIconInteractable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_IsIconInteractable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_IsIconInteractable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_IsIconInteractable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_IsIconInteractable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_IsIconVisible_Statics
	{
		struct MapIconComponent_eventIsIconVisible_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMapIconComponent_IsIconVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MapIconComponent_eventIsIconVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapIconComponent_IsIconVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MapIconComponent_eventIsIconVisible_Parms), &Z_Construct_UFunction_UMapIconComponent_IsIconVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_IsIconVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_IsIconVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_IsIconVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves whether the icon is visible on minimap. This is simply its visibility setting and not related from whether it is currently in view.\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Retrieves whether the icon is visible on minimap. This is simply its visibility setting and not related from whether it is currently in view." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_IsIconVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "IsIconVisible", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_IsIconVisible_Statics::MapIconComponent_eventIsIconVisible_Parms), Z_Construct_UFunction_UMapIconComponent_IsIconVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_IsIconVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_IsIconVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_IsIconVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_IsIconVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_IsIconVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_IsObjectiveArrowEnabled_Statics
	{
		struct MapIconComponent_eventIsObjectiveArrowEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMapIconComponent_IsObjectiveArrowEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MapIconComponent_eventIsObjectiveArrowEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapIconComponent_IsObjectiveArrowEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MapIconComponent_eventIsObjectiveArrowEnabled_Parms), &Z_Construct_UFunction_UMapIconComponent_IsObjectiveArrowEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_IsObjectiveArrowEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_IsObjectiveArrowEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_IsObjectiveArrowEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves whether the icon should stay at the minimap's edge when its actor is falls outside the minimap's view range\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Retrieves whether the icon should stay at the minimap's edge when its actor is falls outside the minimap's view range" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_IsObjectiveArrowEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "IsObjectiveArrowEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_IsObjectiveArrowEnabled_Statics::MapIconComponent_eventIsObjectiveArrowEnabled_Parms), Z_Construct_UFunction_UMapIconComponent_IsObjectiveArrowEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_IsObjectiveArrowEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_IsObjectiveArrowEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_IsObjectiveArrowEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_IsObjectiveArrowEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_IsObjectiveArrowEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_IsRenderedInView_Statics
	{
		struct MapIconComponent_eventIsRenderedInView_Parms
		{
			UMapViewComponent* View;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_View_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_View;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_IsRenderedInView_Statics::NewProp_View_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapIconComponent_IsRenderedInView_Statics::NewProp_View = { "View", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventIsRenderedInView_Parms, View), Z_Construct_UClass_UMapViewComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_IsRenderedInView_Statics::NewProp_View_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_IsRenderedInView_Statics::NewProp_View_MetaData)) };
	void Z_Construct_UFunction_UMapIconComponent_IsRenderedInView_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MapIconComponent_eventIsRenderedInView_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapIconComponent_IsRenderedInView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MapIconComponent_eventIsRenderedInView_Parms), &Z_Construct_UFunction_UMapIconComponent_IsRenderedInView_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_IsRenderedInView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_IsRenderedInView_Statics::NewProp_View,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_IsRenderedInView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_IsRenderedInView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves whether the icon is currently visible in a specific view\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Retrieves whether the icon is currently visible in a specific view" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_IsRenderedInView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "IsRenderedInView", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_IsRenderedInView_Statics::MapIconComponent_eventIsRenderedInView_Parms), Z_Construct_UFunction_UMapIconComponent_IsRenderedInView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_IsRenderedInView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_IsRenderedInView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_IsRenderedInView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_IsRenderedInView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_IsRenderedInView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_MarkRenderedInView_Statics
	{
		struct MapIconComponent_eventMarkRenderedInView_Parms
		{
			UMapViewComponent* View;
			bool bNewIsRendered;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_View_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_View;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNewIsRendered_MetaData[];
#endif
		static void NewProp_bNewIsRendered_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewIsRendered;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_MarkRenderedInView_Statics::NewProp_View_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapIconComponent_MarkRenderedInView_Statics::NewProp_View = { "View", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventMarkRenderedInView_Parms, View), Z_Construct_UClass_UMapViewComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_MarkRenderedInView_Statics::NewProp_View_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_MarkRenderedInView_Statics::NewProp_View_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_MarkRenderedInView_Statics::NewProp_bNewIsRendered_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMapIconComponent_MarkRenderedInView_Statics::NewProp_bNewIsRendered_SetBit(void* Obj)
	{
		((MapIconComponent_eventMarkRenderedInView_Parms*)Obj)->bNewIsRendered = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapIconComponent_MarkRenderedInView_Statics::NewProp_bNewIsRendered = { "bNewIsRendered", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MapIconComponent_eventMarkRenderedInView_Parms), &Z_Construct_UFunction_UMapIconComponent_MarkRenderedInView_Statics::NewProp_bNewIsRendered_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_MarkRenderedInView_Statics::NewProp_bNewIsRendered_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_MarkRenderedInView_Statics::NewProp_bNewIsRendered_MetaData)) };
	void Z_Construct_UFunction_UMapIconComponent_MarkRenderedInView_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MapIconComponent_eventMarkRenderedInView_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapIconComponent_MarkRenderedInView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MapIconComponent_eventMarkRenderedInView_Parms), &Z_Construct_UFunction_UMapIconComponent_MarkRenderedInView_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_MarkRenderedInView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_MarkRenderedInView_Statics::NewProp_View,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_MarkRenderedInView_Statics::NewProp_bNewIsRendered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_MarkRenderedInView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_MarkRenderedInView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Mark the icon as rendered or not rendered in a specific view, firing an OnIconEnteredView or OnIconLeftView event\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Mark the icon as rendered or not rendered in a specific view, firing an OnIconEnteredView or OnIconLeftView event" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_MarkRenderedInView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "MarkRenderedInView", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_MarkRenderedInView_Statics::MapIconComponent_eventMarkRenderedInView_Parms), Z_Construct_UFunction_UMapIconComponent_MarkRenderedInView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_MarkRenderedInView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_MarkRenderedInView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_MarkRenderedInView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_MarkRenderedInView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_MarkRenderedInView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_ReceiveClicked_Statics
	{
		struct MapIconComponent_eventReceiveClicked_Parms
		{
			bool bIsLeftMouseButton;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLeftMouseButton_MetaData[];
#endif
		static void NewProp_bIsLeftMouseButton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLeftMouseButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_ReceiveClicked_Statics::NewProp_bIsLeftMouseButton_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMapIconComponent_ReceiveClicked_Statics::NewProp_bIsLeftMouseButton_SetBit(void* Obj)
	{
		((MapIconComponent_eventReceiveClicked_Parms*)Obj)->bIsLeftMouseButton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapIconComponent_ReceiveClicked_Statics::NewProp_bIsLeftMouseButton = { "bIsLeftMouseButton", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MapIconComponent_eventReceiveClicked_Parms), &Z_Construct_UFunction_UMapIconComponent_ReceiveClicked_Statics::NewProp_bIsLeftMouseButton_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_ReceiveClicked_Statics::NewProp_bIsLeftMouseButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_ReceiveClicked_Statics::NewProp_bIsLeftMouseButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_ReceiveClicked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_ReceiveClicked_Statics::NewProp_bIsLeftMouseButton,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_ReceiveClicked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Notify icon that it is clicked, firing an OnIconClicked event\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Notify icon that it is clicked, firing an OnIconClicked event" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_ReceiveClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "ReceiveClicked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_ReceiveClicked_Statics::MapIconComponent_eventReceiveClicked_Parms), Z_Construct_UFunction_UMapIconComponent_ReceiveClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_ReceiveClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_ReceiveClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_ReceiveClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_ReceiveClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_ReceiveClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_ReceiveHoverEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_ReceiveHoverEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Mark the icon as no longer being mouse-overed, firing an OnIconHoverEnd event\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Mark the icon as no longer being mouse-overed, firing an OnIconHoverEnd event" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_ReceiveHoverEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "ReceiveHoverEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_ReceiveHoverEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_ReceiveHoverEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_ReceiveHoverEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_ReceiveHoverEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_ReceiveHoverStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_ReceiveHoverStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Mark the icon as currently being mouse-overed, firing an OnIconHoverStart event\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Mark the icon as currently being mouse-overed, firing an OnIconHoverStart event" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_ReceiveHoverStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "ReceiveHoverStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_ReceiveHoverStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_ReceiveHoverStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_ReceiveHoverStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_ReceiveHoverStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_RegisterMaterialInstanceFromUMG_Statics
	{
		struct MapIconComponent_eventRegisterMaterialInstanceFromUMG_Parms
		{
			UUserWidget* IconWidget;
			UMaterialInstanceDynamic* MatInst;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IconWidget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MatInst;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_RegisterMaterialInstanceFromUMG_Statics::NewProp_IconWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapIconComponent_RegisterMaterialInstanceFromUMG_Statics::NewProp_IconWidget = { "IconWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventRegisterMaterialInstanceFromUMG_Parms, IconWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_RegisterMaterialInstanceFromUMG_Statics::NewProp_IconWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_RegisterMaterialInstanceFromUMG_Statics::NewProp_IconWidget_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapIconComponent_RegisterMaterialInstanceFromUMG_Statics::NewProp_MatInst = { "MatInst", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventRegisterMaterialInstanceFromUMG_Parms, MatInst), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_RegisterMaterialInstanceFromUMG_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_RegisterMaterialInstanceFromUMG_Statics::NewProp_IconWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_RegisterMaterialInstanceFromUMG_Statics::NewProp_MatInst,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_RegisterMaterialInstanceFromUMG_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Internal use only: UMG icons register their material instances\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Internal use only: UMG icons register their material instances" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_RegisterMaterialInstanceFromUMG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "RegisterMaterialInstanceFromUMG", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_RegisterMaterialInstanceFromUMG_Statics::MapIconComponent_eventRegisterMaterialInstanceFromUMG_Parms), Z_Construct_UFunction_UMapIconComponent_RegisterMaterialInstanceFromUMG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_RegisterMaterialInstanceFromUMG_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_RegisterMaterialInstanceFromUMG_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_RegisterMaterialInstanceFromUMG_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_RegisterMaterialInstanceFromUMG()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_RegisterMaterialInstanceFromUMG_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_ResetIconMaterialForCanvas_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_ResetIconMaterialForCanvas_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Resets the material used to render the icon on UCanvas to its initial material\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Resets the material used to render the icon on UCanvas to its initial material" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_ResetIconMaterialForCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "ResetIconMaterialForCanvas", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_ResetIconMaterialForCanvas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_ResetIconMaterialForCanvas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_ResetIconMaterialForCanvas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_ResetIconMaterialForCanvas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_ResetIconMaterialForUMG_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_ResetIconMaterialForUMG_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Resets the material used to render the icon in UMG to its initial material\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Resets the material used to render the icon in UMG to its initial material" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_ResetIconMaterialForUMG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "ResetIconMaterialForUMG", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_ResetIconMaterialForUMG_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_ResetIconMaterialForUMG_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_ResetIconMaterialForUMG()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_ResetIconMaterialForUMG_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_SetIconBackgroundInteraction_Statics
	{
		struct MapIconComponent_eventSetIconBackgroundInteraction_Parms
		{
			EIconBackgroundInteraction NewBackgroundInteraction;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewBackgroundInteraction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewBackgroundInteraction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewBackgroundInteraction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMapIconComponent_SetIconBackgroundInteraction_Statics::NewProp_NewBackgroundInteraction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_SetIconBackgroundInteraction_Statics::NewProp_NewBackgroundInteraction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMapIconComponent_SetIconBackgroundInteraction_Statics::NewProp_NewBackgroundInteraction = { "NewBackgroundInteraction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventSetIconBackgroundInteraction_Parms, NewBackgroundInteraction), Z_Construct_UEnum_MinimapPlugin_EIconBackgroundInteraction, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_SetIconBackgroundInteraction_Statics::NewProp_NewBackgroundInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconBackgroundInteraction_Statics::NewProp_NewBackgroundInteraction_MetaData)) }; // 2520601228
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_SetIconBackgroundInteraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_SetIconBackgroundInteraction_Statics::NewProp_NewBackgroundInteraction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_SetIconBackgroundInteraction_Statics::NewProp_NewBackgroundInteraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_SetIconBackgroundInteraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Sets how the icon's visibility reacts to multi-level backgrounds.\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Sets how the icon's visibility reacts to multi-level backgrounds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_SetIconBackgroundInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "SetIconBackgroundInteraction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_SetIconBackgroundInteraction_Statics::MapIconComponent_eventSetIconBackgroundInteraction_Parms), Z_Construct_UFunction_UMapIconComponent_SetIconBackgroundInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconBackgroundInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_SetIconBackgroundInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconBackgroundInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_SetIconBackgroundInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_SetIconBackgroundInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_SetIconDrawColor_Statics
	{
		struct MapIconComponent_eventSetIconDrawColor_Parms
		{
			FLinearColor NewDrawColor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewDrawColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewDrawColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_SetIconDrawColor_Statics::NewProp_NewDrawColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapIconComponent_SetIconDrawColor_Statics::NewProp_NewDrawColor = { "NewDrawColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventSetIconDrawColor_Parms, NewDrawColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_SetIconDrawColor_Statics::NewProp_NewDrawColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconDrawColor_Statics::NewProp_NewDrawColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_SetIconDrawColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_SetIconDrawColor_Statics::NewProp_NewDrawColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_SetIconDrawColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Sets the icon's draw color, which is multiplied by the texture sample to obtain the final color\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Sets the icon's draw color, which is multiplied by the texture sample to obtain the final color" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_SetIconDrawColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "SetIconDrawColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_SetIconDrawColor_Statics::MapIconComponent_eventSetIconDrawColor_Parms), Z_Construct_UFunction_UMapIconComponent_SetIconDrawColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconDrawColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_SetIconDrawColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconDrawColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_SetIconDrawColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_SetIconDrawColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_SetIconFogInteraction_Statics
	{
		struct MapIconComponent_eventSetIconFogInteraction_Parms
		{
			EIconFogInteraction NewFogInteraction;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewFogInteraction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewFogInteraction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewFogInteraction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMapIconComponent_SetIconFogInteraction_Statics::NewProp_NewFogInteraction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_SetIconFogInteraction_Statics::NewProp_NewFogInteraction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMapIconComponent_SetIconFogInteraction_Statics::NewProp_NewFogInteraction = { "NewFogInteraction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventSetIconFogInteraction_Parms, NewFogInteraction), Z_Construct_UEnum_MinimapPlugin_EIconFogInteraction, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_SetIconFogInteraction_Statics::NewProp_NewFogInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconFogInteraction_Statics::NewProp_NewFogInteraction_MetaData)) }; // 1328590264
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_SetIconFogInteraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_SetIconFogInteraction_Statics::NewProp_NewFogInteraction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_SetIconFogInteraction_Statics::NewProp_NewFogInteraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_SetIconFogInteraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Sets how the icon's visibility reacts to fog.\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Sets how the icon's visibility reacts to fog." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_SetIconFogInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "SetIconFogInteraction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_SetIconFogInteraction_Statics::MapIconComponent_eventSetIconFogInteraction_Parms), Z_Construct_UFunction_UMapIconComponent_SetIconFogInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconFogInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_SetIconFogInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconFogInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_SetIconFogInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_SetIconFogInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_SetIconFogRevealThreshold_Statics
	{
		struct MapIconComponent_eventSetIconFogRevealThreshold_Parms
		{
			float NewFogRevealThreshold;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewFogRevealThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFogRevealThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_SetIconFogRevealThreshold_Statics::NewProp_NewFogRevealThreshold_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapIconComponent_SetIconFogRevealThreshold_Statics::NewProp_NewFogRevealThreshold = { "NewFogRevealThreshold", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventSetIconFogRevealThreshold_Parms, NewFogRevealThreshold), METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_SetIconFogRevealThreshold_Statics::NewProp_NewFogRevealThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconFogRevealThreshold_Statics::NewProp_NewFogRevealThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_SetIconFogRevealThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_SetIconFogRevealThreshold_Statics::NewProp_NewFogRevealThreshold,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_SetIconFogRevealThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Sets the required fog reveal factor to make the icon appear\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Sets the required fog reveal factor to make the icon appear" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_SetIconFogRevealThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "SetIconFogRevealThreshold", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_SetIconFogRevealThreshold_Statics::MapIconComponent_eventSetIconFogRevealThreshold_Parms), Z_Construct_UFunction_UMapIconComponent_SetIconFogRevealThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconFogRevealThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_SetIconFogRevealThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconFogRevealThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_SetIconFogRevealThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_SetIconFogRevealThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_SetIconInteractable_Statics
	{
		struct MapIconComponent_eventSetIconInteractable_Parms
		{
			bool bNewInteractable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNewInteractable_MetaData[];
#endif
		static void NewProp_bNewInteractable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewInteractable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_SetIconInteractable_Statics::NewProp_bNewInteractable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMapIconComponent_SetIconInteractable_Statics::NewProp_bNewInteractable_SetBit(void* Obj)
	{
		((MapIconComponent_eventSetIconInteractable_Parms*)Obj)->bNewInteractable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapIconComponent_SetIconInteractable_Statics::NewProp_bNewInteractable = { "bNewInteractable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MapIconComponent_eventSetIconInteractable_Parms), &Z_Construct_UFunction_UMapIconComponent_SetIconInteractable_Statics::NewProp_bNewInteractable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_SetIconInteractable_Statics::NewProp_bNewInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconInteractable_Statics::NewProp_bNewInteractable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_SetIconInteractable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_SetIconInteractable_Statics::NewProp_bNewInteractable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_SetIconInteractable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Sets whether the icon is interactable. If the icon is not interactable, it will not respond to mouse-over or click events.\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Sets whether the icon is interactable. If the icon is not interactable, it will not respond to mouse-over or click events." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_SetIconInteractable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "SetIconInteractable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_SetIconInteractable_Statics::MapIconComponent_eventSetIconInteractable_Parms), Z_Construct_UFunction_UMapIconComponent_SetIconInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconInteractable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_SetIconInteractable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconInteractable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_SetIconInteractable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_SetIconInteractable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_SetIconMaterialForCanvas_Statics
	{
		struct MapIconComponent_eventSetIconMaterialForCanvas_Parms
		{
			UMaterialInterface* NewMaterial;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapIconComponent_SetIconMaterialForCanvas_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventSetIconMaterialForCanvas_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_SetIconMaterialForCanvas_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_SetIconMaterialForCanvas_Statics::NewProp_NewMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_SetIconMaterialForCanvas_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Sets the material used to render the icon on UCanvas\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Sets the material used to render the icon on UCanvas" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_SetIconMaterialForCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "SetIconMaterialForCanvas", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_SetIconMaterialForCanvas_Statics::MapIconComponent_eventSetIconMaterialForCanvas_Parms), Z_Construct_UFunction_UMapIconComponent_SetIconMaterialForCanvas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconMaterialForCanvas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_SetIconMaterialForCanvas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconMaterialForCanvas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_SetIconMaterialForCanvas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_SetIconMaterialForCanvas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_SetIconMaterialForUMG_Statics
	{
		struct MapIconComponent_eventSetIconMaterialForUMG_Parms
		{
			UMaterialInterface* NewMaterial;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapIconComponent_SetIconMaterialForUMG_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventSetIconMaterialForUMG_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_SetIconMaterialForUMG_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_SetIconMaterialForUMG_Statics::NewProp_NewMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_SetIconMaterialForUMG_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Sets the material used to render the icon in UMG\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Sets the material used to render the icon in UMG" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_SetIconMaterialForUMG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "SetIconMaterialForUMG", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_SetIconMaterialForUMG_Statics::MapIconComponent_eventSetIconMaterialForUMG_Parms), Z_Construct_UFunction_UMapIconComponent_SetIconMaterialForUMG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconMaterialForUMG_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_SetIconMaterialForUMG_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconMaterialForUMG_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_SetIconMaterialForUMG()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_SetIconMaterialForUMG_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_SetIconRotates_Statics
	{
		struct MapIconComponent_eventSetIconRotates_Parms
		{
			bool bNewRotates;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNewRotates_MetaData[];
#endif
		static void NewProp_bNewRotates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewRotates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_SetIconRotates_Statics::NewProp_bNewRotates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMapIconComponent_SetIconRotates_Statics::NewProp_bNewRotates_SetBit(void* Obj)
	{
		((MapIconComponent_eventSetIconRotates_Parms*)Obj)->bNewRotates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapIconComponent_SetIconRotates_Statics::NewProp_bNewRotates = { "bNewRotates", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MapIconComponent_eventSetIconRotates_Parms), &Z_Construct_UFunction_UMapIconComponent_SetIconRotates_Statics::NewProp_bNewRotates_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_SetIconRotates_Statics::NewProp_bNewRotates_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconRotates_Statics::NewProp_bNewRotates_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_SetIconRotates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_SetIconRotates_Statics::NewProp_bNewRotates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_SetIconRotates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Sets whether the icon will rotate to represent its actor's rotation\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Sets whether the icon will rotate to represent its actor's rotation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_SetIconRotates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "SetIconRotates", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_SetIconRotates_Statics::MapIconComponent_eventSetIconRotates_Parms), Z_Construct_UFunction_UMapIconComponent_SetIconRotates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconRotates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_SetIconRotates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconRotates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_SetIconRotates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_SetIconRotates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_SetIconSize_Statics
	{
		struct MapIconComponent_eventSetIconSize_Parms
		{
			float NewIconSize;
			EIconSizeUnit NewIconSizeUnit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewIconSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewIconSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewIconSizeUnit_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewIconSizeUnit_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewIconSizeUnit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_SetIconSize_Statics::NewProp_NewIconSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapIconComponent_SetIconSize_Statics::NewProp_NewIconSize = { "NewIconSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventSetIconSize_Parms, NewIconSize), METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_SetIconSize_Statics::NewProp_NewIconSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconSize_Statics::NewProp_NewIconSize_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMapIconComponent_SetIconSize_Statics::NewProp_NewIconSizeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_SetIconSize_Statics::NewProp_NewIconSizeUnit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMapIconComponent_SetIconSize_Statics::NewProp_NewIconSizeUnit = { "NewIconSizeUnit", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventSetIconSize_Parms, NewIconSizeUnit), Z_Construct_UEnum_MinimapPlugin_EIconSizeUnit, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_SetIconSize_Statics::NewProp_NewIconSizeUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconSize_Statics::NewProp_NewIconSizeUnit_MetaData)) }; // 3756336531
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_SetIconSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_SetIconSize_Statics::NewProp_NewIconSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_SetIconSize_Statics::NewProp_NewIconSizeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_SetIconSize_Statics::NewProp_NewIconSizeUnit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_SetIconSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Sets the icon's render size in pixels prior to DPI scaling\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Sets the icon's render size in pixels prior to DPI scaling" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_SetIconSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "SetIconSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_SetIconSize_Statics::MapIconComponent_eventSetIconSize_Parms), Z_Construct_UFunction_UMapIconComponent_SetIconSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_SetIconSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_SetIconSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_SetIconSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_SetIconTexture_Statics
	{
		struct MapIconComponent_eventSetIconTexture_Parms
		{
			UTexture2D* NewIcon;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewIcon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapIconComponent_SetIconTexture_Statics::NewProp_NewIcon = { "NewIcon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventSetIconTexture_Parms, NewIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_SetIconTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_SetIconTexture_Statics::NewProp_NewIcon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_SetIconTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Sets the icon's texture\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Sets the icon's texture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_SetIconTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "SetIconTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_SetIconTexture_Statics::MapIconComponent_eventSetIconTexture_Parms), Z_Construct_UFunction_UMapIconComponent_SetIconTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_SetIconTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_SetIconTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_SetIconTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_SetIconTooltipText_Statics
	{
		struct MapIconComponent_eventSetIconTooltipText_Parms
		{
			FName NewIconName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewIconName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMapIconComponent_SetIconTooltipText_Statics::NewProp_NewIconName = { "NewIconName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventSetIconTooltipText_Parms, NewIconName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_SetIconTooltipText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_SetIconTooltipText_Statics::NewProp_NewIconName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_SetIconTooltipText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Sets the icon's name to be displayed in mouse-over tooltips\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Sets the icon's name to be displayed in mouse-over tooltips" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_SetIconTooltipText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "SetIconTooltipText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_SetIconTooltipText_Statics::MapIconComponent_eventSetIconTooltipText_Parms), Z_Construct_UFunction_UMapIconComponent_SetIconTooltipText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconTooltipText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_SetIconTooltipText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconTooltipText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_SetIconTooltipText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_SetIconTooltipText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_SetIconVisible_Statics
	{
		struct MapIconComponent_eventSetIconVisible_Parms
		{
			bool bNewVisible;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNewVisible_MetaData[];
#endif
		static void NewProp_bNewVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_SetIconVisible_Statics::NewProp_bNewVisible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMapIconComponent_SetIconVisible_Statics::NewProp_bNewVisible_SetBit(void* Obj)
	{
		((MapIconComponent_eventSetIconVisible_Parms*)Obj)->bNewVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapIconComponent_SetIconVisible_Statics::NewProp_bNewVisible = { "bNewVisible", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MapIconComponent_eventSetIconVisible_Parms), &Z_Construct_UFunction_UMapIconComponent_SetIconVisible_Statics::NewProp_bNewVisible_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_SetIconVisible_Statics::NewProp_bNewVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconVisible_Statics::NewProp_bNewVisible_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_SetIconVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_SetIconVisible_Statics::NewProp_bNewVisible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_SetIconVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Sets the icon's visibility on minimap\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Sets the icon's visibility on minimap" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_SetIconVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "SetIconVisible", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_SetIconVisible_Statics::MapIconComponent_eventSetIconVisible_Parms), Z_Construct_UFunction_UMapIconComponent_SetIconVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_SetIconVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_SetIconVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_SetIconVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_SetIconZOrder_Statics
	{
		struct MapIconComponent_eventSetIconZOrder_Parms
		{
			int32 NewZOrder;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewZOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewZOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_SetIconZOrder_Statics::NewProp_NewZOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMapIconComponent_SetIconZOrder_Statics::NewProp_NewZOrder = { "NewZOrder", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventSetIconZOrder_Parms, NewZOrder), METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_SetIconZOrder_Statics::NewProp_NewZOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconZOrder_Statics::NewProp_NewZOrder_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_SetIconZOrder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_SetIconZOrder_Statics::NewProp_NewZOrder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_SetIconZOrder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Sets the icon's Z order. Icons with higher Z-Order are rendered on top.\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Sets the icon's Z order. Icons with higher Z-Order are rendered on top." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_SetIconZOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "SetIconZOrder", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_SetIconZOrder_Statics::MapIconComponent_eventSetIconZOrder_Parms), Z_Construct_UFunction_UMapIconComponent_SetIconZOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconZOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_SetIconZOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetIconZOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_SetIconZOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_SetIconZOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowEnabled_Statics
	{
		struct MapIconComponent_eventSetObjectiveArrowEnabled_Parms
		{
			bool bNewObjectiveArrowEnabled;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNewObjectiveArrowEnabled_MetaData[];
#endif
		static void NewProp_bNewObjectiveArrowEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewObjectiveArrowEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowEnabled_Statics::NewProp_bNewObjectiveArrowEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowEnabled_Statics::NewProp_bNewObjectiveArrowEnabled_SetBit(void* Obj)
	{
		((MapIconComponent_eventSetObjectiveArrowEnabled_Parms*)Obj)->bNewObjectiveArrowEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowEnabled_Statics::NewProp_bNewObjectiveArrowEnabled = { "bNewObjectiveArrowEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MapIconComponent_eventSetObjectiveArrowEnabled_Parms), &Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowEnabled_Statics::NewProp_bNewObjectiveArrowEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowEnabled_Statics::NewProp_bNewObjectiveArrowEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowEnabled_Statics::NewProp_bNewObjectiveArrowEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowEnabled_Statics::NewProp_bNewObjectiveArrowEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Sets whether the icon will stay at the minimap's edge when its actor is falls outside the minimap's view range\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Sets whether the icon will stay at the minimap's edge when its actor is falls outside the minimap's view range" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "SetObjectiveArrowEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowEnabled_Statics::MapIconComponent_eventSetObjectiveArrowEnabled_Parms), Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowRotates_Statics
	{
		struct MapIconComponent_eventSetObjectiveArrowRotates_Parms
		{
			bool bNewRotates;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNewRotates_MetaData[];
#endif
		static void NewProp_bNewRotates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewRotates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowRotates_Statics::NewProp_bNewRotates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowRotates_Statics::NewProp_bNewRotates_SetBit(void* Obj)
	{
		((MapIconComponent_eventSetObjectiveArrowRotates_Parms*)Obj)->bNewRotates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowRotates_Statics::NewProp_bNewRotates = { "bNewRotates", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MapIconComponent_eventSetObjectiveArrowRotates_Parms), &Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowRotates_Statics::NewProp_bNewRotates_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowRotates_Statics::NewProp_bNewRotates_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowRotates_Statics::NewProp_bNewRotates_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowRotates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowRotates_Statics::NewProp_bNewRotates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowRotates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Sets whether the icon will point to its actor when shown at the minimap's edge\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Sets whether the icon will point to its actor when shown at the minimap's edge" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowRotates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "SetObjectiveArrowRotates", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowRotates_Statics::MapIconComponent_eventSetObjectiveArrowRotates_Parms), Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowRotates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowRotates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowRotates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowRotates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowRotates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowRotates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowSize_Statics
	{
		struct MapIconComponent_eventSetObjectiveArrowSize_Parms
		{
			float NewObjectiveArrowSize;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewObjectiveArrowSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewObjectiveArrowSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowSize_Statics::NewProp_NewObjectiveArrowSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowSize_Statics::NewProp_NewObjectiveArrowSize = { "NewObjectiveArrowSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventSetObjectiveArrowSize_Parms, NewObjectiveArrowSize), METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowSize_Statics::NewProp_NewObjectiveArrowSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowSize_Statics::NewProp_NewObjectiveArrowSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowSize_Statics::NewProp_NewObjectiveArrowSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Sets the icon's render size in pixels prior to DPI scaling\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Sets the icon's render size in pixels prior to DPI scaling" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "SetObjectiveArrowSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowSize_Statics::MapIconComponent_eventSetObjectiveArrowSize_Parms), Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowTexture_Statics
	{
		struct MapIconComponent_eventSetObjectiveArrowTexture_Parms
		{
			UTexture2D* NewTexture;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowTexture_Statics::NewProp_NewTexture = { "NewTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapIconComponent_eventSetObjectiveArrowTexture_Parms, NewTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowTexture_Statics::NewProp_NewTexture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Sets what texture to use when showing at the minimap's edge. If none is set, will use the default icon\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Sets what texture to use when showing at the minimap's edge. If none is set, will use the default icon" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapIconComponent, nullptr, "SetObjectiveArrowTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowTexture_Statics::MapIconComponent_eventSetObjectiveArrowTexture_Parms), Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMapIconComponent);
	UClass* Z_Construct_UClass_UMapIconComponent_NoRegister()
	{
		return UMapIconComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMapIconComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnIconAppearanceChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIconAppearanceChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnIconMaterialChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIconMaterialChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnIconMaterialInstancesChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIconMaterialInstancesChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnIconEnteredView_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIconEnteredView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnIconLeftView_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIconLeftView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnIconDestroyed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIconDestroyed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnIconHoverStart_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIconHoverStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnIconHoverEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIconHoverEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnIconClicked_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIconClicked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconCategory_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_IconCategory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IconTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconMaterial_UMG_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IconMaterial_UMG;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconMaterial_Canvas_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IconMaterial_Canvas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIconVisible_MetaData[];
#endif
		static void NewProp_bIconVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIconVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIconRotates_MetaData[];
#endif
		static void NewProp_bIconRotates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIconRotates;
		static const UECodeGen_Private::FBytePropertyParams NewProp_IconSizeUnit_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconSizeUnit_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_IconSizeUnit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IconSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconDrawColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IconDrawColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconZOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IconZOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bObjectiveArrowEnabled_MetaData[];
#endif
		static void NewProp_bObjectiveArrowEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bObjectiveArrowEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectiveArrowTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectiveArrowTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectiveArrowMaterial_UMG_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectiveArrowMaterial_UMG;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectiveArrowMaterial_Canvas_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectiveArrowMaterial_Canvas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bObjectiveArrowRotates_MetaData[];
#endif
		static void NewProp_bObjectiveArrowRotates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bObjectiveArrowRotates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectiveArrowSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ObjectiveArrowSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIconInteractable_MetaData[];
#endif
		static void NewProp_bIconInteractable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIconInteractable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconTooltipText_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_IconTooltipText;
		static const UECodeGen_Private::FBytePropertyParams NewProp_IconBackgroundInteraction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconBackgroundInteraction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_IconBackgroundInteraction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_IconFogInteraction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconFogInteraction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_IconFogInteraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconFogRevealThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IconFogRevealThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideOwnerInsideFog_MetaData[];
#endif
		static void NewProp_bHideOwnerInsideFog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideOwnerInsideFog;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsRenderedPerView_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IsRenderedPerView_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsRenderedPerView_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_IsRenderedPerView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialIconMaterial_UMG_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InitialIconMaterial_UMG;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialIconMaterial_Canvas_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InitialIconMaterial_Canvas;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IconMaterialInstances_UMG_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IconMaterialInstances_UMG_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconMaterialInstances_UMG_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_IconMaterialInstances_UMG;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IconMaterialInstances_Canvas_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IconMaterialInstances_Canvas_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconMaterialInstances_Canvas_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_IconMaterialInstances_Canvas;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectiveArrowMaterialInstances_Canvas_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectiveArrowMaterialInstances_Canvas_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectiveArrowMaterialInstances_Canvas_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectiveArrowMaterialInstances_Canvas;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapIconComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBillboardComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MinimapPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMapIconComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapIconComponent_DoesIconRotate, "DoesIconRotate" }, // 165199213
		{ &Z_Construct_UFunction_UMapIconComponent_DoesObjectiveArrowRotate, "DoesObjectiveArrowRotate" }, // 2843559
		{ &Z_Construct_UFunction_UMapIconComponent_GetIconBackgroundInteraction, "GetIconBackgroundInteraction" }, // 1665476060
		{ &Z_Construct_UFunction_UMapIconComponent_GetIconDrawColor, "GetIconDrawColor" }, // 139159154
		{ &Z_Construct_UFunction_UMapIconComponent_GetIconFogInteraction, "GetIconFogInteraction" }, // 1599226730
		{ &Z_Construct_UFunction_UMapIconComponent_GetIconFogRevealThreshold, "GetIconFogRevealThreshold" }, // 3895605927
		{ &Z_Construct_UFunction_UMapIconComponent_GetIconMaterialForCanvas, "GetIconMaterialForCanvas" }, // 3610333134
		{ &Z_Construct_UFunction_UMapIconComponent_GetIconMaterialForUMG, "GetIconMaterialForUMG" }, // 936808205
		{ &Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForCanvas, "GetIconMaterialInstancesForCanvas" }, // 2138502472
		{ &Z_Construct_UFunction_UMapIconComponent_GetIconMaterialInstancesForUMG, "GetIconMaterialInstancesForUMG" }, // 3246791850
		{ &Z_Construct_UFunction_UMapIconComponent_GetIconSize, "GetIconSize" }, // 3759544109
		{ &Z_Construct_UFunction_UMapIconComponent_GetIconSizeUnit, "GetIconSizeUnit" }, // 3453173037
		{ &Z_Construct_UFunction_UMapIconComponent_GetIconTexture, "GetIconTexture" }, // 1184327433
		{ &Z_Construct_UFunction_UMapIconComponent_GetIconTooltipText, "GetIconTooltipText" }, // 4135571501
		{ &Z_Construct_UFunction_UMapIconComponent_GetIconZOrder, "GetIconZOrder" }, // 3256896434
		{ &Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowMaterialForCanvas, "GetObjectiveArrowMaterialForCanvas" }, // 746225494
		{ &Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowMaterialForUMG, "GetObjectiveArrowMaterialForUMG" }, // 2997288854
		{ &Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowSize, "GetObjectiveArrowSize" }, // 3486479660
		{ &Z_Construct_UFunction_UMapIconComponent_GetObjectiveArrowTexture, "GetObjectiveArrowTexture" }, // 2792067611
		{ &Z_Construct_UFunction_UMapIconComponent_IsIconInteractable, "IsIconInteractable" }, // 213528273
		{ &Z_Construct_UFunction_UMapIconComponent_IsIconVisible, "IsIconVisible" }, // 1420010381
		{ &Z_Construct_UFunction_UMapIconComponent_IsObjectiveArrowEnabled, "IsObjectiveArrowEnabled" }, // 3334033888
		{ &Z_Construct_UFunction_UMapIconComponent_IsRenderedInView, "IsRenderedInView" }, // 3782672428
		{ &Z_Construct_UFunction_UMapIconComponent_MarkRenderedInView, "MarkRenderedInView" }, // 2845728185
		{ &Z_Construct_UFunction_UMapIconComponent_ReceiveClicked, "ReceiveClicked" }, // 347069859
		{ &Z_Construct_UFunction_UMapIconComponent_ReceiveHoverEnd, "ReceiveHoverEnd" }, // 1315269528
		{ &Z_Construct_UFunction_UMapIconComponent_ReceiveHoverStart, "ReceiveHoverStart" }, // 3250774635
		{ &Z_Construct_UFunction_UMapIconComponent_RegisterMaterialInstanceFromUMG, "RegisterMaterialInstanceFromUMG" }, // 606778091
		{ &Z_Construct_UFunction_UMapIconComponent_ResetIconMaterialForCanvas, "ResetIconMaterialForCanvas" }, // 1425822280
		{ &Z_Construct_UFunction_UMapIconComponent_ResetIconMaterialForUMG, "ResetIconMaterialForUMG" }, // 1145990491
		{ &Z_Construct_UFunction_UMapIconComponent_SetIconBackgroundInteraction, "SetIconBackgroundInteraction" }, // 2589029230
		{ &Z_Construct_UFunction_UMapIconComponent_SetIconDrawColor, "SetIconDrawColor" }, // 3991029418
		{ &Z_Construct_UFunction_UMapIconComponent_SetIconFogInteraction, "SetIconFogInteraction" }, // 402078243
		{ &Z_Construct_UFunction_UMapIconComponent_SetIconFogRevealThreshold, "SetIconFogRevealThreshold" }, // 1788313899
		{ &Z_Construct_UFunction_UMapIconComponent_SetIconInteractable, "SetIconInteractable" }, // 3500851259
		{ &Z_Construct_UFunction_UMapIconComponent_SetIconMaterialForCanvas, "SetIconMaterialForCanvas" }, // 3094409793
		{ &Z_Construct_UFunction_UMapIconComponent_SetIconMaterialForUMG, "SetIconMaterialForUMG" }, // 817438322
		{ &Z_Construct_UFunction_UMapIconComponent_SetIconRotates, "SetIconRotates" }, // 1112519040
		{ &Z_Construct_UFunction_UMapIconComponent_SetIconSize, "SetIconSize" }, // 3526245918
		{ &Z_Construct_UFunction_UMapIconComponent_SetIconTexture, "SetIconTexture" }, // 3923826707
		{ &Z_Construct_UFunction_UMapIconComponent_SetIconTooltipText, "SetIconTooltipText" }, // 541499545
		{ &Z_Construct_UFunction_UMapIconComponent_SetIconVisible, "SetIconVisible" }, // 2050830632
		{ &Z_Construct_UFunction_UMapIconComponent_SetIconZOrder, "SetIconZOrder" }, // 1236302565
		{ &Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowEnabled, "SetObjectiveArrowEnabled" }, // 1935976676
		{ &Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowRotates, "SetObjectiveArrowRotates" }, // 3112041851
		{ &Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowSize, "SetObjectiveArrowSize" }, // 2605324149
		{ &Z_Construct_UFunction_UMapIconComponent_SetObjectiveArrowTexture, "SetObjectiveArrowTexture" }, // 12403042
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "MinimapPlugin" },
		{ "Comment", "// A MapIconComponent represents an icon to render on minimaps. \n// To make an actor appear on a minimap, add this component to it and then configure it. Icon properties can be \n// set in C++ and in blueprint. Properties can be changed during gameplay and any changes will fire events so \n// that any existing icon instances will update their appearance right away.\n" },
		{ "HideCategories", "Sprite Object Activation Components|Activation Physics Collision Lighting Mesh PhysicsVolume Mobility VirtualTexture Trigger" },
		{ "IncludePath", "MapIconComponent.h" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "A MapIconComponent represents an icon to render on minimaps.\nTo make an actor appear on a minimap, add this component to it and then configure it. Icon properties can be\nset in C++ and in blueprint. Properties can be changed during gameplay and any changes will fire events so\nthat any existing icon instances will update their appearance right away." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconAppearanceChanged_MetaData[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Event that fires whenever the icon's appearance changes\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Event that fires whenever the icon's appearance changes" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconAppearanceChanged = { "OnIconAppearanceChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapIconComponent, OnIconAppearanceChanged), Z_Construct_UDelegateFunction_MinimapPlugin_MapIconAppearanceChangedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconAppearanceChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconAppearanceChanged_MetaData)) }; // 3129240978
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconMaterialChanged_MetaData[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Event that fires whenever the icon's material changes\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Event that fires whenever the icon's material changes" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconMaterialChanged = { "OnIconMaterialChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapIconComponent, OnIconMaterialChanged), Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialChangedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconMaterialChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconMaterialChanged_MetaData)) }; // 1291919552
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconMaterialInstancesChanged_MetaData[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Event that fires when the set of material instances changes (i.e. new minimap was created or material changed)\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Event that fires when the set of material instances changes (i.e. new minimap was created or material changed)" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconMaterialInstancesChanged = { "OnIconMaterialInstancesChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapIconComponent, OnIconMaterialInstancesChanged), Z_Construct_UDelegateFunction_MinimapPlugin_MapIconMaterialInstancesChangedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconMaterialInstancesChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconMaterialInstancesChanged_MetaData)) }; // 28399164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconEnteredView_MetaData[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Event that fires whenever the icon comes into a specific MapViewComponent's view\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Event that fires whenever the icon comes into a specific MapViewComponent's view" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconEnteredView = { "OnIconEnteredView", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapIconComponent, OnIconEnteredView), Z_Construct_UDelegateFunction_MinimapPlugin_MapIconEnteredViewSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconEnteredView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconEnteredView_MetaData)) }; // 3420898955
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconLeftView_MetaData[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Event that fires whenever the icon leaves a specific MapViewComponent's view\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Event that fires whenever the icon leaves a specific MapViewComponent's view" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconLeftView = { "OnIconLeftView", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapIconComponent, OnIconLeftView), Z_Construct_UDelegateFunction_MinimapPlugin_MapIconLeftViewSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconLeftView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconLeftView_MetaData)) }; // 4250639068
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconDestroyed_MetaData[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Event that fires whenever the icon is destroyed\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Event that fires whenever the icon is destroyed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconDestroyed = { "OnIconDestroyed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapIconComponent, OnIconDestroyed), Z_Construct_UDelegateFunction_MinimapPlugin_MapIconDestroyedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconDestroyed_MetaData)) }; // 4186678975
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconHoverStart_MetaData[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Event that fires whenever the icon is mouse-overed\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Event that fires whenever the icon is mouse-overed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconHoverStart = { "OnIconHoverStart", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapIconComponent, OnIconHoverStart), Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverStartSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconHoverStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconHoverStart_MetaData)) }; // 4185880110
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconHoverEnd_MetaData[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Event that fires whenever the icon is no longer mouse-overed\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Event that fires whenever the icon is no longer mouse-overed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconHoverEnd = { "OnIconHoverEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapIconComponent, OnIconHoverEnd), Z_Construct_UDelegateFunction_MinimapPlugin_MapIconHoverEndSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconHoverEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconHoverEnd_MetaData)) }; // 3702604000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconClicked_MetaData[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Event that fires whenever the icon is clicked\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Event that fires whenever the icon is clicked" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconClicked = { "OnIconClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapIconComponent, OnIconClicked), Z_Construct_UDelegateFunction_MinimapPlugin_MapIconClickedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconClicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconClicked_MetaData)) }; // 2066985470
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconCategory_MetaData[] = {
		{ "Category", "Minimap Icon Rendering" },
		{ "Comment", "// Icons can be hidden by category on a specific minimap via MapView->SetIconCategoryVisible()\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Icons can be hidden by category on a specific minimap via MapView->SetIconCategoryVisible()" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconCategory = { "IconCategory", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapIconComponent, IconCategory), METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconCategory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconTexture_MetaData[] = {
		{ "Category", "Minimap Icon Rendering" },
		{ "Comment", "// The texture to render for this actor. If none is set, will render a rectangle.\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "The texture to render for this actor. If none is set, will render a rectangle." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconTexture = { "IconTexture", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapIconComponent, IconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconMaterial_UMG_MetaData[] = {
		{ "Category", "Minimap Icon Rendering" },
		{ "Comment", "// Material to render the icon with to UMG minimaps\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Material to render the icon with to UMG minimaps" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconMaterial_UMG = { "IconMaterial_UMG", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapIconComponent, IconMaterial_UMG), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconMaterial_UMG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconMaterial_UMG_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconMaterial_Canvas_MetaData[] = {
		{ "Category", "Minimap Icon Rendering" },
		{ "Comment", "// Material to render the icon with to Canvas minimaps\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Material to render the icon with to Canvas minimaps" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconMaterial_Canvas = { "IconMaterial_Canvas", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapIconComponent, IconMaterial_Canvas), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconMaterial_Canvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconMaterial_Canvas_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bIconVisible_MetaData[] = {
		{ "Category", "Minimap Icon Rendering" },
		{ "Comment", "// Initial icon visibility, can be changed while game is in progress. Note that the plugin handles icon visibility in fog for you.\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Initial icon visibility, can be changed while game is in progress. Note that the plugin handles icon visibility in fog for you." },
	};
#endif
	void Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bIconVisible_SetBit(void* Obj)
	{
		((UMapIconComponent*)Obj)->bIconVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bIconVisible = { "bIconVisible", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMapIconComponent), &Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bIconVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bIconVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bIconVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bIconRotates_MetaData[] = {
		{ "Category", "Minimap Icon Rendering" },
		{ "Comment", "// Whether the icon rotates or is always rendered with the same orientation\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Whether the icon rotates or is always rendered with the same orientation" },
	};
#endif
	void Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bIconRotates_SetBit(void* Obj)
	{
		((UMapIconComponent*)Obj)->bIconRotates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bIconRotates = { "bIconRotates", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMapIconComponent), &Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bIconRotates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bIconRotates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bIconRotates_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconSizeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconSizeUnit_MetaData[] = {
		{ "Category", "Minimap Icon Rendering" },
		{ "Comment", "// If screen space, icon will always appear same size no matter how far zoomed. If world space, IconSize represents world diameter and icon will automatically scale when zooming in or out.\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "If screen space, icon will always appear same size no matter how far zoomed. If world space, IconSize represents world diameter and icon will automatically scale when zooming in or out." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconSizeUnit = { "IconSizeUnit", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapIconComponent, IconSizeUnit), Z_Construct_UEnum_MinimapPlugin_EIconSizeUnit, METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconSizeUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconSizeUnit_MetaData)) }; // 3756336531
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconSize_MetaData[] = {
		{ "Category", "Minimap Icon Rendering" },
		{ "ClampMin", "1.0" },
		{ "Comment", "// Render size of icon. Its application depends on the setting of IconSizeUnit.\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Render size of icon. Its application depends on the setting of IconSizeUnit." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconSize = { "IconSize", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapIconComponent, IconSize), METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconDrawColor_MetaData[] = {
		{ "Category", "Minimap Icon Rendering" },
		{ "Comment", "// Color multiplier applied to the icon texture\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Color multiplier applied to the icon texture" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconDrawColor = { "IconDrawColor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapIconComponent, IconDrawColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconDrawColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconDrawColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconZOrder_MetaData[] = {
		{ "Category", "Minimap Icon Rendering" },
		{ "Comment", "// Icons with higher ZOrder are rendered on top\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Icons with higher ZOrder are rendered on top" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconZOrder = { "IconZOrder", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapIconComponent, IconZOrder), METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconZOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconZOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bObjectiveArrowEnabled_MetaData[] = {
		{ "Category", "Minimap Objective Arrow" },
		{ "Comment", "// Whether the icon is shown on the edge of the minimap if its not within view range\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Whether the icon is shown on the edge of the minimap if its not within view range" },
	};
#endif
	void Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bObjectiveArrowEnabled_SetBit(void* Obj)
	{
		((UMapIconComponent*)Obj)->bObjectiveArrowEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bObjectiveArrowEnabled = { "bObjectiveArrowEnabled", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMapIconComponent), &Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bObjectiveArrowEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bObjectiveArrowEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bObjectiveArrowEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_ObjectiveArrowTexture_MetaData[] = {
		{ "Category", "Minimap Objective Arrow" },
		{ "Comment", "// When icon is at edge, the icon to show. If not set, will show default icon.\n" },
		{ "EditCondition", "bObjectiveArrowEnabled" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "When icon is at edge, the icon to show. If not set, will show default icon." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_ObjectiveArrowTexture = { "ObjectiveArrowTexture", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapIconComponent, ObjectiveArrowTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_ObjectiveArrowTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_ObjectiveArrowTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_ObjectiveArrowMaterial_UMG_MetaData[] = {
		{ "Category", "Minimap Objective Arrow" },
		{ "Comment", "// Material to render the objective arrow with to UMG minimaps\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Material to render the objective arrow with to UMG minimaps" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_ObjectiveArrowMaterial_UMG = { "ObjectiveArrowMaterial_UMG", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapIconComponent, ObjectiveArrowMaterial_UMG), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_ObjectiveArrowMaterial_UMG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_ObjectiveArrowMaterial_UMG_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_ObjectiveArrowMaterial_Canvas_MetaData[] = {
		{ "Category", "Minimap Objective Arrow" },
		{ "Comment", "// Material to render the objective arrow with to Canvas minimaps\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Material to render the objective arrow with to Canvas minimaps" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_ObjectiveArrowMaterial_Canvas = { "ObjectiveArrowMaterial_Canvas", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapIconComponent, ObjectiveArrowMaterial_Canvas), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_ObjectiveArrowMaterial_Canvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_ObjectiveArrowMaterial_Canvas_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bObjectiveArrowRotates_MetaData[] = {
		{ "Category", "Minimap Objective Arrow" },
		{ "Comment", "// Whether the icon rotates or is always rendered with the same orientation\n" },
		{ "EditCondition", "bObjectiveArrowEnabled" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Whether the icon rotates or is always rendered with the same orientation" },
	};
#endif
	void Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bObjectiveArrowRotates_SetBit(void* Obj)
	{
		((UMapIconComponent*)Obj)->bObjectiveArrowRotates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bObjectiveArrowRotates = { "bObjectiveArrowRotates", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMapIconComponent), &Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bObjectiveArrowRotates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bObjectiveArrowRotates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bObjectiveArrowRotates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_ObjectiveArrowSize_MetaData[] = {
		{ "Category", "Minimap Objective Arrow" },
		{ "ClampMin", "1.0" },
		{ "Comment", "// Render size of edge icon\n" },
		{ "EditCondition", "bObjectiveArrowEnabled" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Render size of edge icon" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_ObjectiveArrowSize = { "ObjectiveArrowSize", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapIconComponent, ObjectiveArrowSize), METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_ObjectiveArrowSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_ObjectiveArrowSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bIconInteractable_MetaData[] = {
		{ "Category", "Minimap Mouse Interaction" },
		{ "Comment", "// Must be enabled to support tooltips and mouse events (OnIconClicked, OnIconHoverStart, etc). Disable to ensure this icon doesn't block other icons' mouse interaction.\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Must be enabled to support tooltips and mouse events (OnIconClicked, OnIconHoverStart, etc). Disable to ensure this icon doesn't block other icons' mouse interaction." },
	};
#endif
	void Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bIconInteractable_SetBit(void* Obj)
	{
		((UMapIconComponent*)Obj)->bIconInteractable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bIconInteractable = { "bIconInteractable", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMapIconComponent), &Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bIconInteractable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bIconInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bIconInteractable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconTooltipText_MetaData[] = {
		{ "Category", "Minimap Mouse Interaction" },
		{ "Comment", "// Text to display when mouse overing this icon on the minimap, only works in UMG\n" },
		{ "EditCondition", "bIconInteractable" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Text to display when mouse overing this icon on the minimap, only works in UMG" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconTooltipText = { "IconTooltipText", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapIconComponent, IconTooltipText), METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconTooltipText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconTooltipText_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconBackgroundInteraction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconBackgroundInteraction_MetaData[] = {
		{ "Category", "Minimap Environment Interaction" },
		{ "Comment", "// How this icon appears in combination with multi-level backgrounds\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "How this icon appears in combination with multi-level backgrounds" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconBackgroundInteraction = { "IconBackgroundInteraction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapIconComponent, IconBackgroundInteraction), Z_Construct_UEnum_MinimapPlugin_EIconBackgroundInteraction, METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconBackgroundInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconBackgroundInteraction_MetaData)) }; // 2520601228
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconFogInteraction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconFogInteraction_MetaData[] = {
		{ "Category", "Minimap Environment Interaction" },
		{ "Comment", "// How this icon appears in combination with fog\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "How this icon appears in combination with fog" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconFogInteraction = { "IconFogInteraction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapIconComponent, IconFogInteraction), Z_Construct_UEnum_MinimapPlugin_EIconFogInteraction, METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconFogInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconFogInteraction_MetaData)) }; // 1328590264
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconFogRevealThreshold_MetaData[] = {
		{ "Category", "Minimap Environment Interaction" },
		{ "Comment", "// For some settings of IconFogInteraction, affects how much of the fog must be cleared before the icon appears (1.0 = 100% cleared)\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "For some settings of IconFogInteraction, affects how much of the fog must be cleared before the icon appears (1.0 = 100% cleared)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconFogRevealThreshold = { "IconFogRevealThreshold", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapIconComponent, IconFogRevealThreshold), METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconFogRevealThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconFogRevealThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bHideOwnerInsideFog_MetaData[] = {
		{ "Category", "Minimap Environment Interaction" },
		{ "Comment", "// If enabled, actor will be hidden when location is covered in fog\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "If enabled, actor will be hidden when location is covered in fog" },
	};
#endif
	void Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bHideOwnerInsideFog_SetBit(void* Obj)
	{
		((UMapIconComponent*)Obj)->bHideOwnerInsideFog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bHideOwnerInsideFog = { "bHideOwnerInsideFog", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMapIconComponent), &Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bHideOwnerInsideFog_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bHideOwnerInsideFog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bHideOwnerInsideFog_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IsRenderedPerView_ValueProp = { "IsRenderedPerView", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IsRenderedPerView_Key_KeyProp = { "IsRenderedPerView_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMapViewComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IsRenderedPerView_MetaData[] = {
		{ "Comment", "// Tracks per view whether the icon is currently rendered in it\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Tracks per view whether the icon is currently rendered in it" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IsRenderedPerView = { "IsRenderedPerView", nullptr, (EPropertyFlags)0x0040008000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapIconComponent, IsRenderedPerView), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IsRenderedPerView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IsRenderedPerView_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_InitialIconMaterial_UMG_MetaData[] = {
		{ "Comment", "// Backup of the initial material used to render the icon in UMG\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Backup of the initial material used to render the icon in UMG" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_InitialIconMaterial_UMG = { "InitialIconMaterial_UMG", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapIconComponent, InitialIconMaterial_UMG), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_InitialIconMaterial_UMG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_InitialIconMaterial_UMG_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_InitialIconMaterial_Canvas_MetaData[] = {
		{ "Comment", "// Backup of the initial material used to render the icon on a UCanvas\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Backup of the initial material used to render the icon on a UCanvas" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_InitialIconMaterial_Canvas = { "InitialIconMaterial_Canvas", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapIconComponent, InitialIconMaterial_Canvas), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_InitialIconMaterial_Canvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_InitialIconMaterial_Canvas_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconMaterialInstances_UMG_ValueProp = { "IconMaterialInstances_UMG", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconMaterialInstances_UMG_Key_KeyProp = { "IconMaterialInstances_UMG_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconMaterialInstances_UMG_MetaData[] = {
		{ "Comment", "// Active material instances used to render the icon in UMG\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Active material instances used to render the icon in UMG" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconMaterialInstances_UMG = { "IconMaterialInstances_UMG", nullptr, (EPropertyFlags)0x0040008000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapIconComponent, IconMaterialInstances_UMG), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconMaterialInstances_UMG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconMaterialInstances_UMG_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconMaterialInstances_Canvas_ValueProp = { "IconMaterialInstances_Canvas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconMaterialInstances_Canvas_Key_KeyProp = { "IconMaterialInstances_Canvas_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMapRendererComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconMaterialInstances_Canvas_MetaData[] = {
		{ "Comment", "// Active material instances used to render the icon on a UCanvas\n" },
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
		{ "ToolTip", "Active material instances used to render the icon on a UCanvas" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconMaterialInstances_Canvas = { "IconMaterialInstances_Canvas", nullptr, (EPropertyFlags)0x0040008000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapIconComponent, IconMaterialInstances_Canvas), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconMaterialInstances_Canvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconMaterialInstances_Canvas_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_ObjectiveArrowMaterialInstances_Canvas_ValueProp = { "ObjectiveArrowMaterialInstances_Canvas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_ObjectiveArrowMaterialInstances_Canvas_Key_KeyProp = { "ObjectiveArrowMaterialInstances_Canvas_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMapRendererComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapIconComponent_Statics::NewProp_ObjectiveArrowMaterialInstances_Canvas_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapIconComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMapIconComponent_Statics::NewProp_ObjectiveArrowMaterialInstances_Canvas = { "ObjectiveArrowMaterialInstances_Canvas", nullptr, (EPropertyFlags)0x0040008000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapIconComponent, ObjectiveArrowMaterialInstances_Canvas), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_ObjectiveArrowMaterialInstances_Canvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::NewProp_ObjectiveArrowMaterialInstances_Canvas_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapIconComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconAppearanceChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconMaterialChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconMaterialInstancesChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconEnteredView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconLeftView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconHoverStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconHoverEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_OnIconClicked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconMaterial_UMG,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconMaterial_Canvas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bIconVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bIconRotates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconSizeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconSizeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconDrawColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconZOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bObjectiveArrowEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_ObjectiveArrowTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_ObjectiveArrowMaterial_UMG,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_ObjectiveArrowMaterial_Canvas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bObjectiveArrowRotates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_ObjectiveArrowSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bIconInteractable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconTooltipText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconBackgroundInteraction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconBackgroundInteraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconFogInteraction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconFogInteraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconFogRevealThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_bHideOwnerInsideFog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IsRenderedPerView_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IsRenderedPerView_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IsRenderedPerView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_InitialIconMaterial_UMG,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_InitialIconMaterial_Canvas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconMaterialInstances_UMG_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconMaterialInstances_UMG_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconMaterialInstances_UMG,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconMaterialInstances_Canvas_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconMaterialInstances_Canvas_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_IconMaterialInstances_Canvas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_ObjectiveArrowMaterialInstances_Canvas_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_ObjectiveArrowMaterialInstances_Canvas_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapIconComponent_Statics::NewProp_ObjectiveArrowMaterialInstances_Canvas,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapIconComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapIconComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapIconComponent_Statics::ClassParams = {
		&UMapIconComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMapIconComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::PropPointers),
		0,
		0x00B030A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMapIconComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMapIconComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapIconComponent()
	{
		if (!Z_Registration_Info_UClass_UMapIconComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapIconComponent.OuterSingleton, Z_Construct_UClass_UMapIconComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMapIconComponent.OuterSingleton;
	}
	template<> MINIMAPPLUGIN_API UClass* StaticClass<UMapIconComponent>()
	{
		return UMapIconComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapIconComponent);
	UMapIconComponent::~UMapIconComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMapIconComponent, UMapIconComponent::StaticClass, TEXT("UMapIconComponent"), &Z_Registration_Info_UClass_UMapIconComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapIconComponent), 3970096029U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_3862274229(TEXT("/Script/MinimapPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
