// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MapFog.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMapFog;
class UMapRendererComponent;
class UMapRevealerComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTextureRenderTarget2D;
#ifdef MINIMAPPLUGIN_MapFog_generated_h
#error "MapFog.generated.h already included, missing '#pragma once' in MapFog.h"
#endif
#define MINIMAPPLUGIN_MapFog_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_12_DELEGATE \
struct _Script_MinimapPlugin_eventMapFogMaterialChangedSignature_Parms \
{ \
	AMapFog* MapFog; \
}; \
static inline void FMapFogMaterialChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapFogMaterialChangedSignature, AMapFog* MapFog) \
{ \
	_Script_MinimapPlugin_eventMapFogMaterialChangedSignature_Parms Parms; \
	Parms.MapFog=MapFog; \
	MapFogMaterialChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMapRevealerUnregistered); \
	DECLARE_FUNCTION(execOnMapRevealerRegistered); \
	DECLARE_FUNCTION(execGetFogMaterialInstanceForCanvas); \
	DECLARE_FUNCTION(execSetFogMaterialForCanvas); \
	DECLARE_FUNCTION(execGetFogMaterialForUMG); \
	DECLARE_FUNCTION(execSetFogMaterialForUMG); \
	DECLARE_FUNCTION(execGetWorldToPixelRatio); \
	DECLARE_FUNCTION(execGetSourceFogRenderTarget); \
	DECLARE_FUNCTION(execGetDestinationFogRenderTarget); \
	DECLARE_FUNCTION(execGetFogAtLocation);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMapRevealerUnregistered); \
	DECLARE_FUNCTION(execOnMapRevealerRegistered); \
	DECLARE_FUNCTION(execGetFogMaterialInstanceForCanvas); \
	DECLARE_FUNCTION(execSetFogMaterialForCanvas); \
	DECLARE_FUNCTION(execGetFogMaterialForUMG); \
	DECLARE_FUNCTION(execSetFogMaterialForUMG); \
	DECLARE_FUNCTION(execGetWorldToPixelRatio); \
	DECLARE_FUNCTION(execGetSourceFogRenderTarget); \
	DECLARE_FUNCTION(execGetDestinationFogRenderTarget); \
	DECLARE_FUNCTION(execGetFogAtLocation);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMapFog(); \
	friend struct Z_Construct_UClass_AMapFog_Statics; \
public: \
	DECLARE_CLASS(AMapFog, AMapAreaBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinimapPlugin"), NO_API) \
	DECLARE_SERIALIZER(AMapFog)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAMapFog(); \
	friend struct Z_Construct_UClass_AMapFog_Statics; \
public: \
	DECLARE_CLASS(AMapFog, AMapAreaBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinimapPlugin"), NO_API) \
	DECLARE_SERIALIZER(AMapFog)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMapFog(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMapFog) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapFog); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapFog); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMapFog(AMapFog&&); \
	NO_API AMapFog(const AMapFog&); \
public: \
	NO_API virtual ~AMapFog();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMapFog(AMapFog&&); \
	NO_API AMapFog(const AMapFog&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapFog); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapFog); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMapFog) \
	NO_API virtual ~AMapFog();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_14_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINIMAPPLUGIN_API UClass* StaticClass<class AMapFog>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
