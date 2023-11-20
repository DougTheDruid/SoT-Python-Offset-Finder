// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x78 (Full Size[0xa0] - InheritedSize[0x28]
class AshenLordAshCloudSetupDataAsset: public DataAsset
{
public:
	struct WeightedProbabilityRangeOfRanges                      AshCloudRadiusInMetres;                            // 0x28(0x30)
	float                                                        AshCloudHeightCoefficient;                         // 0x58(0x4)
	char                                                         pad0x4_PMHPQ[0x4];                                 // 0x5c(0x4)
	struct WeightedProbabilityRangeOfRanges                      AshCloudLifetime;                                  // 0x60(0x30)
	class CurveFloat*                                            ScaleUpSpeedCurve;                                 // 0x90(0x8)
	class CurveFloat*                                            DissipationCurve;                                  // 0x98(0x8)
};


// Size 0x88 (Full Size[0x450] - InheritedSize[0x3c8]
class AshenLordAshCloud: public Actor
{
public:
	class StaticMeshComponent*                                   CloudMesh;                                         // 0x3c8(0x8)
	class AshenLordAshCloudSetupDataAsset*                       SetupData;                                         // 0x3d0(0x8)
	float                                                        InnerRangeStartOffset;                             // 0x3d8(0x4)
	float                                                        OuterRangeStart;                                   // 0x3dc(0x4)
	struct FName                                                 NormalisedEngulfedRTPC;                            // 0x3e0(0x8)
	float                                                        RTPCSecondsBetweenUpdates;                         // 0x3e8(0x4)
	char                                                         pad0x4_R12SV[0x4];                                 // 0x3ec(0x4)
	float                                                        LifeTime;                                          // 0x3f0(0x4)
	float                                                        StartTime;                                         // 0x3f4(0x4)
	float                                                        TimeOffset;                                        // 0x3f8(0x4)
	byte                                                         CloudState;                                        // 0x3fc(0x1)
	char                                                         pad0x37_B1C2M[0x37];                               // 0x3fd(0x37)
	float                                                        MaxRadiusMultiplier;                               // 0x434(0x4)
	char                                                         pad0x18_Y6VDA[0x18];                               // 0x438(0x18)
};


// Size 0x70 (Full Size[0x438] - InheritedSize[0x3c8]
class AshenLordVolcano: public Actor
{
public:
	class AshenLordVolcanoSetupDataAsset*                        VolcanoSetupData;                                  // 0x3c8(0x8)
	char                                                         pad0x68_I6PNH[0x68];                               // 0x3d0(0x68)
};


