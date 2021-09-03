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
