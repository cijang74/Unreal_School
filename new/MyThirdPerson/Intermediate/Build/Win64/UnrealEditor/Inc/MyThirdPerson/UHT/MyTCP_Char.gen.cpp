// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyThirdPerson/MyTCP_Char.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTCP_Char() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
MYTHIRDPERSON_API UClass* Z_Construct_UClass_AMyTCP_Char();
MYTHIRDPERSON_API UClass* Z_Construct_UClass_AMyTCP_Char_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyThirdPerson();
// End Cross Module References

// Begin Class AMyTCP_Char
void AMyTCP_Char::StaticRegisterNativesAMyTCP_Char()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyTCP_Char);
UClass* Z_Construct_UClass_AMyTCP_Char_NoRegister()
{
	return AMyTCP_Char::StaticClass();
}
struct Z_Construct_UClass_AMyTCP_Char_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyTCP_Char.h" },
		{ "ModuleRelativePath", "MyTCP_Char.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTCP_Char>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyTCP_Char_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MyThirdPerson,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTCP_Char_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyTCP_Char_Statics::ClassParams = {
	&AMyTCP_Char::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTCP_Char_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyTCP_Char_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyTCP_Char()
{
	if (!Z_Registration_Info_UClass_AMyTCP_Char.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyTCP_Char.OuterSingleton, Z_Construct_UClass_AMyTCP_Char_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyTCP_Char.OuterSingleton;
}
template<> MYTHIRDPERSON_API UClass* StaticClass<AMyTCP_Char>()
{
	return AMyTCP_Char::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTCP_Char);
AMyTCP_Char::~AMyTCP_Char() {}
// End Class AMyTCP_Char

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_School_new_MyThirdPerson_Source_MyThirdPerson_MyTCP_Char_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyTCP_Char, AMyTCP_Char::StaticClass, TEXT("AMyTCP_Char"), &Z_Registration_Info_UClass_AMyTCP_Char, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyTCP_Char), 2483643606U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_School_new_MyThirdPerson_Source_MyThirdPerson_MyTCP_Char_h_2547431751(TEXT("/Script/MyThirdPerson"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_School_new_MyThirdPerson_Source_MyThirdPerson_MyTCP_Char_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_School_new_MyThirdPerson_Source_MyThirdPerson_MyTCP_Char_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
