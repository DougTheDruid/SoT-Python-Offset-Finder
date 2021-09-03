// Name: SoT, Version: 2.2.1.1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FThrottledProjectileTickPool::AfterRead()
{
}

void FThrottledProjectileTickPool::BeforeDelete()
{
}

void FGlobalProjectileSettings::AfterRead()
{
}

void FGlobalProjectileSettings::BeforeDelete()
{
}

void UAthenaProjectilesThrottledTickCollectionAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAthenaProjectilesThrottledTickCollectionAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UProjectileLauncherSpecificSettings::AfterRead()
{
	UDeveloperSettings::AfterRead();

}

void UProjectileLauncherSpecificSettings::BeforeDelete()
{
	UDeveloperSettings::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
