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

void FCoordinatedKrakenSpecialEvent::AfterRead()
{
}

void FCoordinatedKrakenSpecialEvent::BeforeDelete()
{
}

void FCoordinatedKrakenTentacleAction::AfterRead()
{
	READ_PTR_FULL(State, UClass);
}

void FCoordinatedKrakenTentacleAction::BeforeDelete()
{
	DELE_PTR_FULL(State);
}

void FCoordinatedKrakenHeadAction::AfterRead()
{
	READ_PTR_FULL(State, UClass);
}

void FCoordinatedKrakenHeadAction::BeforeDelete()
{
	DELE_PTR_FULL(State);
}

void FCoordinatedKrakenExplosionEvent::AfterRead()
{
}

void FCoordinatedKrakenExplosionEvent::BeforeDelete()
{
}

void FCoordinatedKrakenAction::AfterRead()
{
}

void FCoordinatedKrakenAction::BeforeDelete()
{
}

void FKrakenShipWrappingTentacleAnimationStateParams::AfterRead()
{
}

void FKrakenShipWrappingTentacleAnimationStateParams::BeforeDelete()
{
}

void FKrakenShipWrappingTentacleAnimationState::AfterRead()
{
}

void FKrakenShipWrappingTentacleAnimationState::BeforeDelete()
{
}

void FKrakenShipWrappingTentacleVFXParams::AfterRead()
{
	READ_PTR_FULL(VFX, UParticleSystem);
}

void FKrakenShipWrappingTentacleVFXParams::BeforeDelete()
{
	DELE_PTR_FULL(VFX);
}

void FKrakenShipWrappingTentacleAnimationPhaseCollection::AfterRead()
{
}

void FKrakenShipWrappingTentacleAnimationPhaseCollection::BeforeDelete()
{
}

void FKrakenShipWrappingTentacleParams::AfterRead()
{
}

void FKrakenShipWrappingTentacleParams::BeforeDelete()
{
}

void FKrakenWeightedBehaviour::AfterRead()
{
}

void FKrakenWeightedBehaviour::BeforeDelete()
{
}

void FKrakenShipWrappingBehaviourParamsCollection::AfterRead()
{
}

void FKrakenShipWrappingBehaviourParamsCollection::BeforeDelete()
{
}

void FKrakenShipHittingBehaviourParamsCollection::AfterRead()
{
}

void FKrakenShipHittingBehaviourParamsCollection::BeforeDelete()
{
}

void FKrakenBehaviourParams::AfterRead()
{
	READ_PTR_FULL(IdleParams, UKrakenIdleBehaviourParamsDataAsset);
	READ_PTR_FULL(PlayerGrabbingParams, UKrakenPlayerGrabbingBehaviourParamsDataAsset);
}

void FKrakenBehaviourParams::BeforeDelete()
{
	DELE_PTR_FULL(IdleParams);
	DELE_PTR_FULL(PlayerGrabbingParams);
}

void FKrakenTentacleParams::AfterRead()
{
}

void FKrakenTentacleParams::BeforeDelete()
{
}

void FKrakenTentaclesChanceParams::AfterRead()
{
}

void FKrakenTentaclesChanceParams::BeforeDelete()
{
}

void FKrakenParams::AfterRead()
{
	READ_PTR_FULL(MurkClass, UClass);
	READ_PTR_FULL(PotentialTentacleSpawnLocations, UGeneratedLocationsDataAsset);
}

void FKrakenParams::BeforeDelete()
{
	DELE_PTR_FULL(MurkClass);
	DELE_PTR_FULL(PotentialTentacleSpawnLocations);
}

void FKrakenAnimatedTentacleAnimationBoneFrame::AfterRead()
{
}

void FKrakenAnimatedTentacleAnimationBoneFrame::BeforeDelete()
{
}

void FKrakenAnimatedTentacleAnimationBoneTrack::AfterRead()
{
}

void FKrakenAnimatedTentacleAnimationBoneTrack::BeforeDelete()
{
}

void FKrakenAnimatedTentacleMappedAnimation::AfterRead()
{
	READ_PTR_FULL(ClientAnimation, UAnimSequence);
	READ_PTR_FULL(AnimationAsset, UKrakenAnimatedTentacleAnimationDataAsset);
}

void FKrakenAnimatedTentacleMappedAnimation::BeforeDelete()
{
	DELE_PTR_FULL(ClientAnimation);
	DELE_PTR_FULL(AnimationAsset);
}

