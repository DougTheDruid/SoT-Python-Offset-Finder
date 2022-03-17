// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xc
struct CoordinatedKrakenExplosionEvent
{
public:
	int                                                          ExplosionPointIndex;                               // 0x0(0x4)
	float                                                        TimeOffset;                                        // 0x4(0x4)
};


// Size 0x10
struct CoordinatedKrakenHeadAction
{
public:
	class                                                        State;                                             // 0x0(0x8)
	float                                                        TimeOffset;                                        // 0x8(0x4)
};


// Size 0xc
struct CoordinatedKrakenSpecialEvent
{
public:
	byte                                                         Type;                                              // 0x0(0x1)
	float                                                        TimeOffset;                                        // 0x4(0x4)
};


// Size 0x18
struct CoordinatedKrakenTentacleAction
{
public:
	class                                                        State;                                             // 0x0(0x8)
	int                                                          TentacleIndex;                                     // 0x8(0x4)
	float                                                        TimeOffset;                                        // 0xc(0x4)
};


// Size 0x330
struct CoordinatedKrakenAction
{
public:
	struct FName                                                 ActionName;                                        // 0x0(0x8)
	float                                                        ActionLength;                                      // 0x8(0x4)
	byte                                                         ActionType;                                        // 0xc(0x1)
	TArray<Struct CoordinatedKrakenSpecialEvent>                 SpecialEvents;                                     // 0x10(0x10)
	TArray<Struct CoordinatedKrakenTentacleAction>               TentacleActions;                                   // 0x20(0x10)
	TArray<Struct CoordinatedKrakenHeadAction>                   HeadActions;                                       // 0x30(0x10)
	TArray<Struct CoordinatedKrakenExplosionEvent>               ExplosionEvents;                                   // 0x40(0x10)
	Struct RuntimeVectorCurve                                    TargetActorLocationAnimation;                      // 0x50(0x170)
	Struct RuntimeVectorCurve                                    TargetActorRotationAnimation;                      // 0x1c0(0x170)
};


// Size 0x10
struct KrakenShipHittingBehaviourParamsCollection
{
public:
	TArray<class Params*>                                        Params;                                            // 0x0(0x10)
};


// Size 0x60
struct KrakenShipHittingBehaviourParams
{
public:
	class                                                        ShipSize;                                          // 0x0(0x8)
	class                                                        TentacleType;                                      // 0x8(0x8)
	Struct WeightedProbabilityRangeOfRanges                      DamageRequiredToCancelImpact;                      // 0x10(0x30)
	float                                                        CancellationThreshold;                             // 0x40(0x4)
	float                                                        ImpactTime;                                        // 0x44(0x4)
	int                                                          LevelsOfDamage;                                    // 0x48(0x4)
	TArray<Struct KrakenShipHittingBehaviourImpactParams>        Configurations;                                    // 0x50(0x10)
};


// Size 0xa0
struct KrakenShipHittingBehaviourImpactParams
{
public:
	int                                                          Weight;                                            // 0x0(0x4)
	Struct Transform                                             TentacleTransform;                                 // 0x10(0x30)
	Struct Vector                                                ImpactLocation;                                    // 0x40(0xc)
	Struct Vector                                                ImpactForce;                                       // 0x4c(0xc)
	Struct Vector                                                DamageLocation;                                    // 0x58(0xc)
	Struct WeightedProbabilityRangeOfRanges                      NumZonesToDamage;                                  // 0x68(0x30)
};


