// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AreaOfEffectHealAIAbilityType: public AthenaAIAbilityType
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class MeleeAIAbilityType: public AthenaAIAbilityType
{
public:
};


// Size 0x28 (Full Size[0xa0] - InheritedSize[0x78]
class AreaOfEffectHealAIAbility: public AthenaAIAbility
{
public:
	char                                                         pad0x10_1YSSR[0x10];                               // 0x78(0x10)
	Class Actor*                                                 HealAreaOfEffectActor;                             // 0x88(0x8)
	char                                                         pad0x10_GA1Q3[0x10];                               // 0x90(0x10)
};


// Size 0x18 (Full Size[0xe0] - InheritedSize[0xc8]
class AreaOfEffectHealAIAbilityParams: public AthenaAIAbilityParams
{
public:
	float                                                        ChanceToGoOnCooldownInsteadOfExecuting;            // 0xc8(0x4)
	float                                                        HealthPercentageThresholdToHeal;                   // 0xcc(0x4)
	class                                                        StatusEffectZone;                                  // 0xd0(0x8)
	float                                                        MinimumTimeSpentHealing;                           // 0xd8(0x4)
	float                                                        MaximumTimeSpentHealing;                           // 0xdc(0x4)
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class AshenFireStatus: public StatusBase
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class BullRushAIAbilityType: public AthenaAIAbilityType
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class BurrowEruptDamagerType: public DamagerType
{
public:
};


// Size 0x50 (Full Size[0x118] - InheritedSize[0xc8]
class BurrowHealVFXComponent: public ActorComponent
{
public:
	Class ParticleSystem*                                        VFXAsset;                                          // 0xc8(0x8)
	struct FName                                                 VfxSocketName;                                     // 0xd0(0x8)
	float                                                        VFXDuration;                                       // 0xd8(0x4)
	char                                                         pad0x4_G2BOO[0x4];                                 // 0xdc(0x4)
	Class ParticleSystemComponent*                               SpawnedVFXSystem;                                  // 0xe0(0x8)
	bool                                                         IsVFXActive;                                       // 0xe8(0x1)
	char                                                         pad0x2f_18JBI[0x2f];                               // 0xe9(0x2f)
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class CoralShieldStatus: public StatusBase
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class EelSlapAIAbilityType: public AthenaAIAbilityType
{
public:
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class EelSlapStatus: public StatusBase
{
public:
};


// Size 0x8 (Full Size[0x80] - InheritedSize[0x78]
class EelThrowAIAbility: public AthenaAIAbility
{
public:
	Class BlackboardComponent*                                   CachedBlackboardComponent;                         // 0x78(0x8)
};


// Size 0x20 (Full Size[0xe8] - InheritedSize[0xc8]
class EelThrowAIAbilityParams: public AthenaAIAbilityParams
{
public:
	Struct WeightedProbabilityRange                              MinMaxNumberOfAttacksBeforeEnd;                    // 0xc8(0x20)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class EelThrowAIAbilityType: public AthenaAIAbilityType
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ElectricShieldBuffInterface: public Interface
{
public:
};


// Size 0xe8 (Full Size[0x1b0] - InheritedSize[0xc8]
class ElectricShieldBuffComponent: public ActorComponent
{
public:
	char                                                         pad0x8_LF6YI[0x8];                                 // 0xc8(0x8)
	Class ParticleSystem*                                        ShieldVFXAsset;                                    // 0xd0(0x8)
	struct FName                                                 VfxSocketName;                                     // 0xd8(0x8)
	Class WwiseEvent*                                            StartAudioLoopEvent;                               // 0xe0(0x8)
	Class WwiseEvent*                                            StopAudioLoopEvent;                                // 0xe8(0x8)
	Class ParticleSystemComponent*                               ShieldEffectComponent;                             // 0xf0(0x8)
	bool                                                         IsShieldActive;                                    // 0xf8(0x1)
	char                                                         pad0xb7_Z1S5V[0xb7];                               // 0xf9(0xb7)
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class ElectricShieldStatus: public StatusBase
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ImpactMeleeAttackEelSlapId: public ImpactProjectileId
{
public:
};


// Size 0x8 (Full Size[0x80] - InheritedSize[0x78]
class MeleeAIAbility: public AthenaAIAbility
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class MeleeAttackId: public Object
{
public:
};


// Size 0x10 (Full Size[0xd8] - InheritedSize[0xc8]
class MeleeAIAbilityParams: public AthenaAIAbilityParams
{
public:
	TArray<struct MeleeAttacks>                                  MeleeAttacks;                                      // 0xc8(0x10)
};


// Size 0x0 (Full Size[0xd8] - InheritedSize[0xd8]
class EelSlapAIAbilityParams: public MeleeAIAbilityParams
{
public:
};


// Size 0x0 (Full Size[0x80] - InheritedSize[0x80]
class EelSlapAIAbility: public MeleeAIAbility
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ComboMeleeAttackId: public MeleeAttackId
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class HeavyMeleeAttackId: public MeleeAttackId
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class LightMeleeAttackId: public MeleeAttackId
{
public:
};


// Size 0x20 (Full Size[0x100] - InheritedSize[0xe0]
class BullRushAIAbilityParams: public MeleeChargeAIAbilityParams
{
public:
	float                                                        StaticCollisionWarmup;                             // 0xe0(0x4)
	char                                                         pad0x4_BH24U[0x4];                                 // 0xe4(0x4)
	TArray<class EnvQuery*>                                      ValidatorEQSystems;                                // 0xe8(0x10)
	float                                                        TimeBetweenCanExecuteChecks;                       // 0xf8(0x4)
	char                                                         pad0x4_U3XYZ[0x4];                                 // 0xfc(0x4)
};


// Size 0x20 (Full Size[0xb8] - InheritedSize[0x98]
class BullRushAIAbility: public MeleeChargeAIAbility
{
public:
	Class World*                                                 CachedWorld;                                       // 0x98(0x8)
	char                                                         pad0x18_254RW[0x18];                               // 0xa0(0x18)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class MeleeCollisionAwarenessInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class SporeCloudStatus: public StatusBase
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class SporeExposureInterface: public Interface
{
public:
};


// Size 0x38 (Full Size[0x100] - InheritedSize[0xc8]
class SporeExposureComponent: public ActorComponent
{
public:
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class SporeExposureStatus: public StatusBase
{
public:
};


// Size 0x8 (Full Size[0x38] - InheritedSize[0x30]
class StatusResponseActivateElectricShield: public StatusResponse
{
public:
	float                                                        Duration;                                          // 0x30(0x4)
	char                                                         pad0x4_PQ6V9[0x4];                                 // 0x34(0x4)
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class StatusResponseShowBurrowHealVFX: public StatusResponse
{
public:
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class StatusResponseShowCoralShieldVFX: public StatusResponse
{
public:
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class StatusResponseSporeCloud: public StatusResponse
{
public:
};


}