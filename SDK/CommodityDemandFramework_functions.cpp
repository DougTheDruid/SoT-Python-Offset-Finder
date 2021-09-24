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

void FActiveCommodityDemands::AfterRead()
{
}

void FActiveCommodityDemands::BeforeDelete()
{
}

void FActiveNPCDemands::AfterRead()
{
}

void FActiveNPCDemands::BeforeDelete()
{
}

void FCommoditySelectionType::AfterRead()
{
}

void FCommoditySelectionType::BeforeDelete()
{
}

void FCommodityDescWithRedeemId::AfterRead()
{
	READ_PTR_FULL(RedeemItemDesc, UClass);
}

void FCommodityDescWithRedeemId::BeforeDelete()
{
	DELE_PTR_FULL(RedeemItemDesc);
}

void FEntitlementToRedeemItems::AfterRead()
{
	READ_PTR_FULL(RequiredEntitlement, UClass);
}

void FEntitlementToRedeemItems::BeforeDelete()
{
	DELE_PTR_FULL(RequiredEntitlement);
}

void FCommodityTypeDataEntry::AfterRead()
{
}

void FCommodityTypeDataEntry::BeforeDelete()
{
}

void FEventCommodityCrateRedeemed::AfterRead()
{
}

void FEventCommodityCrateRedeemed::BeforeDelete()
{
}

void FCommodityRedemptionTrackingModel::AfterRead()
{
}

void FCommodityRedemptionTrackingModel::BeforeDelete()
{
}

void FCommodityTrackingModel::AfterRead()
{
}

void FCommodityTrackingModel::BeforeDelete()
{
}

void FTrackCommodityPurchaseOnServerRpc::AfterRead()
{
	FBoxedRpc::AfterRead();

	READ_PTR_FULL(CommodityDemandStorageObject, UObject);
}

void FTrackCommodityPurchaseOnServerRpc::BeforeDelete()
{
	FBoxedRpc::BeforeDelete();

	DELE_PTR_FULL(CommodityDemandStorageObject);
}

void UCommodityDemandFrameworkEditorSettings::AfterRead()
{
	UDeveloperSettings::AfterRead();

}

void UCommodityDemandFrameworkEditorSettings::BeforeDelete()
{
	UDeveloperSettings::BeforeDelete();

}

void UCommodityDemandFrameworkSettings::AfterRead()
{
	UDeveloperSettings::AfterRead();

}

void UCommodityDemandFrameworkSettings::BeforeDelete()
{
	UDeveloperSettings::BeforeDelete();

}

void UCommodityDemandServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCommodityDemandServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x039D6940
//		Name   -> Function CommodityDemandFramework.CommodityDemandService.OnRep_ActiveCommodityDemands
//		Flags  -> (Final, RequiredAPI, Native, Private)
void ACommodityDemandService::OnRep_ActiveCommodityDemands()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CommodityDemandFramework.CommodityDemandService.OnRep_ActiveCommodityDemands");

	ACommodityDemandService_OnRep_ActiveCommodityDemands_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ACommodityDemandService::AfterRead()
{
	AActor::AfterRead();

}

void ACommodityDemandService::BeforeDelete()
{
	AActor::BeforeDelete();

}

void UCommodityDemandStorageInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCommodityDemandStorageInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UCommodityDemandStorageProviderInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCommodityDemandStorageProviderInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UCommodityEntitlementRedemptionAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UCommodityEntitlementRedemptionAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UCommodityItemDesc::AfterRead()
{
	UBootyItemDesc::AfterRead();

}

void UCommodityItemDesc::BeforeDelete()
{
	UBootyItemDesc::BeforeDelete();

}

void UCommodityPurchaseTrackingComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UCommodityPurchaseTrackingComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UCommodityRedemptionInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCommodityRedemptionInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UCommodityRedemptionComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UCommodityRedemptionComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UCommoditySourceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCommoditySourceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UCommoditySourceComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UCommoditySourceComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UCommodityTokenEntitlementDesc::AfterRead()
{
	UEntitlementDesc::AfterRead();

	READ_PTR_FULL(ItemToRedeemFor, UClass);
}

void UCommodityTokenEntitlementDesc::BeforeDelete()
{
	UEntitlementDesc::BeforeDelete();

	DELE_PTR_FULL(ItemToRedeemFor);
}

void UCommodityTypeDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UCommodityTypeDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UCrateFillerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCrateFillerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UCrateFillerComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UCrateFillerComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UDeliverableCommodityRequirement::AfterRead()
{
	UDeliverableRequirementBase::AfterRead();

}

void UDeliverableCommodityRequirement::BeforeDelete()
{
	UDeliverableRequirementBase::BeforeDelete();

}

void UIsWieldedCommodityItemInDemandStatCondition::AfterRead()
{
	UTargetedStatCondition::AfterRead();

}

void UIsWieldedCommodityItemInDemandStatCondition::BeforeDelete()
{
	UTargetedStatCondition::BeforeDelete();

}

void UWasWieldedCommodityItemBoughtAtDemandStatCondition::AfterRead()
{
	UTargetedStatCondition::AfterRead();

}

void UWasWieldedCommodityItemBoughtAtDemandStatCondition::BeforeDelete()
{
	UTargetedStatCondition::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
