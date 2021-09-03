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

void FHangoutSpotId::AfterRead()
{
}

void FHangoutSpotId::BeforeDelete()
{
}

void FPetHangoutSpotParams::AfterRead()
{
	READ_PTR_FULL(PetType, UClass);
}

void FPetHangoutSpotParams::BeforeDelete()
{
	DELE_PTR_FULL(PetType);
}

void FHangoutSpotParams::AfterRead()
{
}

void FHangoutSpotParams::BeforeDelete()
{
}

void FPetCustomiationOverrideMappingEntry::AfterRead()
{
	READ_PTR_FULL(OverrideAsset, UPetCustomisationOverrideDataAsset);
}

void FPetCustomiationOverrideMappingEntry::BeforeDelete()
{
	DELE_PTR_FULL(OverrideAsset);
}

void FPetDangerHearingThreatResponse::AfterRead()
{
}

void FPetDangerHearingThreatResponse::BeforeDelete()
{
}

void FPetDangerHearingThreat::AfterRead()
{
}

void FPetDangerHearingThreat::BeforeDelete()
{
}

void FPetFeedingAnimationData::AfterRead()
{
}

void FPetFeedingAnimationData::BeforeDelete()
{
}

void FPetFeedingParams::AfterRead()
{
}

void FPetFeedingParams::BeforeDelete()
{
}

void FHangoutSpotPosition::AfterRead()
{
	READ_PTR_FULL(Occupier, APawn);
}

void FHangoutSpotPosition::BeforeDelete()
{
	DELE_PTR_FULL(Occupier);
}

void FPetCustomisation::AfterRead()
{
}

void FPetCustomisation::BeforeDelete()
{
}

void FPetListingTypeEntry::AfterRead()
{
}

void FPetListingTypeEntry::BeforeDelete()
{
}

void FPetsServiceParams::AfterRead()
{
}

void FPetsServiceParams::BeforeDelete()
{
}

void FPetRelationship::AfterRead()
{
	READ_PTR_FULL(PetInfo, APetItemInfo);
}

void FPetRelationship::BeforeDelete()
{
	DELE_PTR_FULL(PetInfo);
}

void FReactStateMapping::AfterRead()
{
}

void FReactStateMapping::BeforeDelete()
{
}

void FWieldablePetDropTimeout::AfterRead()
{
}

void FWieldablePetDropTimeout::BeforeDelete()
{
}

void FWieldablePetFoodSourceEntry::AfterRead()
{
	READ_PTR_FULL(FoodSourceActor, AActor);
}

void FWieldablePetFoodSourceEntry::BeforeDelete()
{
	DELE_PTR_FULL(FoodSourceActor);
}

void FWieldablePetHungerAnimationData::AfterRead()
{
}

void FWieldablePetHungerAnimationData::BeforeDelete()
{
}

void FPetTurnToFaceData::AfterRead()
{
}

void FPetTurnToFaceData::BeforeDelete()
{
}

void FEventWieldablePetPendingDrop::AfterRead()
{
}

void FEventWieldablePetPendingDrop::BeforeDelete()
{
}

void FEventNewPetThreatDetected::AfterRead()
{
}

void FEventNewPetThreatDetected::BeforeDelete()
{
}

void FEventPetDismissed::AfterRead()
{
	READ_PTR_FULL(DismissingActor, AActor);
}

void FEventPetDismissed::BeforeDelete()
{
	DELE_PTR_FULL(DismissingActor);
}

void FDismissPetNotificationEvent::AfterRead()
{
}

void FDismissPetNotificationEvent::BeforeDelete()
{
}

void FEventPetFoodBase::AfterRead()
{
}

void FEventPetFoodBase::BeforeDelete()
{
}

void FEventPetRefusedFood::AfterRead()
{
	FEventPetFoodBase::AfterRead();

	READ_PTR_FULL(FeedingActor, AActor);
}

void FEventPetRefusedFood::BeforeDelete()
{
	FEventPetFoodBase::BeforeDelete();

	DELE_PTR_FULL(FeedingActor);
}