void FKrakenAnimatedTentacleAnimationSpecBone::AfterRead()
{
}

void FKrakenAnimatedTentacleAnimationSpecBone::BeforeDelete()
{
}

void FKrakenAnimatedTentacleTransitionAnimation::AfterRead()
{
	READ_PTR_FULL(FromState, UClass);
}

void FKrakenAnimatedTentacleTransitionAnimation::BeforeDelete()
{
	DELE_PTR_FULL(FromState);
}

void FKrakenAnimatedTentacleStateAnimationMapping::AfterRead()
{
	READ_PTR_FULL(State, UClass);
	READ_PTR_FULL(Animation, UAnimSequence);
}

void FKrakenAnimatedTentacleStateAnimationMapping::BeforeDelete()
{
	DELE_PTR_FULL(State);
	DELE_PTR_FULL(Animation);
}

void FKrakenHeadTransitionAnimation::AfterRead()
{
	READ_PTR_FULL(FromState, UClass);
	READ_PTR_FULL(TransitionAnimation, UAnimSequence);
}

void FKrakenHeadTransitionAnimation::BeforeDelete()
{
	DELE_PTR_FULL(FromState);
	DELE_PTR_FULL(TransitionAnimation);
}

void FKrakenHeadStateAnimationMapping::AfterRead()
{
	READ_PTR_FULL(State, UClass);
	READ_PTR_FULL(Animation, UAnimSequence);
}

void FKrakenHeadStateAnimationMapping::BeforeDelete()
{
	DELE_PTR_FULL(State);
	DELE_PTR_FULL(Animation);
}

void FHeadStateChangeRequest::AfterRead()
{
	READ_PTR_FULL(RequestedState, UClass);
}

void FHeadStateChangeRequest::BeforeDelete()
{
	DELE_PTR_FULL(RequestedState);
}

void FKrakenHeadHealthPair::AfterRead()
{
}

void FKrakenHeadHealthPair::BeforeDelete()
{
}

void FKrakenHeadHitReactAnimations::AfterRead()
{
	READ_PTR_FULL(HitReactAnimation, UAnimSequence);
}

void FKrakenHeadHitReactAnimations::BeforeDelete()
{
	DELE_PTR_FULL(HitReactAnimation);
}

void FKrakenTentacleBehaviourActionChances::AfterRead()
{
}

void FKrakenTentacleBehaviourActionChances::BeforeDelete()
{
}

void FKrakenTentacleBehaviourParams::AfterRead()
{
	READ_PTR_FULL(InactiveSpawnQueryTemplate, UEnvQuery);
	READ_PTR_FULL(ActiveCannonSideSpawnQueryTemplate, UEnvQuery);
	READ_PTR_FULL(ActiveNonCannonSideSpawnQueryTemplate, UEnvQuery);
	READ_PTR_FULL(TentacleClass, UClass);
}

void FKrakenTentacleBehaviourParams::BeforeDelete()
{
	DELE_PTR_FULL(InactiveSpawnQueryTemplate);
	DELE_PTR_FULL(ActiveCannonSideSpawnQueryTemplate);
	DELE_PTR_FULL(ActiveNonCannonSideSpawnQueryTemplate);
	DELE_PTR_FULL(TentacleClass);
}

void FKrakenIdleBehaviourParams::AfterRead()
{
	FKrakenTentacleBehaviourParams::AfterRead();

}

void FKrakenIdleBehaviourParams::BeforeDelete()
{
	FKrakenTentacleBehaviourParams::BeforeDelete();

}

void FKrakenPlayerGrabbingHoldingStateTransitionChance::AfterRead()
{
	READ_PTR_FULL(StateToTransitionTo, UClass);
}

void FKrakenPlayerGrabbingHoldingStateTransitionChance::BeforeDelete()
{
	DELE_PTR_FULL(StateToTransitionTo);
}

void FKrakenPlayerGrabbingBehaviourParams::AfterRead()
{
	FKrakenTentacleBehaviourParams::AfterRead();

}

void FKrakenPlayerGrabbingBehaviourParams::BeforeDelete()
{
	FKrakenTentacleBehaviourParams::BeforeDelete();

}

void FKrakenServiceShipParams::AfterRead()
{
	READ_PTR_FULL(KrakenParams, UKrakenParamsDataAsset);
}

void FKrakenServiceShipParams::BeforeDelete()
{
	DELE_PTR_FULL(KrakenParams);
}

void FKrakenServiceSpawnParams::AfterRead()
{
	READ_PTR_FULL(SpawnLocationQuery, UEnvQuery);
}

