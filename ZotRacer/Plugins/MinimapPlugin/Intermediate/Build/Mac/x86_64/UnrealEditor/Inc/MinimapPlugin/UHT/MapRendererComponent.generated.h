// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MapRendererComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMapViewComponent;
enum class EMapViewSearchOption : uint8;
struct FLinearColor;
#ifdef MINIMAPPLUGIN_MapRendererComponent_generated_h
#error "MapRendererComponent.generated.h already included, missing '#pragma once' in MapRendererComponent.h"
#endif
#define MINIMAPPLUGIN_MapRendererComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_19_DELEGATE \
struct _Script_MinimapPlugin_eventMapClickedSignature_Parms \
{ \
	FVector WorldLocation; \
	bool bIsLeftMouseButton; \
}; \
static inline void FMapClickedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapClickedSignature, FVector WorldLocation, bool bIsLeftMouseButton) \
{ \
	_Script_MinimapPlugin_eventMapClickedSignature_Parms Parms; \
	Parms.WorldLocation=WorldLocation; \
	Parms.bIsLeftMouseButton=bIsLeftMouseButton ? true : false; \
	MapClickedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSize); \
	DECLARE_FUNCTION(execSetMargin); \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execGetBackgroundFillColor); \
	DECLARE_FUNCTION(execSetBackgroundFillColor); \
	DECLARE_FUNCTION(execGetFrustumFloorDistance); \
	DECLARE_FUNCTION(execSetFrustumFloorDistance); \
	DECLARE_FUNCTION(execGetDrawFrustum); \
	DECLARE_FUNCTION(execSetDrawFrustum); \
	DECLARE_FUNCTION(execIsRendered); \
	DECLARE_FUNCTION(execSetIsRendered); \
	DECLARE_FUNCTION(execIsCircular); \
	DECLARE_FUNCTION(execSetIsCircular); \
	DECLARE_FUNCTION(execSetMapView); \
	DECLARE_FUNCTION(execSetAutoLocateMapView);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSize); \
	DECLARE_FUNCTION(execSetMargin); \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execGetBackgroundFillColor); \
	DECLARE_FUNCTION(execSetBackgroundFillColor); \
	DECLARE_FUNCTION(execGetFrustumFloorDistance); \
	DECLARE_FUNCTION(execSetFrustumFloorDistance); \
	DECLARE_FUNCTION(execGetDrawFrustum); \
	DECLARE_FUNCTION(execSetDrawFrustum); \
	DECLARE_FUNCTION(execIsRendered); \
	DECLARE_FUNCTION(execSetIsRendered); \
	DECLARE_FUNCTION(execIsCircular); \
	DECLARE_FUNCTION(execSetIsCircular); \
	DECLARE_FUNCTION(execSetMapView); \
	DECLARE_FUNCTION(execSetAutoLocateMapView);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapRendererComponent(); \
	friend struct Z_Construct_UClass_UMapRendererComponent_Statics; \
public: \
	DECLARE_CLASS(UMapRendererComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinimapPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMapRendererComponent)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUMapRendererComponent(); \
	friend struct Z_Construct_UClass_UMapRendererComponent_Statics; \
public: \
	DECLARE_CLASS(UMapRendererComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinimapPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMapRendererComponent)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMapRendererComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapRendererComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapRendererComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapRendererComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapRendererComponent(UMapRendererComponent&&); \
	NO_API UMapRendererComponent(const UMapRendererComponent&); \
public: \
	NO_API virtual ~UMapRendererComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapRendererComponent(UMapRendererComponent&&); \
	NO_API UMapRendererComponent(const UMapRendererComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapRendererComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapRendererComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMapRendererComponent) \
	NO_API virtual ~UMapRendererComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_24_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_RPC_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_INCLASS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINIMAPPLUGIN_API UClass* StaticClass<class UMapRendererComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