// Size 0xf0
struct KrakenShipWrappingTentacleParams
{
public:
	Struct KrakenShipWrappingTentacleAnimationPhaseCollection    AnimationStates;                                   // 0x0(0x80)
	float                                                        TimeIntoWrappingToDisableInteractables;            // 0x80(0x4)
	float                                                        TimeIntoUnwrappingToEnableInteractables;           // 0x84(0x4)
	float                                                        TimeIntoWrappingToEnableCollisions;                // 0x88(0x4)
	float                                                        TimeIntoUnwrappingToDisableCollisions;             // 0x8c(0x4)
	float                                                        TimeIntoEnteringShakeAttackToEnableCollisions;     // 0x90(0x4)
	float                                                        TimeIntoExitingShakeAttackToDisableCollisions;     // 0x94(0x4)
	float                                                        HighDetailAnimationStreamingDistance;              // 0x98(0x4)
	Struct KrakenShipWrappingTentacleVFXParams                   WrappingOutOfWaterSplashVFX;                       // 0xa0(0x28)
	Struct KrakenShipWrappingTentacleVFXParams                   WrappingIntoWaterSplashVFX;                        // 0xc8(0x28)
};


// Size 0x28
struct KrakenShipWrappingTentacleVFXParams
{
public:
	Class ParticleSystem*                                        VFX;                                               // 0x0(0x8)
	float                                                        TriggerTime;                                       // 0x8(0x4)
	Struct Vector                                                Location;                                          // 0xc(0xc)
	Struct Rotator                                               Rotation;                                          // 0x18(0xc)
};


// Size 0x80
struct KrakenShipWrappingTentacleAnimationPhaseCollection
{
public:
	Struct KrakenShipWrappingTentacleAnimationStateParams        Dormant;                                           // 0x0(0x10)
	Struct KrakenShipWrappingTentacleAnimationStateParams        Wrapping;                                          // 0x10(0x10)
	Struct KrakenShipWrappingTentacleAnimationStateParams        AmbientWobble;                                     // 0x20(0x10)
	Struct KrakenShipWrappingTentacleAnimationStateParams        EnteringShakeAttack;                               // 0x30(0x10)
	Struct KrakenShipWrappingTentacleAnimationStateParams        ShakeAttack;                                       // 0x40(0x10)
	Struct KrakenShipWrappingTentacleAnimationStateParams        ExitingShakeAttack;                                // 0x50(0x10)
	Struct KrakenShipWrappingTentacleAnimationStateParams        HeavyAttack;                                       // 0x60(0x10)
	Struct KrakenShipWrappingTentacleAnimationStateParams        Unwrapping;                                        // 0x70(0x10)
};


// Size 0x10
struct KrakenShipWrappingTentacleAnimationStateParams
{
public:
	bool                                                         Visible;                                           // 0x0(0x1)
	int                                                          StartFrame;                                        // 0x4(0x4)
	int                                                          EndFrame;                                          // 0x8(0x4)
	float                                                        Duration;                                          // 0xc(0x4)
};


// Size 0x10
struct KrakenShipWrappingTentacleAnimationState
{
public:
	byte                                                         State;                                             // 0x4(0x1)
	double                                                       EndTime;                                           // 0x8(0x8)
};


// Size 0x28
struct KrakenAnchorDynamicsParams
{
public:
};


// Size 0x50
struct KrakenDynamicsParams
{
public:
	Struct KrakenDynamicsStateParams                             AmbientWobble;                                     // 0x0(0x10)
	Struct KrakenDynamicsStateParams                             EnteringShakeAttack;                               // 0x10(0x10)
	Struct KrakenDynamicsStateParams                             ShakeAttack;                                       // 0x20(0x10)
	Struct KrakenDynamicsStateParams                             ExitingShakeAttack;                                // 0x30(0x10)
	Struct KrakenDynamicsStateParams                             HeavyAttack;                                       // 0x40(0x10)
};


// Size 0x10
struct KrakenDynamicsStateParams
{
public:
	TArray<Struct KrakenDynamicsStateFragmentParams>             FragmentParams;                                    // 0x0(0x10)
};


// Size 0x20
struct KrakenDynamicsStateFragmentParams
{
public:
	Class CurveVector*                                           TorqueCurve;                                       // 0x0(0x8)
	float                                                        BaselineTorque;                                    // 0x8(0x4)
	TArray<Struct KrakenDynamicsStateEvent>                      Events;                                            // 0x10(0x10)
};