void FKrakenServiceSpawnParams::BeforeDelete()
{
	DELE_PTR_FULL(SpawnLocationQuery);
}

void FKrakenServiceParams::AfterRead()
{
	READ_PTR_FULL(KrakenType, UClass);
	READ_PTR_FULL(DefaultKrakenParams, UKrakenParamsDataAsset);
}

void FKrakenServiceParams::BeforeDelete()
{
	DELE_PTR_FULL(KrakenType);
	DELE_PTR_FULL(DefaultKrakenParams);
}

void FKrakenShipHittingBehaviourImpactParams::AfterRead()
{
}

void FKrakenShipHittingBehaviourImpactParams::BeforeDelete()
{
}

void FKrakenShipHittingBehaviourParams::AfterRead()
{
	READ_PTR_FULL(ShipSize, UClass);
	READ_PTR_FULL(TentacleType, UClass);
}

void FKrakenShipHittingBehaviourParams::BeforeDelete()
{
	DELE_PTR_FULL(ShipSize);
	DELE_PTR_FULL(TentacleType);
}

void FKrakenAnchorDynamicsParams::AfterRead()
{
	FStandardAnchorDynamicsParameters::AfterRead();

}

void FKrakenAnchorDynamicsParams::BeforeDelete()
{
	FStandardAnchorDynamicsParameters::BeforeDelete();

}

void FKrakenDynamicsStateEvent::AfterRead()
{
}

void FKrakenDynamicsStateEvent::BeforeDelete()
{
}

void FKrakenShipWrappingBehaviourTentacleHeadParams::AfterRead()
{
	READ_PTR_FULL(TentacleType, UClass);
}

void FKrakenShipWrappingBehaviourTentacleHeadParams::BeforeDelete()
{
	DELE_PTR_FULL(TentacleType);
}

void FKrakenShipWrappingBehaviourHealthParams::AfterRead()
{
}

void FKrakenShipWrappingBehaviourHealthParams::BeforeDelete()
{
}

void FKrakenShipWrappingBehaviourNamedTransform::AfterRead()
{
}

void FKrakenShipWrappingBehaviourNamedTransform::BeforeDelete()
{
}

void FKrakenShipWrappingBehaviourWarningParams::AfterRead()
{
	READ_PTR_FULL(TentacleType, UClass);
}

void FKrakenShipWrappingBehaviourWarningParams::BeforeDelete()
{
	DELE_PTR_FULL(TentacleType);
}

void FKrakenShipWrappingBehaviourTentacleHeadLocations::AfterRead()
{
}

void FKrakenShipWrappingBehaviourTentacleHeadLocations::BeforeDelete()
{
}

void FKrakenDynamicsStateFragmentParams::AfterRead()
{
	READ_PTR_FULL(TorqueCurve, UCurveVector);
}

void FKrakenDynamicsStateFragmentParams::BeforeDelete()
{
	DELE_PTR_FULL(TorqueCurve);
}

void FKrakenDynamicsStateParams::AfterRead()
{
}

void FKrakenDynamicsStateParams::BeforeDelete()
{
}

void FKrakenDynamicsParams::AfterRead()
{
}

void FKrakenDynamicsParams::BeforeDelete()
{
}

void FKrakenShipWrappingBehaviourWrapLocationParams::AfterRead()
{
	READ_PTR_FULL(TentacleType, UClass);
}

void FKrakenShipWrappingBehaviourWrapLocationParams::BeforeDelete()
{
	DELE_PTR_FULL(TentacleType);
}

void FKrakenShipWrappingBehaviourWrapLocationWeightedParams::AfterRead()
{
}

void FKrakenShipWrappingBehaviourWrapLocationWeightedParams::BeforeDelete()
{
}

void FKrakenShipWrappingBehaviourWrapParams::AfterRead()
{
}

void FKrakenShipWrappingBehaviourWrapParams::BeforeDelete()
{
}

void FKrakenShipWrappingBehaviourShakeAttackParams::AfterRead()
{
}

void FKrakenShipWrappingBehaviourShakeAttackParams::BeforeDelete()
{
}

void FKrakenShipWrappingBehaviourHeavyAttackParams::AfterRead()
{
}

void FKrakenShipWrappingBehaviourHeavyAttackParams::BeforeDelete()
{
}

void FKrakenShipWrappingBehaviourDamageParams::AfterRead()
{
}

void FKrakenShipWrappingBehaviourDamageParams::BeforeDelete()
{
}

