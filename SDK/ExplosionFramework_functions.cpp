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

void FEventOnExploded::AfterRead()
{
}

void FEventOnExploded::BeforeDelete()
{
}

void FEventExplosionOverlap::AfterRead()
{
	READ_PTR_FULL(DamagerType, UClass);
}

void FEventExplosionOverlap::BeforeDelete()
{
	DELE_PTR_FULL(DamagerType);
}

void UCreateActorInstanceOnExplodeComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(ActorToInstance, UClass);
}

void UCreateActorInstanceOnExplodeComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(ActorToInstance);
}

void UExplosionInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UExplosionInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UExplosionReceiverInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UExplosionReceiverInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UExplosiveComponentInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UExplosiveComponentInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UStatusResponseExplodeAfterTime::AfterRead()
{
	UStatusResponse::AfterRead();

	READ_PTR_FULL(CachedWorld, UWorld);
}

void UStatusResponseExplodeAfterTime::BeforeDelete()
{
	UStatusResponse::BeforeDelete();

	DELE_PTR_FULL(CachedWorld);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
