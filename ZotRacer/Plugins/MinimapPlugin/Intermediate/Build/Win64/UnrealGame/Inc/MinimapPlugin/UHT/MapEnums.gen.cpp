// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinimapPlugin/Public/MapEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapEnums() {}
// Cross Module References
	MINIMAPPLUGIN_API UEnum* Z_Construct_UEnum_MinimapPlugin_EFogPostProcessVolumeOption();
	MINIMAPPLUGIN_API UEnum* Z_Construct_UEnum_MinimapPlugin_EIconBackgroundInteraction();
	MINIMAPPLUGIN_API UEnum* Z_Construct_UEnum_MinimapPlugin_EIconFogInteraction();
	MINIMAPPLUGIN_API UEnum* Z_Construct_UEnum_MinimapPlugin_EIconSizeUnit();
	MINIMAPPLUGIN_API UEnum* Z_Construct_UEnum_MinimapPlugin_EMapFogRevealMode();
	MINIMAPPLUGIN_API UEnum* Z_Construct_UEnum_MinimapPlugin_EMapViewRotationMode();
	MINIMAPPLUGIN_API UEnum* Z_Construct_UEnum_MinimapPlugin_EMapViewSearchOption();
	UPackage* Z_Construct_UPackage__Script_MinimapPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIconSizeUnit;
	static UEnum* EIconSizeUnit_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EIconSizeUnit.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EIconSizeUnit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MinimapPlugin_EIconSizeUnit, Z_Construct_UPackage__Script_MinimapPlugin(), TEXT("EIconSizeUnit"));
		}
		return Z_Registration_Info_UEnum_EIconSizeUnit.OuterSingleton;
	}
	template<> MINIMAPPLUGIN_API UEnum* StaticEnum<EIconSizeUnit>()
	{
		return EIconSizeUnit_StaticEnum();
	}
	struct Z_Construct_UEnum_MinimapPlugin_EIconSizeUnit_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MinimapPlugin_EIconSizeUnit_Statics::Enumerators[] = {
		{ "EIconSizeUnit::ScreenSpace", (int64)EIconSizeUnit::ScreenSpace },
		{ "EIconSizeUnit::WorldSpace", (int64)EIconSizeUnit::WorldSpace },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MinimapPlugin_EIconSizeUnit_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Icon size can be defined in screen or world units\n" },
		{ "ModuleRelativePath", "Public/MapEnums.h" },
		{ "ScreenSpace.Comment", "// Icon size is defined in pixels. Will always appear as the same size, no matter the zoom level.\n" },
		{ "ScreenSpace.Name", "EIconSizeUnit::ScreenSpace" },
		{ "ScreenSpace.ToolTip", "Icon size is defined in pixels. Will always appear as the same size, no matter the zoom level." },
		{ "ToolTip", "Icon size can be defined in screen or world units" },
		{ "WorldSpace.Comment", "// Icon size is defined in world units. When zooming in and out, the icon will scale up and down accordingly.\n" },
		{ "WorldSpace.Name", "EIconSizeUnit::WorldSpace" },
		{ "WorldSpace.ToolTip", "Icon size is defined in world units. When zooming in and out, the icon will scale up and down accordingly." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MinimapPlugin_EIconSizeUnit_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin,
		nullptr,
		"EIconSizeUnit",
		"EIconSizeUnit",
		Z_Construct_UEnum_MinimapPlugin_EIconSizeUnit_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MinimapPlugin_EIconSizeUnit_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MinimapPlugin_EIconSizeUnit_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MinimapPlugin_EIconSizeUnit_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MinimapPlugin_EIconSizeUnit()
	{
		if (!Z_Registration_Info_UEnum_EIconSizeUnit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIconSizeUnit.InnerSingleton, Z_Construct_UEnum_MinimapPlugin_EIconSizeUnit_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EIconSizeUnit.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMapFogRevealMode;
	static UEnum* EMapFogRevealMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMapFogRevealMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMapFogRevealMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MinimapPlugin_EMapFogRevealMode, Z_Construct_UPackage__Script_MinimapPlugin(), TEXT("EMapFogRevealMode"));
		}
		return Z_Registration_Info_UEnum_EMapFogRevealMode.OuterSingleton;
	}
	template<> MINIMAPPLUGIN_API UEnum* StaticEnum<EMapFogRevealMode>()
	{
		return EMapFogRevealMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MinimapPlugin_EMapFogRevealMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MinimapPlugin_EMapFogRevealMode_Statics::Enumerators[] = {
		{ "EMapFogRevealMode::Off", (int64)EMapFogRevealMode::Off },
		{ "EMapFogRevealMode::Temporary", (int64)EMapFogRevealMode::Temporary },
		{ "EMapFogRevealMode::Permanent", (int64)EMapFogRevealMode::Permanent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MinimapPlugin_EMapFogRevealMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// The way in which an actor reveals fog\n" },
		{ "ModuleRelativePath", "Public/MapEnums.h" },
		{ "Off.Comment", "// When reveal mode is Off, this actor won't reveal anything on the minimap\n" },
		{ "Off.Name", "EMapFogRevealMode::Off" },
		{ "Off.ToolTip", "When reveal mode is Off, this actor won't reveal anything on the minimap" },
		{ "Permanent.Comment", "// When reveal mode is Permanent, areas this actor visits will be permanently revealed. However, icons may still be configured to be hidden unless a revealing actor is currently nearby.\n" },
		{ "Permanent.Name", "EMapFogRevealMode::Permanent" },
		{ "Permanent.ToolTip", "When reveal mode is Permanent, areas this actor visits will be permanently revealed. However, icons may still be configured to be hidden unless a revealing actor is currently nearby." },
		{ "Temporary.Comment", "// When reveal mode is Temporary, this actor will reveal an area on the minimap while hs is nearby\n" },
		{ "Temporary.Name", "EMapFogRevealMode::Temporary" },
		{ "Temporary.ToolTip", "When reveal mode is Temporary, this actor will reveal an area on the minimap while hs is nearby" },
		{ "ToolTip", "The way in which an actor reveals fog" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MinimapPlugin_EMapFogRevealMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin,
		nullptr,
		"EMapFogRevealMode",
		"EMapFogRevealMode",
		Z_Construct_UEnum_MinimapPlugin_EMapFogRevealMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MinimapPlugin_EMapFogRevealMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MinimapPlugin_EMapFogRevealMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MinimapPlugin_EMapFogRevealMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MinimapPlugin_EMapFogRevealMode()
	{
		if (!Z_Registration_Info_UEnum_EMapFogRevealMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMapFogRevealMode.InnerSingleton, Z_Construct_UEnum_MinimapPlugin_EMapFogRevealMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMapFogRevealMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIconFogInteraction;
	static UEnum* EIconFogInteraction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EIconFogInteraction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EIconFogInteraction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MinimapPlugin_EIconFogInteraction, Z_Construct_UPackage__Script_MinimapPlugin(), TEXT("EIconFogInteraction"));
		}
		return Z_Registration_Info_UEnum_EIconFogInteraction.OuterSingleton;
	}
	template<> MINIMAPPLUGIN_API UEnum* StaticEnum<EIconFogInteraction>()
	{
		return EIconFogInteraction_StaticEnum();
	}
	struct Z_Construct_UEnum_MinimapPlugin_EIconFogInteraction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MinimapPlugin_EIconFogInteraction_Statics::Enumerators[] = {
		{ "EIconFogInteraction::OnlyRenderWhenRevealing", (int64)EIconFogInteraction::OnlyRenderWhenRevealing },
		{ "EIconFogInteraction::OnlyRenderWhenExplored", (int64)EIconFogInteraction::OnlyRenderWhenExplored },
		{ "EIconFogInteraction::AlwaysRenderUnderFog", (int64)EIconFogInteraction::AlwaysRenderUnderFog },
		{ "EIconFogInteraction::AlwaysRenderAboveFog", (int64)EIconFogInteraction::AlwaysRenderAboveFog },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MinimapPlugin_EIconFogInteraction_Statics::Enum_MetaDataParams[] = {
		{ "AlwaysRenderAboveFog.Comment", "// Icon is always visible on top of fog\n" },
		{ "AlwaysRenderAboveFog.Name", "EIconFogInteraction::AlwaysRenderAboveFog" },
		{ "AlwaysRenderAboveFog.ToolTip", "Icon is always visible on top of fog" },
		{ "AlwaysRenderUnderFog.Comment", "// Icon is always visible but under the fog. Opaque fog will hide the icon.\n" },
		{ "AlwaysRenderUnderFog.Name", "EIconFogInteraction::AlwaysRenderUnderFog" },
		{ "AlwaysRenderUnderFog.ToolTip", "Icon is always visible but under the fog. Opaque fog will hide the icon." },
		{ "BlueprintType", "true" },
		{ "Comment", "// Icon size can be defined in screen or world units\n" },
		{ "ModuleRelativePath", "Public/MapEnums.h" },
		{ "OnlyRenderWhenExplored.Comment", "// Icon is only visible when the icon location is revealed or has been revealed. Reveal factor must exceed FogRevealThreshold.\n" },
		{ "OnlyRenderWhenExplored.Name", "EIconFogInteraction::OnlyRenderWhenExplored" },
		{ "OnlyRenderWhenExplored.ToolTip", "Icon is only visible when the icon location is revealed or has been revealed. Reveal factor must exceed FogRevealThreshold." },
		{ "OnlyRenderWhenRevealing.Comment", "// Icon is only visible when the icon location is being revealed currently. Reveal factor must exceed FogRevealThreshold.\n" },
		{ "OnlyRenderWhenRevealing.Name", "EIconFogInteraction::OnlyRenderWhenRevealing" },
		{ "OnlyRenderWhenRevealing.ToolTip", "Icon is only visible when the icon location is being revealed currently. Reveal factor must exceed FogRevealThreshold." },
		{ "ToolTip", "Icon size can be defined in screen or world units" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MinimapPlugin_EIconFogInteraction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin,
		nullptr,
		"EIconFogInteraction",
		"EIconFogInteraction",
		Z_Construct_UEnum_MinimapPlugin_EIconFogInteraction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MinimapPlugin_EIconFogInteraction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MinimapPlugin_EIconFogInteraction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MinimapPlugin_EIconFogInteraction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MinimapPlugin_EIconFogInteraction()
	{
		if (!Z_Registration_Info_UEnum_EIconFogInteraction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIconFogInteraction.InnerSingleton, Z_Construct_UEnum_MinimapPlugin_EIconFogInteraction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EIconFogInteraction.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIconBackgroundInteraction;
	static UEnum* EIconBackgroundInteraction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EIconBackgroundInteraction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EIconBackgroundInteraction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MinimapPlugin_EIconBackgroundInteraction, Z_Construct_UPackage__Script_MinimapPlugin(), TEXT("EIconBackgroundInteraction"));
		}
		return Z_Registration_Info_UEnum_EIconBackgroundInteraction.OuterSingleton;
	}
	template<> MINIMAPPLUGIN_API UEnum* StaticEnum<EIconBackgroundInteraction>()
	{
		return EIconBackgroundInteraction_StaticEnum();
	}
	struct Z_Construct_UEnum_MinimapPlugin_EIconBackgroundInteraction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MinimapPlugin_EIconBackgroundInteraction_Statics::Enumerators[] = {
		{ "EIconBackgroundInteraction::AlwaysRender", (int64)EIconBackgroundInteraction::AlwaysRender },
		{ "EIconBackgroundInteraction::OnlyRenderInSameVolume", (int64)EIconBackgroundInteraction::OnlyRenderInSameVolume },
		{ "EIconBackgroundInteraction::OnlyRenderOnSameFloor", (int64)EIconBackgroundInteraction::OnlyRenderOnSameFloor },
		{ "EIconBackgroundInteraction::OnlyRenderInPriorityVolume", (int64)EIconBackgroundInteraction::OnlyRenderInPriorityVolume },
		{ "EIconBackgroundInteraction::OnlyRenderOnPriorityFloor", (int64)EIconBackgroundInteraction::OnlyRenderOnPriorityFloor },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MinimapPlugin_EIconBackgroundInteraction_Statics::Enum_MetaDataParams[] = {
		{ "AlwaysRender.Comment", "// Icon visibility is not affected by MapBackgrounds\n" },
		{ "AlwaysRender.Name", "EIconBackgroundInteraction::AlwaysRender" },
		{ "AlwaysRender.ToolTip", "Icon visibility is not affected by MapBackgrounds" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Icon size can be defined in screen or world units\n" },
		{ "ModuleRelativePath", "Public/MapEnums.h" },
		{ "OnlyRenderInPriorityVolume.Comment", "// Same as OnlyRenderInSameVolume, but the MapViewComponent must be in an equally high priority MapBackground as this icon\n" },
		{ "OnlyRenderInPriorityVolume.Name", "EIconBackgroundInteraction::OnlyRenderInPriorityVolume" },
		{ "OnlyRenderInPriorityVolume.ToolTip", "Same as OnlyRenderInSameVolume, but the MapViewComponent must be in an equally high priority MapBackground as this icon" },
		{ "OnlyRenderInSameVolume.Comment", "// Icon is only visible when inside the same MapBackground as the MapViewComponent\n" },
		{ "OnlyRenderInSameVolume.Name", "EIconBackgroundInteraction::OnlyRenderInSameVolume" },
		{ "OnlyRenderInSameVolume.ToolTip", "Icon is only visible when inside the same MapBackground as the MapViewComponent" },
		{ "OnlyRenderOnPriorityFloor.Comment", "// Same as OnlyRenderOnSameFloor, but the MapViewComponent must be in an equally high priority MapBackground as this icon\n" },
		{ "OnlyRenderOnPriorityFloor.Name", "EIconBackgroundInteraction::OnlyRenderOnPriorityFloor" },
		{ "OnlyRenderOnPriorityFloor.ToolTip", "Same as OnlyRenderOnSameFloor, but the MapViewComponent must be in an equally high priority MapBackground as this icon" },
		{ "OnlyRenderOnSameFloor.Comment", "// Icon is only visible when inside the same MapBackground as the MapViewComponent, and on the same floor\n" },
		{ "OnlyRenderOnSameFloor.Name", "EIconBackgroundInteraction::OnlyRenderOnSameFloor" },
		{ "OnlyRenderOnSameFloor.ToolTip", "Icon is only visible when inside the same MapBackground as the MapViewComponent, and on the same floor" },
		{ "ToolTip", "Icon size can be defined in screen or world units" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MinimapPlugin_EIconBackgroundInteraction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin,
		nullptr,
		"EIconBackgroundInteraction",
		"EIconBackgroundInteraction",
		Z_Construct_UEnum_MinimapPlugin_EIconBackgroundInteraction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MinimapPlugin_EIconBackgroundInteraction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MinimapPlugin_EIconBackgroundInteraction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MinimapPlugin_EIconBackgroundInteraction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MinimapPlugin_EIconBackgroundInteraction()
	{
		if (!Z_Registration_Info_UEnum_EIconBackgroundInteraction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIconBackgroundInteraction.InnerSingleton, Z_Construct_UEnum_MinimapPlugin_EIconBackgroundInteraction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EIconBackgroundInteraction.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMapViewSearchOption;
	static UEnum* EMapViewSearchOption_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMapViewSearchOption.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMapViewSearchOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MinimapPlugin_EMapViewSearchOption, Z_Construct_UPackage__Script_MinimapPlugin(), TEXT("EMapViewSearchOption"));
		}
		return Z_Registration_Info_UEnum_EMapViewSearchOption.OuterSingleton;
	}
	template<> MINIMAPPLUGIN_API UEnum* StaticEnum<EMapViewSearchOption>()
	{
		return EMapViewSearchOption_StaticEnum();
	}
	struct Z_Construct_UEnum_MinimapPlugin_EMapViewSearchOption_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MinimapPlugin_EMapViewSearchOption_Statics::Enumerators[] = {
		{ "EMapViewSearchOption::Any", (int64)EMapViewSearchOption::Any },
		{ "EMapViewSearchOption::OnPlayer", (int64)EMapViewSearchOption::OnPlayer },
		{ "EMapViewSearchOption::OnMapBackground", (int64)EMapViewSearchOption::OnMapBackground },
		{ "EMapViewSearchOption::OnMapFog", (int64)EMapViewSearchOption::OnMapFog },
		{ "EMapViewSearchOption::Disabled", (int64)EMapViewSearchOption::Disabled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MinimapPlugin_EMapViewSearchOption_Statics::Enum_MetaDataParams[] = {
		{ "Any.Comment", "// The minimap will try to find a MapViewComponent anywhere in the world, prioritizing in this order: players, background actors, fog actors, other actors\n" },
		{ "Any.Name", "EMapViewSearchOption::Any" },
		{ "Any.ToolTip", "The minimap will try to find a MapViewComponent anywhere in the world, prioritizing in this order: players, background actors, fog actors, other actors" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Utility option for minimap renderers to auto-locate a MapViewComponent in the world\n" },
		{ "Disabled.Comment", "// The minimap will not try to find a MapViewComponent. You must manually supply it.\n" },
		{ "Disabled.Name", "EMapViewSearchOption::Disabled" },
		{ "Disabled.ToolTip", "The minimap will not try to find a MapViewComponent. You must manually supply it." },
		{ "ModuleRelativePath", "Public/MapEnums.h" },
		{ "OnMapBackground.Comment", "// The minimap will try to find a MapViewComponent on a background actor\n" },
		{ "OnMapBackground.Name", "EMapViewSearchOption::OnMapBackground" },
		{ "OnMapBackground.ToolTip", "The minimap will try to find a MapViewComponent on a background actor" },
		{ "OnMapFog.Comment", "// The minimap will try to find a MapViewComponent on a fog actor\n" },
		{ "OnMapFog.Name", "EMapViewSearchOption::OnMapFog" },
		{ "OnMapFog.ToolTip", "The minimap will try to find a MapViewComponent on a fog actor" },
		{ "OnPlayer.Comment", "// The minimap will try to find a MapViewComponent on the first player's pawn or controller\n" },
		{ "OnPlayer.Name", "EMapViewSearchOption::OnPlayer" },
		{ "OnPlayer.ToolTip", "The minimap will try to find a MapViewComponent on the first player's pawn or controller" },
		{ "ToolTip", "Utility option for minimap renderers to auto-locate a MapViewComponent in the world" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MinimapPlugin_EMapViewSearchOption_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin,
		nullptr,
		"EMapViewSearchOption",
		"EMapViewSearchOption",
		Z_Construct_UEnum_MinimapPlugin_EMapViewSearchOption_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MinimapPlugin_EMapViewSearchOption_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MinimapPlugin_EMapViewSearchOption_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MinimapPlugin_EMapViewSearchOption_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MinimapPlugin_EMapViewSearchOption()
	{
		if (!Z_Registration_Info_UEnum_EMapViewSearchOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMapViewSearchOption.InnerSingleton, Z_Construct_UEnum_MinimapPlugin_EMapViewSearchOption_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMapViewSearchOption.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFogPostProcessVolumeOption;
	static UEnum* EFogPostProcessVolumeOption_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFogPostProcessVolumeOption.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFogPostProcessVolumeOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MinimapPlugin_EFogPostProcessVolumeOption, Z_Construct_UPackage__Script_MinimapPlugin(), TEXT("EFogPostProcessVolumeOption"));
		}
		return Z_Registration_Info_UEnum_EFogPostProcessVolumeOption.OuterSingleton;
	}
	template<> MINIMAPPLUGIN_API UEnum* StaticEnum<EFogPostProcessVolumeOption>()
	{
		return EFogPostProcessVolumeOption_StaticEnum();
	}
	struct Z_Construct_UEnum_MinimapPlugin_EFogPostProcessVolumeOption_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MinimapPlugin_EFogPostProcessVolumeOption_Statics::Enumerators[] = {
		{ "EFogPostProcessVolumeOption::AutoLocate", (int64)EFogPostProcessVolumeOption::AutoLocate },
		{ "EFogPostProcessVolumeOption::AutoLocateOrCreate", (int64)EFogPostProcessVolumeOption::AutoLocateOrCreate },
		{ "EFogPostProcessVolumeOption::Manual", (int64)EFogPostProcessVolumeOption::Manual },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MinimapPlugin_EFogPostProcessVolumeOption_Statics::Enum_MetaDataParams[] = {
		{ "AutoLocate.Comment", "// An unbound post process volume will be looked for in the level\n" },
		{ "AutoLocate.Name", "EFogPostProcessVolumeOption::AutoLocate" },
		{ "AutoLocate.ToolTip", "An unbound post process volume will be looked for in the level" },
		{ "AutoLocateOrCreate.Comment", "// An unbound post process volume will be looked for in the level. If not found, it will be created.\n" },
		{ "AutoLocateOrCreate.Name", "EFogPostProcessVolumeOption::AutoLocateOrCreate" },
		{ "AutoLocateOrCreate.ToolTip", "An unbound post process volume will be looked for in the level. If not found, it will be created." },
		{ "BlueprintType", "true" },
		{ "Comment", "// Utility option for map fog to auto-locate a PostProcessVolume to add the fog post process effect to\n" },
		{ "Manual.Comment", "// No post process volume will be looked for. You must manually set it, or no fog post process effect is applied.\n" },
		{ "Manual.Name", "EFogPostProcessVolumeOption::Manual" },
		{ "Manual.ToolTip", "No post process volume will be looked for. You must manually set it, or no fog post process effect is applied." },
		{ "ModuleRelativePath", "Public/MapEnums.h" },
		{ "ToolTip", "Utility option for map fog to auto-locate a PostProcessVolume to add the fog post process effect to" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MinimapPlugin_EFogPostProcessVolumeOption_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin,
		nullptr,
		"EFogPostProcessVolumeOption",
		"EFogPostProcessVolumeOption",
		Z_Construct_UEnum_MinimapPlugin_EFogPostProcessVolumeOption_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MinimapPlugin_EFogPostProcessVolumeOption_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MinimapPlugin_EFogPostProcessVolumeOption_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MinimapPlugin_EFogPostProcessVolumeOption_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MinimapPlugin_EFogPostProcessVolumeOption()
	{
		if (!Z_Registration_Info_UEnum_EFogPostProcessVolumeOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFogPostProcessVolumeOption.InnerSingleton, Z_Construct_UEnum_MinimapPlugin_EFogPostProcessVolumeOption_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFogPostProcessVolumeOption.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMapViewRotationMode;
	static UEnum* EMapViewRotationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMapViewRotationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMapViewRotationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MinimapPlugin_EMapViewRotationMode, Z_Construct_UPackage__Script_MinimapPlugin(), TEXT("EMapViewRotationMode"));
		}
		return Z_Registration_Info_UEnum_EMapViewRotationMode.OuterSingleton;
	}
	template<> MINIMAPPLUGIN_API UEnum* StaticEnum<EMapViewRotationMode>()
	{
		return EMapViewRotationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MinimapPlugin_EMapViewRotationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MinimapPlugin_EMapViewRotationMode_Statics::Enumerators[] = {
		{ "EMapViewRotationMode::UseFixedRotation", (int64)EMapViewRotationMode::UseFixedRotation },
		{ "EMapViewRotationMode::InheritYaw", (int64)EMapViewRotationMode::InheritYaw },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MinimapPlugin_EMapViewRotationMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Icon size can be defined in screen or world units\n" },
		{ "InheritYaw.Comment", "// The map view inherits the parent component's yaw and adds InheritedYawOffset\n" },
		{ "InheritYaw.Name", "EMapViewRotationMode::InheritYaw" },
		{ "InheritYaw.ToolTip", "The map view inherits the parent component's yaw and adds InheritedYawOffset" },
		{ "ModuleRelativePath", "Public/MapEnums.h" },
		{ "ToolTip", "Icon size can be defined in screen or world units" },
		{ "UseFixedRotation.Comment", "// The map view always uses FixedRotation as world rotation\n" },
		{ "UseFixedRotation.Name", "EMapViewRotationMode::UseFixedRotation" },
		{ "UseFixedRotation.ToolTip", "The map view always uses FixedRotation as world rotation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MinimapPlugin_EMapViewRotationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin,
		nullptr,
		"EMapViewRotationMode",
		"EMapViewRotationMode",
		Z_Construct_UEnum_MinimapPlugin_EMapViewRotationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MinimapPlugin_EMapViewRotationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MinimapPlugin_EMapViewRotationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MinimapPlugin_EMapViewRotationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MinimapPlugin_EMapViewRotationMode()
	{
		if (!Z_Registration_Info_UEnum_EMapViewRotationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMapViewRotationMode.InnerSingleton, Z_Construct_UEnum_MinimapPlugin_EMapViewRotationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMapViewRotationMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapEnums_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapEnums_h_Statics::EnumInfo[] = {
		{ EIconSizeUnit_StaticEnum, TEXT("EIconSizeUnit"), &Z_Registration_Info_UEnum_EIconSizeUnit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3756336531U) },
		{ EMapFogRevealMode_StaticEnum, TEXT("EMapFogRevealMode"), &Z_Registration_Info_UEnum_EMapFogRevealMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 50192812U) },
		{ EIconFogInteraction_StaticEnum, TEXT("EIconFogInteraction"), &Z_Registration_Info_UEnum_EIconFogInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1328590264U) },
		{ EIconBackgroundInteraction_StaticEnum, TEXT("EIconBackgroundInteraction"), &Z_Registration_Info_UEnum_EIconBackgroundInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2520601228U) },
		{ EMapViewSearchOption_StaticEnum, TEXT("EMapViewSearchOption"), &Z_Registration_Info_UEnum_EMapViewSearchOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 893038541U) },
		{ EFogPostProcessVolumeOption_StaticEnum, TEXT("EFogPostProcessVolumeOption"), &Z_Registration_Info_UEnum_EFogPostProcessVolumeOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3754267149U) },
		{ EMapViewRotationMode_StaticEnum, TEXT("EMapViewRotationMode"), &Z_Registration_Info_UEnum_EMapViewRotationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2010780457U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapEnums_h_2583159779(TEXT("/Script/MinimapPlugin"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapEnums_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