void FKrakenShipWrappingBehaviourParams::AfterRead()
{
	READ_PTR_FULL(ShipSize, UClass);
}

void FKrakenShipWrappingBehaviourParams::BeforeDelete()
{
	DELE_PTR_FULL(ShipSize);
}

void FKrakenWorldSettingsParams::AfterRead()
{
}

void FKrakenWorldSettingsParams::BeforeDelete()
{
}

void FCoordinatedKrakenPhaseAssetEntry::AfterRead()
{
	READ_PTR_FULL(Asset, UCoordinatedKrakenPhaseActionsDataAsset);
}

void FCoordinatedKrakenPhaseAssetEntry::BeforeDelete()
{
	DELE_PTR_FULL(Asset);
}

void FEventKrakenAnimatedTentacleTriggerHitReaction::AfterRead()
{
}

void FEventKrakenAnimatedTentacleTriggerHitReaction::BeforeDelete()
{
}

void FEventKrakenAnimatedTentacleTentacleDead::AfterRead()
{
}

void FEventKrakenAnimatedTentacleTentacleDead::BeforeDelete()
{
}

void FEventKrakenAnimatedTentacleTakenDamage::AfterRead()
{
}

void FEventKrakenAnimatedTentacleTakenDamage::BeforeDelete()
{
}

void FEventKrakenAnimatedTentacleTargetVomit::AfterRead()
{
}

void FEventKrakenAnimatedTentacleTargetVomit::BeforeDelete()
{
}

void FEventKrakenAnimatedTentaclePlayerInMouthEnd::AfterRead()
{
}

void FEventKrakenAnimatedTentaclePlayerInMouthEnd::BeforeDelete()
{
}

void FEventKrakenAnimatedTentaclePlayerInMouthBegin::AfterRead()
{
}

void FEventKrakenAnimatedTentaclePlayerInMouthBegin::BeforeDelete()
{
}

void FEventKrakenAnimatedTentacleSuckingEnd::AfterRead()
{
}

void FEventKrakenAnimatedTentacleSuckingEnd::BeforeDelete()
{
}

void FEventKrakenAnimatedTentacleSuckingStart::AfterRead()
{
}

void FEventKrakenAnimatedTentacleSuckingStart::BeforeDelete()
{
}

void FEventKrakenWrappingTentacleTellEnd::AfterRead()
{
}

void FEventKrakenWrappingTentacleTellEnd::BeforeDelete()
{
}

void FEventKrakenWrappingTentacleTellBegin::AfterRead()
{
}

void FEventKrakenWrappingTentacleTellBegin::BeforeDelete()
{
}

void FEventKrakenAnimatedTentacleSuckingTellEnd::AfterRead()
{
}

void FEventKrakenAnimatedTentacleSuckingTellEnd::BeforeDelete()
{
}

void FEventKrakenAnimatedTentacleSuckingTellBegin::AfterRead()
{
}

void FEventKrakenAnimatedTentacleSuckingTellBegin::BeforeDelete()
{
}

void FEventKrakenAnimatedTentacleSuckingTell::AfterRead()
{
}

void FEventKrakenAnimatedTentacleSuckingTell::BeforeDelete()
{
}

void FEventKrakenAnimatedTentacleSubmerge::AfterRead()
{
}

void FEventKrakenAnimatedTentacleSubmerge::BeforeDelete()
{
}

void FEventKrakenAnimatedTentacleEmerge::AfterRead()
{
}

void FEventKrakenAnimatedTentacleEmerge::BeforeDelete()
{
}

void FEventKrakenTentacleEndPlay::AfterRead()
{
}

void FEventKrakenTentacleEndPlay::BeforeDelete()
{
}

void FEventKrakenAnimatedTentacleAnimationStopped::AfterRead()
{
}

void FEventKrakenAnimatedTentacleAnimationStopped::BeforeDelete()
{
}

void FEventKrakenAnimatedTentacleAnimationStarted::AfterRead()
{
	READ_PTR_FULL(Animation, UAnimSequence);
}

void FEventKrakenAnimatedTentacleAnimationStarted::BeforeDelete()
{
	DELE_PTR_FULL(Animation);
}

void FEventKrakenAnimatedTentacleAuthoritativeAnimationTime::AfterRead()
{
}

void FEventKrakenAnimatedTentacleAuthoritativeAnimationTime::BeforeDelete()
{
}

