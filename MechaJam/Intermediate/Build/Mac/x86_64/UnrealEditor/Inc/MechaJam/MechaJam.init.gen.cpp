// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechaJam_init() {}
	MECHAJAM_API UFunction* Z_Construct_UDelegateFunction_MechaJam_OnPickUp__DelegateSignature();
	MECHAJAM_API UFunction* Z_Construct_UDelegateFunction_MechaJam_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MechaJam;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MechaJam()
	{
		if (!Z_Registration_Info_UPackage__Script_MechaJam.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MechaJam_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MechaJam_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MechaJam",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x35236361,
				0x443DDAF8,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MechaJam.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MechaJam.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MechaJam(Z_Construct_UPackage__Script_MechaJam, TEXT("/Script/MechaJam"), Z_Registration_Info_UPackage__Script_MechaJam, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x35236361, 0x443DDAF8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
