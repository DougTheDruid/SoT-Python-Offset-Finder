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

void FSimpleOverlapInfo::AfterRead()
{
	READ_PTR_FULL(OtherActor, AActor);
	READ_PTR_FULL(OtherComponent, UPrimitiveComponent);
}

void FSimpleOverlapInfo::BeforeDelete()
{
	DELE_PTR_FULL(OtherActor);
	DELE_PTR_FULL(OtherComponent);
}

void FSimpleOverlapEnd::AfterRead()
{
}

void FSimpleOverlapEnd::BeforeDelete()
{
}

void FSimpleOverlapBegin::AfterRead()
{
}

void FSimpleOverlapBegin::BeforeDelete()
{
}

void USimpleOverlapCollectionKey::AfterRead()
{
	UObject::AfterRead();

}

void USimpleOverlapCollectionKey::BeforeDelete()
{
	UObject::BeforeDelete();

}

void USimpleOverlapComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void USimpleOverlapComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
