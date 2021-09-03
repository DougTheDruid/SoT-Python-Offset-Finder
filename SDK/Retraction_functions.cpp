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

void FRetractorOrientationAdjustmentFlags::AfterRead()
{
}

void FRetractorOrientationAdjustmentFlags::BeforeDelete()
{
}

void URetractableComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void URetractableComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void URetractorInterface::AfterRead()
{
	UInterface::AfterRead();

}

void URetractorInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void URetractableInterface::AfterRead()
{
	UInterface::AfterRead();

}

void URetractableInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void URetractableProviderInterface::AfterRead()
{
	UInterface::AfterRead();

}

void URetractableProviderInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void URetractableFloatingBarrelComponent::AfterRead()
{
	URetractableComponent::AfterRead();

}

void URetractableFloatingBarrelComponent::BeforeDelete()
{
	URetractableComponent::BeforeDelete();

}

void URetractorComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(RetractDestinationComponent, USceneComponent);
	READ_PTR_FULL(RetractingComponent, USceneComponent);
}

void URetractorComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(RetractDestinationComponent);
	DELE_PTR_FULL(RetractingComponent);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
