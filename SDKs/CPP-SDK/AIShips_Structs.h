// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x50
struct AIShipBattleParams
{
public:
	struct FText                                                 Name;                                              // 0x0(0x38)
	class UClass*                                                SeaId;                                             // 0x38(0x8)
	struct Vector2D                                              Location;                                          // 0x40(0x8)
	float                                                        Radius;                                            // 0x48(0x4)
	char                                                         pad0x4_18SHK[0x4];                                 // 0x4c(0x4)
};


// Size 0x38
struct ShipMovementParams
{
public:
	float                                                        MinTargetDistanceForMovement;                      // 0x0(0x4)
	float                                                        MaxTurnAngle;                                      // 0x4(0x4)
	float                                                        MaxTurnAngleForObstacleAvoidance;                  // 0x8(0x4)
	float                                                        MaxTurnAngleForPlayerShipObstacleAvoidance;        // 0xc(0x4)
	float                                                        MinTurnSpeedScaler;                                // 0x10(0x4)
	float                                                        MaxSpeed;                                          // 0x14(0x4)
	float                                                        MinSpeed;                                          // 0x18(0x4)
	float                                                        TimeToAccelerateFromZeroToMaxSpeed;                // 0x1c(0x4)
	float                                                        TimeToAccelerateFromZeroToMaxTurnSpeed;            // 0x20(0x4)
	float                                                        MoveBackwardsAngleThreshold;                       // 0x24(0x4)
	float                                                        MoveBackwardsDistanceThreshold;                    // 0x28(0x4)
	float                                                        MoveBackwardsShipSpeedThreshold;                   // 0x2c(0x4)
	float                                                        MaxObstacleAvoidanceOverrideDistance;              // 0x30(0x4)
	float                                                        ShipHalfLength;                                    // 0x34(0x4)
};


// Size 0x18
struct TrackingNoiseGenerator
{
public:
	class CurveFloat*                                            ParallelOffsetCurve;                               // 0x0(0x8)
	float                                                        OscillationTime;                                   // 0x8(0x4)
	char                                                         pad0xc_WGAYI[0xc];                                 // 0xc(0xc)
};


// Size 0x20
struct WeightedAIShipCrewAmmoType
{
public:
	int                                                          Weight;                                            // 0x0(0x4)
	char                                                         pad0x4_OPVDR[0x4];                                 // 0x4(0x4)
	struct AIShipCrewAmmoType                                    Params;                                            // 0x8(0x18)
};


// Size 0x18
struct AIShipCrewAmmoType
{
public:
	byte                                                         IconType;                                          // 0x0(0x1)
	struct StringAssetReference                                  AmmoType;                                          // 0x8(0x10)
};


// Size 0x28
struct WeightedAIShipCrewFormType
{
public:
	int                                                          Weight;                                            // 0x0(0x4)
	char                                                         pad0x4_XIAEK[0x4];                                 // 0x4(0x4)
	struct AIShipCrewFormType                                    Params;                                            // 0x8(0x20)
};


// Size 0x20
struct AIShipCrewFormType
{
public:
	byte                                                         IconType;                                          // 0x0(0x1)
	char                                                         pad0x3_NLZR5[0x3];                                 // 0x1(0x3)
	struct Color                                                 IconColour;                                        // 0x4(0x4)
	struct StringAssetReference                                  Form;                                              // 0x10(0x10)
};


// Size 0x14
struct AIShipContextDescDamageParams
{
public:
	float                                                        OverrideRainFillRate;                              // 0x0(0x4)
	bool                                                         OverrideRepairTime;                                // 0x4(0x1)
	char                                                         pad0x3_RYBBM[0x3];                                 // 0x5(0x3)
	float                                                        RepairTimeMultiplier;                              // 0x8(0x4)
	bool                                                         OverrideLeakAmounts;                               // 0xc(0x1)
	char                                                         pad0x3_09NDT[0x3];                                 // 0xd(0x3)
	float                                                        LeakAmountMultiplier;                              // 0x10(0x4)
};


