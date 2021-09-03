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

void FModeSpecificReviveSettings::AfterRead()
{
	READ_PTR_FULL(CachedReviveSettings, UReviveSettings);
}

void FModeSpecificReviveSettings::BeforeDelete()
{
	DELE_PTR_FULL(CachedReviveSettings);
}

void FReviveEffectsValues::AfterRead()
{
	READ_PTR_FULL(AstralCordPostProcessMID, UMaterialInstanceDynamic);
}

void FReviveEffectsValues::BeforeDelete()
{
	DELE_PTR_FULL(AstralCordPostProcessMID);
}

void FPlayerInReviveableStateTelemetryEvent::AfterRead()
{
}

void FPlayerInReviveableStateTelemetryEvent::BeforeDelete()
{
}

void FPlayerRevivalTelemetryEvent::AfterRead()
{
}

void FPlayerRevivalTelemetryEvent::BeforeDelete()
{
}

void FPostReviveLocomotionActionStateConstructionInfo::AfterRead()
{
	FActorActionStateConstructionInfo::AfterRead();

}

void FPostReviveLocomotionActionStateConstructionInfo::BeforeDelete()
{
	FActorActionStateConstructionInfo::BeforeDelete();

}

void FEventRevivableRepresentationSpawnCompleted::AfterRead()
{
}

void FEventRevivableRepresentationSpawnCompleted::BeforeDelete()
{
}

void FEventRevivableRepresentationSpawnStarted::AfterRead()
{
}

void FEventRevivableRepresentationSpawnStarted::BeforeDelete()
{
}

void FReviveableActionStateConstructionInfo::AfterRead()
{
	FActorActionStateConstructionInfo::AfterRead();

	READ_PTR_FULL(ActionStateId, UClass);
}

void FReviveableActionStateConstructionInfo::BeforeDelete()
{
	FActorActionStateConstructionInfo::BeforeDelete();

	DELE_PTR_FULL(ActionStateId);
}

void FRevivedActionStateConstructionInfo::AfterRead()
{
	FActorActionStateConstructionInfo::AfterRead();

}

void FRevivedActionStateConstructionInfo::BeforeDelete()
{
	FActorActionStateConstructionInfo::BeforeDelete();

}

void FRevivedActionStateParams::AfterRead()
{
	READ_PTR_FULL(ReviveGaspAudio, UWwiseEvent);
}

void FRevivedActionStateParams::BeforeDelete()
{
	DELE_PTR_FULL(ReviveGaspAudio);
}

void FReviveableActionStateStarted::AfterRead()
{
}

void FReviveableActionStateStarted::BeforeDelete()
{
}

void FEventCharacterDiedDuringReviving::AfterRead()
{
	READ_PTR_FULL(OwningCharacter, ACharacter);
}

void FEventCharacterDiedDuringReviving::BeforeDelete()
{
	DELE_PTR_FULL(OwningCharacter);
}

void FEventRevivePlayerActionStateLeft::AfterRead()
{
}

void FEventRevivePlayerActionStateLeft::BeforeDelete()
{
}

void FEventRevivePlayerActionStateEntered::AfterRead()
{
}

void FEventRevivePlayerActionStateEntered::BeforeDelete()
{
}

void FEventCharacterFullyRevived::AfterRead()
{
}

void FEventCharacterFullyRevived::BeforeDelete()
{
}

void FReviveEndedEarlyEvent::AfterRead()
{
}

void FReviveEndedEarlyEvent::BeforeDelete()
{
}

void FEventRevivableRepresentationReturnedToBody::AfterRead()
{
}

void FEventRevivableRepresentationReturnedToBody::BeforeDelete()
{
}

void FSuccessfulReviveEvent::AfterRead()
{
}

void FSuccessfulReviveEvent::BeforeDelete()
{
}

void FBeingRevivedStoppedEvent::AfterRead()
{
}

void FBeingRevivedStoppedEvent::BeforeDelete()
{
}

void FBeingRevivedStartedEvent::AfterRead()
{
}

void FBeingRevivedStartedEvent::BeforeDelete()
{
}

void FRevivableCharacterGhostlyBodyEvaporateStarted::AfterRead()
{
}

void FRevivableCharacterGhostlyBodyEvaporateStarted::BeforeDelete()
{
}

void FRevivingWindowEnd::AfterRead()
{
}

void FRevivingWindowEnd::BeforeDelete()
{
}

