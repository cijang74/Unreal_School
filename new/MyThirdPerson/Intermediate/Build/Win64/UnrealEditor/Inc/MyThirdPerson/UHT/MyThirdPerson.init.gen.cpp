// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyThirdPerson_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MyThirdPerson;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MyThirdPerson()
	{
		if (!Z_Registration_Info_UPackage__Script_MyThirdPerson.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MyThirdPerson",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x19FBBA33,
				0x7BDBBAAB,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MyThirdPerson.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MyThirdPerson.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MyThirdPerson(Z_Construct_UPackage__Script_MyThirdPerson, TEXT("/Script/MyThirdPerson"), Z_Registration_Info_UPackage__Script_MyThirdPerson, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x19FBBA33, 0x7BDBBAAB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