void FEventKrakenAnimatedTentacleStateEntered::AfterRead()
{
	READ_PTR_FULL(State, UClass);
	READ_PTR_FULL(PreviousState, UClass);
}

void FEventKrakenAnimatedTentacleStateEntered::BeforeDelete()
{
	DELE_PTR_FULL(State);
	DELE_PTR_FULL(PreviousState);
}

void FEventKrakenHeadHit::AfterRead()
{
}

void FEventKrakenHeadHit::BeforeDelete()
{
}

void FEventCoordinatedKrakenPhaseEnded::AfterRead()
{
}

void FEventCoordinatedKrakenPhaseEnded::BeforeDelete()
{
}

void FEventKrakenTentacleDestroyed::AfterRead()
{
	READ_PTR_FULL(KillingBlowInstigator, AActor);
}

void FEventKrakenTentacleDestroyed::BeforeDelete()
{
	DELE_PTR_FULL(KillingBlowInstigator);
}

void FEventKrakenDespawned::AfterRead()
{
}

void FEventKrakenDespawned::BeforeDelete()
{
}

void FEventKrakenSpawned::AfterRead()
{
	READ_PTR_FULL(PrimaryShipTarget, AShip);
}

void FEventKrakenSpawned::BeforeDelete()
{
	DELE_PTR_FULL(PrimaryShipTarget);
}

void FEventKrakenShipWrappingTentacleStateChanged::AfterRead()
{
}

void FEventKrakenShipWrappingTentacleStateChanged::BeforeDelete()
{
}

void FEventKrakenTentaclePreUninitializeComponents::AfterRead()
{
}

void FEventKrakenTentaclePreUninitializeComponents::BeforeDelete()
{
}

void FKrakenTentacleDestroyedTelemetryEvent::AfterRead()
{
}

void FKrakenTentacleDestroyedTelemetryEvent::BeforeDelete()
{
}

void FKrakenDespawnTelemetryEvent::AfterRead()
{
}

void FKrakenDespawnTelemetryEvent::BeforeDelete()
{
}

void FKrakenSpawnTelemetryEvent::AfterRead()
{
}

void FKrakenSpawnTelemetryEvent::BeforeDelete()
{
}

// Function:
//		Offset -> 0x039953B0
//		Name   -> Function Kraken.KrakenTentacle.OnDamageToTentacle
//		Flags  -> (Final, Native, Public, HasOutParms)
// Parameters:
//		struct FImpactDamageEvent                          ImpactDamageEvent                                          (ConstParm, Parm, OutParm, ReferenceParm)
void AKrakenTentacle::OnDamageToTentacle(const struct FImpactDamageEvent& ImpactDamageEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Kraken.KrakenTentacle.OnDamageToTentacle");

	AKrakenTentacle_OnDamageToTentacle_Params params;
	params.ImpactDamageEvent = ImpactDamageEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AKrakenTentacle::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(HealthComponent, UHealthComponent);
	READ_PTR_FULL(DamageableComponent, UActorDamageableComponent);
	READ_PTR_FULL(VenomComponent, UVenomComponent);
}

void AKrakenTentacle::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(HealthComponent);
	DELE_PTR_FULL(DamageableComponent);
	DELE_PTR_FULL(VenomComponent);
}

void UCoordinatedKrakenInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCoordinatedKrakenInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UCoordinatedKrakenPhaseActionsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UCoordinatedKrakenPhaseActionsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UEnvQueryContext_AllKrakenOccupiedLocations::AfterRead()
{
	UEnvQueryContext::AfterRead();

}

void UEnvQueryContext_AllKrakenOccupiedLocations::BeforeDelete()
{
	UEnvQueryContext::BeforeDelete();

}

void UEnvQueryContext_AllocatedShip::AfterRead()
{
	UEnvQueryContext::AfterRead();

}

void UEnvQueryContext_AllocatedShip::BeforeDelete()
{
	UEnvQueryContext::BeforeDelete();

}

void UEnvQueryContext_AllShipsInWorld::AfterRead()
{
	UEnvQueryContext::AfterRead();

}

void UEnvQueryContext_AllShipsInWorld::BeforeDelete()
{
	UEnvQueryContext::BeforeDelete();

}

void UEnvQueryContext_AllWatercraftsInWorld::AfterRead()
{
	UEnvQueryContext::AfterRead();

}

void UEnvQueryContext_AllWatercraftsInWorld::BeforeDelete()
{
	UEnvQueryContext::BeforeDelete();

}

void UEnvQueryContext_PreviousLocation::AfterRead()
{
	UEnvQueryContext::AfterRead();

}

