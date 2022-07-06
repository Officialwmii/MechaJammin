// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MECHAJAM_MechaJamCharacter_generated_h
#error "MechaJamCharacter.generated.h already included, missing '#pragma once' in MechaJamCharacter.h"
#endif
#define MECHAJAM_MechaJamCharacter_generated_h

#define FID_MechaJam_Source_MechaJam_MechaJamCharacter_h_18_DELEGATE \
static inline void FOnUseItem_DelegateWrapper(const FMulticastScriptDelegate& OnUseItem) \
{ \
	OnUseItem.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_MechaJam_Source_MechaJam_MechaJamCharacter_h_23_SPARSE_DATA
#define FID_MechaJam_Source_MechaJam_MechaJamCharacter_h_23_RPC_WRAPPERS
#define FID_MechaJam_Source_MechaJam_MechaJamCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MechaJam_Source_MechaJam_MechaJamCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMechaJamCharacter(); \
	friend struct Z_Construct_UClass_AMechaJamCharacter_Statics; \
public: \
	DECLARE_CLASS(AMechaJamCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MechaJam"), NO_API) \
	DECLARE_SERIALIZER(AMechaJamCharacter)


#define FID_MechaJam_Source_MechaJam_MechaJamCharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAMechaJamCharacter(); \
	friend struct Z_Construct_UClass_AMechaJamCharacter_Statics; \
public: \
	DECLARE_CLASS(AMechaJamCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MechaJam"), NO_API) \
	DECLARE_SERIALIZER(AMechaJamCharacter)


#define FID_MechaJam_Source_MechaJam_MechaJamCharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMechaJamCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMechaJamCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMechaJamCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMechaJamCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMechaJamCharacter(AMechaJamCharacter&&); \
	NO_API AMechaJamCharacter(const AMechaJamCharacter&); \
public:


#define FID_MechaJam_Source_MechaJam_MechaJamCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMechaJamCharacter(AMechaJamCharacter&&); \
	NO_API AMechaJamCharacter(const AMechaJamCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMechaJamCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMechaJamCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMechaJamCharacter)


#define FID_MechaJam_Source_MechaJam_MechaJamCharacter_h_20_PROLOG
#define FID_MechaJam_Source_MechaJam_MechaJamCharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MechaJam_Source_MechaJam_MechaJamCharacter_h_23_SPARSE_DATA \
	FID_MechaJam_Source_MechaJam_MechaJamCharacter_h_23_RPC_WRAPPERS \
	FID_MechaJam_Source_MechaJam_MechaJamCharacter_h_23_INCLASS \
	FID_MechaJam_Source_MechaJam_MechaJamCharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MechaJam_Source_MechaJam_MechaJamCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MechaJam_Source_MechaJam_MechaJamCharacter_h_23_SPARSE_DATA \
	FID_MechaJam_Source_MechaJam_MechaJamCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MechaJam_Source_MechaJam_MechaJamCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_MechaJam_Source_MechaJam_MechaJamCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MECHAJAM_API UClass* StaticClass<class AMechaJamCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MechaJam_Source_MechaJam_MechaJamCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
