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

void FMaterialVisualisation::AfterRead()
{
	READ_PTR_FULL(DynamicMaterial, UMaterialInstanceDynamic);
}

void FMaterialVisualisation::BeforeDelete()
{
	DELE_PTR_FULL(DynamicMaterial);
}

void FLightVisualisation::AfterRead()
{
	READ_PTR_FULL(Light, ULightComponent);
}

void FLightVisualisation::BeforeDelete()
{
	DELE_PTR_FULL(Light);
}

void FEmissaryCompanyCosmetics::AfterRead()
{
}

void FEmissaryCompanyCosmetics::BeforeDelete()
{
}

void FEmissaryPointBoostMultipliers::AfterRead()
{
}

void FEmissaryPointBoostMultipliers::BeforeDelete()
{
}

void FEmissaryFlagMeshReferences::AfterRead()
{
}

void FEmissaryFlagMeshReferences::BeforeDelete()
{
}

void FEmissaryLevelData::AfterRead()
{
}

void FEmissaryLevelData::BeforeDelete()
{
}

void FEmissaryLevelEntry::AfterRead()
{
	READ_PTR_FULL(Company, UClass);
	READ_PTR_FULL(MaxRankPopUpToastData, UDataAsset);
	READ_PTR_FULL(EmissarySunkPopUpToastData, UDataAsset);
}

void FEmissaryLevelEntry::BeforeDelete()
{
	DELE_PTR_FULL(Company);
	DELE_PTR_FULL(MaxRankPopUpToastData);
	DELE_PTR_FULL(EmissarySunkPopUpToastData);
}

void FEmissaryCompanyCampaignScale::AfterRead()
{
}

void FEmissaryCompanyCampaignScale::BeforeDelete()
{
}

void FEmissaryCompanyCampaignGameEvent::AfterRead()
{
	READ_PTR_FULL(EventType, UClass);
}

void FEmissaryCompanyCampaignGameEvent::BeforeDelete()
{
	DELE_PTR_FULL(EventType);
}

void FEmissaryCompanyCampaignKillPlayer::AfterRead()
{
	READ_PTR_FULL(Company, UClass);
}

void FEmissaryCompanyCampaignKillPlayer::BeforeDelete()
{
	DELE_PTR_FULL(Company);
}

void FEmissaryCompanyCampaignSettings::AfterRead()
{
	READ_PTR_FULL(Company, UClass);
}

void FEmissaryCompanyCampaignSettings::BeforeDelete()
{
	DELE_PTR_FULL(Company);
}

void FEmissaryEventAward::AfterRead()
{
}

void FEmissaryEventAward::BeforeDelete()
{
}

void FEmissaryKillScaleFactor::AfterRead()
{
}

void FEmissaryKillScaleFactor::BeforeDelete()
{
}

void FEmissaryGameEventsReward::AfterRead()
{
	READ_PTR_FULL(FinishedEventType, UClass);
}

void FEmissaryGameEventsReward::BeforeDelete()
{
	DELE_PTR_FULL(FinishedEventType);
}

void FEmissaryCompanyActionReward::AfterRead()
{
}

void FEmissaryCompanyActionReward::BeforeDelete()
{
}

void FEmissaryKillPlayerReward::AfterRead()
{
}

void FEmissaryKillPlayerReward::BeforeDelete()
{
}

void FEmissaryActionRewardData::AfterRead()
{
}

void FEmissaryActionRewardData::BeforeDelete()
{
}

void FEmissaryRewardEntry::AfterRead()
{
	READ_PTR_FULL(Company, UClass);
}

void FEmissaryRewardEntry::BeforeDelete()
{
	DELE_PTR_FULL(Company);
}

void FPerCompanyVotes::AfterRead()
{
}

void FPerCompanyVotes::BeforeDelete()
{
}

void FCrewMemberVotes::AfterRead()
{
}

void FCrewMemberVotes::BeforeDelete()
{
}

void FEmissaryLevelStatusStatInfo::AfterRead()
{
}

void FEmissaryLevelStatusStatInfo::BeforeDelete()
{
}

