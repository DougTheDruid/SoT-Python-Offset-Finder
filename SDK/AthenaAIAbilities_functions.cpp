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

void FMeleeAttackIdWeights::AfterRead()
{
	READ_PTR_FULL(MeleeAttackType, UClass);
}

void FMeleeAttackIdWeights::BeforeDelete()
{
	DELE_PTR_FULL(MeleeAttackType);
}

void FAshenLordFireShroudParams::AfterRead()
{
	READ_PTR_FULL(FireShroudZoneClass, UClass);
}

void FAshenLordFireShroudParams::BeforeDelete()
{
	DELE_PTR_FULL(FireShroudZoneClass);
}

void FAshenLordFireShroud::AfterRead()
{
	READ_PTR_FULL(FireShroudOverlapZone, AStatusEffectOverlapZone);
}

void FAshenLordFireShroud::BeforeDelete()
{
	DELE_PTR_FULL(FireShroudOverlapZone);
}

void UAreaOfEffectHealAIAbilityType::AfterRead()
{
	UAthenaAIAbilityType::AfterRead();

}

void UAreaOfEffectHealAIAbilityType::BeforeDelete()
{
	UAthenaAIAbilityType::BeforeDelete();

}

void UMeleeAIAbilityType::AfterRead()
{
	UAthenaAIAbilityType::AfterRead();

}

void UMeleeAIAbilityType::BeforeDelete()
{
	UAthenaAIAbilityType::BeforeDelete();

}

void UAreaOfEffectHealAIAbility::AfterRead()
{
	UAthenaAIAbility::AfterRead();

	READ_PTR_FULL(HealAreaOfEffectActor, AActor);
}

void UAreaOfEffectHealAIAbility::BeforeDelete()
{
	UAthenaAIAbility::BeforeDelete();

	DELE_PTR_FULL(HealAreaOfEffectActor);
}

void UAreaOfEffectHealAIAbilityParams::AfterRead()
{
	UAthenaAIAbilityParams::AfterRead();

	READ_PTR_FULL(StatusEffectZone, UClass);
}

void UAreaOfEffectHealAIAbilityParams::BeforeDelete()
{
	UAthenaAIAbilityParams::BeforeDelete();

	DELE_PTR_FULL(StatusEffectZone);
}

void UAshenFireStatus::AfterRead()
{
	UStatusBase::AfterRead();

}

void UAshenFireStatus::BeforeDelete()
{
	UStatusBase::BeforeDelete();

}

void UBullRushAIAbilityType::AfterRead()
{
	UAthenaAIAbilityType::AfterRead();

}

void UBullRushAIAbilityType::BeforeDelete()
{
	UAthenaAIAbilityType::BeforeDelete();

}

void UBurrowEruptDamagerType::AfterRead()
{
	UDamagerType::AfterRead();

}

void UBurrowEruptDamagerType::BeforeDelete()
{
	UDamagerType::BeforeDelete();

}

// Function:
//		Offset -> 0x03D9D110
//		Name   -> Function AthenaAIAbilities.BurrowHealVFXComponent.OnRep_IsVFXActive
//		Flags  -> (Final, Native, Private)
void UBurrowHealVFXComponent::OnRep_IsVFXActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAIAbilities.BurrowHealVFXComponent.OnRep_IsVFXActive");

	UBurrowHealVFXComponent_OnRep_IsVFXActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBurrowHealVFXComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(VFXAsset, UParticleSystem);
	READ_PTR_FULL(SpawnedVFXSystem, UParticleSystemComponent);
}

void UBurrowHealVFXComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(VFXAsset);
	DELE_PTR_FULL(SpawnedVFXSystem);
}

void UCoralShieldStatus::AfterRead()
{
	UStatusBase::AfterRead();

}

void UCoralShieldStatus::BeforeDelete()
{
	UStatusBase::BeforeDelete();

}

void UEelSlapAIAbilityType::AfterRead()
{
	UAthenaAIAbilityType::AfterRead();

}

void UEelSlapAIAbilityType::BeforeDelete()
{
	UAthenaAIAbilityType::BeforeDelete();

}

void UEelSlapStatus::AfterRead()
{
	UStatusBase::AfterRead();

}

void UEelSlapStatus::BeforeDelete()
{
	UStatusBase::BeforeDelete();

}

void UEelThrowAIAbility::AfterRead()
{
	UAthenaAIAbility::AfterRead();

	READ_PTR_FULL(CachedBlackboardComponent, UBlackboardComponent);
}

void UEelThrowAIAbility::BeforeDelete()
{
	UAthenaAIAbility::BeforeDelete();

	DELE_PTR_FULL(CachedBlackboardComponent);
}

void UEelThrowAIAbilityParams::AfterRead()
{
	UAthenaAIAbilityParams::AfterRead();

}

void UEelThrowAIAbilityParams::BeforeDelete()
{
	UAthenaAIAbilityParams::BeforeDelete();

}

void UEelThrowAIAbilityType::AfterRead()
{
	UAthenaAIAbilityType::AfterRead();

}

void UEelThrowAIAbilityType::BeforeDelete()
{
	UAthenaAIAbilityType::BeforeDelete();

}

void UElectricShieldBuffInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UElectricShieldBuffInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x03D9D0F0
//		Name   -> Function AthenaAIAbilities.ElectricShieldBuffComponent.OnRep_IsShieldActive
//		Flags  -> (Final, Native, Public)
void UElectricShieldBuffComponent::OnRep_IsShieldActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAIAbilities.ElectricShieldBuffComponent.OnRep_IsShieldActive");

	UElectricShieldBuffComponent_OnRep_IsShieldActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D9D0C0
