namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x138
class KrakenTentacle: public Actor
{
public:
	Class HealthComponent*                             HealthComponent                                    // 0x3f0(0x8)
	Class ActorDamageableComponent*                    DamageableComponent                                // 0x3f8(0x8)
	Class VenomComponent*                              VenomComponent                                     // 0x400(0x8)
	float                                              VenomChance                                        // 0x408(0x4)
};


// Size 0xa0
class Murk: public Actor
{
public:
	Class MurkWaterModifierZoneComponent*              WaterModifierZone                                  // 0x3d0(0x8)
	Class SceneComponent*                              SceneRootComponent                                 // 0x3d8(0x8)
	Class StaticMeshComponent*                         InnerSheet                                         // 0x3e0(0x8)
	Class StaticMeshComponent*                         OuterSheet                                         // 0x3e8(0x8)
	float                                              UnderwaterSheetHeightScale                         // 0x3f0(0x4)
	Class MaterialInstanceDynamic*                     InnerSheetMaterialInstance                         // 0x3f8(0x8)
	Class MaterialInstanceDynamic*                     OuterSheetMaterialInstance                         // 0x400(0x8)
};


// Size 0x0
class CoordinatedKrakenInterface: public Interface
{
public:
};


// Size 0x28
class CoordinatedKrakenPhaseActionsDataAsset: public DataAsset
{
public:
	TArray<Int None>                                   TentaclesUsed                                      // 0x28(0x10)
	bool                                               KrakenHeadUsed                                     // 0x38(0x1)
	TArray<Struct KrakenHeadUsed>                      Actions                                            // 0x40(0x10)
};


// Size 0x0
class EnvQueryContext_AllKrakenOccupiedLocations: public EnvQueryContext
{
public:
};


// Size 0x0
class EnvQueryContext_AllocatedShip: public EnvQueryContext
{
public:
};


// Size 0x0
class EnvQueryContext_AllShipsInWorld: public EnvQueryContext
{
public:
};


// Size 0x0
class EnvQueryContext_AllWatercraftsInWorld: public EnvQueryContext
{
public:
};


// Size 0x0
class EnvQueryContext_PreviousLocation: public EnvQueryContext
{
public:
};


// Size 0x0
class EnvQueryGenerator_KrakenSpawnLocations: public EnvQueryGenerator
{
public:
};


// Size 0x0
class EnvQueryGenerator_KrakenTentacleSpawnLocations: public EnvQueryGenerator
{
public:
};


// Size 0x1f0
class KrakenShipWrappingTentacle: public KrakenTentacle
{
public:
	Class SceneComponent*                              SceneRoot                                          // 0x508(0x8)
	Class StaticMeshComponent*                         TentacleCollisions                                 // 0x510(0x8)
	Class StaticMeshComponent*                         TentacleMesh                                       // 0x518(0x8)
	Class BoxComponent*                                DamageZone                                         // 0x520(0x8)
	Class SceneComponent*                              InteractableBlockingRegions                        // 0x528(0x8)
	Class SceneComponent*                              KnockbackRegions                                   // 0x530(0x8)
	Class BoxComponent*                                TentacleHeadCollisions                             // 0x538(0x8)
	Class SceneComponent*                              TentacleHeadKnockbackRegions                       // 0x540(0x8)
	Class KrakenShipWrappingTentacleAIAudioComponent*  AudioComponent                                     // 0x548(0x8)
	Class StaticMesh*                                  LowDetailTentacleMesh                              // 0x550(0x8)
	Struct StringAssetReference                        HighDetailTentacleMeshAsset                        // 0x558(0x10)
	Struct KrakenShipWrappingTentacleParams            Params                                             // 0x568(0xf0)
	Class MaterialInstanceDynamic*                     TentacleDynamicMaterialInstance                    // 0x658(0x8)
	Class StaticMesh*                                  HighDetailTentacleMesh                             // 0x660(0x8)
	Struct KrakenShipWrappingTentacleAnimationState    CurrentServerAnimationState                        // 0x668(0x10)
	Struct KrakenShipWrappingTentacleAnimationState    PendingServerAnimationState                        // 0x678(0x10)
};