void FEventPetReactedToFood::AfterRead()
{
	FEventPetFoodBase::AfterRead();

}

void FEventPetReactedToFood::BeforeDelete()
{
	FEventPetFoodBase::BeforeDelete();

}

void FEventPetNotFed::AfterRead()
{
	FEventPetFoodBase::AfterRead();

	READ_PTR_FULL(FeedingActor, AActor);
}

void FEventPetNotFed::BeforeDelete()
{
	FEventPetFoodBase::BeforeDelete();

	DELE_PTR_FULL(FeedingActor);
}

void FEventPetFed::AfterRead()
{
	FEventPetFoodBase::AfterRead();

	READ_PTR_FULL(FedWithActor, AActor);
	READ_PTR_FULL(FeedingActor, AActor);
}

void FEventPetFed::BeforeDelete()
{
	FEventPetFoodBase::BeforeDelete();

	DELE_PTR_FULL(FedWithActor);
	DELE_PTR_FULL(FeedingActor);
}

void FEventPetPerchSpotEnabledStateChanged::AfterRead()
{
}

void FEventPetPerchSpotEnabledStateChanged::BeforeDelete()
{
}

void FEventPetLeftHangout::AfterRead()
{
	READ_PTR_FULL(Pet, AActor);
}

void FEventPetLeftHangout::BeforeDelete()
{
	DELE_PTR_FULL(Pet);
}

void FEventPetEnteredHangout::AfterRead()
{
}

void FEventPetEnteredHangout::BeforeDelete()
{
}

void FEventPetSadnessEnd::AfterRead()
{
}

void FEventPetSadnessEnd::BeforeDelete()
{
}

void FEventPetSadnessBegin::AfterRead()
{
}

void FEventPetSadnessBegin::BeforeDelete()
{
}

void FEventPetOwnerAssigned::AfterRead()
{
	READ_PTR_FULL(Owner, AActor);
}

void FEventPetOwnerAssigned::BeforeDelete()
{
	DELE_PTR_FULL(Owner);
}

void FEventPetCustomisationComplete::AfterRead()
{
}

void FEventPetCustomisationComplete::BeforeDelete()
{
}

void FEventPetCustomisationReady::AfterRead()
{
}

void FEventPetCustomisationReady::BeforeDelete()
{
}

void FEventWieldablePetPutOnPerch::AfterRead()
{
	READ_PTR_FULL(Pet, AActor);
}

void FEventWieldablePetPutOnPerch::BeforeDelete()
{
	DELE_PTR_FULL(Pet);
}

void FEventPetDropped::AfterRead()
{
}

void FEventPetDropped::BeforeDelete()
{
}

void FEventPetPickedUp::AfterRead()
{
}

void FEventPetPickedUp::BeforeDelete()
{
}

void FEventPetReactBegun::AfterRead()
{
}

void FEventPetReactBegun::BeforeDelete()
{
}

void FEventPetReactCancellation::AfterRead()
{
	READ_PTR_FULL(ReactSource, AActor);
}

void FEventPetReactCancellation::BeforeDelete()
{
	DELE_PTR_FULL(ReactSource);
}

void FEventPetReactRequest::AfterRead()
{
	READ_PTR_FULL(ReactSource, AActor);
}

void FEventPetReactRequest::BeforeDelete()
{
	DELE_PTR_FULL(ReactSource);
}

void FRespawnPetEvent::AfterRead()
{
	READ_PTR_FULL(PetOwner, AActor);
}

void FRespawnPetEvent::BeforeDelete()
{
	DELE_PTR_FULL(PetOwner);
}

void FEventPetEndPlay::AfterRead()
{
	READ_PTR_FULL(LinkedPet, APawn);
}

void FEventPetEndPlay::BeforeDelete()
{
	DELE_PTR_FULL(LinkedPet);
}