// Size 0x10
struct AIShipSailData
{
public:
	struct Color                                                 SailRGB;                                           // 0x0(0x4)
	struct Color                                                 IconRGB;                                           // 0x4(0x4)
	int                                                          CrewIndex;                                         // 0x8(0x4)
	int                                                          CursedCannonballIndex;                             // 0xc(0x4)
};


// Size 0x20
struct AIShipEncounterParamsSpawnerData
{
public:
	class AISpawner*                                             Spawner;                                           // 0x0(0x8)
	struct FName                                                 SpawnLocationType;                                 // 0x8(0x8)
	byte                                                         ShipPlayerTrackerType;                             // 0x10(0x1)
	char                                                         pad0x3_UTZ1I[0x3];                                 // 0x11(0x3)
	struct FName                                                 CaptainName;                                       // 0x14(0x8)
	bool                                                         CanRepairDamage;                                   // 0x1c(0x1)
	bool                                                         CanUseCannons;                                     // 0x1d(0x1)
	bool                                                         IsCaptain;                                         // 0x1e(0x1)
	bool                                                         BelowDeck;                                         // 0x1f(0x1)
};


// Size 0x80
struct AIShipContextDescGenerationParams
{
public:
	struct AIShipContextDescGenerationSharedParams               SharedParams;                                      // 0x0(0x60)
	TArray<struct AIShipContextDescGenerationSharedParams>       EncounterSpecificParams;                           // 0x60(0x10)
	TArray<struct AIShipContextDescGenerationShipSpecificParams> ShipSpecificParams;                                // 0x70(0x10)
};


// Size 0x30
struct AIShipContextDescGenerationShipSpecificParams
{
public:
	class UClass*                                                ShipSize;                                          // 0x0(0x8)
	class ShipDescAsset*                                         ShipDesc;                                          // 0x8(0x8)
	TArray<struct AIShipGenerationParams>                        ShipGenerationParams;                              // 0x10(0x10)
	TArray<struct AIShipEncounterParamsSpawnerData>              SpawnerTemplates;                                  // 0x20(0x10)
};


// Size 0x48
struct AIShipGenerationParams
{
public:
	byte                                                         EncounterType;                                     // 0x0(0x1)
	byte                                                         ShipType;                                          // 0x1(0x1)
	char                                                         pad0x6_3OD2C[0x6];                                 // 0x2(0x6)
	class AthenaAIShipControllerParamsDataAsset*                 ShipControllerParams;                              // 0x8(0x8)
	TArray<struct AIShipSkeletonSkillsetOverride>                SkillsetOverrides;                                 // 0x10(0x10)
	TArray<struct WeightedAIShipCrewAmmoType>                    SkeletonAmmoTypeOverrides;                         // 0x20(0x10)
	struct AIShipContextDescDamageParams                         DamageParams;                                      // 0x30(0x14)
	char                                                         pad0x4_E9VOG[0x4];                                 // 0x44(0x4)
};


// Size 0x18
struct AIShipSkeletonSkillsetOverride
{
public:
	struct FName                                                 SpawnLocationType;                                 // 0x0(0x8)
	struct StringAssetReference                                  Skillset;                                          // 0x8(0x10)
};


// Size 0x60
struct AIShipContextDescGenerationSharedParams
{
public:
	TArray<Byte EncounterTypes>                                  EncounterTypes;                                    // 0x0(0x10)
	TArray<struct WeightedAIShipCrewFormType>                    SkeletonForms;                                     // 0x10(0x10)
	TArray<struct WeightedAIShipCrewAmmoType>                    SkeletonAmmoTypes;                                 // 0x20(0x10)
	TArray<struct Color>                                         SailColours;                                       // 0x30(0x10)
	TArray<struct AIShipCaptainParams>                           Captains;                                          // 0x40(0x10)
	TArray<class Class*>                                         CaptainGenders;                                    // 0x50(0x10)
};


// Size 0x10
struct AIShipCaptainParams
{
public:
	class UClass*                                                AIClassId;                                         // 0x0(0x8)
	struct FName                                                 Name;                                              // 0x8(0x8)
};


