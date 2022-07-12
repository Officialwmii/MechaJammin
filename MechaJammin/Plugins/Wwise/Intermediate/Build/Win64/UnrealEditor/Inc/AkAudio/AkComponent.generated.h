// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkAuxBus;
class UAkComponent;
class UAkSwitchValue;
class UAkTrigger;
class UAkAudioEvent;
struct FAkExternalSourceInfo;
struct FLatentActionInfo;
#ifdef AKAUDIO_AkComponent_generated_h
#error "AkComponent.generated.h already included, missing '#pragma once' in AkComponent.h"
#endif
#define AKAUDIO_AkComponent_generated_h

#define FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_SPARSE_DATA
#define FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAttenuationRadius); \
	DECLARE_FUNCTION(execSetAttenuationScalingFactor); \
	DECLARE_FUNCTION(execSetOutputBusVolume); \
	DECLARE_FUNCTION(execSetEarlyReflectionsVolume); \
	DECLARE_FUNCTION(execSetEarlyReflectionsAuxBus); \
	DECLARE_FUNCTION(execUseEarlyReflections); \
	DECLARE_FUNCTION(execUseReverbVolumes); \
	DECLARE_FUNCTION(execSetListeners); \
	DECLARE_FUNCTION(execSetStopWhenOwnerDestroyed); \
	DECLARE_FUNCTION(execSetSwitch); \
	DECLARE_FUNCTION(execPostTrigger); \
	DECLARE_FUNCTION(execPostAkEventByName); \
	DECLARE_FUNCTION(execPostAkEventAndWaitForEndAsync); \
	DECLARE_FUNCTION(execPostAkEventAndWaitForEnd); \
	DECLARE_FUNCTION(execPostAssociatedAkEventAndWaitForEndAsync); \
	DECLARE_FUNCTION(execPostAssociatedAkEventAndWaitForEnd); \
	DECLARE_FUNCTION(execSetGameObjectRadius);


#define FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAttenuationRadius); \
	DECLARE_FUNCTION(execSetAttenuationScalingFactor); \
	DECLARE_FUNCTION(execSetOutputBusVolume); \
	DECLARE_FUNCTION(execSetEarlyReflectionsVolume); \
	DECLARE_FUNCTION(execSetEarlyReflectionsAuxBus); \
	DECLARE_FUNCTION(execUseEarlyReflections); \
	DECLARE_FUNCTION(execUseReverbVolumes); \
	DECLARE_FUNCTION(execSetListeners); \
	DECLARE_FUNCTION(execSetStopWhenOwnerDestroyed); \
	DECLARE_FUNCTION(execSetSwitch); \
	DECLARE_FUNCTION(execPostTrigger); \
	DECLARE_FUNCTION(execPostAkEventByName); \
	DECLARE_FUNCTION(execPostAkEventAndWaitForEndAsync); \
	DECLARE_FUNCTION(execPostAkEventAndWaitForEnd); \
	DECLARE_FUNCTION(execPostAssociatedAkEventAndWaitForEndAsync); \
	DECLARE_FUNCTION(execPostAssociatedAkEventAndWaitForEnd); \
	DECLARE_FUNCTION(execSetGameObjectRadius);


#define FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkComponent(); \
	friend struct Z_Construct_UClass_UAkComponent_Statics; \
public: \
	DECLARE_CLASS(UAkComponent, UAkGameObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkComponent)


#define FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_INCLASS \
private: \
	static void StaticRegisterNativesUAkComponent(); \
	friend struct Z_Construct_UClass_UAkComponent_Statics; \
public: \
	DECLARE_CLASS(UAkComponent, UAkGameObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkComponent)


#define FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkComponent(UAkComponent&&); \
	NO_API UAkComponent(const UAkComponent&); \
public:


#define FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkComponent(UAkComponent&&); \
	NO_API UAkComponent(const UAkComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkComponent)


#define FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_70_PROLOG
#define FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_SPARSE_DATA \
	FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_RPC_WRAPPERS \
	FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_INCLASS \
	FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_SPARSE_DATA \
	FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_INCLASS_NO_PURE_DECLS \
	FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h


#define FOREACH_ENUM_EREFLECTIONFILTERBITS(op) \
	op(EReflectionFilterBits::Wall) \
	op(EReflectionFilterBits::Ceiling) \
	op(EReflectionFilterBits::Floor) 

enum class EReflectionFilterBits;
template<> AKAUDIO_API UEnum* StaticEnum<EReflectionFilterBits>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