void FEventPetSpawnedForShip::AfterRead()
{
	READ_PTR_FULL(LinkedPet, APawn);
	READ_PTR_FULL(LinkedShip, AActor);
}

void FEventPetSpawnedForShip::BeforeDelete()
{
	DELE_PTR_FULL(LinkedPet);
	DELE_PTR_FULL(LinkedShip);
}

void FPetBaseTelemetryFragmentInput::AfterRead()
{
	FTelemetryFragmentInput::AfterRead();

}

void FPetBaseTelemetryFragmentInput::BeforeDelete()
{
	FTelemetryFragmentInput::BeforeDelete();

}

void FPetBaseTelemetryFragment::AfterRead()
{
}

void FPetBaseTelemetryFragment::BeforeDelete()
{
}

void FWieldablePetPutOnPerchTelemetryEvent::AfterRead()
{
}

void FWieldablePetPutOnPerchTelemetryEvent::BeforeDelete()
{
}

void FPetDismissedTelemetryEvent::AfterRead()
{
}

void FPetDismissedTelemetryEvent::BeforeDelete()
{
}

void FPetRefusedFoodTelemetryEvent::AfterRead()
{
}

void FPetRefusedFoodTelemetryEvent::BeforeDelete()
{
}

void FPetReactedToFoodTelemetryEvent::AfterRead()
{
}

void FPetReactedToFoodTelemetryEvent::BeforeDelete()
{
}

void FPetNotFedTelemetryEvent::AfterRead()
{
}

void FPetNotFedTelemetryEvent::BeforeDelete()
{
}

void FPetFedTelemetryEvent::AfterRead()
{
}

void FPetFedTelemetryEvent::BeforeDelete()
{
}

void FPetReactedTelemetryEvent::AfterRead()
{
}

void FPetReactedTelemetryEvent::BeforeDelete()
{
}

void FPetDroppedTelemetryEvent::AfterRead()
{
}

void FPetDroppedTelemetryEvent::BeforeDelete()
{
}

void FPetPickedUpTelemetryEvent::AfterRead()
{
}

void FPetPickedUpTelemetryEvent::BeforeDelete()
{
}

void FPetControllerSetTickOrderEvent::AfterRead()
{
	READ_PTR_FULL(Actor, AActor);
}

void FPetControllerSetTickOrderEvent::BeforeDelete()
{
	DELE_PTR_FULL(Actor);
}

void FEventPerchHangoutSpotSetEnabledState::AfterRead()
{
}

void FEventPerchHangoutSpotSetEnabledState::BeforeDelete()
{
}

void FEventHangoutSpotMadeAvailable::AfterRead()
{
}

void FEventHangoutSpotMadeAvailable::BeforeDelete()
{
}

void FEventHangoutSpotMadeUnavailable::AfterRead()
{
}

void FEventHangoutSpotMadeUnavailable::BeforeDelete()
{
}

void FPetDespawnActionStateParams::AfterRead()
{
	READ_PTR_FULL(DespawnVFX, UObject);
	READ_PTR_FULL(DespawnSFX, UWwiseEvent);
	READ_PTR_FULL(StopDespawnSFX, UWwiseEvent);
}

void FPetDespawnActionStateParams::BeforeDelete()
{
	DELE_PTR_FULL(DespawnVFX);
	DELE_PTR_FULL(DespawnSFX);
	DELE_PTR_FULL(StopDespawnSFX);
}

void FPetSpawnActionStateConstructionInfo::AfterRead()
{
	FActorActionStateConstructionInfo::AfterRead();

}

void FPetSpawnActionStateConstructionInfo::BeforeDelete()
{
	FActorActionStateConstructionInfo::BeforeDelete();

}

void FPetSpawnActionStateParams::AfterRead()
{
	READ_PTR_FULL(SpawnVFX, UObject);
	READ_PTR_FULL(SpawnSFX, UWwiseEvent);
	READ_PTR_FULL(StopSpawnSFX, UWwiseEvent);
}