// Size 0xc
struct KrakenDynamicsStateEvent
{
public:
	byte                                                         Event;                                             // 0x0(0x1)
	float                                                        Time;                                              // 0x4(0x4)
	float                                                        Value;                                             // 0x8(0x4)
};


// Size 0x10
struct KrakenShipWrappingBehaviourParamsCollection
{
public:
	TArray<class Params*>                                        Params;                                            // 0x0(0x10)
};


// Size 0x420
struct KrakenShipWrappingBehaviourParams
{
public:
	class                                                        ShipSize;                                          // 0x0(0x8)
	Struct KrakenShipWrappingBehaviourWarningParams              WarningParams;                                     // 0x10(0xa0)
	Struct KrakenShipWrappingBehaviourWrapParams                 WrapParams;                                        // 0xb0(0x140)
	Struct KrakenShipWrappingBehaviourTentacleHeadParams         TentacleHeadParams;                                // 0x1f0(0x48)
	Struct KrakenShipWrappingBehaviourShakeAttackParams          ShakeAttackParams;                                 // 0x238(0x68)
	Struct KrakenShipWrappingBehaviourHeavyAttackParams          HeavyAttackParams;                                 // 0x2a0(0xd8)
	Struct KrakenShipWrappingBehaviourDamageParams               DamageParams;                                      // 0x378(0x70)
	Struct KrakenShipWrappingBehaviourHealthParams               HealthParams;                                      // 0x3e8(0x38)
};


// Size 0x38
struct KrakenShipWrappingBehaviourHealthParams
{
public:
	Struct WeightedProbabilityRangeOfRanges                      HealthReductionRequiredToUnwrapTheShipRange;       // 0x0(0x30)
};


// Size 0x70
struct KrakenShipWrappingBehaviourDamageParams
{
public:
	float                                                        ChanceOfDamagingBottomDeckDamageHoles;             // 0x0(0x4)
	float                                                        ChanceThatExistingHolesWillBeDamaged;              // 0x4(0x4)
	int                                                          LevelsOfDamage;                                    // 0x8(0x4)
	Struct WeightedProbabilityRangeOfRanges                      NumHolesToDamageRange;                             // 0x10(0x30)
	Struct WeightedProbabilityRangeOfRanges                      DamageIntervalRange;                               // 0x40(0x30)
};


// Size 0xd8
struct KrakenShipWrappingBehaviourHeavyAttackParams
{
public:
	Struct WeightedProbabilityRangeOfRanges                      AttackDuration;                                    // 0x0(0x30)
	float                                                        ChanceOfEnteringHeavyAttack;                       // 0x30(0x4)
	Struct KnockBackInfo                                         ExteriorKnockbackParams;                           // 0x34(0x50)
	Struct KnockBackInfo                                         InteriorKnockbackParams;                           // 0x84(0x50)
};


// Size 0x68
struct KrakenShipWrappingBehaviourShakeAttackParams
{
public:
	Struct WeightedProbabilityRangeOfRanges                      TimeBetweenShakeAttackAttempts;                    // 0x0(0x30)
	Struct WeightedProbabilityRangeOfRanges                      AttackDuration;                                    // 0x30(0x30)
	float                                                        ChanceOfShake;                                     // 0x64(0x4)
};


// Size 0x48
struct KrakenShipWrappingBehaviourTentacleHeadParams
{
public:
	class                                                        TentacleType;                                      // 0x0(0x8)
	Struct WeightedProbabilityRangeOfRanges                      DamageRequiredToRelocate;                          // 0x8(0x30)
	float                                                        RelocationThreshold;                               // 0x38(0x4)
	float                                                        ChanceOfSwitchingSides;                            // 0x3c(0x4)
	float                                                        ChanceOfSelectingNearLocationAfterSwitchingSides;  // 0x40(0x4)
	float                                                        ChanceOfSelectingSelectingDifferentDistanceFromShipWhenRemaning; // 0x44(0x4)
};