// Size 0x108
class KrakenTelemetryComponent: public ActorComponent
{
public:
};


// Size 0x560
class Kraken: public Actor
{
public:
	float                                              RelevancyDistance                                  // 0x3e8(0x4)
	float                                              InnerRadius                                        // 0x400(0x4)
	float                                              OuterRadius                                        // 0x404(0x4)
	byte                                               CurrentState                                       // 0x408(0x1)
	Class Murk*                                        MurkActor                                          // 0x5c0(0x8)
	Class KrakenAICharacterAudioComponent*             KrakenAudioComponent                               // 0x668(0x8)
	Class KrakenTelemetryComponent*                    KrakenTelemetryComponent                           // 0x670(0x8)
	Struct EncounterParams                             SightingEncounterParams                            // 0x678(0xc)
	Struct EncounterParams                             CloseEncounterParams                               // 0x684(0xc)
	Struct KrakenParams                                Params                                             // 0x6a0(0x160)
	int                                                NumTentaclesRemaining                              // 0x800(0x4)
};


// Size 0x30
class KrakenAnimatedTentacleAnimationDataAsset: public DataAsset
{
public:
	Class KrakenAnimatedTentacleAnimationSpecDataAsset* AnimationSpec                                      // 0x28(0x8)
	float                                              FrameTimeDelta                                     // 0x30(0x4)
	float                                              AnimationLength                                    // 0x34(0x4)
	int                                                NumFrames                                          // 0x38(0x4)
	bool                                               AllowLookAround                                    // 0x3c(0x1)
	bool                                               RequiresWaterHeightQuery                           // 0x3d(0x1)
	float                                              AnimationPlayRateScale                             // 0x40(0x4)
	TArray<Struct AnimationPlayRateScale>              Bones                                              // 0x48(0x10)
};


// Size 0x10
class KrakenAnimatedTentacleAnimationMappingDataAsset: public DataAsset
{
public:
	TArray<Struct Bones>                               Animations                                         // 0x28(0x10)
};


// Size 0x10
class KrakenAnimatedTentacleAnimationSpecDataAsset: public DataAsset
{
public:
	TArray<Struct States>                              Bones                                              // 0x28(0x10)
};


// Size 0x30
class KrakenAnimatedTentacleStateAnimationsDataAsset: public DataAsset
{
public:
	TArray<Struct MappingAssetReference>               States                                             // 0x48(0x10)
};


// Size 0x10
class KrakenHeadStateAnimationsDataAsset: public DataAsset
{
public:
	TArray<Struct OnCoordinatedKrakenSpecialEvent>     States                                             // 0x28(0x10)
};


// Size 0x208
class KrakenHead: public Actor
{
public:
	Class SkeletalMeshComponent*                       SkeletalMesh                                       // 0x3e0(0x8)
	Class HealthComponent*                             HealthComponent                                    // 0x3e8(0x8)
	Class ActorDamageableComponent*                    ActorDamageableComponent                           // 0x3f0(0x8)
	Class SphereComponent*                             SphereComponent                                    // 0x3f8(0x8)
	Class VenomComponent*                              VenomComponent                                     // 0x400(0x8)
	Class ExplosionComponent*                          ExplosionComponent                                 // 0x408(0x8)
	Class ParticleSystem*                              BiteAttackVFX                                      // 0x410(0x8)
	TArray<Struct BiteAttackVFX>                       BreathingInContinuousStatusesToApply               // 0x418(0x10)
	float                                              BreatheInStatusDuration                            // 0x428(0x4)
	TArray<Struct BreatheInStatusDuration>             RoarContinuousStatusesToApply                      // 0x430(0x10)
	float                                              RoarStatusDuration                                 // 0x440(0x4)
	Class EnvQuery*                                    RoarEQSQuery                                       // 0x448(0x8)
	class                                              KnockbackDamagerType                               // 0x450(0x8)
	Struct KnockBackInfo                               RoarKnockbackInfo                                  // 0x458(0x50)
	Class KrakenHeadAnimationInstance*                 HeadAnimInstance                                   // 0x4a8(0x8)
	Struct Vector                                      EQSQuerierLocation                                 // 0x4b0(0xc)
	Class KrakenHeadHealthParamsDataAsset*             KrakenHeadHealthParams                             // 0x4c0(0x8)
	Struct HeadStateChangeRequest                      HeadStateRequest                                   // 0x4c8(0x18)
	bool                                               IsDamageEnabled                                    // 0x4e0(0x1)
	Class SceneComponent*                              Root                                               // 0x4e8(0x8)
	struct FName                                       BiteAttackImpactNamedPointsGroupName               // 0x5b0(0x8)
};


