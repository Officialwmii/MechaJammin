// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MechaJam/MechaJamGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechaJamGameMode() {}
// Cross Module References
	MECHAJAM_API UClass* Z_Construct_UClass_AMechaJamGameMode_NoRegister();
	MECHAJAM_API UClass* Z_Construct_UClass_AMechaJamGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MechaJam();
// End Cross Module References
	void AMechaJamGameMode::StaticRegisterNativesAMechaJamGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMechaJamGameMode);
	UClass* Z_Construct_UClass_AMechaJamGameMode_NoRegister()
	{
		return AMechaJamGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMechaJamGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMechaJamGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MechaJam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechaJamGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MechaJamGameMode.h" },
		{ "ModuleRelativePath", "MechaJamGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMechaJamGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMechaJamGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMechaJamGameMode_Statics::ClassParams = {
		&AMechaJamGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMechaJamGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMechaJamGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMechaJamGameMode()
	{
		if (!Z_Registration_Info_UClass_AMechaJamGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMechaJamGameMode.OuterSingleton, Z_Construct_UClass_AMechaJamGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMechaJamGameMode.OuterSingleton;
	}
	template<> MECHAJAM_API UClass* StaticClass<AMechaJamGameMode>()
	{
		return AMechaJamGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMechaJamGameMode);
	struct Z_CompiledInDeferFile_FID_MechaJam_Source_MechaJam_MechaJamGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MechaJam_Source_MechaJam_MechaJamGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMechaJamGameMode, AMechaJamGameMode::StaticClass, TEXT("AMechaJamGameMode"), &Z_Registration_Info_UClass_AMechaJamGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMechaJamGameMode), 553368840U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MechaJam_Source_MechaJam_MechaJamGameMode_h_1714183082(TEXT("/Script/MechaJam"),
		Z_CompiledInDeferFile_FID_MechaJam_Source_MechaJam_MechaJamGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MechaJam_Source_MechaJam_MechaJamGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