// Size 0x18
struct AIShipSizeDynamicContexts
{
public:
	class UClass*                                                ShipSize;                                          // 0x0(0x8)
	TArray<class AIShipContextDescDataAsset*>                    AIShipsInPool;                                     // 0x8(0x10)
};


// Size 0x10
struct AIShipSingleWaveEncounterDescGenerationParams
{
public:
	TArray<struct AIShipClassWeightedSizes>                      ShipClassWeightedSizes;                            // 0x0(0x10)
};


// Size 0x18
struct AIShipClassWeightedSizes
{
public:
	class UClass*                                                TargetShipSize;                                    // 0x0(0x8)
	TArray<struct AIShipWeightedSize>                            ShipSizes;                                         // 0x8(0x10)
};


// Size 0x18
struct AIShipWeightedSize
{
public:
	struct FName                                                 Feature;                                           // 0x0(0x8)
	int                                                          Weight;                                            // 0x8(0x4)
	char                                                         pad0x4_XFC5L[0x4];                                 // 0xc(0x4)
	class UClass*                                                ShipSize;                                          // 0x10(0x8)
};


// Size 0x80
struct AIShipBattleEncounterDescGenerationParams
{
public:
	bool                                                         EnableHardShip;                                    // 0x0(0x1)
	char                                                         pad0x7_H4Z84[0x7];                                 // 0x1(0x7)
	TArray<struct FeatureLockedAIShipEncounterBattleGenerationParams> BattleGenerationParams;                            // 0x8(0x10)
	TArray<struct AIShipEncounterBattleDesc>                     BattleDescs;                                       // 0x18(0x10)
	struct AIShipEncounterDynamicBalancingDesc                   DynamicBalancingDesc;                              // 0x28(0x58)
};


// Size 0x58
struct AIShipEncounterDynamicBalancingDesc
{
public:
	bool                                                         UseDynamicBalancing;                               // 0x0(0x1)
	char                                                         pad0x3_D7ACL[0x3];                                 // 0x1(0x3)
	float                                                        InitialWaveGenEncounterRadiusMultiplier;           // 0x4(0x4)
	class UClass*                                                HardShipType;                                      // 0x8(0x8)
	TArray<struct AIShipEncounterDynamicBalancingPlayerShipValueDesc> PlayerShipSizeValues;                              // 0x10(0x10)
	int                                                          PlayerValue;                                       // 0x20(0x4)
	char                                                         pad0x4_SJOCE[0x4];                                 // 0x24(0x4)
	TArray<struct AIShipEncounterDynamicBalancingWaveConfigCostDesc> DynamicWaveCostConfigurations;                     // 0x28(0x10)
	TArray<struct AIShipEncounterDynamicBalancingCrewStrengthToTargetWaveDesc> PlayerCrewStrengthTargetWaveMapping;               // 0x38(0x10)
	TArray<struct AIShipEncounterDynamicBalancingPoolSizeDesc>   DynamicShipSizePools;                              // 0x48(0x10)
};


// Size 0x10
struct AIShipEncounterDynamicBalancingPoolSizeDesc
{
public:
	class UClass*                                                ShipSize;                                          // 0x0(0x8)
	int                                                          PoolSize;                                          // 0x8(0x4)
	char                                                         pad0x4_BV3S8[0x4];                                 // 0xc(0x4)
};


// Size 0x10
struct AIShipEncounterDynamicBalancingCrewStrengthToTargetWaveDesc
{
public:
	int                                                          MinCrewStrength;                                   // 0x0(0x4)
	int                                                          MinWaveStrength;                                   // 0x4(0x4)
	int                                                          MaxWaveStrength;                                   // 0x8(0x4)
	int                                                          WaveCountIncrement;                                // 0xc(0x4)
};


// Size 0x18
struct AIShipEncounterDynamicBalancingWaveConfigCostDesc
{
public:
	TArray<class Class*>                                         ShipSizes;                                         // 0x0(0x10)
	int                                                          WaveCost;                                          // 0x10(0x4)
	char                                                         pad0x4_T7JAY[0x4];                                 // 0x14(0x4)
};


