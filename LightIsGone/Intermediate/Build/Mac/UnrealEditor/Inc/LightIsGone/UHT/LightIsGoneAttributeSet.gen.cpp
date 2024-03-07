// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightIsGone/LightIsGoneAttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightIsGoneAttributeSet() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	LIGHTISGONE_API UClass* Z_Construct_UClass_ULightIsGoneAttributeSet();
	LIGHTISGONE_API UClass* Z_Construct_UClass_ULightIsGoneAttributeSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LightIsGone();
// End Cross Module References
	void ULightIsGoneAttributeSet::StaticRegisterNativesULightIsGoneAttributeSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULightIsGoneAttributeSet);
	UClass* Z_Construct_UClass_ULightIsGoneAttributeSet_NoRegister()
	{
		return ULightIsGoneAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_ULightIsGoneAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightIsGoneAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_LightIsGone,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULightIsGoneAttributeSet_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightIsGoneAttributeSet_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "LightIsGoneAttributeSet.h" },
		{ "ModuleRelativePath", "LightIsGoneAttributeSet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightIsGoneAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightIsGoneAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULightIsGoneAttributeSet_Statics::ClassParams = {
		&ULightIsGoneAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULightIsGoneAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_ULightIsGoneAttributeSet_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULightIsGoneAttributeSet()
	{
		if (!Z_Registration_Info_UClass_ULightIsGoneAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULightIsGoneAttributeSet.OuterSingleton, Z_Construct_UClass_ULightIsGoneAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULightIsGoneAttributeSet.OuterSingleton;
	}
	template<> LIGHTISGONE_API UClass* StaticClass<ULightIsGoneAttributeSet>()
	{
		return ULightIsGoneAttributeSet::StaticClass();
	}
	ULightIsGoneAttributeSet::ULightIsGoneAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightIsGoneAttributeSet);
	ULightIsGoneAttributeSet::~ULightIsGoneAttributeSet() {}
	struct Z_CompiledInDeferFile_FID_u22152_Documents_GitHub_Light_is_Gone_LightIsGone_Source_LightIsGone_LightIsGoneAttributeSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_u22152_Documents_GitHub_Light_is_Gone_LightIsGone_Source_LightIsGone_LightIsGoneAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULightIsGoneAttributeSet, ULightIsGoneAttributeSet::StaticClass, TEXT("ULightIsGoneAttributeSet"), &Z_Registration_Info_UClass_ULightIsGoneAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULightIsGoneAttributeSet), 1761391698U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_u22152_Documents_GitHub_Light_is_Gone_LightIsGone_Source_LightIsGone_LightIsGoneAttributeSet_h_393564466(TEXT("/Script/LightIsGone"),
		Z_CompiledInDeferFile_FID_u22152_Documents_GitHub_Light_is_Gone_LightIsGone_Source_LightIsGone_LightIsGoneAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_u22152_Documents_GitHub_Light_is_Gone_LightIsGone_Source_LightIsGone_LightIsGoneAttributeSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