void FPetSpawnActionStateParams::BeforeDelete()
{
	DELE_PTR_FULL(SpawnVFX);
	DELE_PTR_FULL(SpawnSFX);
	DELE_PTR_FULL(StopSpawnSFX);
}

void FEventWieldablePetHungerStateUpdated::AfterRead()
{
}

void FEventWieldablePetHungerStateUpdated::BeforeDelete()
{
}

void UAIPetsOnDemandSpawner::AfterRead()
{
	UAISpawner::AfterRead();

}

void UAIPetsOnDemandSpawner::BeforeDelete()
{
	UAISpawner::BeforeDelete();

}

void UBTDecorator_IsForcingHangout::AfterRead()
{
	UBTDecorator_BaseConditional::AfterRead();

}

void UBTDecorator_IsForcingHangout::BeforeDelete()
{
	UBTDecorator_BaseConditional::BeforeDelete();

}

void UBTDecorator_IsOccupiedHangoutSpotStillAvailable::AfterRead()
{
	UBTDecorator_BaseConditional::AfterRead();

}

void UBTDecorator_IsOccupiedHangoutSpotStillAvailable::BeforeDelete()
{
	UBTDecorator_BaseConditional::BeforeDelete();

}

void UBTDecorator_IsOccupyingHangoutSpotWithGivenId::AfterRead()
{
	UBTDecorator_BaseConditional::AfterRead();

}

void UBTDecorator_IsOccupyingHangoutSpotWithGivenId::BeforeDelete()
{
	UBTDecorator_BaseConditional::BeforeDelete();

}

void UBTDecorator_IsPerchedInHangout::AfterRead()
{
	UBTDecorator_BaseConditional::AfterRead();

}

void UBTDecorator_IsPerchedInHangout::BeforeDelete()
{
	UBTDecorator_BaseConditional::BeforeDelete();

}

void UBTDecorator_PetFoodSourceAvailable::AfterRead()
{
	UBTDecorator_BaseConditional::AfterRead();

}

void UBTDecorator_PetFoodSourceAvailable::BeforeDelete()
{
	UBTDecorator_BaseConditional::BeforeDelete();

}

void UBTDecorator_PetRoamingAnimationStateActive::AfterRead()
{
	UBTDecorator_BaseConditional::AfterRead();

}

void UBTDecorator_PetRoamingAnimationStateActive::BeforeDelete()
{
	UBTDecorator_BaseConditional::BeforeDelete();

}

void UBTTask_AttachToHangout::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_AttachToHangout::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

void UBTTask_ChangeHangoutAnimation::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_ChangeHangoutAnimation::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

void UBTTask_DetachFromHangout::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_DetachFromHangout::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

void UBTTask_EatFood::AfterRead()
{
	UBTTaskNode::AfterRead();

	READ_PTR_FULL(FeedingDataAsset, UPetFeedingDataAsset);
}

void UBTTask_EatFood::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

	DELE_PTR_FULL(FeedingDataAsset);
}

void UBTTask_GetTotalHangoutTime::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_GetTotalHangoutTime::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

void UBTTask_NotifyForcedHangoutComplete::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_NotifyForcedHangoutComplete::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

void UBTTask_PetWaitForAnimationRoamingState::AfterRead()
{
	UBTTaskNode::AfterRead();

}

void UBTTask_PetWaitForAnimationRoamingState::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

}

void UBTTask_ReactToOwner::AfterRead()
{
	UBTTaskNode::AfterRead();

}

void UBTTask_ReactToOwner::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

}

void UBTTask_ReactToThreat::AfterRead()
{
	UBTTaskNode::AfterRead();

}

void UBTTask_ReactToThreat::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

}

void UBTTask_RotatePetToFaceBBEntryWithTime::AfterRead()
{
	UBTTask_RotateToFaceBBEntry::AfterRead();

}

void UBTTask_RotatePetToFaceBBEntryWithTime::BeforeDelete()
{
	UBTTask_RotateToFaceBBEntry::BeforeDelete();

}