// Size 0x10
struct AIShipEncounterDynamicBalancingPlayerShipValueDesc
{
public:
	class UClass*                                                ShipSize;                                          // 0x0(0x8)
	int                                                          ShipValue;                                         // 0x8(0x4)
	char                                                         pad0x4_YR431[0x4];                                 // 0xc(0x4)
};


// Size 0x10
struct AIShipEncounterBattleDesc
{
public:
	TArray<struct AIShipEncounterWaveDesc>                       WaveDescs;                                         // 0x0(0x10)
};


// Size 0x10
struct AIShipEncounterWaveDesc
{
public:
	TArray<class Class*>                                         ShipSizes;                                         // 0x0(0x10)
};


// Size 0x78
struct FeatureLockedAIShipEncounterBattleGenerationParams
{
public:
	struct FName                                                 Feature;                                           // 0x0(0x8)
	struct AIShipEncounterBattleGenerationParams                 Params;                                            // 0x8(0x60)
	char                                                         pad0x10_FWKUX[0x10];                               // 0x68(0x10)
};


// Size 0x60
struct AIShipEncounterBattleGenerationParams
{
public:
	class UClass*                                                HardShipType;                                      // 0x0(0x8)
	struct WeightedProbabilityRange                              NumberOfWaves;                                     // 0x8(0x20)
	struct Int32Range                                            MinMaxNumberOfShips;                               // 0x28(0x10)
	int                                                          MinNumberOfShipsInFinalWave;                       // 0x38(0x4)
	char                                                         pad0x4_KFLD2[0x4];                                 // 0x3c(0x4)
	TArray<struct AIShipSizeLimit>                               ShipSizeLimits;                                    // 0x40(0x10)
	TArray<struct AIShipEncounterWaveDesc>                       WaveConfigurations;                                // 0x50(0x10)
};


// Size 0x10
struct AIShipSizeLimit
{
public:
	class UClass*                                                ShipSize;                                          // 0x0(0x8)
	int                                                          MaxInstances;                                      // 0x8(0x4)
	char                                                         pad0x4_DARWB[0x4];                                 // 0xc(0x4)
};


// Size 0xa0
struct RelativeSpawnLocationGeneratorParams
{
public:
	TArray<struct WeightedSpawnDirection>                        SpawnDirections;                                   // 0x0(0x10)
	char                                                         pad0x90_ORQ6Z[0x90];                               // 0x10(0x90)
};


// Size 0xb0
struct WeightedSpawnDirection
{
public:
	float                                                        DirectionAngle;                                    // 0x0(0x4)
	float                                                        DirectionWidth;                                    // 0x4(0x4)
	float                                                        Weight;                                            // 0x8(0x4)
	char                                                         pad0x4_J9B0C[0x4];                                 // 0xc(0x4)
	TArray<struct WeightedSpawnOffset>                           SpawnOffsets;                                      // 0x10(0x10)
	char                                                         pad0x90_VOGKU[0x90];                               // 0x20(0x90)
};


// Size 0x40
struct WeightedSpawnOffset
{
public:
	float                                                        MinSpawnDistance;                                  // 0x0(0x4)
	float                                                        MaxSpawnDistance;                                  // 0x4(0x4)
	float                                                        Weight;                                            // 0x8(0x4)
	char                                                         pad0x4_EIAKQ[0x4];                                 // 0xc(0x4)
	struct WeightedProbabilityRangeOfRanges                      SpawnRotations;                                    // 0x10(0x30)
};


// Size 0x28
struct AIShipEncounterParams
{
public:
	int                                                          SaferSeasRollChance;                               // 0x0(0x4)
	float                                                        MinEngagedDistanceFromPlayers;                     // 0x4(0x4)
	struct FString                                               MinEngagedDistanceFromPlayersRemoteConfigKey;      // 0x8(0x10)
	TArray<struct ShipTypeAIShipEncounterParams>                 ShipTypeParams;                                    // 0x18(0x10)
};