void FEmissaryPointsBoostCriteria::AfterRead()
{
}

void FEmissaryPointsBoostCriteria::BeforeDelete()
{
}

void FTrackedPlayerKillEntry::AfterRead()
{
}

void FTrackedPlayerKillEntry::BeforeDelete()
{
}

void FEmissaryVoteRemovedEvent::AfterRead()
{
}

void FEmissaryVoteRemovedEvent::BeforeDelete()
{
}

void FEmissaryVoteAddedEvent::AfterRead()
{
}

void FEmissaryVoteAddedEvent::BeforeDelete()
{
}

void FChaliceStatuePhaseUpdate::AfterRead()
{
}

void FChaliceStatuePhaseUpdate::BeforeDelete()
{
}

void FEmissaryEncounteredSkellyFortNetworkEvent::AfterRead()
{
	FNetworkEventStruct::AfterRead();

}

void FEmissaryEncounteredSkellyFortNetworkEvent::BeforeDelete()
{
	FNetworkEventStruct::BeforeDelete();

}

void FEmissaryEncounteredAIShipEvent::AfterRead()
{
}

void FEmissaryEncounteredAIShipEvent::BeforeDelete()
{
}

void FEmissaryEncounteredTinySharkEvent::AfterRead()
{
}

void FEmissaryEncounteredTinySharkEvent::BeforeDelete()
{
}

void FEmissaryEncounteredKrakenEvent::AfterRead()
{
}

void FEmissaryEncounteredKrakenEvent::BeforeDelete()
{
}

void FEmissaryEntitlementPurchasedEvent::AfterRead()
{
}

void FEmissaryEntitlementPurchasedEvent::BeforeDelete()
{
}

void FEmissaryLevelRankChange::AfterRead()
{
}

void FEmissaryLevelRankChange::BeforeDelete()
{
}

void FEmissaryActivated::AfterRead()
{
}

void FEmissaryActivated::BeforeDelete()
{
}

void FEmissaryKilledAnotherEmissaryNetworkEvent::AfterRead()
{
	FNetworkEventStruct::AfterRead();

}

void FEmissaryKilledAnotherEmissaryNetworkEvent::BeforeDelete()
{
	FNetworkEventStruct::BeforeDelete();

}

void FEmissarySoldLootNetworkEvent::AfterRead()
{
	FNetworkEventStruct::AfterRead();

}

void FEmissarySoldLootNetworkEvent::BeforeDelete()
{
	FNetworkEventStruct::BeforeDelete();

}

void FEmissaryStoleLootNetworkEvent::AfterRead()
{
	FNetworkEventStruct::AfterRead();

}

void FEmissaryStoleLootNetworkEvent::BeforeDelete()
{
	FNetworkEventStruct::BeforeDelete();

}

void FEmissaryDiscoveredCargoRunCrateNetworkEvent::AfterRead()
{
	FNetworkEventStruct::AfterRead();

}

void FEmissaryDiscoveredCargoRunCrateNetworkEvent::BeforeDelete()
{
	FNetworkEventStruct::BeforeDelete();

}

void FEmissaryDiscoveredLootNetworkEvent::AfterRead()
{
	FNetworkEventStruct::AfterRead();

}

void FEmissaryDiscoveredLootNetworkEvent::BeforeDelete()
{
	FNetworkEventStruct::BeforeDelete();

}

void FEmissarySecuredLootOnShipNetworkEvent::AfterRead()
{
	FNetworkEventStruct::AfterRead();

}

void FEmissarySecuredLootOnShipNetworkEvent::BeforeDelete()
{
	FNetworkEventStruct::BeforeDelete();

}

void FEmissarySunkNetworkEvent::AfterRead()
{
	FNetworkEventStruct::AfterRead();

	READ_PTR_FULL(PopUpDesc, UDataAsset);
}

void FEmissarySunkNetworkEvent::BeforeDelete()
{
	FNetworkEventStruct::BeforeDelete();

	DELE_PTR_FULL(PopUpDesc);
}