// Size 0x60
class KrakenHeadAnimationInstance: public AnimInstance
{
public:
	class                                              CurrentState                                       // 0x440(0x8)
	class                                              PreviousState                                      // 0x448(0x8)
	Class KrakenHeadStateAnimationsDataAsset*          MappingAsset                                       // 0x450(0x8)
	float                                              SpawnBlendTime                                     // 0x458(0x4)
	float                                              DefaultBlendTime                                   // 0x45c(0x4)
	bool                                               IsInIntro                                          // 0x460(0x1)
	Class AnimMontage*                                 PlayingMontage                                     // 0x468(0x8)
	Class KrakenHeadHitReactAnimationsDataAsset*       KrakenHeadHitReactionAsset                         // 0x480(0x8)
};


// Size 0x0
class KrakenHeadBreathingInStatus: public StatusBase
{
public:
};


// Size 0x10
class KrakenHeadHealthParamsDataAsset: public DataAsset
{
public:
	TArray<Struct HitReactionAnimations>               KrakenHeadHealthPairs                              // 0x28(0x10)
};


// Size 0x10
class KrakenHeadHitReactAnimationsDataAsset: public DataAsset
{
public:
	TArray<Struct Params>                              HitReactionAnimations                              // 0x28(0x10)
};


// Size 0x0
class KrakenHeadRoaringStatus: public StatusBase
{
public:
};


// Size 0xc0
class KrakenIdleBehaviourParamsDataAsset: public DataAsset
{
public:
	Struct KrakenIdleBehaviourParams                   Params                                             // 0x28(0xc0)
};


// Size 0x160
class KrakenParamsDataAsset: public DataAsset
{
public:
	Struct KrakenParams                                Params                                             // 0x28(0x160)
};


// Size 0xe8
class KrakenPlayerGrabbingBehaviourParamsDataAsset: public DataAsset
{
public:
	Struct KrakenPlayerGrabbingBehaviourParams         Params                                             // 0x28(0xe8)
};


// Size 0x0
class KrakenServiceInterface: public Interface
{
public:
};


// Size 0x220
class KrakenService: public Actor
{
public:
	Struct KrakenServiceParams                         KrakenServiceParams                                // 0x3d8(0xa0)
	Class Kraken*                                      Kraken                                             // 0x518(0x8)
};


// Size 0xa0
class KrakenServiceParamsDataAsset: public DataAsset
{
public:
	Struct KrakenServiceParams                         Params                                             // 0x28(0xa0)
};


// Size 0x60
class KrakenShipHittingBehaviourParamsDataAsset: public DataAsset
{
public:
	Struct KrakenShipHittingBehaviourParams            Params                                             // 0x28(0x60)
};


// Size 0x428
class KrakenShipWrappingBehaviourParamsDataAsset: public DataAsset
{
public:
	Struct KrakenShipWrappingBehaviourParams           Params                                             // 0x30(0x420)
};


// Size 0xa0
class KrakenShipWrappingKnockbackRegionComponent: public SceneComponent
{
public:
	Class BoxComponent*                                KnockbackRegion                                    // 0x2d0(0x8)
	Struct Vector                                      KnockbackDirection                                 // 0x2d8(0xc)
	float                                              KnockbackTime                                      // 0x2e4(0x4)
	Struct KnockBackInfo                               KnockbackParams                                    // 0x2e8(0x50)
};


}