// Size 0x420 (Full Size[0x448] - InheritedSize[0x28]
class VolcanoSetupDataAsset: public DataAsset
{
public:
	bool                                                         IsEnabled;                                         // 0x28(0x1)
	char                                                         pad0x7_MQIJV[0x7];                                 // 0x29(0x7)
	struct WeightedProbabilityRangeOfRanges                      WarmUpDuration;                                    // 0x30(0x30)
	struct WeightedProbabilityRangeOfRanges                      EruptionDuration;                                  // 0x60(0x30)
	struct WeightedProbabilityRangeOfRanges                      DormantDuration;                                   // 0x90(0x30)
	float                                                        MinimumDurationForTheEffects;                      // 0xc0(0x4)
	char                                                         pad0x4_SMBP9[0x4];                                 // 0xc4(0x4)
	struct WeightedProbabilityRangeOfRanges                      GroundAndWaterStayHotDurationAfterVolcanoFinishesDuration; // 0xc8(0x30)
	struct WeightedProbabilityRangeOfRanges                      ProjectileTriggerFrequency;                        // 0xf8(0x30)
	struct WeightedProbabilityRangeOfRanges                      PercentageOfMaxTargetingRange;                     // 0x128(0x30)
	int                                                          MinNumProjectilesToTrigger;                        // 0x158(0x4)
	int                                                          MaxNumProjectilesToTrigger;                        // 0x15c(0x4)
	int                                                          ExtraProjectilePoolNumProjectiles;                 // 0x160(0x4)
	char                                                         pad0x4_97YG9[0x4];                                 // 0x164(0x4)
	struct VolcanoTargetChances                                  ChanceToTargetPlayers;                             // 0x168(0x58)
	struct VolcanoTargetChances                                  ChanceToTargetShips;                               // 0x1c0(0x58)
	struct VolcanoTargetChances                                  ChanceToTargetWatercraft;                          // 0x218(0x58)
	struct WeightedProbabilityRangeOfRanges                      PlayerNearMissDistanceInMetres;                    // 0x270(0x30)
	float                                                        InnerShipNearMissRadiusInMetres;                   // 0x2a0(0x4)
	float                                                        OuterShipNearMissRadiusInMetres;                   // 0x2a4(0x4)
	float                                                        InnerWatercraftNearMissRadiusInMetres;             // 0x2a8(0x4)
	float                                                        OuterWatercraftNearMissRadiusInMetres;             // 0x2ac(0x4)
	TArray<struct WeightedVolcanoProjectile>                     Projectiles;                                       // 0x2b0(0x10)
	TArray<struct LandmarkReactionEventPlayForceFeedbackEntry>   ForceFeedbackIgnitionEffect;                       // 0x2c0(0x10)
	class UClass*                                                LocalMiniProjectilesClass;                         // 0x2d0(0x8)
	struct WeightedProbabilityRangeOfRanges                      LocalMiniProjectilesSpawnHeightAbovePlayerInMetres; // 0x2d8(0x30)
	struct WeightedProbabilityRangeOfRanges                      LocalMiniProjectilesSpawnDistanceFromPlayerInMetres; // 0x308(0x30)
	struct WeightedProbabilityRangeOfRanges                      LocalMiniProjectilesTimeBetweenSpawns;             // 0x338(0x30)
	struct WeightedProbabilityRange                              NumLocalMiniProjectilesToTrigger;                  // 0x368(0x20)
	struct WeightedProbabilityRangeOfRanges                      LocalMiniProjectilesSpeed;                         // 0x388(0x30)
	float                                                        LocalMiniProjectilesGravityScale;                  // 0x3b8(0x4)
	char                                                         pad0x4_5B3R2[0x4];                                 // 0x3bc(0x4)
	struct WeightedProbabilityRangeOfRanges                      LocalMiniProjectilesSpawnAngleRange;               // 0x3c0(0x30)
	struct WeightedProbabilityRangeOfRanges                      LocalMiniProjectilesSpawnStartPositionOffsetInMetres; // 0x3f0(0x30)
	float                                                        LocalMiniProjectilesSpawnDistanceSpeedScalar;      // 0x420(0x4)
	float                                                        LocalMiniProjectilesSpawnDistanceMaxPlayerSpeed;   // 0x424(0x4)
	float                                                        TimeBetweenLocalEmbers;                            // 0x428(0x4)
	char                                                         pad0x4_78M7Y[0x4];                                 // 0x42c(0x4)
	TArray<struct VolcanoSetupDataEmbersEntry>                   LocalEmbers;                                       // 0x430(0x10)
	float                                                        EmbersSpawnOffsetInMetres;                         // 0x440(0x4)
	float                                                        ServerMigrationDistanceAsMultipleOfOuterTargetRadius; // 0x444(0x4)
};


// Size 0x150 (Full Size[0x178] - InheritedSize[0x28]
class AshenLordVolcanoSetupDataAsset: public DataAsset
{
public:
	struct WeightedProbabilityRangeOfRanges                      ProjectileTriggerFrequency;                        // 0x28(0x30)
	struct WeightedProbabilityRange                              NumProjectilesToTrigger;                           // 0x58(0x20)
	struct WeightedProbabilityRangeOfRanges                      SpawnHeightInMetres;                               // 0x78(0x30)
	struct WeightedProbabilityRangeOfRanges                      TargetDistanceFromCenterInMetres;                  // 0xa8(0x30)
	struct WeightedProbabilityRangeOfRanges                      TimeBetweenSpawns;                                 // 0xd8(0x30)
	struct WeightedProbabilityRangeOfRanges                      StartPositionOffsetInMetres;                       // 0x108(0x30)
	TArray<struct WeightedAshenLordVolcanoProjectile>            Projectiles;                                       // 0x138(0x10)
	struct PoolableCollectionMapConfiguration                    PoolableProjectilesConfig;                         // 0x148(0x18)
	struct VolcanoSetupDataEmbersEntry                           Embers;                                            // 0x160(0x10)
	float                                                        EmberSpawnHeightInMeters;                          // 0x170(0x4)
	float                                                        TimeBetweenEmbers;                                 // 0x174(0x4)
};