void FEmissaryMaxLevelReachedNetworkEvent::AfterRead()
{
	FNetworkEventStruct::AfterRead();

	READ_PTR_FULL(PopUpDesc, UDataAsset);
}

void FEmissaryMaxLevelReachedNetworkEvent::BeforeDelete()
{
	FNetworkEventStruct::BeforeDelete();

	DELE_PTR_FULL(PopUpDesc);
}

void FEmissaryDeactivatedNetworkEvent::AfterRead()
{
	FNetworkEventStruct::AfterRead();

}

void FEmissaryDeactivatedNetworkEvent::BeforeDelete()
{
	FNetworkEventStruct::BeforeDelete();

}

void FEmissaryStateUpdateEvent::AfterRead()
{
}

void FEmissaryStateUpdateEvent::BeforeDelete()
{
}

void FEmissaryProgressUpdatedNetworkEvent::AfterRead()
{
	FNetworkEventStruct::AfterRead();

}

void FEmissaryProgressUpdatedNetworkEvent::BeforeDelete()
{
	FNetworkEventStruct::BeforeDelete();

}

void FEmissaryLevelProgressUpdatedEvent::AfterRead()
{
}

void FEmissaryLevelProgressUpdatedEvent::BeforeDelete()
{
}

void FActivateEmissaryMaxRankQuestForSession::AfterRead()
{
}

void FActivateEmissaryMaxRankQuestForSession::BeforeDelete()
{
}

void FUpdateEmissaryValueForCompany::AfterRead()
{
}

void FUpdateEmissaryValueForCompany::BeforeDelete()
{
}

void FReactivateEmissaryForMigratedCrew::AfterRead()
{
}

void FReactivateEmissaryForMigratedCrew::BeforeDelete()
{
}

void FDeactivateEmissaryForCrew::AfterRead()
{
}

void FDeactivateEmissaryForCrew::BeforeDelete()
{
}

void FActivateEmissaryForCrew::AfterRead()
{
}

void FActivateEmissaryForCrew::BeforeDelete()
{
}

void FEmissaryLevelChanged::AfterRead()
{
}

void FEmissaryLevelChanged::BeforeDelete()
{
}

void FEmissaryLevelResetProgress::AfterRead()
{
}

void FEmissaryLevelResetProgress::BeforeDelete()
{
}

void FPlayerRemovedFromEmissaryCrew::AfterRead()
{
}

void FPlayerRemovedFromEmissaryCrew::BeforeDelete()
{
}

void FPlayerAddedToEmissaryCrew::AfterRead()
{
}

void FPlayerAddedToEmissaryCrew::BeforeDelete()
{
}

void FEmissaryRoleplayActionTelemetryEvent::AfterRead()
{
}

void FEmissaryRoleplayActionTelemetryEvent::BeforeDelete()
{
}

void FEmissarySessionEndTelemetryEvent::AfterRead()
{
}

void FEmissarySessionEndTelemetryEvent::BeforeDelete()
{
}

void FEmissarySessionStartTelemetryEvent::AfterRead()
{
}

void FEmissarySessionStartTelemetryEvent::BeforeDelete()
{
}

void FVoteAddedNetworkEvent::AfterRead()
{
	FBoxedRpc::AfterRead();

}

void FVoteAddedNetworkEvent::BeforeDelete()
{
	FBoxedRpc::BeforeDelete();

}

void FVoteRemovedNetworkEvent::AfterRead()
{
	FBoxedRpc::AfterRead();

}

void FVoteRemovedNetworkEvent::BeforeDelete()
{
	FBoxedRpc::BeforeDelete();

}

void FParticleVisualisation::AfterRead()
{
	READ_PTR_FULL(PutOutParticles, UParticleSystem);
	READ_PTR_FULL(ParticleSystem, UParticleSystemComponent);
}

void FParticleVisualisation::BeforeDelete()
{
	DELE_PTR_FULL(PutOutParticles);
	DELE_PTR_FULL(ParticleSystem);
}

void UEmissaryActionRewardBoostComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UEmissaryActionRewardBoostComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

