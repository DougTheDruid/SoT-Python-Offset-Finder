// Name: SoT, Version: 2.3.0

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

void FRegionAssetsList::AfterRead()
{
}

void FRegionAssetsList::BeforeDelete()
{
}

void UNetworkRegionServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UNetworkRegionServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UNetworkRegionService::AfterRead()
{
	UObject::AfterRead();

}

void UNetworkRegionService::BeforeDelete()
{
	UObject::BeforeDelete();

}

void ARegionAssetCacheActor::AfterRead()
{
	AActor::AfterRead();

}

void ARegionAssetCacheActor::BeforeDelete()
{
	AActor::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
