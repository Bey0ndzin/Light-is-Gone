// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightIsGone/LightIsGoneGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightIsGoneGameMode() {}
<<<<<<< Updated upstream
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	LIGHTISGONE_API UClass* Z_Construct_UClass_ALightIsGoneGameMode();
	LIGHTISGONE_API UClass* Z_Construct_UClass_ALightIsGoneGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LightIsGone();
// End Cross Module References
	void ALightIsGoneGameMode::StaticRegisterNativesALightIsGoneGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALightIsGoneGameMode);
	UClass* Z_Construct_UClass_ALightIsGoneGameMode_NoRegister()
	{
		return ALightIsGoneGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALightIsGoneGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALightIsGoneGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LightIsGone,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALightIsGoneGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightIsGoneGameMode_Statics::Class_MetaDataParams[] = {
=======

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
LIGHTISGONE_API UClass* Z_Construct_UClass_ALightIsGoneGameMode();
LIGHTISGONE_API UClass* Z_Construct_UClass_ALightIsGoneGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_LightIsGone();
// End Cross Module References

// Begin Class ALightIsGoneGameMode
void ALightIsGoneGameMode::StaticRegisterNativesALightIsGoneGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALightIsGoneGameMode);
UClass* Z_Construct_UClass_ALightIsGoneGameMode_NoRegister()
{
	return ALightIsGoneGameMode::StaticClass();
}
struct Z_Construct_UClass_ALightIsGoneGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
>>>>>>> Stashed changes
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "LightIsGoneGameMode.h" },
		{ "ModuleRelativePath", "LightIsGoneGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
<<<<<<< Updated upstream
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALightIsGoneGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightIsGoneGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALightIsGoneGameMode_Statics::ClassParams = {
		&ALightIsGoneGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALightIsGoneGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ALightIsGoneGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ALightIsGoneGameMode()
	{
		if (!Z_Registration_Info_UClass_ALightIsGoneGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALightIsGoneGameMode.OuterSingleton, Z_Construct_UClass_ALightIsGoneGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALightIsGoneGameMode.OuterSingleton;
	}
	template<> LIGHTISGONE_API UClass* StaticClass<ALightIsGoneGameMode>()
	{
		return ALightIsGoneGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALightIsGoneGameMode);
	ALightIsGoneGameMode::~ALightIsGoneGameMode() {}
	struct Z_CompiledInDeferFile_FID_u22152_Documents_GitHub_Light_is_Gone_LightIsGone_Source_LightIsGone_LightIsGoneGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_u22152_Documents_GitHub_Light_is_Gone_LightIsGone_Source_LightIsGone_LightIsGoneGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALightIsGoneGameMode, ALightIsGoneGameMode::StaticClass, TEXT("ALightIsGoneGameMode"), &Z_Registration_Info_UClass_ALightIsGoneGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALightIsGoneGameMode), 406330489U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_u22152_Documents_GitHub_Light_is_Gone_LightIsGone_Source_LightIsGone_LightIsGoneGameMode_h_996325774(TEXT("/Script/LightIsGone"),
		Z_CompiledInDeferFile_FID_u22152_Documents_GitHub_Light_is_Gone_LightIsGone_Source_LightIsGone_LightIsGoneGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_u22152_Documents_GitHub_Light_is_Gone_LightIsGone_Source_LightIsGone_LightIsGoneGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
=======
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightIsGoneGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALightIsGoneGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_LightIsGone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALightIsGoneGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALightIsGoneGameMode_Statics::ClassParams = {
	&ALightIsGoneGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALightIsGoneGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ALightIsGoneGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALightIsGoneGameMode()
{
	if (!Z_Registration_Info_UClass_ALightIsGoneGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALightIsGoneGameMode.OuterSingleton, Z_Construct_UClass_ALightIsGoneGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALightIsGoneGameMode.OuterSingleton;
}
template<> LIGHTISGONE_API UClass* StaticClass<ALightIsGoneGameMode>()
{
	return ALightIsGoneGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALightIsGoneGameMode);
ALightIsGoneGameMode::~ALightIsGoneGameMode() {}
// End Class ALightIsGoneGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_u22147_Documents_GitHub_Light_is_Gone_LightIsGone_Source_LightIsGone_LightIsGoneGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALightIsGoneGameMode, ALightIsGoneGameMode::StaticClass, TEXT("ALightIsGoneGameMode"), &Z_Registration_Info_UClass_ALightIsGoneGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALightIsGoneGameMode), 3249294500U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_u22147_Documents_GitHub_Light_is_Gone_LightIsGone_Source_LightIsGone_LightIsGoneGameMode_h_3409323863(TEXT("/Script/LightIsGone"),
	Z_CompiledInDeferFile_FID_u22147_Documents_GitHub_Light_is_Gone_LightIsGone_Source_LightIsGone_LightIsGoneGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_u22147_Documents_GitHub_Light_is_Gone_LightIsGone_Source_LightIsGone_LightIsGoneGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
>>>>>>> Stashed changes
PRAGMA_ENABLE_DEPRECATION_WARNINGS