// Function EmissaryLevel.EmissaryActiveTableVisualiserComponent.OnControllerEndPlay
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEmissaryActiveTableVisualiserComponent::OnControllerEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EmissaryLevel.EmissaryActiveTableVisualiserComponent.OnControllerEndPlay");

	UEmissaryActiveTableVisualiserComponent_OnControllerEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UEmissaryActiveTableVisualiserComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(TargetCompany, UClass);
}

void UEmissaryActiveTableVisualiserComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(TargetCompany);
}

void UEmissaryEntitlementCategory::AfterRead()
{
	UItemCategory::AfterRead();

}

void UEmissaryEntitlementCategory::BeforeDelete()
{
	UItemCategory::BeforeDelete();

}

void UEmissaryEntitlementDesc::AfterRead()
{
	UEntitlementDesc::AfterRead();

}

void UEmissaryEntitlementDesc::BeforeDelete()
{
	UEntitlementDesc::BeforeDelete();

}

void AEmissaryFlotsamItemInfo::AfterRead()
{
	ABootyItemInfo::AfterRead();

}

void AEmissaryFlotsamItemInfo::BeforeDelete()
{
	ABootyItemInfo::BeforeDelete();

}

void UEmissaryFlotsamItemSpawnComponent::AfterRead()
{
	UItemSpawnComponent::AfterRead();

}

void UEmissaryFlotsamItemSpawnComponent::BeforeDelete()
{
	UItemSpawnComponent::BeforeDelete();

}

void UEmissaryFlotsamTooltipCustomizerComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UEmissaryFlotsamTooltipCustomizerComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UEmissaryLevelSettingsAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UEmissaryLevelSettingsAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void AEmissaryLevelService::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Settings, UEmissaryLevelSettingsAsset);
	READ_PTR_FULL(RewardSettings, UEmissaryRewardSettingsAsset);
}

void AEmissaryLevelService::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Settings);
	DELE_PTR_FULL(RewardSettings);
}

void UEmissaryMaxRankQuestProvider::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(MaxRankQuestNotificationID, UClass);
	READ_PTR_FULL(Company, UClass);
}

void UEmissaryMaxRankQuestProvider::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(MaxRankQuestNotificationID);
	DELE_PTR_FULL(Company);
}

// Function EmissaryLevel.EmissaryParticipantComponent.OnRep_EmissaryLevel
// (Final, Native, Private)
void UEmissaryParticipantComponent::OnRep_EmissaryLevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EmissaryLevel.EmissaryParticipantComponent.OnRep_EmissaryLevel");

	UEmissaryParticipantComponent_OnRep_EmissaryLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EmissaryLevel.EmissaryParticipantComponent.OnRep_AffiliatedCompany
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FName                   PreviousId                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEmissaryParticipantComponent::OnRep_AffiliatedCompany(const struct FName& PreviousId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EmissaryLevel.EmissaryParticipantComponent.OnRep_AffiliatedCompany");

	UEmissaryParticipantComponent_OnRep_AffiliatedCompany_Params params;
	params.PreviousId = PreviousId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UEmissaryParticipantComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UEmissaryParticipantComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UEmissaryRepresentationMeshComponent::AfterRead()
{
	UStaticMeshComponent::AfterRead();

}

void UEmissaryRepresentationMeshComponent::BeforeDelete()
{
	UStaticMeshComponent::BeforeDelete();

}

void UEmissaryRewardCampaignSettingsAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UEmissaryRewardCampaignSettingsAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UEmissaryRewardSettingsAsset::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(CampaignSettings, UEmissaryRewardCampaignSettingsAsset);
}

void UEmissaryRewardSettingsAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(CampaignSettings);
}