void UBTTask_SelectFoodSource::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_SelectFoodSource::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

void UBTTask_SelectPetHangoutSpot::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_SelectPetHangoutSpot::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

void UBTTask_SelectWanderFlyStrategy::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

	READ_PTR_FULL(WanderStrategy, UClass);
	READ_PTR_FULL(LowFlyStrategy, UClass);
	READ_PTR_FULL(HighFlyStrategy, UClass);
}

void UBTTask_SelectWanderFlyStrategy::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

	DELE_PTR_FULL(WanderStrategy);
	DELE_PTR_FULL(LowFlyStrategy);
	DELE_PTR_FULL(HighFlyStrategy);
}

void UPetHangoutInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UPetHangoutInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UPetMemoryInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UPetMemoryInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UPetLifetimeInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UPetLifetimeInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UPlayerPetInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UPlayerPetInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UPetReactInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UPetReactInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UBTTask_SetDebugPetStateDescriptor::AfterRead()
{
	UBTTaskNode::AfterRead();

}

void UBTTask_SetDebugPetStateDescriptor::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

}

void UBTTask_StopOccupyingHangoutSpot::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_StopOccupyingHangoutSpot::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

void UCannonSquashComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UCannonSquashComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UPetDangerComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(DangerDataAsset, UPetDangerDataAsset);
}

void UPetDangerComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(DangerDataAsset);
}

void UEnvQueryContext_AverageThreatPositionFromBlackboard::AfterRead()
{
	UEnvQueryContext_PositionFromBlackboard::AfterRead();

}

void UEnvQueryContext_AverageThreatPositionFromBlackboard::BeforeDelete()
{
	UEnvQueryContext_PositionFromBlackboard::BeforeDelete();

}

void UEnvQueryContext_CurrentHangoutSpot::AfterRead()
{
	UEnvQueryContext::AfterRead();

}

void UEnvQueryContext_CurrentHangoutSpot::BeforeDelete()
{
	UEnvQueryContext::BeforeDelete();

}

void UEnvQueryContext_FirstThreatPositionFromBlackboard::AfterRead()
{
	UEnvQueryContext_PositionFromBlackboard::AfterRead();

}

void UEnvQueryContext_FirstThreatPositionFromBlackboard::BeforeDelete()
{
	UEnvQueryContext_PositionFromBlackboard::BeforeDelete();

}

void UEnvQueryContext_PerceivedFoodSources::AfterRead()
{
	UEnvQueryContext::AfterRead();

}

void UEnvQueryContext_PerceivedFoodSources::BeforeDelete()
{
	UEnvQueryContext::BeforeDelete();

}

void UEnvQueryContext_SafePositionFromBlackboard::AfterRead()
{
	UEnvQueryContext_PositionFromBlackboard::AfterRead();

}

void UEnvQueryContext_SafePositionFromBlackboard::BeforeDelete()
{
	UEnvQueryContext_PositionFromBlackboard::BeforeDelete();

}

void UPetDesc::AfterRead()
{
	UItemDesc::AfterRead();

	READ_PTR_FULL(PetSpawnParams, UPetSpawnParamsDataAsset);
	READ_PTR_FULL(PreviewPetClass, UClass);
}

void UPetDesc::BeforeDelete()
{
	UItemDesc::BeforeDelete();

	DELE_PTR_FULL(PetSpawnParams);
	DELE_PTR_FULL(PreviewPetClass);
}

void UPetHangoutSpotsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UPetHangoutSpotsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UPetHangoutSpotSelectorComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(HangoutSpotPositionComponent, UPetHangoutSpotComponent);
	READ_PTR_FULL(HangoutParamsDataAsset, UPetHangoutSpotsDataAsset);
	READ_PTR_FULL(PetType_Cached, UClass);
}

void UPetHangoutSpotSelectorComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(HangoutSpotPositionComponent);
	DELE_PTR_FULL(HangoutParamsDataAsset);
	DELE_PTR_FULL(PetType_Cached);
}

void UHangoutSpotSelectionInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UHangoutSpotSelectionInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UPetIdleMovementInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UPetIdleMovementInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function Pets.PetAIController.OnPerceptionUpdated
// (Native, Public)
// Parameters:
// TArray<class AActor*>          ChangedPerceivedActors         (Parm, ZeroConstructor)
void APetAIController::OnPerceptionUpdated(TArray<class AActor*> ChangedPerceivedActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Pets.PetAIController.OnPerceptionUpdated");

	APetAIController_OnPerceptionUpdated_Params params;
	params.ChangedPerceivedActors = ChangedPerceivedActors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pets.PetAIController.GetAthenaAICharPathFollowingComp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAthenaAICharacterPathFollowingComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAthenaAICharacterPathFollowingComponent* APetAIController::GetAthenaAICharPathFollowingComp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Pets.PetAIController.GetAthenaAICharPathFollowingComp");

	APetAIController_GetAthenaAICharPathFollowingComp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void APetAIController::AfterRead()
{
	AAthenaAIController::AfterRead();

	READ_PTR_FULL(DefaultStrategy, UClass);
	READ_PTR_FULL(ReactMappings, UReactStateMappingsDataAsset);
	READ_PTR_FULL(HangoutSpotSelectorComponent, UPetHangoutSpotSelectorComponent);
	READ_PTR_FULL(ForcedHangoutSpotComponent, UPetHangoutSpotComponent);
	READ_PTR_FULL(DefaultBlackboardAsset, UBlackboardData);
	READ_PTR_FULL(DefaultTree, UBehaviorTree);
	READ_PTR_FULL(HangoutTree, UBehaviorTree);
	READ_PTR_FULL(IdleTree, UBehaviorTree);
	READ_PTR_FULL(DangerComponent, UPetDangerComponent);
}

void APetAIController::BeforeDelete()
{
	AAthenaAIController::BeforeDelete();

	DELE_PTR_FULL(DefaultStrategy);
	DELE_PTR_FULL(ReactMappings);
	DELE_PTR_FULL(HangoutSpotSelectorComponent);
	DELE_PTR_FULL(ForcedHangoutSpotComponent);
	DELE_PTR_FULL(DefaultBlackboardAsset);
	DELE_PTR_FULL(DefaultTree);
	DELE_PTR_FULL(HangoutTree);
	DELE_PTR_FULL(IdleTree);
	DELE_PTR_FULL(DangerComponent);
}

void UPetCustomisationOverrideDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(AnimationOverrideId, UClass);
}

void UPetCustomisationOverrideDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(AnimationOverrideId);
}

void UPetCustomisationOverrideMappingsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UPetCustomisationOverrideMappingsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UPetDangerDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UPetDangerDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UPetFeedingDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UPetFeedingDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

// Function Pets.PetHangoutSpotComponent.OnRep_IsOwnerSinking
// (Final, Native, Private)
void UPetHangoutSpotComponent::OnRep_IsOwnerSinking()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Pets.PetHangoutSpotComponent.OnRep_IsOwnerSinking");

	UPetHangoutSpotComponent_OnRep_IsOwnerSinking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UPetHangoutSpotComponent::AfterRead()
{
	USceneComponent::AfterRead();

	READ_PTR_FULL(PetHangoutSpotsDataAsset, UPetHangoutSpotsDataAsset);
}

void UPetHangoutSpotComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

	DELE_PTR_FULL(PetHangoutSpotsDataAsset);
}

void APetItemInfo::AfterRead()
{
	ANonStorableItemInfo::AfterRead();

	READ_PTR_FULL(PetOwner, AActor);
	READ_PTR_FULL(SpawnedForShip, AActor);
}

void APetItemInfo::BeforeDelete()
{
	ANonStorableItemInfo::BeforeDelete();

	DELE_PTR_FULL(PetOwner);
	DELE_PTR_FULL(SpawnedForShip);
}

void UPetListingDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UPetListingDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UPetMovementModifierSettingsInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UPetMovementModifierSettingsInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UPetOwnerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UPetOwnerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function Pets.PetOwnerComponent.Server_RequestDismissal
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void UPetOwnerComponent::Server_RequestDismissal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Pets.PetOwnerComponent.Server_RequestDismissal");

	UPetOwnerComponent_Server_RequestDismissal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UPetOwnerComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(PetInfo, AItemInfo);
}

void UPetOwnerComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(PetInfo);
}

void UPetPartCustomisationInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UPetPartCustomisationInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UPetPerchComponent::AfterRead()
{
	UInteractableComponent::AfterRead();

}

void UPetPerchComponent::BeforeDelete()
{
	UInteractableComponent::BeforeDelete();

}

void UPetSpawnParamsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(PetClassID, UClass);
	READ_PTR_FULL(TreeToRun, UBehaviorTree);
	READ_PTR_FULL(SpawnQueryForLand, UEnvQuery);
	READ_PTR_FULL(SpawnQueryForShip, UEnvQuery);
}

void UPetSpawnParamsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(PetClassID);
	DELE_PTR_FULL(TreeToRun);
	DELE_PTR_FULL(SpawnQueryForLand);
	DELE_PTR_FULL(SpawnQueryForShip);
}

void UPetsServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UPetsServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UPetsServiceParamsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UPetsServiceParamsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

// Function Pets.PetsService.RemovePetFromActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InOwner                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPetsService::RemovePetFromActor(class AActor* InOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Pets.PetsService.RemovePetFromActor");

	UPetsService_RemovePetFromActor_Params params;
	params.InOwner = InOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pets.PetsService.AddPetForActorAndWield
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InPetType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FPetCustomisation       InCustomisation                (ConstParm, Parm)
// class AActor*                  InOwner                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsWielded                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPetsService::AddPetForActorAndWield(class UClass* InPetType, const struct FPetCustomisation& InCustomisation, class AActor* InOwner, bool IsWielded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Pets.PetsService.AddPetForActorAndWield");

	UPetsService_AddPetForActorAndWield_Params params;
	params.InPetType = InPetType;
	params.InCustomisation = InCustomisation;
	params.InOwner = InOwner;
	params.IsWielded = IsWielded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pets.PetsService.AddPetForActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InPetType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FPetCustomisation       InCustomisation                (ConstParm, Parm)
// class AActor*                  InOwner                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPetsService::AddPetForActor(class UClass* InPetType, const struct FPetCustomisation& InCustomisation, class AActor* InOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Pets.PetsService.AddPetForActor");

	UPetsService_AddPetForActor_Params params;
	params.InPetType = InPetType;
	params.InCustomisation = InCustomisation;
	params.InOwner = InOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UPetsService::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Spawner, UAIPetsOnDemandSpawner);
	READ_PTR_FULL(PetHangoutDataAsset, UPetHangoutSpotsDataAsset);
}

void UPetsService::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Spawner);
	DELE_PTR_FULL(PetHangoutDataAsset);
}

void UPetsSettings::AfterRead()
{
	UObject::AfterRead();

}

void UPetsSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UReactAIStrategyId::AfterRead()
{
	UAIStrategyId::AfterRead();

}

void UReactAIStrategyId::BeforeDelete()
{
	UAIStrategyId::BeforeDelete();

}

void UReactStateMappingsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UReactStateMappingsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