void UEnvQueryContext_PreviousLocation::BeforeDelete()
{
	UEnvQueryContext::BeforeDelete();

}

void UEnvQueryGenerator_KrakenSpawnLocations::AfterRead()
{
	UEnvQueryGenerator::AfterRead();

}

void UEnvQueryGenerator_KrakenSpawnLocations::BeforeDelete()
{
	UEnvQueryGenerator::BeforeDelete();

}

void UEnvQueryGenerator_KrakenTentacleSpawnLocations::AfterRead()
{
	UEnvQueryGenerator::AfterRead();

}

void UEnvQueryGenerator_KrakenTentacleSpawnLocations::BeforeDelete()
{
	UEnvQueryGenerator::BeforeDelete();

}

// Function:
//		Offset -> 0x03995250
//		Name   -> Function Kraken.Murk.DeactivateMurkBP
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AMurk::DeactivateMurkBP()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Kraken.Murk.DeactivateMurkBP");

	AMurk_DeactivateMurkBP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x039951B0
//		Name   -> Function Kraken.Murk.ActivateMurkBP
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AMurk::ActivateMurkBP()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Kraken.Murk.ActivateMurkBP");

	AMurk_ActivateMurkBP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AMurk::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(WaterModifierZone, UMurkWaterModifierZoneComponent);
	READ_PTR_FULL(SceneRootComponent, USceneComponent);
	READ_PTR_FULL(InnerSheet, UStaticMeshComponent);
	READ_PTR_FULL(OuterSheet, UStaticMeshComponent);
	READ_PTR_FULL(InnerSheetMaterialInstance, UMaterialInstanceDynamic);
	READ_PTR_FULL(OuterSheetMaterialInstance, UMaterialInstanceDynamic);
}

void AMurk::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(WaterModifierZone);
	DELE_PTR_FULL(SceneRootComponent);
	DELE_PTR_FULL(InnerSheet);
	DELE_PTR_FULL(OuterSheet);
	DELE_PTR_FULL(InnerSheetMaterialInstance);
	DELE_PTR_FULL(OuterSheetMaterialInstance);
}

// Function:
//		Offset -> 0x039954B0
//		Name   -> Function Kraken.KrakenShipWrappingTentacle.OnRep_CurrentServerAnimationState
//		Flags  -> (Final, Native, Private)
void AKrakenShipWrappingTentacle::OnRep_CurrentServerAnimationState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Kraken.KrakenShipWrappingTentacle.OnRep_CurrentServerAnimationState");

	AKrakenShipWrappingTentacle_OnRep_CurrentServerAnimationState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AKrakenShipWrappingTentacle::AfterRead()
{
	AKrakenTentacle::AfterRead();

	READ_PTR_FULL(SceneRoot, USceneComponent);
	READ_PTR_FULL(TentacleCollisions, UStaticMeshComponent);
	READ_PTR_FULL(TentacleMesh, UStaticMeshComponent);
	READ_PTR_FULL(DamageZone, UBoxComponent);
	READ_PTR_FULL(InteractableBlockingRegions, USceneComponent);
	READ_PTR_FULL(KnockbackRegions, USceneComponent);
	READ_PTR_FULL(TentacleHeadCollisions, UBoxComponent);
	READ_PTR_FULL(TentacleHeadKnockbackRegions, USceneComponent);
	READ_PTR_FULL(AudioComponent, UKrakenShipWrappingTentacleAIAudioComponent);
	READ_PTR_FULL(LowDetailTentacleMesh, UStaticMesh);
	READ_PTR_FULL(TentacleDynamicMaterialInstance, UMaterialInstanceDynamic);
	READ_PTR_FULL(HighDetailTentacleMesh, UStaticMesh);
}

void AKrakenShipWrappingTentacle::BeforeDelete()
{
	AKrakenTentacle::BeforeDelete();

	DELE_PTR_FULL(SceneRoot);
	DELE_PTR_FULL(TentacleCollisions);
	DELE_PTR_FULL(TentacleMesh);
	DELE_PTR_FULL(DamageZone);
	DELE_PTR_FULL(InteractableBlockingRegions);
	DELE_PTR_FULL(KnockbackRegions);
	DELE_PTR_FULL(TentacleHeadCollisions);
	DELE_PTR_FULL(TentacleHeadKnockbackRegions);
	DELE_PTR_FULL(AudioComponent);
	DELE_PTR_FULL(LowDetailTentacleMesh);
	DELE_PTR_FULL(TentacleDynamicMaterialInstance);
	DELE_PTR_FULL(HighDetailTentacleMesh);
}

void UKrakenTelemetryComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UKrakenTelemetryComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

// Function:
//		Offset -> 0x03995310
//		Name   -> Function Kraken.Kraken.Multicast_OnTentacleTakenDamage
//		Flags  -> (Final, Net, Native, Event, NetMulticast, Private)
void AKraken::Multicast_OnTentacleTakenDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Kraken.Kraken.Multicast_OnTentacleTakenDamage");

	AKraken_Multicast_OnTentacleTakenDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x039951D0
//		Name   -> Function Kraken.Kraken.AddActorToKnownTargets
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKraken::AddActorToKnownTargets(class AActor* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Kraken.Kraken.AddActorToKnownTargets");

	AKraken_AddActorToKnownTargets_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AKraken::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(MurkActor, AMurk);
	READ_PTR_FULL(KrakenAudioComponent, UKrakenAICharacterAudioComponent);
	READ_PTR_FULL(KrakenTelemetryComponent, UKrakenTelemetryComponent);
}

void AKraken::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(MurkActor);
	DELE_PTR_FULL(KrakenAudioComponent);
	DELE_PTR_FULL(KrakenTelemetryComponent);
}

void UKrakenAnimatedTentacleAnimationDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(AnimationSpec, UKrakenAnimatedTentacleAnimationSpecDataAsset);
}

void UKrakenAnimatedTentacleAnimationDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(AnimationSpec);
}

void UKrakenAnimatedTentacleAnimationMappingDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UKrakenAnimatedTentacleAnimationMappingDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UKrakenAnimatedTentacleAnimationSpecDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UKrakenAnimatedTentacleAnimationSpecDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UKrakenAnimatedTentacleStateAnimationsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UKrakenAnimatedTentacleStateAnimationsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UKrakenHeadStateAnimationsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UKrakenHeadStateAnimationsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

// Function:
//		Offset -> 0x039955F0
//		Name   -> Function Kraken.KrakenHead.RequestState
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UClass*                                      NewState                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void AKrakenHead::RequestState(class UClass* NewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Kraken.KrakenHead.RequestState");

	AKrakenHead_RequestState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x039954F0
//		Name   -> Function Kraken.KrakenHead.OnRep_IsDamageEnabled
//		Flags  -> (Final, Native, Protected)
void AKrakenHead::OnRep_IsDamageEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Kraken.KrakenHead.OnRep_IsDamageEnabled");

	AKrakenHead_OnRep_IsDamageEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x039954D0
//		Name   -> Function Kraken.KrakenHead.OnRep_HeadStateRequest
//		Flags  -> (Final, Native, Protected)
void AKrakenHead::OnRep_HeadStateRequest()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Kraken.KrakenHead.OnRep_HeadStateRequest");

	AKrakenHead_OnRep_HeadStateRequest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03995330
//		Name   -> Function Kraken.KrakenHead.OnCoordinatedKrakenSpecialEvent
//		Flags  -> (Final, Native, Private)
// Parameters:
//		TEnumAsByte<Kraken_ECoordinatedKrakenSpecialEventTypes> InEventType                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKrakenHead::OnCoordinatedKrakenSpecialEvent(TEnumAsByte<Kraken_ECoordinatedKrakenSpecialEventTypes> InEventType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Kraken.KrakenHead.OnCoordinatedKrakenSpecialEvent");

	AKrakenHead_OnCoordinatedKrakenSpecialEvent_Params params;
	params.InEventType = InEventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AKrakenHead::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(SkeletalMesh, USkeletalMeshComponent);
	READ_PTR_FULL(HealthComponent, UHealthComponent);
	READ_PTR_FULL(ActorDamageableComponent, UActorDamageableComponent);
	READ_PTR_FULL(SphereComponent, USphereComponent);
	READ_PTR_FULL(VenomComponent, UVenomComponent);
	READ_PTR_FULL(ExplosionComponent, UExplosionComponent);
	READ_PTR_FULL(BiteAttackVFX, UParticleSystem);
	READ_PTR_FULL(RoarEQSQuery, UEnvQuery);
	READ_PTR_FULL(KnockbackDamagerType, UClass);
	READ_PTR_FULL(HeadAnimInstance, UKrakenHeadAnimationInstance);
	READ_PTR_FULL(KrakenHeadHealthParams, UKrakenHeadHealthParamsDataAsset);
	READ_PTR_FULL(Root, USceneComponent);
}

