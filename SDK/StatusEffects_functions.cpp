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

void FStatusDescriptor::AfterRead()
{
}

void FStatusDescriptor::BeforeDelete()
{
}

void FStatus::AfterRead()
{
}

void FStatus::BeforeDelete()
{
}

void FDebugMenuStatusDefinition::AfterRead()
{
}

void FDebugMenuStatusDefinition::BeforeDelete()
{
}

void FDelayedStatusEffect::AfterRead()
{
}

void FDelayedStatusEffect::BeforeDelete()
{
}

void FFeatureToggledStatusResponseList::AfterRead()
{
}

void FFeatureToggledStatusResponseList::BeforeDelete()
{
}

void FActiveStatusEffect::AfterRead()
{
}

void FActiveStatusEffect::BeforeDelete()
{
}

void FEventAppliedStatusToTargets::AfterRead()
{
}

void FEventAppliedStatusToTargets::BeforeDelete()
{
}

void FStatusEffectPersistenceKey::AfterRead()
{
}

void FStatusEffectPersistenceKey::BeforeDelete()
{
}

void FApplyStatusEvent::AfterRead()
{
}

void FApplyStatusEvent::BeforeDelete()
{
}

void FBuffedTargetData::AfterRead()
{
}

void FBuffedTargetData::BeforeDelete()
{
}

void FStatusDeactivatedEvent::AfterRead()
{
}

void FStatusDeactivatedEvent::BeforeDelete()
{
}

void FStatusActivatedEvent::AfterRead()
{
}

void FStatusActivatedEvent::BeforeDelete()
{
}

void FEventStatusMaterialEffectEnded::AfterRead()
{
}

void FEventStatusMaterialEffectEnded::BeforeDelete()
{
}

void FEventStatusMaterialEffectStarted::AfterRead()
{
}

void FEventStatusMaterialEffectStarted::BeforeDelete()
{
}

void FEventStatusScreenEffectEnded::AfterRead()
{
}

void FEventStatusScreenEffectEnded::BeforeDelete()
{
}

void FEventStatusScreenSpaceParticleEffectEnded::AfterRead()
{
	READ_PTR_FULL(ParticleSystem, UObject);
}

void FEventStatusScreenSpaceParticleEffectEnded::BeforeDelete()
{
	DELE_PTR_FULL(ParticleSystem);
}

void FEventStatusScreenSpaceParticleEffectStarted::AfterRead()
{
	READ_PTR_FULL(ParticleSystem, UObject);
}

void FEventStatusScreenSpaceParticleEffectStarted::BeforeDelete()
{
	DELE_PTR_FULL(ParticleSystem);
}

void FEventStatusScreenEffectStarted::AfterRead()
{
}

void FEventStatusScreenEffectStarted::BeforeDelete()
{
}

void FEventExitedSurfaceMaterialStatusZone::AfterRead()
{
}

void FEventExitedSurfaceMaterialStatusZone::BeforeDelete()
{
}

void FEventEnteredSurfaceMaterialStatusZone::AfterRead()
{
}

void FEventEnteredSurfaceMaterialStatusZone::BeforeDelete()
{
}

void UStatusBase::AfterRead()
{
	UObject::AfterRead();

}

void UStatusBase::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UStatusResponse::AfterRead()
{
	UObject::AfterRead();

}

void UStatusResponse::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UActivateableSurfaceMaterialStatusZoneInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UActivateableSurfaceMaterialStatusZoneInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UBuffReceiverInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UBuffReceiverInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UBuffReceiverComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UBuffReceiverComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UDebugMenuStatusDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UDebugMenuStatusDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

// Function StatusEffects.StatusEffectOverlapZone.OnStatusDelayEnd
// (Final, Native, Private)
// Parameters:
// int                            InStatusIndex                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  ActorRef                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStatusEffectOverlapZone::OnStatusDelayEnd(int InStatusIndex, class AActor* ActorRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StatusEffects.StatusEffectOverlapZone.OnStatusDelayEnd");

	AStatusEffectOverlapZone_OnStatusDelayEnd_Params params;
	params.InStatusIndex = InStatusIndex;
	params.ActorRef = ActorRef;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AStatusEffectOverlapZone::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(CollisionMesh, UBoxComponent);
}

void AStatusEffectOverlapZone::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(CollisionMesh);
}