// Function Pets.WieldablePet.OnRep_HungerReactAnimationState
// (Final, Native, Private)
void AWieldablePet::OnRep_HungerReactAnimationState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Pets.WieldablePet.OnRep_HungerReactAnimationState");

	AWieldablePet_OnRep_HungerReactAnimationState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pets.WieldablePet.OnRep_DropRequest
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<Pets_EWieldablePetDropRequestReason> PriorDropRequest               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWieldablePet::OnRep_DropRequest(TEnumAsByte<Pets_EWieldablePetDropRequestReason> PriorDropRequest)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Pets.WieldablePet.OnRep_DropRequest");

	AWieldablePet_OnRep_DropRequest_Params params;
	params.PriorDropRequest = PriorDropRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AWieldablePet::AfterRead()
{
	ASkeletalMeshWieldableItem::AfterRead();

	READ_PTR_FULL(WieldablePetComponent, UWieldablePetComponent);
	READ_PTR_FULL(AIPartsRetrievalComponent, UAIPartsRetrievalComponent);
	READ_PTR_FULL(PetPartCustomisationComponent, UPetPartCustomisationComponent);
	READ_PTR_FULL(AnimNotifyWwiseEmitterComponent, UAnimNotifyWwiseEmitterComponent);
	READ_PTR_FULL(WaterExposureComponent, UWaterExposureComponent);
	READ_PTR_FULL(UsableWieldableComponent, UUsableWieldableComponent);
	READ_PTR_FULL(PickupableComponent, UPickupableComponent);
	READ_PTR_FULL(WieldableInteractableComponent, UWieldableInteractableComponent);
	READ_PTR_FULL(CleanlinessComponent, UCleanlinessComponent);
	READ_PTR_FULL(LightWeightStatusEffectManagerComponent, ULightWeightStatusEffectManagerComponent);
	READ_PTR_FULL(PetDitherComponent, UPetDitherComponent);
	READ_PTR_FULL(PetOwner, AActor);
	READ_PTR_FULL(FeedingComponent, UFeedingComponent);
	READ_PTR_FULL(SicknessComponent, UPetSicknessComponent);
	READ_PTR_FULL(HungerComponent, UWieldablePetHungerComponent);
	READ_PTR_FULL(StarvingComponent, UStarvingComponent);
	READ_PTR_FULL(TelemetryComponent, UPetTelemetryComponent);
	READ_PTR_FULL(AnimationDataStoreComponent, UAnimationDataStoreComponent);
}

void AWieldablePet::BeforeDelete()
{
	ASkeletalMeshWieldableItem::BeforeDelete();

	DELE_PTR_FULL(WieldablePetComponent);
	DELE_PTR_FULL(AIPartsRetrievalComponent);
	DELE_PTR_FULL(PetPartCustomisationComponent);
	DELE_PTR_FULL(AnimNotifyWwiseEmitterComponent);
	DELE_PTR_FULL(WaterExposureComponent);
	DELE_PTR_FULL(UsableWieldableComponent);
	DELE_PTR_FULL(PickupableComponent);
	DELE_PTR_FULL(WieldableInteractableComponent);
	DELE_PTR_FULL(CleanlinessComponent);
	DELE_PTR_FULL(LightWeightStatusEffectManagerComponent);
	DELE_PTR_FULL(PetDitherComponent);
	DELE_PTR_FULL(PetOwner);
	DELE_PTR_FULL(FeedingComponent);
	DELE_PTR_FULL(SicknessComponent);
	DELE_PTR_FULL(HungerComponent);
	DELE_PTR_FULL(StarvingComponent);
	DELE_PTR_FULL(TelemetryComponent);
	DELE_PTR_FULL(AnimationDataStoreComponent);
}

void UWieldablePetAnimNotifyWwiseEmitterComponent::AfterRead()
{
	UAnimNotifyWwiseEmitterComponent::AfterRead();

}

void UWieldablePetAnimNotifyWwiseEmitterComponent::BeforeDelete()
{
	UAnimNotifyWwiseEmitterComponent::BeforeDelete();

}

void UWieldablePetComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(WieldablePetComponentData, UWieldablePetComponentDataAsset);
}

void UWieldablePetComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(WieldablePetComponentData);
}

void UWieldablePetComponentDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UWieldablePetComponentDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UWieldablePetHungerComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(HungerData, UWieldablePetHungerDataAsset);
}

void UWieldablePetHungerComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(HungerData);
}

void UWieldablePetHungerDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UWieldablePetHungerDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
