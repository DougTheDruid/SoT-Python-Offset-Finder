// Name: SoT, Version: 2.4.0

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

void UDeliverableRequirementBase::AfterRead()
{
	UObject::AfterRead();

}

void UDeliverableRequirementBase::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UDeliverableInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UDeliverableInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UDeliverableRedirectionInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UDeliverableRedirectionInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UDeliverableComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(DeliveryRequirementsAsset, UDeliverableRequirementsDataAsset);
}

void UDeliverableComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(DeliveryRequirementsAsset);
}

void UDeliverableRedirectionComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(Context, UDeliverableRedirectionContextBase);
}

void UDeliverableRedirectionComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(Context);
}

void UDeliverableRedirectionContextBase::AfterRead()
{
	UObject::AfterRead();

}

void UDeliverableRedirectionContextBase::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UDeliverableRedirectionNoContext::AfterRead()
{
	UDeliverableRedirectionContextBase::AfterRead();

}

void UDeliverableRedirectionNoContext::BeforeDelete()
{
	UDeliverableRedirectionContextBase::BeforeDelete();

}

void UDeliverableRedirectionCompositeContext::AfterRead()
{
	UDeliverableRedirectionContextBase::AfterRead();

}

void UDeliverableRedirectionCompositeContext::BeforeDelete()
{
	UDeliverableRedirectionContextBase::BeforeDelete();

}

void UDeliverableRedirectionDestinationDescriptorBase::AfterRead()
{
	UObject::AfterRead();

}

void UDeliverableRedirectionDestinationDescriptorBase::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UDeliverableRedirectionContextHandlerBase::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(DestinationDescriptor, UDeliverableRedirectionDestinationDescriptorBase);
}

void UDeliverableRedirectionContextHandlerBase::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(DestinationDescriptor);
}

void UDeliverableRedirectionLiteralDestinationDescriptor::AfterRead()
{
	UDeliverableRedirectionDestinationDescriptorBase::AfterRead();

}

void UDeliverableRedirectionLiteralDestinationDescriptor::BeforeDelete()
{
	UDeliverableRedirectionDestinationDescriptorBase::BeforeDelete();

}

void UDeliverableRequirementsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UDeliverableRequirementsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UDeliverableTooltipCustomizerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UDeliverableTooltipCustomizerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