// Size 0x140
struct KrakenShipWrappingBehaviourWrapParams
{
public:
	Struct FloatRange                                            WrapTimeBeforeGivingUpRange;                       // 0x0(0x10)
	float                                                        ShipInternalWaterLevelToTriggerUnwrap;             // 0x10(0x4)
	Struct KrakenAnchorDynamicsParams                            AnchorDynamicsParams;                              // 0x18(0x28)
	TArray<Struct KrakenShipWrappingBehaviourWrapLocationWeightedParams> WrapLocations;                                     // 0x40(0x10)
	float                                                        WrapTimeBeforeGivingUp;                            // 0x50(0x4)
	Struct KrakenShipWrappingBehaviourWrapLocationParams         WrapLocation;                                      // 0x60(0xe0)
};


// Size 0xe0
struct KrakenShipWrappingBehaviourWrapLocationParams
{
public:
	class                                                        TentacleType;                                      // 0x0(0x8)
	Struct Vector                                                WrapLocationAnchorPoint;                           // 0x8(0xc)
	Struct Transform                                             TentacleHeadHoldShipLocation;                      // 0x20(0x30)
	Struct KrakenShipWrappingBehaviourTentacleHeadLocations      PortTentacleHeadLocations;                         // 0x50(0x20)
	Struct KrakenShipWrappingBehaviourTentacleHeadLocations      StarboardTentacleHeadLocations;                    // 0x70(0x20)
	Struct KrakenDynamicsParams                                  DynamicsParams;                                    // 0x90(0x50)
};


// Size 0x20
struct KrakenShipWrappingBehaviourTentacleHeadLocations
{
public:
	TArray<Struct KrakenShipWrappingBehaviourNamedTransform>     Near;                                              // 0x0(0x10)
	TArray<Struct KrakenShipWrappingBehaviourNamedTransform>     Far;                                               // 0x10(0x10)
};


// Size 0x40
struct KrakenShipWrappingBehaviourNamedTransform
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	Struct Transform                                             Transform;                                         // 0x10(0x30)
};


// Size 0xf0
struct KrakenShipWrappingBehaviourWrapLocationWeightedParams
{
public:
	float                                                        Weight;                                            // 0x0(0x4)
	Struct KrakenShipWrappingBehaviourWrapLocationParams         Params;                                            // 0x10(0xe0)
};


// Size 0xa0
struct KrakenShipWrappingBehaviourWarningParams
{
public:
	class                                                        TentacleType;                                      // 0x0(0x8)
	float                                                        TickDuration;                                      // 0x8(0x4)
	Struct FloatRange                                            TentacleTimeoutRange;                              // 0xc(0x10)
	Struct WeightedProbabilityRangeOfRanges                      TentacleHealthRange;                               // 0x20(0x30)
	TArray<Struct KrakenShipWrappingBehaviourNamedTransform>     TentacleLocations;                                 // 0x50(0x10)
	float                                                        TentacleTimeout;                                   // 0x60(0x4)
	float                                                        TentacleHealth;                                    // 0x64(0x4)
	Struct Transform                                             TentacleLocation;                                  // 0x70(0x30)
};


// Size 0x68
struct KrakenBehaviourParams
{
public:
	byte                                                         Type;                                              // 0x0(0x1)
	Struct WeightedProbabilityRangeOfRanges                      TargetTimeout;                                     // 0x8(0x30)
	Class KrakenIdleBehaviourParamsDataAsset*                    IdleParams;                                        // 0x38(0x8)
	Struct KrakenShipWrappingBehaviourParamsCollection           ShipWrappingParams;                                // 0x40(0x10)
	Struct KrakenShipHittingBehaviourParamsCollection            ShipHittingParams;                                 // 0x50(0x10)
	Class KrakenPlayerGrabbingBehaviourParamsDataAsset*          PlayerGrabbingParams;                              // 0x60(0x8)
};


