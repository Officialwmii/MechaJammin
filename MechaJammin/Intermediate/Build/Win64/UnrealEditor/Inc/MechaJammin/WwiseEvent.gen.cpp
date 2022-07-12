// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MechaJammin/Public/WwiseEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseEvent() {}
// Cross Module References
	MECHAJAMMIN_API UClass* Z_Construct_UClass_UWwiseEvent_NoRegister();
	MECHAJAMMIN_API UClass* Z_Construct_UClass_UWwiseEvent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MechaJammin();
// End Cross Module References
	void UWwiseEvent::StaticRegisterNativesUWwiseEvent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWwiseEvent);
	UClass* Z_Construct_UClass_UWwiseEvent_NoRegister()
	{
		return UWwiseEvent::StaticClass();
	}
	struct Z_Construct_UClass_UWwiseEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWwiseEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MechaJammin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "WwiseEvent.h" },
		{ "ModuleRelativePath", "Public/WwiseEvent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWwiseEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseEvent_Statics::ClassParams = {
		&UWwiseEvent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWwiseEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWwiseEvent()
	{
		if (!Z_Registration_Info_UClass_UWwiseEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseEvent.OuterSingleton, Z_Construct_UClass_UWwiseEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWwiseEvent.OuterSingleton;
	}
	template<> MECHAJAMMIN_API UClass* StaticClass<UWwiseEvent>()
	{
		return UWwiseEvent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWwiseEvent);
	struct Z_CompiledInDeferFile_FID_MechaJammin_Source_MechaJammin_Public_WwiseEvent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MechaJammin_Source_MechaJammin_Public_WwiseEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseEvent, UWwiseEvent::StaticClass, TEXT("UWwiseEvent"), &Z_Registration_Info_UClass_UWwiseEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseEvent), 1222119600U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MechaJammin_Source_MechaJammin_Public_WwiseEvent_h_3994053285(TEXT("/Script/MechaJammin"),
		Z_CompiledInDeferFile_FID_MechaJammin_Source_MechaJammin_Public_WwiseEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MechaJammin_Source_MechaJammin_Public_WwiseEvent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