// Size 0x10
struct ShipTypeAIShipEncounterParams
{
public:
	class UClass*                                                ShipSize;                                          // 0x0(0x8)
	class AIShipEncounterParamsDataAsset*                        Params;                                            // 0x8(0x8)
};


// Size 0x10
struct EventTypeAIShipEncounterParams
{
public:
	class UClass*                                                EventType;                                         // 0x0(0x8)
	class AIShipEncounterParamsDataAsset*                        Params;                                            // 0x8(0x8)
};


// Size 0x10
struct AIShipEncounterWave
{
public:
	TArray<class AIShipContextDescDataAsset*>                    AIShipsInWave;                                     // 0x0(0x10)
};


// Size 0x80
struct CursedSailsBattleParams
{
public:
	struct FText                                                 Name;                                              // 0x0(0x38)
	struct FText                                                 SkellyCrewName;                                    // 0x38(0x38)
	byte                                                         CannonBallType;                                    // 0x70(0x1)
	byte                                                         SkellyType;                                        // 0x71(0x1)
	char                                                         pad0x6_ULZ1T[0x6];                                 // 0x72(0x6)
	class AIShipEncounterDesc*                                   EncounterDescription;                              // 0x78(0x8)
};


// Size 0x20
struct AIShipEncounterDynamicWaveNetworkEvent
{
public:
	char                                                         pad0x20_ID8EV[0x20];                               // 0x0(0x20)
};


// Size 0x10
struct AIShipDespawnedEvent
{
public:
	class Actor*                                                 Ship;                                              // 0x0(0x8)
	byte                                                         ShipDestructionReason;                             // 0x8(0x1)
	char                                                         pad0x7_JUREJ[0x7];                                 // 0x9(0x7)
};


// Size 0x40
struct AIShipSpawnedEvent
{
public:
	class Ship*                                                  Ship;                                              // 0x0(0x8)
	struct Guid                                                  SpawningCrew;                                      // 0x8(0x10)
	struct Guid                                                  SpawningEventId;                                   // 0x18(0x10)
	struct Guid                                                  SpawnConfigId;                                     // 0x28(0x10)
	int                                                          Wave;                                              // 0x38(0x4)
	char                                                         pad0x4_QJ56Z[0x4];                                 // 0x3c(0x4)
};


// Size 0x10
struct AIShipSinkNetworkEvent
{
public:
	char                                                         pad0x10_H63AC[0x10];                               // 0x0(0x10)
};


// Size 0x10
struct AIShipSpawnedNetworkEvent
{
public:
	char                                                         pad0x10_FN1XY[0x10];                               // 0x0(0x10)
};


// Size 0x18
struct AIShipEncounterCompleteNetEvent
{
public:
	char                                                         pad0x10_MK7VV[0x10];                               // 0x0(0x10)
	int                                                          BattleIdx;                                         // 0x10(0x4)
	byte                                                         CannonballIconType;                                // 0x14(0x1)
	byte                                                         SkellyFormIconType;                                // 0x15(0x1)
	char                                                         pad0x2_GE6XU[0x2];                                 // 0x16(0x2)
};


// Size 0x20
struct AIShipEncounterRevealNetEvent
{
public:
	char                                                         pad0x10_TYMVP[0x10];                               // 0x0(0x10)
	int                                                          BattleIdx;                                         // 0x10(0x4)
	int                                                          SkellyCrewIdx;                                     // 0x14(0x4)
	byte                                                         CannonballIconType;                                // 0x18(0x1)
	byte                                                         SkellyFormIconType;                                // 0x19(0x1)
	char                                                         pad0x6_X8DHD[0x6];                                 // 0x1a(0x6)
};