// Function EmissaryLevel.EmissaryShipAffiliationTrackerComponent.OnRep_EmissaryCount
// (Final, Native, Private)
void UEmissaryShipAffiliationTrackerComponent::OnRep_EmissaryCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EmissaryLevel.EmissaryShipAffiliationTrackerComponent.OnRep_EmissaryCount");

	UEmissaryShipAffiliationTrackerComponent_OnRep_EmissaryCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UEmissaryShipAffiliationTrackerComponent::AfterRead()
{
	USceneComponent::AfterRead();

	READ_PTR_FULL(TrackedCompany, UClass);
	READ_PTR_FULL(LoadedEmissaryRepresentationMesh, UClass);
}

void UEmissaryShipAffiliationTrackerComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

	DELE_PTR_FULL(TrackedCompany);
	DELE_PTR_FULL(LoadedEmissaryRepresentationMesh);
}

// Function EmissaryLevel.EmissaryVoyageInlineVoteConsumerBase.OnRep_Votes
// (Final, Native, Private)
void UEmissaryVoyageInlineVoteConsumerBase::OnRep_Votes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EmissaryLevel.EmissaryVoyageInlineVoteConsumerBase.OnRep_Votes");

	UEmissaryVoyageInlineVoteConsumerBase_OnRep_Votes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UEmissaryVoyageInlineVoteConsumerBase::AfterRead()
{
	UVoteConsumerInlineBase::AfterRead();

	READ_PTR_FULL(Validator, UEmissaryVoyageVoteValidatorBase);
	READ_PTR_FULL(RpcDispatcher, UBoxedRpcDispatcherComponent);
	READ_PTR_FULL(OwningActor, AActor);
}

void UEmissaryVoyageInlineVoteConsumerBase::BeforeDelete()
{
	UVoteConsumerInlineBase::BeforeDelete();

	DELE_PTR_FULL(Validator);
	DELE_PTR_FULL(RpcDispatcher);
	DELE_PTR_FULL(OwningActor);
}

void UStartEmissaryVoyageInlineVoteConsumer::AfterRead()
{
	UEmissaryVoyageInlineVoteConsumerBase::AfterRead();

}

void UStartEmissaryVoyageInlineVoteConsumer::BeforeDelete()
{
	UEmissaryVoyageInlineVoteConsumerBase::BeforeDelete();

}

void UStopEmissaryVoyageInlineVoteConsumer::AfterRead()
{
	UEmissaryVoyageInlineVoteConsumerBase::AfterRead();

}

void UStopEmissaryVoyageInlineVoteConsumer::BeforeDelete()
{
	UEmissaryVoyageInlineVoteConsumerBase::BeforeDelete();

}

void UEmissaryVoyageVoteValidatorBase::AfterRead()
{
	UVoteValidatorInlineBase::AfterRead();

	READ_PTR_FULL(TargetCompany, UClass);
	READ_PTR_FULL(RequiredEntitlement, UClass);
	READ_PTR_FULL(Consumer, UEmissaryVoyageInlineVoteConsumerBase);
}

void UEmissaryVoyageVoteValidatorBase::BeforeDelete()
{
	UVoteValidatorInlineBase::BeforeDelete();

	DELE_PTR_FULL(TargetCompany);
	DELE_PTR_FULL(RequiredEntitlement);
	DELE_PTR_FULL(Consumer);
}

void UStartEmissaryVoyageInlineVoteValidator::AfterRead()
{
	UEmissaryVoyageVoteValidatorBase::AfterRead();

}

void UStartEmissaryVoyageInlineVoteValidator::BeforeDelete()
{
	UEmissaryVoyageVoteValidatorBase::BeforeDelete();

}

void UStopEmissaryVoyageInlineVoteValidator::AfterRead()
{
	UEmissaryVoyageVoteValidatorBase::AfterRead();

}

void UStopEmissaryVoyageInlineVoteValidator::BeforeDelete()
{
	UEmissaryVoyageVoteValidatorBase::BeforeDelete();

}

void UIsEmissaryStatCondition::AfterRead()
{
	UStatCondition::AfterRead();

	READ_PTR_FULL(RequiredEmissaryCompany, UClass);
}

void UIsEmissaryStatCondition::BeforeDelete()
{
	UStatCondition::BeforeDelete();

	DELE_PTR_FULL(RequiredEmissaryCompany);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