void AKrakenHead::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(SkeletalMesh);
	DELE_PTR_FULL(HealthComponent);
	DELE_PTR_FULL(ActorDamageableComponent);
	DELE_PTR_FULL(SphereComponent);
	DELE_PTR_FULL(VenomComponent);
	DELE_PTR_FULL(ExplosionComponent);
	DELE_PTR_FULL(BiteAttackVFX);
	DELE_PTR_FULL(RoarEQSQuery);
	DELE_PTR_FULL(KnockbackDamagerType);
	DELE_PTR_FULL(HeadAnimInstance);
	DELE_PTR_FULL(KrakenHeadHealthParams);
	DELE_PTR_FULL(Root);
}

void UKrakenHeadAnimationInstance::AfterRead()
{
	UAnimInstance::AfterRead();

	READ_PTR_FULL(CurrentState, UClass);
	READ_PTR_FULL(PreviousState, UClass);
	READ_PTR_FULL(MappingAsset, UKrakenHeadStateAnimationsDataAsset);
	READ_PTR_FULL(PlayingMontage, UAnimMontage);
	READ_PTR_FULL(KrakenHeadHitReactionAsset, UKrakenHeadHitReactAnimationsDataAsset);
}

void UKrakenHeadAnimationInstance::BeforeDelete()
{
	UAnimInstance::BeforeDelete();

	DELE_PTR_FULL(CurrentState);
	DELE_PTR_FULL(PreviousState);
	DELE_PTR_FULL(MappingAsset);
	DELE_PTR_FULL(PlayingMontage);
	DELE_PTR_FULL(KrakenHeadHitReactionAsset);
}

void UKrakenHeadBreathingInStatus::AfterRead()
{
	UStatusBase::AfterRead();

}

void UKrakenHeadBreathingInStatus::BeforeDelete()
{
	UStatusBase::BeforeDelete();

}

void UKrakenHeadHealthParamsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UKrakenHeadHealthParamsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UKrakenHeadHitReactAnimationsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UKrakenHeadHitReactAnimationsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UKrakenHeadRoaringStatus::AfterRead()
{
	UStatusBase::AfterRead();

}

void UKrakenHeadRoaringStatus::BeforeDelete()
{
	UStatusBase::BeforeDelete();

}

void UKrakenIdleBehaviourParamsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UKrakenIdleBehaviourParamsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UKrakenParamsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UKrakenParamsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UKrakenPlayerGrabbingBehaviourParamsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UKrakenPlayerGrabbingBehaviourParamsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UKrakenServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UKrakenServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x03995510
//		Name   -> Function Kraken.KrakenService.RequestKrakenWithLocation
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     SpawnLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		class AActor*                                      SpawnedForActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKrakenService::RequestKrakenWithLocation(const struct FVector& SpawnLocation, class AActor* SpawnedForActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Kraken.KrakenService.RequestKrakenWithLocation");

	AKrakenService_RequestKrakenWithLocation_Params params;
	params.SpawnLocation = SpawnLocation;
	params.SpawnedForActor = SpawnedForActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x039952E0
//		Name   -> Function Kraken.KrakenService.IsServiceInitialized
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AKrakenService::IsServiceInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Kraken.KrakenService.IsServiceInitialized");

	AKrakenService_IsServiceInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x039952A0
//		Name   -> Function Kraken.KrakenService.IsKrakenActive
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AKrakenService::IsKrakenActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Kraken.KrakenService.IsKrakenActive");

	AKrakenService_IsKrakenActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03995270
//		Name   -> Function Kraken.KrakenService.DismissKraken
//		Flags  -> (Native, Public, BlueprintCallable)
void AKrakenService::DismissKraken()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Kraken.KrakenService.DismissKraken");

	AKrakenService_DismissKraken_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AKrakenService::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Kraken, AKraken);
}

void AKrakenService::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Kraken);
}

void UKrakenServiceParamsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UKrakenServiceParamsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UKrakenShipHittingBehaviourParamsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UKrakenShipHittingBehaviourParamsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UKrakenShipWrappingBehaviourParamsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UKrakenShipWrappingBehaviourParamsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UKrakenShipWrappingKnockbackRegionComponent::AfterRead()
{
	USceneComponent::AfterRead();

	READ_PTR_FULL(KnockbackRegion, UBoxComponent);
}

void UKrakenShipWrappingKnockbackRegionComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

	DELE_PTR_FULL(KnockbackRegion);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