//		Name   -> Function AthenaAIAbilities.ElectricShieldBuffComponent.DeactivateShield
//		Flags  -> (Native, Public)
void UElectricShieldBuffComponent::DeactivateShield()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAIAbilities.ElectricShieldBuffComponent.DeactivateShield");

	UElectricShieldBuffComponent_DeactivateShield_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UElectricShieldBuffComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(ShieldVFXAsset, UParticleSystem);
	READ_PTR_FULL(StartAudioLoopEvent, UWwiseEvent);
	READ_PTR_FULL(StopAudioLoopEvent, UWwiseEvent);
	READ_PTR_FULL(ShieldEffectComponent, UParticleSystemComponent);
}

void UElectricShieldBuffComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(ShieldVFXAsset);
	DELE_PTR_FULL(StartAudioLoopEvent);
	DELE_PTR_FULL(StopAudioLoopEvent);
	DELE_PTR_FULL(ShieldEffectComponent);
}

void UElectricShieldStatus::AfterRead()
{
	UStatusBase::AfterRead();

}

void UElectricShieldStatus::BeforeDelete()
{
	UStatusBase::BeforeDelete();

}

void UImpactMeleeAttackEelSlapId::AfterRead()
{
	UImpactProjectileId::AfterRead();

}

void UImpactMeleeAttackEelSlapId::BeforeDelete()
{
	UImpactProjectileId::BeforeDelete();

}

void UMeleeAIAbility::AfterRead()
{
	UAthenaAIAbility::AfterRead();

}

void UMeleeAIAbility::BeforeDelete()
{
	UAthenaAIAbility::BeforeDelete();

}

void UMeleeAttackId::AfterRead()
{
	UObject::AfterRead();

}

void UMeleeAttackId::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UMeleeAIAbilityParams::AfterRead()
{
	UAthenaAIAbilityParams::AfterRead();

}

void UMeleeAIAbilityParams::BeforeDelete()
{
	UAthenaAIAbilityParams::BeforeDelete();

}

void UEelSlapAIAbilityParams::AfterRead()
{
	UMeleeAIAbilityParams::AfterRead();

}

void UEelSlapAIAbilityParams::BeforeDelete()
{
	UMeleeAIAbilityParams::BeforeDelete();

}

void UEelSlapAIAbility::AfterRead()
{
	UMeleeAIAbility::AfterRead();

}

void UEelSlapAIAbility::BeforeDelete()
{
	UMeleeAIAbility::BeforeDelete();

}

void UComboMeleeAttackId::AfterRead()
{
	UMeleeAttackId::AfterRead();

}

void UComboMeleeAttackId::BeforeDelete()
{
	UMeleeAttackId::BeforeDelete();

}

void UHeavyMeleeAttackId::AfterRead()
{
	UMeleeAttackId::AfterRead();

}

void UHeavyMeleeAttackId::BeforeDelete()
{
	UMeleeAttackId::BeforeDelete();

}

void ULightMeleeAttackId::AfterRead()
{
	UMeleeAttackId::AfterRead();

}

void ULightMeleeAttackId::BeforeDelete()
{
	UMeleeAttackId::BeforeDelete();

}

void UBullRushAIAbilityParams::AfterRead()
{
	UMeleeChargeAIAbilityParams::AfterRead();

}

void UBullRushAIAbilityParams::BeforeDelete()
{
	UMeleeChargeAIAbilityParams::BeforeDelete();

}

void UBullRushAIAbility::AfterRead()
{
	UMeleeChargeAIAbility::AfterRead();

	READ_PTR_FULL(CachedWorld, UWorld);
}

void UBullRushAIAbility::BeforeDelete()
{
	UMeleeChargeAIAbility::BeforeDelete();

	DELE_PTR_FULL(CachedWorld);
}

void UMeleeCollisionAwarenessInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UMeleeCollisionAwarenessInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void USporeCloudStatus::AfterRead()
{
	UStatusBase::AfterRead();

}

void USporeCloudStatus::BeforeDelete()
{
	UStatusBase::BeforeDelete();

}

void USporeExposureInterface::AfterRead()
{
	UInterface::AfterRead();

}

void USporeExposureInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void USporeExposureComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void USporeExposureComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void USporeExposureStatus::AfterRead()
{
	UStatusBase::AfterRead();

}

void USporeExposureStatus::BeforeDelete()
{
	UStatusBase::BeforeDelete();

}

void UStatusResponseActivateElectricShield::AfterRead()
{
	UStatusResponse::AfterRead();

}

void UStatusResponseActivateElectricShield::BeforeDelete()
{
	UStatusResponse::BeforeDelete();

}

void UStatusResponseShowBurrowHealVFX::AfterRead()
{
	UStatusResponse::AfterRead();

}

void UStatusResponseShowBurrowHealVFX::BeforeDelete()
{
	UStatusResponse::BeforeDelete();

}

void UStatusResponseShowCoralShieldVFX::AfterRead()
{
	UStatusResponse::AfterRead();

}

void UStatusResponseShowCoralShieldVFX::BeforeDelete()
{
	UStatusResponse::BeforeDelete();

}

void UStatusResponseSporeCloud::AfterRead()
{
	UStatusResponse::AfterRead();

}

void UStatusResponseSporeCloud::BeforeDelete()
{
	UStatusResponse::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