// Function StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent.OnRep_SetDebugDrawColour
// (Final, Native, Private)
void UDebugStatusEffectOverlapZoneVisualizerComponent::OnRep_SetDebugDrawColour()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent.OnRep_SetDebugDrawColour");

	UDebugStatusEffectOverlapZoneVisualizerComponent_OnRep_SetDebugDrawColour_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent.OnRep_DebugBoxDimensions
// (Final, Native, Private)
void UDebugStatusEffectOverlapZoneVisualizerComponent::OnRep_DebugBoxDimensions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent.OnRep_DebugBoxDimensions");

	UDebugStatusEffectOverlapZoneVisualizerComponent_OnRep_DebugBoxDimensions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UDebugStatusEffectOverlapZoneVisualizerComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UDebugStatusEffectOverlapZoneVisualizerComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void ADebugStatusTicketHolder::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(StatusRecipient, AActor);
}

void ADebugStatusTicketHolder::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(StatusRecipient);
}

void UStatusEffectCancellationInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UStatusEffectCancellationInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UStatusEffectRecipientInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UStatusEffectRecipientInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UStatusEffectResponseConfigurationInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UStatusEffectResponseConfigurationInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UStatusEffectSuspensionInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UStatusEffectSuspensionInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UStatusResponseAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UStatusResponseAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UStatusRecipientResponseList::AfterRead()
{
	UDataAsset::AfterRead();

}

void UStatusRecipientResponseList::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

// Function StatusEffects.LightWeightStatusEffectManagerComponent.OnRep_ActiveEffects
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<struct FActiveStatusEffect> OldEffects                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ULightWeightStatusEffectManagerComponent::OnRep_ActiveEffects(TArray<struct FActiveStatusEffect> OldEffects)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StatusEffects.LightWeightStatusEffectManagerComponent.OnRep_ActiveEffects");

	ULightWeightStatusEffectManagerComponent_OnRep_ActiveEffects_Params params;
	params.OldEffects = OldEffects;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffects.LightWeightStatusEffectManagerComponent.MultiCast_ApplyOneShotStatus
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// TArray<struct FActiveStatusEffect> AddedEffects                   (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// TArray<struct FActiveStatusEffect> RemovedEffects                 (ConstParm, Parm, ZeroConstructor, ReferenceParm)
void ULightWeightStatusEffectManagerComponent::MultiCast_ApplyOneShotStatus(TArray<struct FActiveStatusEffect> AddedEffects, TArray<struct FActiveStatusEffect> RemovedEffects)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StatusEffects.LightWeightStatusEffectManagerComponent.MultiCast_ApplyOneShotStatus");

	ULightWeightStatusEffectManagerComponent_MultiCast_ApplyOneShotStatus_Params params;
	params.AddedEffects = AddedEffects;
	params.RemovedEffects = RemovedEffects;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ULightWeightStatusEffectManagerComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(RecipientResponseList, UStatusRecipientResponseList);
}

void ULightWeightStatusEffectManagerComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(RecipientResponseList);
}

void UMaterialStatusSusceptibilityInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UMaterialStatusSusceptibilityInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void USurfaceMaterialStatusZoneInterface::AfterRead()
{
	UInterface::AfterRead();

}

void USurfaceMaterialStatusZoneInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UMaterialStatusSusceptibilityComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(CurrentSurfaceMaterial, UPhysicalMaterial);
}

void UMaterialStatusSusceptibilityComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(CurrentSurfaceMaterial);
}

void ASphericalStatusEffectZone::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(ActorActivationComponent, UActorActivationComponent);
	READ_PTR_FULL(SphereComponent, USphereComponent);
	READ_PTR_FULL(StatusEffectVolumeComponent, UStatusEffectVolumeComponent);
}

void ASphericalStatusEffectZone::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(ActorActivationComponent);
	DELE_PTR_FULL(SphereComponent);
	DELE_PTR_FULL(StatusEffectVolumeComponent);
}

void UStatusApplicationDesc::AfterRead()
{
	UObject::AfterRead();

}

void UStatusApplicationDesc::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UStatusApplicationMonitorComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(StatusApplicationTrigger, UClass);
}

void UStatusApplicationMonitorComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(StatusApplicationTrigger);
}

