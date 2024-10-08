#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "AthenaAIAbilities_Structs.h"


// Size 0x20 (Full Size[0xe8] - InheritedSize[0xc8]
class EelThrowAIAbilityParams: public AthenaAIAbilityParams
{
public:
	struct WeightedProbabilityRange                              MinMaxNumberOfAttacksBeforeEnd;                    // 0xc8(0x20)
};


// Size 0x18 (Full Size[0xe0] - InheritedSize[0xc8]
class AreaOfEffectHealAIAbilityParams: public AthenaAIAbilityParams
{
public:
	float                                                        ChanceToGoOnCooldownInsteadOfExecuting;            // 0xc8(0x4)
	float                                                        HealthPercentageThresholdToHeal;                   // 0xcc(0x4)
	class UClass*                                                StatusEffectZone;                                  // 0xd0(0x8)
	float                                                        MinimumTimeSpentHealing;                           // 0xd8(0x4)
	float                                                        MaximumTimeSpentHealing;                           // 0xdc(0x4)
};


// Size 0x10 (Full Size[0xd8] - InheritedSize[0xc8]
class MeleeAIAbilityParams: public AthenaAIAbilityParams
{
public:
	TArray<struct MeleeAttackIdWeights>                          MeleeAttacks;                                      // 0xc8(0x10)
};


// Size 0x28 (Full Size[0xa0] - InheritedSize[0x78]
class AreaOfEffectHealAIAbility: public AthenaAIAbility
{
public:
	class Actor*                                                 HealAreaOfEffectActor;                             // 0x88(0x8)
};


// Size 0x20 (Full Size[0x100] - InheritedSize[0xe0]
class BullRushAIAbilityParams: public MeleeChargeAIAbilityParams
{
public:
	float                                                        StaticCollisionWarmup;                             // 0xe0(0x4)
	TArray<class EnvQuery*>                                      ValidatorEQSystems;                                // 0xe8(0x10)
	float                                                        TimeBetweenCanExecuteChecks;                       // 0xf8(0x4)
};


// Size 0x8 (Full Size[0x80] - InheritedSize[0x78]
class EelThrowAIAbility: public AthenaAIAbility
{
public:
	class BlackboardComponent*                                   CachedBlackboardComponent;                         // 0x78(0x8)
};


// Size 0x20 (Full Size[0xb8] - InheritedSize[0x98]
class BullRushAIAbility: public MeleeChargeAIAbility
{
public:
	class World*                                                 CachedWorld;                                       // 0x98(0x8)
};


// Size 0x50 (Full Size[0x118] - InheritedSize[0xc8]
class BurrowHealVFXComponent: public ActorComponent
{
public:
	class ParticleSystem*                                        VFXAsset;                                          // 0xc8(0x8)
	struct FName                                                 VfxSocketName;                                     // 0xd0(0x8)
	float                                                        VFXDuration;                                       // 0xd8(0x4)
	class ParticleSystemComponent*                               SpawnedVFXSystem;                                  // 0xe0(0x8)
	bool                                                         IsVFXActive;                                       // 0xe8(0x1)
};


// Size 0x8 (Full Size[0x38] - InheritedSize[0x30]
class StatusResponseActivateElectricShield: public StatusResponse
{
public:
	float                                                        Duration;                                          // 0x30(0x4)
};


// Size 0x108 (Full Size[0x1d0] - InheritedSize[0xc8]
class ElectricShieldBuffComponent: public ActorComponent
{
public:
	class ParticleSystem*                                        ShieldVFXAsset;                                    // 0xd0(0x8)
	struct FName                                                 VfxSocketName;                                     // 0xd8(0x8)
	class WwiseEvent*                                            StartAudioLoopEvent;                               // 0xe0(0x8)
	class WwiseEvent*                                            StopAudioLoopEvent;                                // 0xe8(0x8)
	class ParticleSystemComponent*                               ShieldEffectComponent;                             // 0xf0(0x8)
	bool                                                         IsShieldActive;                                    // 0xf8(0x1)
};