// Size 0x160
struct KrakenParams
{
public:
	class                                                        MurkClass;                                         // 0x0(0x8)
	Class GeneratedLocationsDataAsset*                           PotentialTentacleSpawnLocations;                   // 0x8(0x8)
	Struct WeightedProbabilityRange                              NumberOfTentaclesToSpawn;                          // 0x10(0x20)
	TArray<Struct KrakenTentaclesChanceParams>                   TentaclesRequiredToDismissKraken;                  // 0x30(0x10)
	float                                                        TickFrequencyToLookForNewBehaviours;               // 0x40(0x4)
	float                                                        OperatingAreaRadius;                               // 0x44(0x4)
	float                                                        MinimumOperatingAreaMovementDeltaToInvalidateLocations; // 0x48(0x4)
	float                                                        RadiusToleranceBeforeOperatingAreaDespawn;         // 0x4c(0x4)
	TArray<Struct KrakenTentaclesChanceParams>                   NumTentacleInstancesToAssignToShip;                // 0x50(0x10)
	float                                                        GlobalPlayRateScale;                               // 0x60(0x4)
	Struct FloatRange                                            NewTargetTimeout;                                  // 0x64(0x10)
	Struct FloatRange                                            UnavailableTargetTimeout;                          // 0x74(0x10)
	Struct KrakenTentacleParams                                  TentacleParams;                                    // 0x88(0x50)
	Struct WeightedProbabilityRangeOfRanges                      DismissTimeoutWhenNoTargets;                       // 0xd8(0x30)
	Struct WeightedProbabilityRangeOfRanges                      DismissTimeoutWithNewTarget;                       // 0x108(0x30)
	TArray<Struct KrakenWeightedBehaviour>                       ShipInteractingBehaviourWeights;                   // 0x138(0x10)
	TArray<Struct KrakenBehaviourParams>                         Behaviours;                                        // 0x148(0x10)
	float                                                        DamageAmountToTriggerAudioComponentNotification;   // 0x158(0x4)
};


// Size 0x8
struct KrakenWeightedBehaviour
{
public:
	int                                                          Weight;                                            // 0x0(0x4)
	byte                                                         BehaviourType;                                     // 0x4(0x1)
};


// Size 0x50
struct KrakenTentacleParams
{
public:
	Struct WeightedProbabilityRangeOfRanges                      TentacleHealth;                                    // 0x0(0x30)
	Struct FloatRange                                            InactiveToActiveTentacleTimeout;                   // 0x30(0x10)
	float                                                        InactiveToActiveTentacleTimeoutThresholdInSeconds; // 0x40(0x4)
	float                                                        ChanceOfInactiveToActiveTentacle;                  // 0x44(0x4)
	float                                                        ChanceOfInactiveToActiveTentacleOnDeathOrFlee;     // 0x48(0x4)
};


// Size 0x28
struct KrakenTentaclesChanceParams
{
public:
	int                                                          NumberOfTentaclesSpawned;                          // 0x0(0x4)
	Struct WeightedProbabilityRange                              ProbabilityRange;                                  // 0x8(0x20)
};


// Size 0x10
struct KrakenAnimatedTentacleAnimationBoneTrack
{
public:
	TArray<Struct KrakenAnimatedTentacleAnimationBoneFrame>      Frames;                                            // 0x0(0x10)
};


// Size 0xc
struct KrakenAnimatedTentacleAnimationBoneFrame
{
public:
	Struct Vector                                                BoneLocation;                                      // 0x0(0xc)
};


// Size 0x10
struct KrakenAnimatedTentacleMappedAnimation
{
public:
	Class AnimSequence*                                          ClientAnimation;                                   // 0x0(0x8)
	Class KrakenAnimatedTentacleAnimationDataAsset*              AnimationAsset;                                    // 0x8(0x8)
};


