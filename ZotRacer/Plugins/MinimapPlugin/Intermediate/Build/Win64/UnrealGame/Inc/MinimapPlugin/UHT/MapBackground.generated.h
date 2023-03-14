// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MapBackground.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMapBackground;
class UMapRendererComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTexture2D;
class UTexture;
class UTextureRenderTarget2D;
#ifdef MINIMAPPLUGIN_MapBackground_generated_h
#error "MapBackground.generated.h already included, missing '#pragma once' in MapBackground.h"
#endif
#define MINIMAPPLUGIN_MapBackground_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_16_DELEGATE \
struct _Script_MinimapPlugin_eventMapBackgroundTextureChangedSignature_Parms \
{ \
	AMapBackground* MapBackground; \
}; \
static inline void FMapBackgroundTextureChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapBackgroundTextureChangedSignature, AMapBackground* MapBackground) \
{ \
	_Script_MinimapPlugin_eventMapBackgroundTextureChangedSignature_Parms Parms; \
	Parms.MapBackground=MapBackground; \
	MapBackgroundTextureChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_17_DELEGATE \
struct _Script_MinimapPlugin_eventMapBackgroundMaterialChangedSignature_Parms \
{ \
	AMapBackground* MapBackground; \
}; \
static inline void FMapBackgroundMaterialChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapBackgroundMaterialChangedSignature, AMapBackground* MapBackground) \
{ \
	_Script_MinimapPlugin_eventMapBackgroundMaterialChangedSignature_Parms Parms; \
	Parms.MapBackground=MapBackground; \
	MapBackgroundMaterialChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_18_DELEGATE \
struct _Script_MinimapPlugin_eventMapBackgroundAppearanceChangedSignature_Parms \
{ \
	AMapBackground* MapBackground; \
}; \
static inline void FMapBackgroundAppearanceChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapBackgroundAppearanceChangedSignature, AMapBackground* MapBackground) \
{ \
	_Script_MinimapPlugin_eventMapBackgroundAppearanceChangedSignature_Parms Parms; \
	Parms.MapBackground=MapBackground; \
	MapBackgroundAppearanceChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_19_DELEGATE \
struct _Script_MinimapPlugin_eventMapBackgroundRenderedSignature_Parms \
{ \
	AMapBackground* MapBackground; \
	int32 Level; \
	UTextureRenderTarget2D* RenderTarget; \
}; \
static inline void FMapBackgroundRenderedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapBackgroundRenderedSignature, AMapBackground* MapBackground, int32 Level, UTextureRenderTarget2D* RenderTarget) \
{ \
	_Script_MinimapPlugin_eventMapBackgroundRenderedSignature_Parms Parms; \
	Parms.MapBackground=MapBackground; \
	Parms.Level=Level; \
	Parms.RenderTarget=RenderTarget; \
	MapBackgroundRenderedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_20_DELEGATE \
struct _Script_MinimapPlugin_eventMapBackgroundOverlayChangedSignature_Parms \
{ \
	AMapBackground* MapBackground; \
	int32 Level; \
	UTextureRenderTarget2D* RenderTarget; \
}; \
static inline void FMapBackgroundOverlayChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapBackgroundOverlayChangedSignature, AMapBackground* MapBackground, int32 Level, UTextureRenderTarget2D* RenderTarget) \
{ \
	_Script_MinimapPlugin_eventMapBackgroundOverlayChangedSignature_Parms Parms; \
	Parms.MapBackground=MapBackground; \
	Parms.Level=Level; \
	Parms.RenderTarget=RenderTarget; \
	MapBackgroundOverlayChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMapBackgroundLevel_Statics; \
	MINIMAPPLUGIN_API static class UScriptStruct* StaticStruct();


template<> MINIMAPPLUGIN_API UScriptStruct* StaticStruct<struct FMapBackgroundLevel>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRerenderBackground); \
	DECLARE_FUNCTION(execGetBackgroundTextureAtHeight); \
	DECLARE_FUNCTION(execGetBackgroundOverlay); \
	DECLARE_FUNCTION(execSetBackgroundOverlay); \
	DECLARE_FUNCTION(execGetBackgroundTexture); \
	DECLARE_FUNCTION(execSetBackgroundTexture); \
	DECLARE_FUNCTION(execIsMultiLevel); \
	DECLARE_FUNCTION(execGetBackgroundZOrder); \
	DECLARE_FUNCTION(execSetBackgroundZOrder); \
	DECLARE_FUNCTION(execGetBackgroundPriority); \
	DECLARE_FUNCTION(execSetBackgroundPriority); \
	DECLARE_FUNCTION(execIsBackgroundVisible); \
	DECLARE_FUNCTION(execSetBackgroundVisible); \
	DECLARE_FUNCTION(execGetBackgroundMaterialInstanceForCanvas); \
	DECLARE_FUNCTION(execSetBackgroundMaterialForCanvas); \
	DECLARE_FUNCTION(execGetBackgroundMaterialForUMG); \
	DECLARE_FUNCTION(execSetBackgroundMaterialForUMG);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRerenderBackground); \
	DECLARE_FUNCTION(execGetBackgroundTextureAtHeight); \
	DECLARE_FUNCTION(execGetBackgroundOverlay); \
	DECLARE_FUNCTION(execSetBackgroundOverlay); \
	DECLARE_FUNCTION(execGetBackgroundTexture); \
	DECLARE_FUNCTION(execSetBackgroundTexture); \
	DECLARE_FUNCTION(execIsMultiLevel); \
	DECLARE_FUNCTION(execGetBackgroundZOrder); \
	DECLARE_FUNCTION(execSetBackgroundZOrder); \
	DECLARE_FUNCTION(execGetBackgroundPriority); \
	DECLARE_FUNCTION(execSetBackgroundPriority); \
	DECLARE_FUNCTION(execIsBackgroundVisible); \
	DECLARE_FUNCTION(execSetBackgroundVisible); \
	DECLARE_FUNCTION(execGetBackgroundMaterialInstanceForCanvas); \
	DECLARE_FUNCTION(execSetBackgroundMaterialForCanvas); \
	DECLARE_FUNCTION(execGetBackgroundMaterialForUMG); \
	DECLARE_FUNCTION(execSetBackgroundMaterialForUMG);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMapBackground(); \
	friend struct Z_Construct_UClass_AMapBackground_Statics; \
public: \
	DECLARE_CLASS(AMapBackground, AMapAreaBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinimapPlugin"), NO_API) \
	DECLARE_SERIALIZER(AMapBackground)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_INCLASS \
private: \
	static void StaticRegisterNativesAMapBackground(); \
	friend struct Z_Construct_UClass_AMapBackground_Statics; \
public: \
	DECLARE_CLASS(AMapBackground, AMapAreaBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinimapPlugin"), NO_API) \
	DECLARE_SERIALIZER(AMapBackground)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMapBackground(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMapBackground) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapBackground); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapBackground); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMapBackground(AMapBackground&&); \
	NO_API AMapBackground(const AMapBackground&); \
public: \
	NO_API virtual ~AMapBackground();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMapBackground(AMapBackground&&); \
	NO_API AMapBackground(const AMapBackground&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapBackground); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapBackground); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMapBackground) \
	NO_API virtual ~AMapBackground();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_60_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINIMAPPLUGIN_API UClass* StaticClass<class AMapBackground>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
