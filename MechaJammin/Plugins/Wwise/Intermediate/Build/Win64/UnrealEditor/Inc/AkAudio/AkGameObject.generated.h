// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkRtpc;
enum class ERTPCValueType : uint8;
class UObject;
class UAkAudioEvent;
struct FAkExternalSourceInfo;
struct FLatentActionInfo;
#ifdef AKAUDIO_AkGameObject_generated_h
#error "AkGameObject.generated.h already included, missing '#pragma once' in AkGameObject.h"
#endif
#define AKAUDIO_AkGameObject_generated_h

#define FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_30_SPARSE_DATA
#define FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRTPCValue); \
	DECLARE_FUNCTION(execSetRTPCValue); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPostAkEventAsync); \
	DECLARE_FUNCTION(execPostAkEvent); \
	DECLARE_FUNCTION(execPostAssociatedAkEventAsync); \
	DECLARE_FUNCTION(execPostAssociatedAkEvent);


#define FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRTPCValue); \
	DECLARE_FUNCTION(execSetRTPCValue); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPostAkEventAsync); \
	DECLARE_FUNCTION(execPostAkEvent); \
	DECLARE_FUNCTION(execPostAssociatedAkEventAsync); \
	DECLARE_FUNCTION(execPostAssociatedAkEvent);


#define FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkGameObject(); \
	friend struct Z_Construct_UClass_UAkGameObject_Statics; \
public: \
	DECLARE_CLASS(UAkGameObject, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkGameObject)


#define FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUAkGameObject(); \
	friend struct Z_Construct_UClass_UAkGameObject_Statics; \
public: \
	DECLARE_CLASS(UAkGameObject, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkGameObject)


#define FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkGameObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkGameObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkGameObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkGameObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkGameObject(UAkGameObject&&); \
	NO_API UAkGameObject(const UAkGameObject&); \
public:


#define FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkGameObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkGameObject(UAkGameObject&&); \
	NO_API UAkGameObject(const UAkGameObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkGameObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkGameObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkGameObject)


#define FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_27_PROLOG
#define FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_30_SPARSE_DATA \
	FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_30_RPC_WRAPPERS \
	FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_30_INCLASS \
	FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_30_SPARSE_DATA \
	FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_30_INCLASS_NO_PURE_DECLS \
	FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkGameObject."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkGameObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MechaJammin_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