// Size 0x8
struct KrakenAnimatedTentacleAnimationSpecBone
{
public:
	struct FName                                                 BoneName;                                          // 0x0(0x8)
};


// Size 0x28
struct KrakenAnimatedTentacleStateAnimationMapping
{
public:
	class                                                        State;                                             // 0x0(0x8)
	Class AnimSequence*                                          Animation;                                         // 0x8(0x8)
	bool                                                         Loop;                                              // 0x10(0x1)
	TArray<Struct KrakenAnimatedTentacleTransitionAnimation>     Transitions;                                       // 0x18(0x10)
};


// Size 0x20
struct KrakenAnimatedTentacleTransitionAnimation
{
public:
	class                                                        FromState;                                         // 0x0(0x8)
	float                                                        BranchAnimationTimeRemaining;                      // 0x8(0x4)
	TArray<class TransitionAnimations*>                          TransitionAnimations;                              // 0x10(0x10)
};


// Size 0x18
struct HeadStateChangeRequest
{
public:
	class                                                        RequestedState;                                    // 0x0(0x8)
	Struct Guid                                                  StateChangeID;                                     // 0x8(0x10)
};


// Size 0x28
struct KrakenHeadStateAnimationMapping
{
public:
	class                                                        State;                                             // 0x0(0x8)
	Class AnimSequence*                                          Animation;                                         // 0x8(0x8)
	bool                                                         Loop;                                              // 0x10(0x1)
	TArray<Struct KrakenHeadTransitionAnimation>                 Transitions;                                       // 0x18(0x10)
};


// Size 0x10
struct KrakenHeadTransitionAnimation
{
public:
	class                                                        FromState;                                         // 0x0(0x8)
	Class AnimSequence*                                          TransitionAnimation;                               // 0x8(0x8)
};


// Size 0x8
struct KrakenHeadHealthPair
{
public:
	int                                                          PlayerCount;                                       // 0x0(0x4)
	float                                                        KrakenHeadHealth;                                  // 0x4(0x4)
};


// Size 0x10
struct KrakenHeadHitReactAnimations
{
public:
	float                                                        Weight;                                            // 0x0(0x4)
	Class AnimSequence*                                          HitReactAnimation;                                 // 0x8(0x8)
};


// Size 0xc0
struct KrakenTentacleBehaviourParams
{
public:
	Class EnvQuery*                                              InactiveSpawnQueryTemplate;                        // 0x0(0x8)
	float                                                        ChanceOfCannonSideSpawn;                           // 0x8(0x4)
	Class EnvQuery*                                              ActiveCannonSideSpawnQueryTemplate;                // 0x10(0x8)
	Class EnvQuery*                                              ActiveNonCannonSideSpawnQueryTemplate;             // 0x18(0x8)
	class                                                        TentacleClass;                                     // 0x20(0x8)
	float                                                        MinScale;                                          // 0x28(0x4)
	float                                                        MaxScale;                                          // 0x2c(0x4)
	float                                                        MinPlayRateScale;                                  // 0x30(0x4)
	float                                                        MaxPlayRateScale;                                  // 0x34(0x4)
	float                                                        PanicDespawnShipRangeRadius;                       // 0x38(0x4)
	float                                                        PanicDespawnWatercraftRangeRadius;                 // 0x3c(0x4)
	float                                                        PanicDespawnTentacleRadius;                        // 0x40(0x4)
	float                                                        PanicDespawnAnimationPlayRateScale;                // 0x44(0x4)
	float                                                        PreDeathAnimationPlayRateScale;                    // 0x48(0x4)
	TArray<Struct KrakenTentacleBehaviourActionChances>          OnDamageActionChances;                             // 0x50(0x10)
	Struct WeightedProbabilityRangeOfRanges                      TimeToSpendInInactiveState;                        // 0x60(0x30)
	Struct WeightedProbabilityRangeOfRanges                      TimeToSpendInActiveState;                          // 0x90(0x30)
};