// Function StatusEffects.StatusEffectHelperFunctionLibrary.ApplyOneShotStatus
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Recipient                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatus                 Status                         (ConstParm, Parm, OutParm, ReferenceParm)
void UStatusEffectHelperFunctionLibrary::STATIC_ApplyOneShotStatus(class AActor* Recipient, const struct FStatus& Status)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StatusEffects.StatusEffectHelperFunctionLibrary.ApplyOneShotStatus");

	UStatusEffectHelperFunctionLibrary_ApplyOneShotStatus_Params params;
	params.Recipient = Recipient;
	params.Status = Status;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UStatusEffectHelperFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UStatusEffectHelperFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UStatusEffectTicketDispenserInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UStatusEffectTicketDispenserInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function StatusEffects.StatusEffectManagerComponent.OnRep_ActiveEffects
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<struct FActiveStatusEffect> OldEffects                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UStatusEffectManagerComponent::OnRep_ActiveEffects(TArray<struct FActiveStatusEffect> OldEffects)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StatusEffects.StatusEffectManagerComponent.OnRep_ActiveEffects");

	UStatusEffectManagerComponent_OnRep_ActiveEffects_Params params;
	params.OldEffects = OldEffects;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffects.StatusEffectManagerComponent.MultiCast_ApplyOneShotStatus
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// TArray<struct FActiveStatusEffect> AddedEffects                   (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// TArray<struct FActiveStatusEffect> RemovedEffects                 (ConstParm, Parm, ZeroConstructor, ReferenceParm)
void UStatusEffectManagerComponent::MultiCast_ApplyOneShotStatus(TArray<struct FActiveStatusEffect> AddedEffects, TArray<struct FActiveStatusEffect> RemovedEffects)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StatusEffects.StatusEffectManagerComponent.MultiCast_ApplyOneShotStatus");

	UStatusEffectManagerComponent_MultiCast_ApplyOneShotStatus_Params params;
	params.AddedEffects = AddedEffects;
	params.RemovedEffects = RemovedEffects;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UStatusEffectManagerComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(RecipientResponseList, UStatusRecipientResponseList);
}

void UStatusEffectManagerComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(RecipientResponseList);
}

void UStatusEffectPersistenceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UStatusEffectPersistenceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UStatusEffectPersistenceComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UStatusEffectPersistenceComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UStatusEffectsSettings::AfterRead()
{
	UDeveloperSettings::AfterRead();

}

void UStatusEffectsSettings::BeforeDelete()
{
	UDeveloperSettings::BeforeDelete();

}

// Function StatusEffects.StatusEffectVolumeComponent.UnaffectActor
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffectVolumeComponent::UnaffectActor(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StatusEffects.StatusEffectVolumeComponent.UnaffectActor");

	UStatusEffectVolumeComponent_UnaffectActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffects.StatusEffectVolumeComponent.OnParentComponentEndOverlap
// (Final, Native, Private)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffectVolumeComponent::OnParentComponentEndOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StatusEffects.StatusEffectVolumeComponent.OnParentComponentEndOverlap");

	UStatusEffectVolumeComponent_OnParentComponentEndOverlap_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffects.StatusEffectVolumeComponent.OnParentComponentBeginOverlap
// (Final, Native, Private, HasOutParms)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UStatusEffectVolumeComponent::OnParentComponentBeginOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StatusEffects.StatusEffectVolumeComponent.OnParentComponentBeginOverlap");

	UStatusEffectVolumeComponent_OnParentComponentBeginOverlap_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffects.StatusEffectVolumeComponent.AffectActor
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffectVolumeComponent::AffectActor(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StatusEffects.StatusEffectVolumeComponent.AffectActor");

	UStatusEffectVolumeComponent_AffectActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UStatusEffectVolumeComponent::AfterRead()
{
	USceneComponent::AfterRead();

}

void UStatusEffectVolumeComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

}

void USetCanReceiveBuffStatusResponse::AfterRead()
{
	UStatusResponse::AfterRead();

}

void USetCanReceiveBuffStatusResponse::BeforeDelete()
{
	UStatusResponse::BeforeDelete();

}

void UStatusResponseNull::AfterRead()
{
	UStatusResponse::AfterRead();

}

void UStatusResponseNull::BeforeDelete()
{
	UStatusResponse::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
