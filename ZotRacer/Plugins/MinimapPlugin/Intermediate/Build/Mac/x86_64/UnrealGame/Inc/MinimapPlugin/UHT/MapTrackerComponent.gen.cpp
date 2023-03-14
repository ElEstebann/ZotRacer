// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinimapPlugin/Public/MapTrackerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapTrackerComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	MINIMAPPLUGIN_API UClass* Z_Construct_UClass_AMapBackground_NoRegister();
	MINIMAPPLUGIN_API UClass* Z_Construct_UClass_AMapFog_NoRegister();
	MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapIconComponent_NoRegister();
	MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapRevealerComponent_NoRegister();
	MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapTrackerComponent();
	MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapTrackerComponent_NoRegister();
	MINIMAPPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRegisteredSignature__DelegateSignature();
	MINIMAPPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundUnregisteredSignature__DelegateSignature();
	MINIMAPPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapFogRegisteredSignature__DelegateSignature();
	MINIMAPPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapFogUnregisteredSignature__DelegateSignature();
	MINIMAPPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapIconRegisteredSignature__DelegateSignature();
	MINIMAPPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapIconUnregisteredSignature__DelegateSignature();
	MINIMAPPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerRegisteredSignature__DelegateSignature();
	MINIMAPPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerUnregisteredSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MinimapPlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MinimapPlugin_MapIconRegisteredSignature__DelegateSignature_Statics
	{
		struct _Script_MinimapPlugin_eventMapIconRegisteredSignature_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapIconRegisteredSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapIconRegisteredSignature__DelegateSignature_Statics::NewProp_MapIcon = { "MapIcon", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapIconRegisteredSignature_Parms, MapIcon), Z_Construct_UClass_UMapIconComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconRegisteredSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconRegisteredSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinimapPlugin_MapIconRegisteredSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapIconRegisteredSignature__DelegateSignature_Statics::NewProp_MapIcon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapIconRegisteredSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// MapTrackerComponent event signatures\n" },
		{ "ModuleRelativePath", "Public/MapTrackerComponent.h" },
		{ "ToolTip", "MapTrackerComponent event signatures" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MinimapPlugin_MapIconRegisteredSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin, nullptr, "MapIconRegisteredSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconRegisteredSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapIconRegisteredSignature_Parms), Z_Construct_UDelegateFunction_MinimapPlugin_MapIconRegisteredSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconRegisteredSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconRegisteredSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconRegisteredSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapIconRegisteredSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinimapPlugin_MapIconRegisteredSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MinimapPlugin_MapIconUnregisteredSignature__DelegateSignature_Statics
	{
		struct _Script_MinimapPlugin_eventMapIconUnregisteredSignature_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapIconUnregisteredSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapIconUnregisteredSignature__DelegateSignature_Statics::NewProp_MapIcon = { "MapIcon", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapIconUnregisteredSignature_Parms, MapIcon), Z_Construct_UClass_UMapIconComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconUnregisteredSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconUnregisteredSignature__DelegateSignature_Statics::NewProp_MapIcon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinimapPlugin_MapIconUnregisteredSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapIconUnregisteredSignature__DelegateSignature_Statics::NewProp_MapIcon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapIconUnregisteredSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapTrackerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MinimapPlugin_MapIconUnregisteredSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin, nullptr, "MapIconUnregisteredSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconUnregisteredSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapIconUnregisteredSignature_Parms), Z_Construct_UDelegateFunction_MinimapPlugin_MapIconUnregisteredSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconUnregisteredSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconUnregisteredSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapIconUnregisteredSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapIconUnregisteredSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinimapPlugin_MapIconUnregisteredSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRegisteredSignature__DelegateSignature_Statics
	{
		struct _Script_MinimapPlugin_eventMapBackgroundRegisteredSignature_Parms
		{
			AMapBackground* MapBackground;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MapBackground;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRegisteredSignature__DelegateSignature_Statics::NewProp_MapBackground = { "MapBackground", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapBackgroundRegisteredSignature_Parms, MapBackground), Z_Construct_UClass_AMapBackground_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRegisteredSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRegisteredSignature__DelegateSignature_Statics::NewProp_MapBackground,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRegisteredSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapTrackerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRegisteredSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin, nullptr, "MapBackgroundRegisteredSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRegisteredSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapBackgroundRegisteredSignature_Parms), Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRegisteredSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRegisteredSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRegisteredSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRegisteredSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRegisteredSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRegisteredSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundUnregisteredSignature__DelegateSignature_Statics
	{
		struct _Script_MinimapPlugin_eventMapBackgroundUnregisteredSignature_Parms
		{
			AMapBackground* MapBackground;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MapBackground;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundUnregisteredSignature__DelegateSignature_Statics::NewProp_MapBackground = { "MapBackground", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapBackgroundUnregisteredSignature_Parms, MapBackground), Z_Construct_UClass_AMapBackground_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundUnregisteredSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundUnregisteredSignature__DelegateSignature_Statics::NewProp_MapBackground,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundUnregisteredSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapTrackerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundUnregisteredSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin, nullptr, "MapBackgroundUnregisteredSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundUnregisteredSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapBackgroundUnregisteredSignature_Parms), Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundUnregisteredSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundUnregisteredSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundUnregisteredSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundUnregisteredSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundUnregisteredSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundUnregisteredSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MinimapPlugin_MapFogRegisteredSignature__DelegateSignature_Statics
	{
		struct _Script_MinimapPlugin_eventMapFogRegisteredSignature_Parms
		{
			AMapFog* MapFog;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MapFog;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapFogRegisteredSignature__DelegateSignature_Statics::NewProp_MapFog = { "MapFog", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapFogRegisteredSignature_Parms, MapFog), Z_Construct_UClass_AMapFog_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinimapPlugin_MapFogRegisteredSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapFogRegisteredSignature__DelegateSignature_Statics::NewProp_MapFog,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapFogRegisteredSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapTrackerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MinimapPlugin_MapFogRegisteredSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin, nullptr, "MapFogRegisteredSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapFogRegisteredSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapFogRegisteredSignature_Parms), Z_Construct_UDelegateFunction_MinimapPlugin_MapFogRegisteredSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapFogRegisteredSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapFogRegisteredSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapFogRegisteredSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapFogRegisteredSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinimapPlugin_MapFogRegisteredSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MinimapPlugin_MapFogUnregisteredSignature__DelegateSignature_Statics
	{
		struct _Script_MinimapPlugin_eventMapFogUnregisteredSignature_Parms
		{
			AMapFog* MapFog;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MapFog;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapFogUnregisteredSignature__DelegateSignature_Statics::NewProp_MapFog = { "MapFog", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapFogUnregisteredSignature_Parms, MapFog), Z_Construct_UClass_AMapFog_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinimapPlugin_MapFogUnregisteredSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapFogUnregisteredSignature__DelegateSignature_Statics::NewProp_MapFog,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapFogUnregisteredSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapTrackerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MinimapPlugin_MapFogUnregisteredSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin, nullptr, "MapFogUnregisteredSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapFogUnregisteredSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapFogUnregisteredSignature_Parms), Z_Construct_UDelegateFunction_MinimapPlugin_MapFogUnregisteredSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapFogUnregisteredSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapFogUnregisteredSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapFogUnregisteredSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapFogUnregisteredSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinimapPlugin_MapFogUnregisteredSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerRegisteredSignature__DelegateSignature_Statics
	{
		struct _Script_MinimapPlugin_eventMapRevealerRegisteredSignature_Parms
		{
			UMapRevealerComponent* MapRevealer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapRevealer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MapRevealer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerRegisteredSignature__DelegateSignature_Statics::NewProp_MapRevealer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerRegisteredSignature__DelegateSignature_Statics::NewProp_MapRevealer = { "MapRevealer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapRevealerRegisteredSignature_Parms, MapRevealer), Z_Construct_UClass_UMapRevealerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerRegisteredSignature__DelegateSignature_Statics::NewProp_MapRevealer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerRegisteredSignature__DelegateSignature_Statics::NewProp_MapRevealer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerRegisteredSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerRegisteredSignature__DelegateSignature_Statics::NewProp_MapRevealer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerRegisteredSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapTrackerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerRegisteredSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin, nullptr, "MapRevealerRegisteredSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerRegisteredSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapRevealerRegisteredSignature_Parms), Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerRegisteredSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerRegisteredSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerRegisteredSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerRegisteredSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerRegisteredSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerRegisteredSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerUnregisteredSignature__DelegateSignature_Statics
	{
		struct _Script_MinimapPlugin_eventMapRevealerUnregisteredSignature_Parms
		{
			UMapRevealerComponent* MapRevealer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapRevealer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MapRevealer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerUnregisteredSignature__DelegateSignature_Statics::NewProp_MapRevealer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerUnregisteredSignature__DelegateSignature_Statics::NewProp_MapRevealer = { "MapRevealer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapRevealerUnregisteredSignature_Parms, MapRevealer), Z_Construct_UClass_UMapRevealerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerUnregisteredSignature__DelegateSignature_Statics::NewProp_MapRevealer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerUnregisteredSignature__DelegateSignature_Statics::NewProp_MapRevealer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerUnregisteredSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerUnregisteredSignature__DelegateSignature_Statics::NewProp_MapRevealer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerUnregisteredSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapTrackerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerUnregisteredSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin, nullptr, "MapRevealerUnregisteredSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerUnregisteredSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapRevealerUnregisteredSignature_Parms), Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerUnregisteredSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerUnregisteredSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerUnregisteredSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerUnregisteredSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerUnregisteredSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerUnregisteredSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UMapTrackerComponent::execGetMapRevealers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMapRevealerComponent*>*)Z_Param__Result=P_THIS->GetMapRevealers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapTrackerComponent::execGetFogRevealedFactor)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
		P_GET_UBOOL(Z_Param_bRequireCurrentlyRevealing);
		P_GET_UBOOL_REF(Z_Param_Out_bIsInsideFogVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFogRevealedFactor(Z_Param_Out_WorldLocation,Z_Param_bRequireCurrentlyRevealing,Z_Param_Out_bIsInsideFogVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapTrackerComponent::execHasMapFog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasMapFog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapTrackerComponent::execGetMapFogs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AMapFog*>*)Z_Param__Result=P_THIS->GetMapFogs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapTrackerComponent::execGetMapBackgrounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AMapBackground*>*)Z_Param__Result=P_THIS->GetMapBackgrounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapTrackerComponent::execGetMapIcons)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMapIconComponent*>*)Z_Param__Result=P_THIS->GetMapIcons();
		P_NATIVE_END;
	}
	void UMapTrackerComponent::StaticRegisterNativesUMapTrackerComponent()
	{
		UClass* Class = UMapTrackerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFogRevealedFactor", &UMapTrackerComponent::execGetFogRevealedFactor },
			{ "GetMapBackgrounds", &UMapTrackerComponent::execGetMapBackgrounds },
			{ "GetMapFogs", &UMapTrackerComponent::execGetMapFogs },
			{ "GetMapIcons", &UMapTrackerComponent::execGetMapIcons },
			{ "GetMapRevealers", &UMapTrackerComponent::execGetMapRevealers },
			{ "HasMapFog", &UMapTrackerComponent::execHasMapFog },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMapTrackerComponent_GetFogRevealedFactor_Statics
	{
		struct MapTrackerComponent_eventGetFogRevealedFactor_Parms
		{
			FVector WorldLocation;
			bool bRequireCurrentlyRevealing;
			bool bIsInsideFogVolume;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequireCurrentlyRevealing_MetaData[];
#endif
		static void NewProp_bRequireCurrentlyRevealing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireCurrentlyRevealing;
		static void NewProp_bIsInsideFogVolume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInsideFogVolume;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapTrackerComponent_GetFogRevealedFactor_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapTrackerComponent_GetFogRevealedFactor_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapTrackerComponent_eventGetFogRevealedFactor_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMapTrackerComponent_GetFogRevealedFactor_Statics::NewProp_WorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTrackerComponent_GetFogRevealedFactor_Statics::NewProp_WorldLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapTrackerComponent_GetFogRevealedFactor_Statics::NewProp_bRequireCurrentlyRevealing_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMapTrackerComponent_GetFogRevealedFactor_Statics::NewProp_bRequireCurrentlyRevealing_SetBit(void* Obj)
	{
		((MapTrackerComponent_eventGetFogRevealedFactor_Parms*)Obj)->bRequireCurrentlyRevealing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapTrackerComponent_GetFogRevealedFactor_Statics::NewProp_bRequireCurrentlyRevealing = { "bRequireCurrentlyRevealing", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MapTrackerComponent_eventGetFogRevealedFactor_Parms), &Z_Construct_UFunction_UMapTrackerComponent_GetFogRevealedFactor_Statics::NewProp_bRequireCurrentlyRevealing_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMapTrackerComponent_GetFogRevealedFactor_Statics::NewProp_bRequireCurrentlyRevealing_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTrackerComponent_GetFogRevealedFactor_Statics::NewProp_bRequireCurrentlyRevealing_MetaData)) };
	void Z_Construct_UFunction_UMapTrackerComponent_GetFogRevealedFactor_Statics::NewProp_bIsInsideFogVolume_SetBit(void* Obj)
	{
		((MapTrackerComponent_eventGetFogRevealedFactor_Parms*)Obj)->bIsInsideFogVolume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapTrackerComponent_GetFogRevealedFactor_Statics::NewProp_bIsInsideFogVolume = { "bIsInsideFogVolume", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MapTrackerComponent_eventGetFogRevealedFactor_Parms), &Z_Construct_UFunction_UMapTrackerComponent_GetFogRevealedFactor_Statics::NewProp_bIsInsideFogVolume_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapTrackerComponent_GetFogRevealedFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapTrackerComponent_eventGetFogRevealedFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapTrackerComponent_GetFogRevealedFactor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapTrackerComponent_GetFogRevealedFactor_Statics::NewProp_WorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapTrackerComponent_GetFogRevealedFactor_Statics::NewProp_bRequireCurrentlyRevealing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapTrackerComponent_GetFogRevealedFactor_Statics::NewProp_bIsInsideFogVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapTrackerComponent_GetFogRevealedFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapTrackerComponent_GetFogRevealedFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Returns all map volumes currently registered.\n" },
		{ "ModuleRelativePath", "Public/MapTrackerComponent.h" },
		{ "ToolTip", "Returns all map volumes currently registered." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapTrackerComponent_GetFogRevealedFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapTrackerComponent, nullptr, "GetFogRevealedFactor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapTrackerComponent_GetFogRevealedFactor_Statics::MapTrackerComponent_eventGetFogRevealedFactor_Parms), Z_Construct_UFunction_UMapTrackerComponent_GetFogRevealedFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTrackerComponent_GetFogRevealedFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapTrackerComponent_GetFogRevealedFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTrackerComponent_GetFogRevealedFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapTrackerComponent_GetFogRevealedFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapTrackerComponent_GetFogRevealedFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapTrackerComponent_GetMapBackgrounds_Statics
	{
		struct MapTrackerComponent_eventGetMapBackgrounds_Parms
		{
			TArray<AMapBackground*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapTrackerComponent_GetMapBackgrounds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AMapBackground_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapTrackerComponent_GetMapBackgrounds_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMapTrackerComponent_GetMapBackgrounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapTrackerComponent_eventGetMapBackgrounds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMapTrackerComponent_GetMapBackgrounds_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTrackerComponent_GetMapBackgrounds_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapTrackerComponent_GetMapBackgrounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapTrackerComponent_GetMapBackgrounds_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapTrackerComponent_GetMapBackgrounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapTrackerComponent_GetMapBackgrounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Returns all map volumes currently registered.\n" },
		{ "ModuleRelativePath", "Public/MapTrackerComponent.h" },
		{ "ToolTip", "Returns all map volumes currently registered." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapTrackerComponent_GetMapBackgrounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapTrackerComponent, nullptr, "GetMapBackgrounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapTrackerComponent_GetMapBackgrounds_Statics::MapTrackerComponent_eventGetMapBackgrounds_Parms), Z_Construct_UFunction_UMapTrackerComponent_GetMapBackgrounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTrackerComponent_GetMapBackgrounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapTrackerComponent_GetMapBackgrounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTrackerComponent_GetMapBackgrounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapTrackerComponent_GetMapBackgrounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapTrackerComponent_GetMapBackgrounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapTrackerComponent_GetMapFogs_Statics
	{
		struct MapTrackerComponent_eventGetMapFogs_Parms
		{
			TArray<AMapFog*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapTrackerComponent_GetMapFogs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AMapFog_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapTrackerComponent_GetMapFogs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMapTrackerComponent_GetMapFogs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapTrackerComponent_eventGetMapFogs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMapTrackerComponent_GetMapFogs_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTrackerComponent_GetMapFogs_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapTrackerComponent_GetMapFogs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapTrackerComponent_GetMapFogs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapTrackerComponent_GetMapFogs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapTrackerComponent_GetMapFogs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Returns all map volumes currently registered.\n" },
		{ "ModuleRelativePath", "Public/MapTrackerComponent.h" },
		{ "ToolTip", "Returns all map volumes currently registered." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapTrackerComponent_GetMapFogs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapTrackerComponent, nullptr, "GetMapFogs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapTrackerComponent_GetMapFogs_Statics::MapTrackerComponent_eventGetMapFogs_Parms), Z_Construct_UFunction_UMapTrackerComponent_GetMapFogs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTrackerComponent_GetMapFogs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapTrackerComponent_GetMapFogs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTrackerComponent_GetMapFogs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapTrackerComponent_GetMapFogs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapTrackerComponent_GetMapFogs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapTrackerComponent_GetMapIcons_Statics
	{
		struct MapTrackerComponent_eventGetMapIcons_Parms
		{
			TArray<UMapIconComponent*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapTrackerComponent_GetMapIcons_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMapIconComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapTrackerComponent_GetMapIcons_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMapTrackerComponent_GetMapIcons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000800800058a, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapTrackerComponent_eventGetMapIcons_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMapTrackerComponent_GetMapIcons_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTrackerComponent_GetMapIcons_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapTrackerComponent_GetMapIcons_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapTrackerComponent_GetMapIcons_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapTrackerComponent_GetMapIcons_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapTrackerComponent_GetMapIcons_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Returns all icons currently registered.\n" },
		{ "ModuleRelativePath", "Public/MapTrackerComponent.h" },
		{ "ToolTip", "Returns all icons currently registered." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapTrackerComponent_GetMapIcons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapTrackerComponent, nullptr, "GetMapIcons", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapTrackerComponent_GetMapIcons_Statics::MapTrackerComponent_eventGetMapIcons_Parms), Z_Construct_UFunction_UMapTrackerComponent_GetMapIcons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTrackerComponent_GetMapIcons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapTrackerComponent_GetMapIcons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTrackerComponent_GetMapIcons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapTrackerComponent_GetMapIcons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapTrackerComponent_GetMapIcons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapTrackerComponent_GetMapRevealers_Statics
	{
		struct MapTrackerComponent_eventGetMapRevealers_Parms
		{
			TArray<UMapRevealerComponent*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapTrackerComponent_GetMapRevealers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMapRevealerComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapTrackerComponent_GetMapRevealers_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMapTrackerComponent_GetMapRevealers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000800800058a, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapTrackerComponent_eventGetMapRevealers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMapTrackerComponent_GetMapRevealers_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTrackerComponent_GetMapRevealers_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapTrackerComponent_GetMapRevealers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapTrackerComponent_GetMapRevealers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapTrackerComponent_GetMapRevealers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapTrackerComponent_GetMapRevealers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Returns all map revealers currently registered.\n" },
		{ "ModuleRelativePath", "Public/MapTrackerComponent.h" },
		{ "ToolTip", "Returns all map revealers currently registered." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapTrackerComponent_GetMapRevealers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapTrackerComponent, nullptr, "GetMapRevealers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapTrackerComponent_GetMapRevealers_Statics::MapTrackerComponent_eventGetMapRevealers_Parms), Z_Construct_UFunction_UMapTrackerComponent_GetMapRevealers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTrackerComponent_GetMapRevealers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapTrackerComponent_GetMapRevealers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTrackerComponent_GetMapRevealers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapTrackerComponent_GetMapRevealers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapTrackerComponent_GetMapRevealers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapTrackerComponent_HasMapFog_Statics
	{
		struct MapTrackerComponent_eventHasMapFog_Parms
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
	void Z_Construct_UFunction_UMapTrackerComponent_HasMapFog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MapTrackerComponent_eventHasMapFog_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapTrackerComponent_HasMapFog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MapTrackerComponent_eventHasMapFog_Parms), &Z_Construct_UFunction_UMapTrackerComponent_HasMapFog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapTrackerComponent_HasMapFog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapTrackerComponent_HasMapFog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapTrackerComponent_HasMapFog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Returns whether the level contains fog\n" },
		{ "ModuleRelativePath", "Public/MapTrackerComponent.h" },
		{ "ToolTip", "Returns whether the level contains fog" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapTrackerComponent_HasMapFog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapTrackerComponent, nullptr, "HasMapFog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapTrackerComponent_HasMapFog_Statics::MapTrackerComponent_eventHasMapFog_Parms), Z_Construct_UFunction_UMapTrackerComponent_HasMapFog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTrackerComponent_HasMapFog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapTrackerComponent_HasMapFog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTrackerComponent_HasMapFog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapTrackerComponent_HasMapFog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapTrackerComponent_HasMapFog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMapTrackerComponent);
	UClass* Z_Construct_UClass_UMapTrackerComponent_NoRegister()
	{
		return UMapTrackerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMapTrackerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMapIconRegistered_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMapIconRegistered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMapIconUnregistered_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMapIconUnregistered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMapBackgroundRegistered_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMapBackgroundRegistered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMapBackgroundUnregistered_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMapBackgroundUnregistered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMapFogRegistered_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMapFogRegistered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMapFogUnregistered_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMapFogUnregistered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMapRevealerRegistered_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMapRevealerRegistered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMapRevealerUnregistered_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMapRevealerUnregistered;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MapIcons_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapIcons_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MapIcons;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MapBackgrounds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapBackgrounds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MapBackgrounds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MapFogs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapFogs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MapFogs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MapRevealers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapRevealers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MapRevealers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapTrackerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MinimapPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMapTrackerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapTrackerComponent_GetFogRevealedFactor, "GetFogRevealedFactor" }, // 4100446206
		{ &Z_Construct_UFunction_UMapTrackerComponent_GetMapBackgrounds, "GetMapBackgrounds" }, // 1188988959
		{ &Z_Construct_UFunction_UMapTrackerComponent_GetMapFogs, "GetMapFogs" }, // 2037096760
		{ &Z_Construct_UFunction_UMapTrackerComponent_GetMapIcons, "GetMapIcons" }, // 1843203871
		{ &Z_Construct_UFunction_UMapTrackerComponent_GetMapRevealers, "GetMapRevealers" }, // 2743370916
		{ &Z_Construct_UFunction_UMapTrackerComponent_HasMapFog, "HasMapFog" }, // 1862624401
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapTrackerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "MinimapPlugin" },
		{ "Comment", "// This component keeps track of all objects that can appear on a map. This component is automatically \n// created on demand, so you should not create it. If you want to access all tracked objects, get a \n// reference to this component via UMapFunctionLibrary::GetMapTracker().\n" },
		{ "IncludePath", "MapTrackerComponent.h" },
		{ "ModuleRelativePath", "Public/MapTrackerComponent.h" },
		{ "ToolTip", "This component keeps track of all objects that can appear on a map. This component is automatically\ncreated on demand, so you should not create it. If you want to access all tracked objects, get a\nreference to this component via UMapFunctionLibrary::GetMapTracker()." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapIconRegistered_MetaData[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Event that fires when a new icon registers itself\n" },
		{ "ModuleRelativePath", "Public/MapTrackerComponent.h" },
		{ "ToolTip", "Event that fires when a new icon registers itself" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapIconRegistered = { "OnMapIconRegistered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapTrackerComponent, OnMapIconRegistered), Z_Construct_UDelegateFunction_MinimapPlugin_MapIconRegisteredSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapIconRegistered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapIconRegistered_MetaData)) }; // 3321090230
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapIconUnregistered_MetaData[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Event that fires when an icon unregisters itself\n" },
		{ "ModuleRelativePath", "Public/MapTrackerComponent.h" },
		{ "ToolTip", "Event that fires when an icon unregisters itself" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapIconUnregistered = { "OnMapIconUnregistered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapTrackerComponent, OnMapIconUnregistered), Z_Construct_UDelegateFunction_MinimapPlugin_MapIconUnregisteredSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapIconUnregistered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapIconUnregistered_MetaData)) }; // 1770129383
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapBackgroundRegistered_MetaData[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Event that fires when a new background source registers itself\n" },
		{ "ModuleRelativePath", "Public/MapTrackerComponent.h" },
		{ "ToolTip", "Event that fires when a new background source registers itself" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapBackgroundRegistered = { "OnMapBackgroundRegistered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapTrackerComponent, OnMapBackgroundRegistered), Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRegisteredSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapBackgroundRegistered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapBackgroundRegistered_MetaData)) }; // 2662001053
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapBackgroundUnregistered_MetaData[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Event that fires when a background source unregisters itself\n" },
		{ "ModuleRelativePath", "Public/MapTrackerComponent.h" },
		{ "ToolTip", "Event that fires when a background source unregisters itself" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapBackgroundUnregistered = { "OnMapBackgroundUnregistered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapTrackerComponent, OnMapBackgroundUnregistered), Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundUnregisteredSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapBackgroundUnregistered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapBackgroundUnregistered_MetaData)) }; // 776480399
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapFogRegistered_MetaData[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Event that fires when a background fog source registers itself\n" },
		{ "ModuleRelativePath", "Public/MapTrackerComponent.h" },
		{ "ToolTip", "Event that fires when a background fog source registers itself" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapFogRegistered = { "OnMapFogRegistered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapTrackerComponent, OnMapFogRegistered), Z_Construct_UDelegateFunction_MinimapPlugin_MapFogRegisteredSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapFogRegistered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapFogRegistered_MetaData)) }; // 7355005
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapFogUnregistered_MetaData[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Event that fires when a background fog source unregisters itself\n" },
		{ "ModuleRelativePath", "Public/MapTrackerComponent.h" },
		{ "ToolTip", "Event that fires when a background fog source unregisters itself" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapFogUnregistered = { "OnMapFogUnregistered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapTrackerComponent, OnMapFogUnregistered), Z_Construct_UDelegateFunction_MinimapPlugin_MapFogRegisteredSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapFogUnregistered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapFogUnregistered_MetaData)) }; // 7355005
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapRevealerRegistered_MetaData[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Event that fires when a map revealer registers itself\n" },
		{ "ModuleRelativePath", "Public/MapTrackerComponent.h" },
		{ "ToolTip", "Event that fires when a map revealer registers itself" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapRevealerRegistered = { "OnMapRevealerRegistered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapTrackerComponent, OnMapRevealerRegistered), Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerRegisteredSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapRevealerRegistered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapRevealerRegistered_MetaData)) }; // 3557285302
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapRevealerUnregistered_MetaData[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Event that fires when a map revealer unregisters itself\n" },
		{ "ModuleRelativePath", "Public/MapTrackerComponent.h" },
		{ "ToolTip", "Event that fires when a map revealer unregisters itself" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapRevealerUnregistered = { "OnMapRevealerUnregistered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapTrackerComponent, OnMapRevealerUnregistered), Z_Construct_UDelegateFunction_MinimapPlugin_MapRevealerUnregisteredSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapRevealerUnregistered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapRevealerUnregistered_MetaData)) }; // 2179428803
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_MapIcons_Inner = { "MapIcons", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMapIconComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_MapIcons_MetaData[] = {
		{ "Comment", "// Registered icons\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapTrackerComponent.h" },
		{ "ToolTip", "Registered icons" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_MapIcons = { "MapIcons", nullptr, (EPropertyFlags)0x0040008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapTrackerComponent, MapIcons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_MapIcons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_MapIcons_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_MapBackgrounds_Inner = { "MapBackgrounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AMapBackground_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_MapBackgrounds_MetaData[] = {
		{ "Comment", "// Registered background sources\n" },
		{ "ModuleRelativePath", "Public/MapTrackerComponent.h" },
		{ "ToolTip", "Registered background sources" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_MapBackgrounds = { "MapBackgrounds", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapTrackerComponent, MapBackgrounds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_MapBackgrounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_MapBackgrounds_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_MapFogs_Inner = { "MapFogs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AMapFog_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_MapFogs_MetaData[] = {
		{ "Comment", "// Registered fog sources\n" },
		{ "ModuleRelativePath", "Public/MapTrackerComponent.h" },
		{ "ToolTip", "Registered fog sources" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_MapFogs = { "MapFogs", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapTrackerComponent, MapFogs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_MapFogs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_MapFogs_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_MapRevealers_Inner = { "MapRevealers", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMapRevealerComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_MapRevealers_MetaData[] = {
		{ "Comment", "// Registered icons\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapTrackerComponent.h" },
		{ "ToolTip", "Registered icons" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_MapRevealers = { "MapRevealers", nullptr, (EPropertyFlags)0x0040008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapTrackerComponent, MapRevealers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_MapRevealers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_MapRevealers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapTrackerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapIconRegistered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapIconUnregistered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapBackgroundRegistered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapBackgroundUnregistered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapFogRegistered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapFogUnregistered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapRevealerRegistered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_OnMapRevealerUnregistered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_MapIcons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_MapIcons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_MapBackgrounds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_MapBackgrounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_MapFogs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_MapFogs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_MapRevealers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapTrackerComponent_Statics::NewProp_MapRevealers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapTrackerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapTrackerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapTrackerComponent_Statics::ClassParams = {
		&UMapTrackerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMapTrackerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMapTrackerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMapTrackerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMapTrackerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapTrackerComponent()
	{
		if (!Z_Registration_Info_UClass_UMapTrackerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapTrackerComponent.OuterSingleton, Z_Construct_UClass_UMapTrackerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMapTrackerComponent.OuterSingleton;
	}
	template<> MINIMAPPLUGIN_API UClass* StaticClass<UMapTrackerComponent>()
	{
		return UMapTrackerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapTrackerComponent);
	UMapTrackerComponent::~UMapTrackerComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMapTrackerComponent, UMapTrackerComponent::StaticClass, TEXT("UMapTrackerComponent"), &Z_Registration_Info_UClass_UMapTrackerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapTrackerComponent), 4080736351U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_2825092368(TEXT("/Script/MinimapPlugin"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