// Size 0x8
struct KrakenTentacleBehaviourActionChances
{
public:
	byte                                                         ActionToTransitionTo;                              // 0x0(0x1)
	float                                                        WeightedChance;                                    // 0x4(0x4)
};


// Size 0xc0
struct KrakenIdleBehaviourParams
{
public:
};


// Size 0xe8
struct KrakenPlayerGrabbingBehaviourParams
{
public:
	float                                                        MinUnsuccessfulTargetTimeout;                      // 0xc0(0x4)
	float                                                        MaxUnsuccessfulTargetTimeout;                      // 0xc4(0x4)
	TArray<Struct KrakenPlayerGrabbingHoldingStateTransitionChance> HoldingTransitionChances;                          // 0xc8(0x10)
	float                                                        MinTargetHoldingTime;                              // 0xd8(0x4)
	float                                                        MaxTargetHoldingTime;                              // 0xdc(0x4)
	float                                                        TargetThrowingSpeed;                               // 0xe0(0x4)
};


// Size 0x10
struct KrakenPlayerGrabbingHoldingStateTransitionChance
{
public:
	float                                                        WeightedChance;                                    // 0x0(0x4)
	class                                                        StateToTransitionTo;                               // 0x8(0x8)
};


// Size 0xa0
struct KrakenServiceParams
{
public:
	class                                                        KrakenType;                                        // 0x0(0x8)
	Struct KrakenServiceSpawnParams                              SpawnParams;                                       // 0x8(0x80)
	Class KrakenParamsDataAsset*                                 DefaultKrakenParams;                               // 0x88(0x8)
	TArray<Struct KrakenServiceShipParams>                       KrakenParams;                                      // 0x90(0x10)
};


// Size 0x20
struct KrakenServiceShipParams
{
public:
	struct FName                                                 Feature;                                           // 0x0(0x8)
	TArray<Class ValidShipTypes>                                 ValidShipTypes;                                    // 0x8(0x10)
	Class KrakenParamsDataAsset*                                 KrakenParams;                                      // 0x18(0x8)
};


// Size 0x80
struct KrakenServiceSpawnParams
{
public:
	float                                                        SpawnLocationDistributionRadius;                   // 0x0(0x4)
	float                                                        SpawnLocationDistributionMinDistanceBetweenPoints; // 0x4(0x4)
	float                                                        SpawnDistanceInFrontOfShip;                        // 0x8(0x4)
	Struct WeightedProbabilityRangeOfRanges                      TimeBetweenSpawnAttemptsRange;                     // 0x10(0x30)
	Struct WeightedProbabilityRangeOfRanges                      TimeBetweenSpawnAttemptsPostSpawnFailure;          // 0x40(0x30)
	float                                                        SpawnChance;                                       // 0x70(0x4)
	int                                                          MaxConsecutiveFailedSpawnAttempts;                 // 0x74(0x4)
	Class EnvQuery*                                              SpawnLocationQuery;                                // 0x78(0x8)
};


// Size 0x1
struct KrakenWorldSettingsParams
{
public:
	bool                                                         KrakenEnabled;                                     // 0x0(0x1)
};


// Size 0x40
struct CoordinatedKrakenPhaseAssetEntry
{
public:
	Struct Transform                                             RelativeAnimationOrigin;                           // 0x0(0x30)
	Class CoordinatedKrakenPhaseActionsDataAsset*                Asset;                                             // 0x30(0x8)
};


// Size 0x4
struct EventKrakenAnimatedTentacleTriggerHitReaction
{
public:
	int                                                          CollisionBoneIndex;                                // 0x0(0x4)
};


// Size 0x4
struct EventKrakenAnimatedTentacleTentacleDead
{
public:
	int                                                          TentacleIndex;                                     // 0x0(0x4)
};