// Size 0x18 (Full Size[0x3e0] - InheritedSize[0x3c8]
class AshenLordWorldEndCloud: public Actor
{
public:
	float                                                        SelfDestructDelayOnComplete;                       // 0x3c8(0x4)
	byte                                                         CloudState;                                        // 0x3cc(0x1)
	char                                                         pad0x3_SAE8Y[0x3];                                 // 0x3cd(0x3)
	struct AshenLordWorldEndCloudAnimation                       CurrentCloudAnimation;                             // 0x3d0(0x8)
	char                                                         pad0x8_EOP2T[0x8];                                 // 0x3d8(0x8)
};


// Size 0xf0 (Full Size[0x4b8] - InheritedSize[0x3c8]
class Geyser: public Actor
{
public:
	char                                                         pad0x10_8H5M1[0x10];                               // 0x3c8(0x10)
	class GeyserSetupDataAsset*                                  SetupData;                                         // 0x3d8(0x8)
	class GeyserSetupDataAsset*                                  GeyserSetupDataOverride;                           // 0x3e0(0x8)
	class GeyserSetupDataAsset*                                  SelectedGeyserForNextActivation;                   // 0x3e8(0x8)
	TArray<struct GeyserStoryCustomisationData>                  StoryCustomisationData;                            // 0x3f0(0x10)
	char                                                         pad0x18_NXSDR[0x18];                               // 0x400(0x18)
	byte                                                         GeyserState;                                       // 0x418(0x1)
	char                                                         pad0x7_4CF2L[0x7];                                 // 0x419(0x7)
	class WwiseObjectPoolWrapper*                                GeyserBuildUpPool;                                 // 0x420(0x8)
	class WwiseObjectPoolWrapper*                                GeyserBlowPool;                                    // 0x428(0x8)
	class WwiseEvent*                                            StartActiveAudioLoopEvent;                         // 0x430(0x8)
	class WwiseEvent*                                            StopActiveAudioLoopEvent;                          // 0x438(0x8)
	class WwiseEvent*                                            PlayEruptingAudioEvent;                            // 0x440(0x8)
	class ExplosionComponent*                                    ExplosionComponent;                                // 0x448(0x8)
	class ParticleSystemComponent*                               ActiveParticlesComponent;                          // 0x450(0x8)
	class ParticleSystemComponent*                               EruptingParticlesComponent;                        // 0x458(0x8)
	byte                                                         HitTestTraceChannel;                               // 0x460(0x1)
	char                                                         pad0x7_2YHRU[0x7];                                 // 0x461(0x7)
	class UClass*                                                GeyserHoleClass;                                   // 0x468(0x8)
	class Hole*                                                  GeyserHole;                                        // 0x470(0x8)
	char                                                         pad0x40_2GDSV[0x40];                               // 0x478(0x40)
};


// Size 0x18 (Full Size[0x3e0] - InheritedSize[0x3c8]
class DisableGeyserMechanismAction: public Actor
{
public:
	class MechanismActionComponent*                              MechanismActionComponent;                          // 0x3c8(0x8)
	TArray<class Geyser*>                                        GeysersToDisable;                                  // 0x3d0(0x10)
};


