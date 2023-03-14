// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinimapPlugin/Public/MapRevealerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapRevealerComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapRevealerComponent();
	MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapRevealerComponent_NoRegister();
	MINIMAPPLUGIN_API UEnum* Z_Construct_UEnum_MinimapPlugin_EMapFogRevealMode();
	UPackage* Z_Construct_UPackage__Script_MinimapPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UMapRevealerComponent::execSetRevealDropOffDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewRevealDropOffDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRevealDropOffDistance(Z_Param_NewRevealDropOffDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapRevealerComponent::execGetRevealDropOffDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRevealDropOffDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapRevealerComponent::execSetRevealExtent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewRevealExtentX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewRevealExtentY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRevealExtent(Z_Param_NewRevealExtentX,Z_Param_NewRevealExtentY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapRevealerComponent::execGetRevealExtent)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_RevealExtentX);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_RevealExtentY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRevealExtent(Z_Param_Out_RevealExtentX,Z_Param_Out_RevealExtentY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapRevealerComponent::execSetRevealMode)
	{
		P_GET_ENUM(EMapFogRevealMode,Z_Param_NewRevealMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRevealMode(EMapFogRevealMode(Z_Param_NewRevealMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapRevealerComponent::execGetRevealMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMapFogRevealMode*)Z_Param__Result=P_THIS->GetRevealMode();
		P_NATIVE_END;
	}
	void UMapRevealerComponent::StaticRegisterNativesUMapRevealerComponent()
	{
		UClass* Class = UMapRevealerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRevealDropOffDistance", &UMapRevealerComponent::execGetRevealDropOffDistance },
			{ "GetRevealExtent", &UMapRevealerComponent::execGetRevealExtent },
			{ "GetRevealMode", &UMapRevealerComponent::execGetRevealMode },
			{ "SetRevealDropOffDistance", &UMapRevealerComponent::execSetRevealDropOffDistance },
			{ "SetRevealExtent", &UMapRevealerComponent::execSetRevealExtent },
			{ "SetRevealMode", &UMapRevealerComponent::execSetRevealMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMapRevealerComponent_GetRevealDropOffDistance_Statics
	{
		struct MapRevealerComponent_eventGetRevealDropOffDistance_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapRevealerComponent_GetRevealDropOffDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapRevealerComponent_eventGetRevealDropOffDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapRevealerComponent_GetRevealDropOffDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRevealerComponent_GetRevealDropOffDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapRevealerComponent_GetRevealDropOffDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Returns the distance, measured from the revealer's XY extent, over which the revealer's effect gradually decreases.\n" },
		{ "ModuleRelativePath", "Public/MapRevealerComponent.h" },
		{ "ToolTip", "Returns the distance, measured from the revealer's XY extent, over which the revealer's effect gradually decreases." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapRevealerComponent_GetRevealDropOffDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapRevealerComponent, nullptr, "GetRevealDropOffDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapRevealerComponent_GetRevealDropOffDistance_Statics::MapRevealerComponent_eventGetRevealDropOffDistance_Parms), Z_Construct_UFunction_UMapRevealerComponent_GetRevealDropOffDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_GetRevealDropOffDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapRevealerComponent_GetRevealDropOffDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_GetRevealDropOffDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapRevealerComponent_GetRevealDropOffDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapRevealerComponent_GetRevealDropOffDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent_Statics
	{
		struct MapRevealerComponent_eventGetRevealExtent_Parms
		{
			float RevealExtentX;
			float RevealExtentY;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RevealExtentX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RevealExtentY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent_Statics::NewProp_RevealExtentX = { "RevealExtentX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapRevealerComponent_eventGetRevealExtent_Parms, RevealExtentX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent_Statics::NewProp_RevealExtentY = { "RevealExtentY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapRevealerComponent_eventGetRevealExtent_Parms, RevealExtentY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent_Statics::NewProp_RevealExtentX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent_Statics::NewProp_RevealExtentY,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Returns the XY extent of this revealer. Z is unused.\n" },
		{ "ModuleRelativePath", "Public/MapRevealerComponent.h" },
		{ "ToolTip", "Returns the XY extent of this revealer. Z is unused." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapRevealerComponent, nullptr, "GetRevealExtent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent_Statics::MapRevealerComponent_eventGetRevealExtent_Parms), Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode_Statics
	{
		struct MapRevealerComponent_eventGetRevealMode_Parms
		{
			EMapFogRevealMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapRevealerComponent_eventGetRevealMode_Parms, ReturnValue), Z_Construct_UEnum_MinimapPlugin_EMapFogRevealMode, METADATA_PARAMS(nullptr, 0) }; // 50192812
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Returns whether this reveals temporarily, permanently or is disabled\n" },
		{ "ModuleRelativePath", "Public/MapRevealerComponent.h" },
		{ "ToolTip", "Returns whether this reveals temporarily, permanently or is disabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapRevealerComponent, nullptr, "GetRevealMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode_Statics::MapRevealerComponent_eventGetRevealMode_Parms), Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance_Statics
	{
		struct MapRevealerComponent_eventSetRevealDropOffDistance_Parms
		{
			float NewRevealDropOffDistance;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewRevealDropOffDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRevealDropOffDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance_Statics::NewProp_NewRevealDropOffDistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance_Statics::NewProp_NewRevealDropOffDistance = { "NewRevealDropOffDistance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapRevealerComponent_eventSetRevealDropOffDistance_Parms, NewRevealDropOffDistance), METADATA_PARAMS(Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance_Statics::NewProp_NewRevealDropOffDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance_Statics::NewProp_NewRevealDropOffDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance_Statics::NewProp_NewRevealDropOffDistance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Sets the distance, measured from the revealer's XY extent, over which the revealer's effect gradually decreases.\n" },
		{ "ModuleRelativePath", "Public/MapRevealerComponent.h" },
		{ "ToolTip", "Sets the distance, measured from the revealer's XY extent, over which the revealer's effect gradually decreases." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapRevealerComponent, nullptr, "SetRevealDropOffDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance_Statics::MapRevealerComponent_eventSetRevealDropOffDistance_Parms), Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics
	{
		struct MapRevealerComponent_eventSetRevealExtent_Parms
		{
			float NewRevealExtentX;
			float NewRevealExtentY;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewRevealExtentX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRevealExtentX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewRevealExtentY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRevealExtentY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::NewProp_NewRevealExtentX_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::NewProp_NewRevealExtentX = { "NewRevealExtentX", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapRevealerComponent_eventSetRevealExtent_Parms, NewRevealExtentX), METADATA_PARAMS(Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::NewProp_NewRevealExtentX_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::NewProp_NewRevealExtentX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::NewProp_NewRevealExtentY_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::NewProp_NewRevealExtentY = { "NewRevealExtentY", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapRevealerComponent_eventSetRevealExtent_Parms, NewRevealExtentY), METADATA_PARAMS(Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::NewProp_NewRevealExtentY_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::NewProp_NewRevealExtentY_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::NewProp_NewRevealExtentX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::NewProp_NewRevealExtentY,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Sets the XY extend of this revealer. Z is unused.\n" },
		{ "ModuleRelativePath", "Public/MapRevealerComponent.h" },
		{ "ToolTip", "Sets the XY extend of this revealer. Z is unused." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapRevealerComponent, nullptr, "SetRevealExtent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::MapRevealerComponent_eventSetRevealExtent_Parms), Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics
	{
		struct MapRevealerComponent_eventSetRevealMode_Parms
		{
			EMapFogRevealMode NewRevealMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewRevealMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewRevealMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewRevealMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics::NewProp_NewRevealMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics::NewProp_NewRevealMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics::NewProp_NewRevealMode = { "NewRevealMode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapRevealerComponent_eventSetRevealMode_Parms, NewRevealMode), Z_Construct_UEnum_MinimapPlugin_EMapFogRevealMode, METADATA_PARAMS(Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics::NewProp_NewRevealMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics::NewProp_NewRevealMode_MetaData)) }; // 50192812
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics::NewProp_NewRevealMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics::NewProp_NewRevealMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Sets whether this reveals temporarily, permanently or is disabled\n" },
		{ "ModuleRelativePath", "Public/MapRevealerComponent.h" },
		{ "ToolTip", "Sets whether this reveals temporarily, permanently or is disabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapRevealerComponent, nullptr, "SetRevealMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics::MapRevealerComponent_eventSetRevealMode_Parms), Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMapRevealerComponent);
	UClass* Z_Construct_UClass_UMapRevealerComponent_NoRegister()
	{
		return UMapRevealerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMapRevealerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RevealMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RevealMaterial;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RevealMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RevealMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RevealMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RevealDropOffDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RevealDropOffDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTempEngineBugWorkaround_MetaData[];
#endif
		static void NewProp_bTempEngineBugWorkaround_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTempEngineBugWorkaround;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RevealMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RevealMaterialInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapRevealerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MinimapPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMapRevealerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapRevealerComponent_GetRevealDropOffDistance, "GetRevealDropOffDistance" }, // 2393825557
		{ &Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent, "GetRevealExtent" }, // 3729475800
		{ &Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode, "GetRevealMode" }, // 2683234805
		{ &Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance, "SetRevealDropOffDistance" }, // 3622069235
		{ &Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent, "SetRevealExtent" }, // 2455750290
		{ &Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode, "SetRevealMode" }, // 1240658657
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapRevealerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "MinimapPlugin" },
		{ "Comment", "// Minimaps can be covered in fog by adding MapFog actors. When using this feature, add MapRevealComponents \n// to actors that can temporarily or permanently reveal areas.\n" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "MapRevealerComponent.h" },
		{ "ModuleRelativePath", "Public/MapRevealerComponent.h" },
		{ "ToolTip", "Minimaps can be covered in fog by adding MapFog actors. When using this feature, add MapRevealComponents\nto actors that can temporarily or permanently reveal areas." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealMaterial_MetaData[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Defines the shape of the revealed area, by rendering that shape to every MapFog's fog render target.\n" },
		{ "ModuleRelativePath", "Public/MapRevealerComponent.h" },
		{ "ToolTip", "Defines the shape of the revealed area, by rendering that shape to every MapFog's fog render target." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealMaterial = { "RevealMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapRevealerComponent, RevealMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealMaterial_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealMode_MetaData[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Whether this revealer reveals temporarily, permanently or is disabled at the moment\n" },
		{ "ModuleRelativePath", "Public/MapRevealerComponent.h" },
		{ "ToolTip", "Whether this revealer reveals temporarily, permanently or is disabled at the moment" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealMode = { "RevealMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapRevealerComponent, RevealMode), Z_Construct_UEnum_MinimapPlugin_EMapFogRevealMode, METADATA_PARAMS(Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealMode_MetaData)) }; // 50192812
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealDropOffDistance_MetaData[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Any area within RevealRadius and RevealRadius + RevealDropOffDistance is partially revealed\n" },
		{ "ModuleRelativePath", "Public/MapRevealerComponent.h" },
		{ "ToolTip", "Any area within RevealRadius and RevealRadius + RevealDropOffDistance is partially revealed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealDropOffDistance = { "RevealDropOffDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapRevealerComponent, RevealDropOffDistance), METADATA_PARAMS(Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealDropOffDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealDropOffDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_bTempEngineBugWorkaround_MetaData[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// 4.22 introduced a bug where K2_DrawTriangle renders triange lists with the UVs of first triangle\n" },
		{ "ModuleRelativePath", "Public/MapRevealerComponent.h" },
		{ "ToolTip", "4.22 introduced a bug where K2_DrawTriangle renders triange lists with the UVs of first triangle" },
	};
#endif
	void Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_bTempEngineBugWorkaround_SetBit(void* Obj)
	{
		((UMapRevealerComponent*)Obj)->bTempEngineBugWorkaround = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_bTempEngineBugWorkaround = { "bTempEngineBugWorkaround", nullptr, (EPropertyFlags)0x0010000000000055, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMapRevealerComponent), &Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_bTempEngineBugWorkaround_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_bTempEngineBugWorkaround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_bTempEngineBugWorkaround_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapRevealerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealMaterialInstance = { "RevealMaterialInstance", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapRevealerComponent, RevealMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealMaterialInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapRevealerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealDropOffDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_bTempEngineBugWorkaround,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealMaterialInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapRevealerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapRevealerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapRevealerComponent_Statics::ClassParams = {
		&UMapRevealerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMapRevealerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMapRevealerComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMapRevealerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMapRevealerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapRevealerComponent()
	{
		if (!Z_Registration_Info_UClass_UMapRevealerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapRevealerComponent.OuterSingleton, Z_Construct_UClass_UMapRevealerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMapRevealerComponent.OuterSingleton;
	}
	template<> MINIMAPPLUGIN_API UClass* StaticClass<UMapRevealerComponent>()
	{
		return UMapRevealerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapRevealerComponent);
	UMapRevealerComponent::~UMapRevealerComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRevealerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRevealerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMapRevealerComponent, UMapRevealerComponent::StaticClass, TEXT("UMapRevealerComponent"), &Z_Registration_Info_UClass_UMapRevealerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapRevealerComponent), 2403945091U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRevealerComponent_h_2708610525(TEXT("/Script/MinimapPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRevealerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRevealerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