// Size 0x80
struct AIShipEncounterNotification
{
public:
	struct FText                                                 BattleName;                                        // 0x0(0x38)
	struct FName                                                 SeaName;                                           // 0x38(0x8)
	struct FText                                                 SkellyCrewName;                                    // 0x40(0x38)
	byte                                                         CannonBallType;                                    // 0x78(0x1)
	byte                                                         SkellyType;                                        // 0x79(0x1)
	char                                                         pad0x6_DCKAQ[0x6];                                 // 0x7a(0x6)
};


// Size 0x10
struct AIShipEncounterZoneExitedNetworkEvent
{
public:
	char                                                         pad0x10_Y80Z0[0x10];                               // 0x0(0x10)
};


// Size 0x20
struct AIShipEncounterZoneEnteredNetworkEvent
{
public:
	char                                                         pad0x10_NOH1K[0x10];                               // 0x0(0x10)
	int                                                          RemainingAIShips;                                  // 0x10(0x4)
	int                                                          TotalAIShips;                                      // 0x14(0x4)
	int                                                          TotalAIShipsInFinalWave;                           // 0x18(0x4)
	int                                                          CurrentSpawnedAIShips;                             // 0x1c(0x4)
};


// Size 0x18
struct AIShipWorldSettings
{
public:
	TArray<struct FeatureLockedAIShipBattles>                    FeatureToggledBattlesData;                         // 0x0(0x10)
	class AIShipBattlesDataAsset*                                DefaultBattlesData;                                // 0x10(0x8)
};


// Size 0x18
struct FeatureLockedAIShipBattles
{
public:
	struct FeatureFlag                                           Feature;                                           // 0x0(0xc)
	char                                                         pad0x4_7Q3RU[0x4];                                 // 0xc(0x4)
	class AIShipBattlesDataAsset*                                BattlesData;                                       // 0x10(0x8)
};


// Size 0x18
struct AIShipEncounterDynamicWaveShipSpawnedTelemetryEvent
{
public:
	struct Guid                                                  EncounterId;                                       // 0x0(0x10)
	int                                                          WaveIndex;                                         // 0x10(0x4)
	float                                                        TimeToSpawn;                                       // 0x14(0x4)
};


// Size 0x1c
struct AIShipEncounterDynamicWaveTelemetryEvent
{
public:
	struct Guid                                                  EncounterId;                                       // 0x0(0x10)
	int                                                          WaveIndex;                                         // 0x10(0x4)
	int                                                          CrewStrength;                                      // 0x14(0x4)
	int                                                          WaveCost;                                          // 0x18(0x4)
};


// Size 0x48
struct AIShipDamagedTelemetryEvent
{
public:
	struct FString                                               DamageType;                                        // 0x0(0x10)
	struct Vector                                                DamageLocation;                                    // 0x10(0xc)
	char                                                         pad0x4_PDIIT[0x4];                                 // 0x1c(0x4)
	struct FString                                               DamagedShipPart;                                   // 0x20(0x10)
	int                                                          DamageLevel;                                       // 0x30(0x4)
	struct Guid                                                  AttackId;                                          // 0x34(0x10)
	char                                                         pad0x4_20Q0X[0x4];                                 // 0x44(0x4)
};


// Size 0x18
struct AIShipDespawnTelemetryEvent
{
public:
	struct FString                                               AIShipId;                                          // 0x0(0x10)
	byte                                                         AIShipDestructionReason;                           // 0x10(0x1)
	char                                                         pad0x7_FGBM0[0x7];                                 // 0x11(0x7)
};


// Size 0x70
struct AIShipSpawnTelemetryEvent
{
public:
	struct FString                                               AIShipId;                                          // 0x0(0x10)
	struct FString                                               SpawningCrewId;                                    // 0x10(0x10)
	struct FString                                               AIShipBattleId;                                    // 0x20(0x10)
	struct FString                                               AIShipType;                                        // 0x30(0x10)
	struct Guid                                                  SpawnConfigId;                                     // 0x40(0x10)
	struct FString                                               AIShipSize;                                        // 0x50(0x10)
	struct Vector                                                SpawnLocation;                                     // 0x60(0xc)
	int                                                          AIShipWaveIndex;                                   // 0x6c(0x4)
};


}