void FRevivingWindowStart::AfterRead()
{
	READ_PTR_FULL(RevivableCharacter, ACharacter);
}

void FRevivingWindowStart::BeforeDelete()
{
	DELE_PTR_FULL(RevivableCharacter);
}

void FRevivePlayerActionStateConstructionInfo::AfterRead()
{
	FActorActionStateConstructionInfo::AfterRead();

	READ_PTR_FULL(InputID, UClass);
}

void FRevivePlayerActionStateConstructionInfo::BeforeDelete()
{
	FActorActionStateConstructionInfo::BeforeDelete();

	DELE_PTR_FULL(InputID);
}

void UReviveSettings::AfterRead()
{
	UDeveloperSettings::AfterRead();

}

void UReviveSettings::BeforeDelete()
{
	UDeveloperSettings::BeforeDelete();

}

// Function Reviving.DeathSelfInteractionComponent.SetGiveUpAvaliable
// (Final, Native, Private)
void UDeathSelfInteractionComponent::SetGiveUpAvaliable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Reviving.DeathSelfInteractionComponent.SetGiveUpAvaliable");

	UDeathSelfInteractionComponent_SetGiveUpAvaliable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Reviving.DeathSelfInteractionComponent.OnRep_HasGivenUp
// (Final, Native, Private)
void UDeathSelfInteractionComponent::OnRep_HasGivenUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Reviving.DeathSelfInteractionComponent.OnRep_HasGivenUp");

	UDeathSelfInteractionComponent_OnRep_HasGivenUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UDeathSelfInteractionComponent::AfterRead()
{
	UInteractableComponent::AfterRead();

}

void UDeathSelfInteractionComponent::BeforeDelete()
{
	UInteractableComponent::BeforeDelete();

}

void UPostReviveLocomotionActionStateId::AfterRead()
{
	UActionStateId::AfterRead();

}

void UPostReviveLocomotionActionStateId::BeforeDelete()
{
	UActionStateId::BeforeDelete();

}

void URevivableStatus::AfterRead()
{
	UStatusBase::AfterRead();

}

void URevivableStatus::BeforeDelete()
{
	UStatusBase::BeforeDelete();

}

void UReviveableActionStateId::AfterRead()
{
	UActionStateId::AfterRead();

}

void UReviveableActionStateId::BeforeDelete()
{
	UActionStateId::BeforeDelete();

}

void UReviveableCharacterInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UReviveableCharacterInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UReviveableRepresentationInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UReviveableRepresentationInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UReviveAudioComponent::AfterRead()
{
	UWwiseEmitterComponent::AfterRead();

	READ_PTR_FULL(ReviveEffectsDataAsset, UReviveEffectsDataAsset);
}

void UReviveAudioComponent::BeforeDelete()
{
	UWwiseEmitterComponent::BeforeDelete();

	DELE_PTR_FULL(ReviveEffectsDataAsset);
}

void UReviveInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UReviveInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function Reviving.ReviveComponent.OnRep_ReviveState
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<Reviving_EReviveState> PreviousReviveState            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UReviveComponent::OnRep_ReviveState(TEnumAsByte<Reviving_EReviveState> PreviousReviveState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Reviving.ReviveComponent.OnRep_ReviveState");

	UReviveComponent_OnRep_ReviveState_Params params;
	params.PreviousReviveState = PreviousReviveState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Reviving.ReviveComponent.HandleOwningCharacterEndPlay
// (Final, Native, Public)
void UReviveComponent::HandleOwningCharacterEndPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Reviving.ReviveComponent.HandleOwningCharacterEndPlay");

	UReviveComponent_HandleOwningCharacterEndPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UReviveComponent::AfterRead()
{
	UInteractableComponent::AfterRead();

	READ_PTR_FULL(OwningCharacter, ACharacter);
	READ_PTR_FULL(ReviveableRepresentationActor, AActor);
	READ_PTR_FULL(ReviveableRepresentationClass, UClass);
}

void UReviveComponent::BeforeDelete()
{
	UInteractableComponent::BeforeDelete();

	DELE_PTR_FULL(OwningCharacter);
	DELE_PTR_FULL(ReviveableRepresentationActor);
	DELE_PTR_FULL(ReviveableRepresentationClass);
}

void UReviveConditionalStatTrigger::AfterRead()
{
	UConditionalStatsTriggerType::AfterRead();

}

void UReviveConditionalStatTrigger::BeforeDelete()
{
	UConditionalStatsTriggerType::BeforeDelete();

}

void URevivedActionStateId::AfterRead()
{
	UActionStateId::AfterRead();

}

void URevivedActionStateId::BeforeDelete()
{
	UActionStateId::BeforeDelete();

}

void UReviveDebugComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UReviveDebugComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UReviveEffectsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(ReviveMaterialParameterCollection, UMaterialParameterCollection);
	READ_PTR_FULL(AstralCordBorderParamValueByAbsoluteTimeSinceDeath, UCurveFloat);
	READ_PTR_FULL(ReviveePostProcessMaterial, UMaterial);
	READ_PTR_FULL(ReviveSuccessfulOneShotVFX, UObject);
	READ_PTR_FULL(ReviveSuccessfulOneShotVFX_Revivee, UObject);
	READ_PTR_FULL(ReviveInProgressLoopingVFX, UObject);
	READ_PTR_FULL(ContinuousBodyLoopingVFX, UObject);
	READ_PTR_FULL(DeadPlayerBodyEvaporatesOneShotVFX, UObject);
	READ_PTR_FULL(OtherPlayers_ReviveGhostAmbientStart, UWwiseEvent);
	READ_PTR_FULL(OtherPlayers_ReviveGhostAmbientStop, UWwiseEvent);
	READ_PTR_FULL(DeadPlayer_ReviveInProgressStart, UWwiseEvent);
	READ_PTR_FULL(DeadPlayer_ReviveInProgressStop, UWwiseEvent);
	READ_PTR_FULL(OtherPlayers_ReviveInProgressStart, UWwiseEvent);
	READ_PTR_FULL(OtherPlayers_ReviveInProgressStop, UWwiseEvent);
}

void UReviveEffectsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(ReviveMaterialParameterCollection);
	DELE_PTR_FULL(AstralCordBorderParamValueByAbsoluteTimeSinceDeath);
	DELE_PTR_FULL(ReviveePostProcessMaterial);
	DELE_PTR_FULL(ReviveSuccessfulOneShotVFX);
	DELE_PTR_FULL(ReviveSuccessfulOneShotVFX_Revivee);
	DELE_PTR_FULL(ReviveInProgressLoopingVFX);
	DELE_PTR_FULL(ContinuousBodyLoopingVFX);
	DELE_PTR_FULL(DeadPlayerBodyEvaporatesOneShotVFX);
	DELE_PTR_FULL(OtherPlayers_ReviveGhostAmbientStart);
	DELE_PTR_FULL(OtherPlayers_ReviveGhostAmbientStop);
	DELE_PTR_FULL(DeadPlayer_ReviveInProgressStart);
	DELE_PTR_FULL(DeadPlayer_ReviveInProgressStop);
	DELE_PTR_FULL(OtherPlayers_ReviveInProgressStart);
	DELE_PTR_FULL(OtherPlayers_ReviveInProgressStop);
}

void AReviveGhost::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Root, USceneComponent);
	READ_PTR_FULL(MeshComponent, USkeletalMeshComponent);
	READ_PTR_FULL(AstralCordContainer, USceneComponent);
	READ_PTR_FULL(AnimationDataStoreComponent, UAnimationDataStoreComponent);
	READ_PTR_FULL(PostProcessComponent, UPostProcessComponent);
	READ_PTR_FULL(DitherComponent, UDitherComponent);
	READ_PTR_FULL(AudioComponent, UReviveAudioComponent);
	READ_PTR_FULL(ReviveGhostDataAsset, UGhostDataAsset);
	READ_PTR_FULL(ReviveEffectsDataAsset, UReviveEffectsDataAsset);
}

void AReviveGhost::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Root);
	DELE_PTR_FULL(MeshComponent);
	DELE_PTR_FULL(AstralCordContainer);
	DELE_PTR_FULL(AnimationDataStoreComponent);
	DELE_PTR_FULL(PostProcessComponent);
	DELE_PTR_FULL(DitherComponent);
	DELE_PTR_FULL(AudioComponent);
	DELE_PTR_FULL(ReviveGhostDataAsset);
	DELE_PTR_FULL(ReviveEffectsDataAsset);
}

void URevivePlayerActionStateId::AfterRead()
{
	UActionStateId::AfterRead();

}

void URevivePlayerActionStateId::BeforeDelete()
{
	UActionStateId::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