// Size 0x300 (Full Size[0x328] - InheritedSize[0x28]
class EarthquakeSetupDataAsset: public DataAsset
{
public:
	bool                                                         IsEnabled;                                         // 0x28(0x1)
	char                                                         pad0x7_Y8HF7[0x7];                                 // 0x29(0x7)
	struct WeightedProbabilityRangeOfRanges                      WarmUpDuration;                                    // 0x30(0x30)
	struct WeightedProbabilityRangeOfRanges                      EarthquakeDuration;                                // 0x60(0x30)
	struct WeightedProbabilityRangeOfRanges                      CoolDownDuration;                                  // 0x90(0x30)
	struct WeightedProbabilityRangeOfRanges                      DormantDuration;                                   // 0xc0(0x30)
	float                                                        ChanceOfTriggeringAVolcano;                        // 0xf0(0x4)
	struct FloatRange                                            PercentageThroughEarthquakeToStartVolcano;         // 0xf4(0x10)
	char                                                         pad0x4_6XAMK[0x4];                                 // 0x104(0x4)
	struct PlayerFeedback                                        WarmupPlayerFeedback;                              // 0x108(0x80)
	struct PlayerFeedback                                        ActivePlayerFeedback;                              // 0x188(0x80)
	struct WeightedProbabilityRangeOfRanges                      StaggerStrengthDuration;                           // 0x208(0x30)
	float                                                        StaggerStrengthModifierWhenOnAShip;                // 0x238(0x4)
	struct FloatRange                                            PercentageThroughCameraShakeToStartNextOne;        // 0x23c(0x10)
	struct FloatRange                                            TimeToShipPush;                                    // 0x24c(0x10)
	char                                                         pad0x4_27ZM7[0x4];                                 // 0x25c(0x4)
	struct WeightedProbabilityRangeOfRanges                      ForceToApplyToShip;                                // 0x260(0x30)
	float                                                        MaximumShipSpeedToBePushed;                        // 0x290(0x4)
	float                                                        ChanceEarthquakeTriggersGeysers;                   // 0x294(0x4)
	struct WeightedProbabilityRangeOfRanges                      TimeBetweenLocalEffects;                           // 0x298(0x30)
	struct WeightedProbabilityRange                              NumberOfLocalEffectsToTrigger;                     // 0x2c8(0x20)
	float                                                        EffectConeAngle;                                   // 0x2e8(0x4)
	float                                                        EffectRaycastDistanceInMetres;                     // 0x2ec(0x4)
	struct DistanceThrottledRandomParticleSystemPicker           EarthquakeEffects;                                 // 0x2f0(0x10)
	float                                                        WarmupWindTurbulence;                              // 0x300(0x4)
	struct FloatRange                                            WarmupGustPower;                                   // 0x304(0x10)
	float                                                        ActiveWindTurbulence;                              // 0x314(0x4)
	struct FloatRange                                            ActiveGustPower;                                   // 0x318(0x10)
};


// Size 0x1f0 (Full Size[0x5b8] - InheritedSize[0x3c8]
class Earthquake: public Actor
{
public:
	char                                                         pad0x10_CFTIO[0x10];                               // 0x3c8(0x10)
	class EarthquakeSetupDataAsset*                              EarthquakeSetupData;                               // 0x3d8(0x8)
	class EarthquakeSetupDataAsset*                              EarthquakeSetupDataOverride;                       // 0x3e0(0x8)
	class EarthquakeSetupDataAsset*                              SelectedEarthquakeDataForNextQuake;                // 0x3e8(0x8)
	TArray<struct EarthquakeStoryCustomisationData>              StoryCustomisationData;                            // 0x3f0(0x10)
	class Volcano*                                               AssociatedVolcano;                                 // 0x400(0x8)
	class GeyserManager*                                         AssociatedGeyserManager;                           // 0x408(0x8)
	float                                                        EarthquakeEffectInnerRadiusOffsetInMetres;         // 0x410(0x4)
	char                                                         pad0x4_9L133[0x4];                                 // 0x414(0x4)
	class WwiseObjectPoolWrapper*                                AudioPool;                                         // 0x418(0x8)
	class WwiseEvent*                                            PlayEarthquakeLarge;                               // 0x420(0x8)
	class WwiseEvent*                                            StopEarthquakeLarge;                               // 0x428(0x8)
	class WwiseEvent*                                            PlayEarthquakeSmall;                               // 0x430(0x8)
	class WwiseEvent*                                            StopEarthquakeSmall;                               // 0x438(0x8)
	struct FName                                                 EarthquakeRtpcName;                                // 0x440(0x8)
	float                                                        EarthquakeRtpcMin;                                 // 0x448(0x4)
	float                                                        EarthquakeRtpcMax;                                 // 0x44c(0x4)
	float                                                        EarthquakeSizeToUseLargeAttenuation;               // 0x450(0x4)
	char                                                         pad0x4_3RSKF[0x4];                                 // 0x454(0x4)
	class CapsuleComponent*                                      HitDetectionVolume;                                // 0x458(0x8)
	class WindZoneComponent*                                     WindZone;                                          // 0x460(0x8)
	byte                                                         EarthquakeState;                                   // 0x468(0x1)
	char                                                         pad0x14f_XLOR7[0x14f];                             // 0x469(0x14f)
};