// Size 0x4
struct EventKrakenAnimatedTentacleTakenDamage
{
public:
	int                                                          TentacleIndex;                                     // 0x0(0x4)
};


// Size 0x4
struct EventKrakenAnimatedTentacleTargetVomit
{
public:
};


// Size 0x1
struct EventKrakenAnimatedTentaclePlayerInMouthEnd
{
public:
};


// Size 0x1
struct EventKrakenAnimatedTentaclePlayerInMouthBegin
{
public:
};


// Size 0x1
struct EventKrakenAnimatedTentacleSuckingEnd
{
public:
};


// Size 0x1
struct EventKrakenAnimatedTentacleSuckingStart
{
public:
};


// Size 0x1
struct EventKrakenWrappingTentacleTellEnd
{
public:
};


// Size 0x1
struct EventKrakenWrappingTentacleTellBegin
{
public:
};


// Size 0x1
struct EventKrakenAnimatedTentacleSuckingTellEnd
{
public:
};


// Size 0x1
struct EventKrakenAnimatedTentacleSuckingTellBegin
{
public:
};


// Size 0x1
struct EventKrakenAnimatedTentacleSuckingTell
{
public:
};


// Size 0x1
struct EventKrakenAnimatedTentacleSubmerge
{
public:
};


// Size 0x1
struct EventKrakenAnimatedTentacleEmerge
{
public:
};


// Size 0x1
struct EventKrakenTentacleEndPlay
{
public:
};


// Size 0x1
struct EventKrakenAnimatedTentacleAnimationStopped
{
public:
};


// Size 0x10
struct EventKrakenAnimatedTentacleAnimationStarted
{
public:
	Class AnimSequence*                                          Animation;                                         // 0x0(0x8)
};


// Size 0x4
struct EventKrakenAnimatedTentacleAuthoritativeAnimationTime
{
public:
};


// Size 0x18
struct EventKrakenAnimatedTentacleStateEntered
{
public:
	class                                                        State;                                             // 0x0(0x8)
	class                                                        PreviousState;                                     // 0x8(0x8)
	bool                                                         SkipTransitions;                                   // 0x10(0x1)
};


// Size 0x1
struct EventKrakenHeadHit
{
public:
};


// Size 0x1
struct EventCoordinatedKrakenPhaseEnded
{
public:
};


// Size 0x8
struct EventKrakenTentacleDestroyed
{
public:
	Class Actor*                                                 KillingBlowInstigator;                             // 0x0(0x8)
};


// Size 0x1
struct EventKrakenDespawned
{
public:
	byte                                                         DespawnReason;                                     // 0x0(0x1)
};


// Size 0x18
struct EventKrakenSpawned
{
public:
	Class Ship*                                                  PrimaryShipTarget;                                 // 0x0(0x8)
	Struct Guid                                                  ConfigSpawnId;                                     // 0x8(0x10)
};


// Size 0x2
struct EventKrakenShipWrappingTentacleStateChanged
{
public:
	byte                                                         PreviousState;                                     // 0x0(0x1)
	byte                                                         NewState;                                          // 0x1(0x1)
};


// Size 0x1
struct EventKrakenTentaclePreUninitializeComponents
{
public:
};


// Size 0x10
struct KrakenTentacleDestroyedTelemetryEvent
{
public:
	Struct FString                                               KrakenId;                                          // 0x0(0x10)
};


// Size 0x18
struct KrakenDespawnTelemetryEvent
{
public:
	Struct FString                                               KrakenId;                                          // 0x0(0x10)
	byte                                                         KrakenDespawnReason;                               // 0x10(0x1)
};


// Size 0x20
struct KrakenSpawnTelemetryEvent
{
public:
	Struct FString                                               KrakenId;                                          // 0x0(0x10)
	Struct Guid                                                  ConfigSpawnId;                                     // 0x10(0x10)
};


}