// Size 0x10 (Full Size[0x4c8] - InheritedSize[0x4b8]
class MechanismGeyser: public Geyser
{
public:
	byte                                                         GeyserStateWhenMechanismIsInactive;                // 0x4b8(0x1)
	char                                                         pad0x7_WFU3I[0x7];                                 // 0x4b9(0x7)
	class MechanismActionComponent*                              MechanismActionComponent;                          // 0x4c0(0x8)
};


// Size 0x198 (Full Size[0x1c0] - InheritedSize[0x28]
class GeyserManagerSetupDataAsset: public DataAsset
{
public:
	bool                                                         IsEnabled;                                         // 0x28(0x1)
	char                                                         pad0x7_QXNJX[0x7];                                 // 0x29(0x7)
	struct WeightedProbabilityRangeOfRanges                      DormantDuration;                                   // 0x30(0x30)
	struct WeightedProbabilityRangeOfRanges                      ActiveDuration;                                    // 0x60(0x30)
	struct WeightedProbabilityRangeOfRanges                      DelayBetweenGeyserGroupsDuringGeyserEvent;         // 0x90(0x30)
	bool                                                         StartInactive;                                     // 0xc0(0x1)
	bool                                                         NoRestartAfterGeyserSpurtComplete;                 // 0xc1(0x1)
	bool                                                         UseUniqueLocationsForEachGeyser;                   // 0xc2(0x1)
	char                                                         pad0x1_EKZHY[0x1];                                 // 0xc3(0x1)
	float                                                        MinDistanceFromPlayerInMetres;                     // 0xc4(0x4)
	float                                                        MinGeyserSequenceSpacing;                          // 0xc8(0x4)
	char                                                         pad0x4_B0XSP[0x4];                                 // 0xcc(0x4)
	class UClass*                                                GeyserToSpawn;                                     // 0xd0(0x8)
	struct WeightedProbabilityRange                              NumGeyserGroupsToSpawn;                            // 0xd8(0x20)
	struct WeightedProbabilityRange                              NumGeysersToSpawnPerGroup;                         // 0xf8(0x20)
	struct WeightedProbabilityRangeOfRanges                      SpawnDistanceFromPlayerInMetres;                   // 0x118(0x30)
	struct WeightedProbabilityRangeOfRanges                      SpawnRadiusInMetres;                               // 0x148(0x30)
	TArray<struct GeyserSpawnAngleOption>                        SpawnAngleRelativeToPlayerDirection;               // 0x178(0x10)
	struct WeightedProbabilityRangeOfRanges                      DelayBetweenEachGeyserSpawningInAGroup;            // 0x188(0x30)
	float                                                        MaximumDensityRadiusInMetres;                      // 0x1b8(0x4)
	int                                                          MaximumDensityMaxNumGeysersWithinRadius;           // 0x1bc(0x4)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class NaturalDisasterRegistryInterface: public Interface
{
public:
};


// Size 0x80 (Full Size[0x448] - InheritedSize[0x3c8]
class GeyserManager: public Actor
{
public:
	class GeyserManagerSetupDataAsset*                           GeyserManagerSetupData;                            // 0x3c8(0x8)
	class GeyserManagerSetupDataAsset*                           GeyserManagerSetupDataOverride;                    // 0x3d0(0x8)
	class GeyserManagerSetupDataAsset*                           SelectedGeyserManagerForNextActivation;            // 0x3d8(0x8)
	TArray<struct GeyserManagerStoryCustomisationData>           StoryCustomisationData;                            // 0x3e0(0x10)
	class SceneComponent*                                        Root;                                              // 0x3f0(0x8)
	byte                                                         State;                                             // 0x3f8(0x1)
	char                                                         pad0x4f_RX824[0x4f];                               // 0x3f9(0x4f)
};


// Size 0x20 (Full Size[0x490] - InheritedSize[0x470]
class GeyserItemSpawnComponent: public ItemSpawnComponent
{
public:
	char                                                         pad0x20_2KLU9[0x20];                               // 0x470(0x20)
};


// Size 0xc0 (Full Size[0xe8] - InheritedSize[0x28]
class GeyserSetupDataAsset: public DataAsset
{
public:
	bool                                                         IsEnabled;                                         // 0x28(0x1)
	char                                                         pad0x7_ODZFO[0x7];                                 // 0x29(0x7)
	struct WeightedProbabilityRangeOfRanges                      DormantDuration;                                   // 0x30(0x30)
	struct WeightedProbabilityRangeOfRanges                      InitialWarningDuration;                            // 0x60(0x30)
	struct WeightedProbabilityRange                              NumSpurtsPerActivation;                            // 0x90(0x20)
	struct WeightedProbabilityRangeOfRanges                      TimeBetweenSpurts;                                 // 0xb0(0x30)
	bool                                                         ShouldDestroyOnDeactivation;                       // 0xe0(0x1)
	char                                                         pad0x3_U2WKZ[0x3];                                 // 0xe1(0x3)
	float                                                        DestroyAfterDeactivationDelay;                     // 0xe4(0x4)
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class LavaStatus: public StatusBase
{
public:
};


// Size 0xa8 (Full Size[0x470] - InheritedSize[0x3c8]
class LavaZone: public Actor
{
public:
	struct WeightedProbabilityRangeOfRanges                      TimeBetweenActivations;                            // 0x3c8(0x30)
	struct WeightedProbabilityRangeOfRanges                      ActiveDuration;                                    // 0x3f8(0x30)
	struct StoryFlag                                             StoryFlag;                                         // 0x428(0x8)
	class PhysicalMaterial*                                      LavaMaterial;                                      // 0x430(0x8)
	TArray<class Actor*>                                         ActorsInZone;                                      // 0x438(0x10)
	bool                                                         Active;                                            // 0x448(0x1)
	bool                                                         InitializeFromGlobalState;                         // 0x449(0x1)
	bool                                                         SelfActivating;                                    // 0x44a(0x1)
	char                                                         pad0x5_U2REJ[0x5];                                 // 0x44b(0x5)
	char                                                         pad0x20_V563B[0x20];                               // 0x450(0x20)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class VolcanoInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class VolcanoServiceInterface: public Interface
{
public:
};


// Size 0x78 (Full Size[0xc0] - InheritedSize[0x48]
class SeatStat_IslandVolcanoActive: public SeatStat
{
public:
	struct FName                                                 VolcanoIslandName;                                 // 0x48(0x8)
	char                                                         pad0x70_Z68Z0[0x70];                               // 0x50(0x70)
};


// Size 0xc0 (Full Size[0xe8] - InheritedSize[0x28]
class SuperheatedWaterSetupDataAsset: public DataAsset
{
public:
	float                                                        TimeBetweenHealthReduction;                        // 0x28(0x4)
	float                                                        MinimumWaterDepthToCauseDamage;                    // 0x2c(0x4)
	struct WeightedProbabilityRangeOfRanges                      TimeBetweenLargeSurfaceEffects;                    // 0x30(0x30)
	float                                                        LargeSurfaceEffectMinimumDistanceInMetres;         // 0x60(0x4)
	char                                                         pad0x4_6TXG0[0x4];                                 // 0x64(0x4)
	struct RandomParticleSystemPicker                            LargeSurfaceEffects;                               // 0x68(0x10)
	float                                                        EffectSpawnHeight;                                 // 0x78(0x4)
	float                                                        MurkStrengthToStartEffects;                        // 0x7c(0x4)
	struct WeightedProbabilityRangeOfRanges                      TimeBetweenSmallSurfaceEffects;                    // 0x80(0x30)
	struct WeightedProbabilityRange                              NumSmallSurfaceEffects;                            // 0xb0(0x20)
	struct DistanceThrottledRandomParticleSystemPicker           SmallSurfaceEffects;                               // 0xd0(0x10)
	float                                                        SmallSurfaceEffectNearbyPlayerRadiusInMetres;      // 0xe0(0x4)
	float                                                        SmallSurfaceEffectOffsetRadiusInMetres;            // 0xe4(0x4)
};


// Size 0x108 (Full Size[0x570] - InheritedSize[0x468]
class SuperheatedWater: public Murk
{
public:
	char                                                         pad0x10_WCXTT[0x10];                               // 0x468(0x10)
	class SuperheatedWaterSetupDataAsset*                        SetupData;                                         // 0x478(0x8)
	class CapsuleComponent*                                      HitDetectionVolume;                                // 0x480(0x8)
	float                                                        FakeUnderwaterLocationsMinDistanceInMetres;        // 0x488(0x4)
	float                                                        FakeUnderwaterLocationsDistanceBetweenPointsInMetres; // 0x48c(0x4)
	TArray<Weakclass PlayersInZone>                              PlayersInZone;                                     // 0x490(0x10)
	char                                                         pad0xd0_W8B1Z[0xd0];                               // 0x4a0(0xd0)
};


// Size 0x228 (Full Size[0x5f0] - InheritedSize[0x3c8]
class Volcano: public Actor
{
public:
	char                                                         pad0x18_EKLME[0x18];                               // 0x3c8(0x18)
	class VolcanoSetupDataAsset*                                 VolcanoSetupDataOverride;                          // 0x3e0(0x8)
	class VolcanoSetupDataAsset*                                 SelectedVolcanoDataForNextEruption;                // 0x3e8(0x8)
	TArray<struct VolcanoStoryCustomisationData>                 StoryCustomisationData;                            // 0x3f0(0x10)
	class CapsuleComponent*                                      HitDetectionVolume;                                // 0x400(0x8)
	bool                                                         UseDormantDuration;                                // 0x408(0x1)
	char                                                         pad0x7_P0UXL[0x7];                                 // 0x409(0x7)
	class VolcanoSetupDataAsset*                                 VolcanoSetupData;                                  // 0x410(0x8)
	class Murk*                                                  AssociatedSuperheatedWater;                        // 0x418(0x8)
	class LavaZone*                                              AssociatedLavaZone;                                // 0x420(0x8)
	float                                                        InnerTargetRadiusInMetres;                         // 0x428(0x4)
	float                                                        OuterTargetRadiusInMetres;                         // 0x42c(0x4)
	float                                                        NearbyPlayerRangeToFireProjectilesInMetres;        // 0x430(0x4)
	float                                                        RandomShipPositionScale;                           // 0x434(0x4)
	class ParticleSystemComponent*                               WarmingUpEmitter;                                  // 0x438(0x8)
	class ParticleSystemComponent*                               EruptingEmitter;                                   // 0x440(0x8)
	class BlendedLightingZoneComponent*                          BlendedLightingZoneComponent;                      // 0x448(0x8)
	class BlendedAtmosphericPressureZoneComponent*               BlendedAtmosphericPressureZoneComponent;           // 0x450(0x8)
	class BlendedPostProcessingRainZoneComponent*                BlendedPostProcessingRainZoneComponent;            // 0x458(0x8)
	struct Vector                                                ProjectileLaunchOffset;                            // 0x460(0xc)
	char                                                         pad0x4_BKKSA[0x4];                                 // 0x46c(0x4)
	class WwiseObjectPoolWrapper*                                AudioPool;                                         // 0x470(0x8)
	class WwiseEvent*                                            WarmupAudioPlayEvent;                              // 0x478(0x8)
	class WwiseEvent*                                            WarmupAudioStopEvent;                              // 0x480(0x8)
	class WwiseEvent*                                            EruptingAudioPlayEvent;                            // 0x488(0x8)
	class WwiseEvent*                                            EruptingAudioStopEvent;                            // 0x490(0x8)
	class CapsuleComponent*                                      InstantKillZone;                                   // 0x498(0x8)
	float                                                        InstantKillZoneTestInterval;                       // 0x4a0(0x4)
	struct VolcanoStateData                                      StateData;                                         // 0x4a4(0xc)
	struct FName                                                 AssociatedIslandName;                              // 0x4b0(0x8)
	char                                                         pad0x138_IE7CV[0x138];                             // 0x4b8(0x138)
};


// Size 0x58 (Full Size[0x80] - InheritedSize[0x28]
class VolcanoService: public Object
{
public:
	char                                                         pad0x58_YNE3H[0x58];                               // 0x28(0x58)
};


}