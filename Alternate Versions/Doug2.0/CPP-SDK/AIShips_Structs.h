namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x48
class AIShipBattleParams: public None
{
public:
	Struct FText                                       Name                                               // 0x0(0x38)
	Struct Vector2D                                    Location                                           // 0x38(0x8)
	float                                              Radius                                             // 0x40(0x4)
};


// Size 0x34
class ShipMovementParams: public None
{
public:
	float                                              MinTargetDistanceForMovement                       // 0x0(0x4)
	float                                              MaxTurnAngle                                       // 0x4(0x4)
	float                                              MaxTurnAngleForObstacleAvoidance                   // 0x8(0x4)
	float                                              MaxTurnAngleForPlayerShipObstacleAvoidance         // 0xc(0x4)
	float                                              MinTurnSpeedScaler                                 // 0x10(0x4)
	float                                              MaxSpeed                                           // 0x14(0x4)
	float                                              MinSpeed                                           // 0x18(0x4)
	float                                              TimeToAccelerateFromZeroToMaxSpeed                 // 0x1c(0x4)
	float                                              TimeToAccelerateFromZeroToMaxTurnSpeed             // 0x20(0x4)
	float                                              MoveBackwardsAngleThreshold                        // 0x24(0x4)
	float                                              MoveBackwardsDistanceThreshold                     // 0x28(0x4)
	float                                              MoveBackwardsShipSpeedThreshold                    // 0x2c(0x4)
	float                                              MaxObstacleAvoidanceOverrideDistance               // 0x30(0x4)
};


// Size 0x18
class TrackingNoiseGenerator: public None
{
public:
	Class CurveFloat*                                  ParallelOffsetCurve                                // 0x0(0x8)
	float                                              OscillationTime                                    // 0x8(0x4)
};


// Size 0x20
class WeightedAIShipCrewAmmoType: public None
{
public:
	int                                                Weight                                             // 0x0(0x4)
	Struct AIShipCrewAmmoType                          Params                                             // 0x8(0x18)
};


// Size 0x18
class AIShipCrewAmmoType: public None
{
public:
	byte                                               IconType                                           // 0x0(0x1)
	Struct StringAssetReference                        AmmoType                                           // 0x8(0x10)
};


// Size 0x28
class WeightedAIShipCrewFormType: public None
{
public:
	int                                                Weight                                             // 0x0(0x4)
	Struct AIShipCrewFormType                          Params                                             // 0x8(0x20)
};


// Size 0x20
class AIShipCrewFormType: public None
{
public:
	byte                                               IconType                                           // 0x0(0x1)
	Struct Color                                       IconColour                                         // 0x4(0x4)
	Struct StringAssetReference                        Form                                               // 0x10(0x10)
};


// Size 0x14
class AIShipContextDescDamageParams: public None
{
public:
	float                                              OverrideRainFillRate                               // 0x0(0x4)
	bool                                               OverrideRepairTime                                 // 0x4(0x1)
	float                                              RepairTimeMultiplier                               // 0x8(0x4)
	bool                                               OverrideLeakAmounts                                // 0xc(0x1)
	float                                              LeakAmountMultiplier                               // 0x10(0x4)
};


// Size 0x10
class AIShipSailData: public None
{
public:
	Struct Color                                       SailRGB                                            // 0x0(0x4)
	Struct Color                                       IconRGB                                            // 0x4(0x4)
	int                                                CrewIndex                                          // 0x8(0x4)
	int                                                CursedCannonballIndex                              // 0xc(0x4)
};


// Size 0x20
class AIShipEncounterParamsSpawnerData: public None
{
public:
	Class AISpawner*                                   Spawner                                            // 0x0(0x8)
	struct FName                                       SpawnLocationType                                  // 0x8(0x8)
	byte                                               ShipPlayerTrackerType                              // 0x10(0x1)
	struct FName                                       CaptainName                                        // 0x14(0x8)
	bool                                               CanRepairDamage                                    // 0x1c(0x1)
	bool                                               CanUseCannons                                      // 0x1d(0x1)
	bool                                               IsCaptain                                          // 0x1e(0x1)
	bool                                               BelowDeck                                          // 0x1f(0x1)
};


// Size 0x80
class AIShipContextDescGenerationParams: public None
{
public:
	Struct AIShipContextDescGenerationSharedParams     SharedParams                                       // 0x0(0x60)
	TArray<Struct AIShipContextDescGenerationSharedParams> EncounterSpecificParams                            // 0x60(0x10)
	TArray<Struct AIShipContextDescGenerationShipSpecificParams> ShipSpecificParams                                 // 0x70(0x10)
};


// Size 0x30
class AIShipContextDescGenerationShipSpecificParams: public None
{
public:
	class                                              ShipSize                                           // 0x0(0x8)
	Class ShipDescAsset*                               ShipDesc                                           // 0x8(0x8)
	TArray<Struct AIShipGenerationParams>              ShipGenerationParams                               // 0x10(0x10)
	TArray<Struct ShipGenerationParams>                SpawnerTemplates                                   // 0x20(0x10)
};


// Size 0x48
class AIShipGenerationParams: public None
{
public:
	byte                                               EncounterType                                      // 0x0(0x1)
	byte                                               ShipType                                           // 0x1(0x1)
	Class AthenaAIShipControllerParamsDataAsset*       ShipControllerParams                               // 0x8(0x8)
	TArray<Struct AIShipSkeletonSkillsetOverride>      SkillsetOverrides                                  // 0x10(0x10)
	TArray<Struct SkillsetOverrides>                   SkeletonAmmoTypeOverrides                          // 0x20(0x10)
	Struct AIShipContextDescDamageParams               DamageParams                                       // 0x30(0x14)
};


// Size 0x18
class AIShipSkeletonSkillsetOverride: public None
{
public:
	struct FName                                       SpawnLocationType                                  // 0x0(0x8)
	Struct StringAssetReference                        Skillset                                           // 0x8(0x10)
};


// Size 0x60
class AIShipContextDescGenerationSharedParams: public None
{
public:
	TArray<Byte SharedParams>                          EncounterTypes                                     // 0x0(0x10)
	TArray<Struct EncounterTypes>                      SkeletonForms                                      // 0x10(0x10)
	TArray<Struct SkeletonForms>                       SkeletonAmmoTypes                                  // 0x20(0x10)
	TArray<Struct SkeletonAmmoTypes>                   SailColours                                        // 0x30(0x10)
	TArray<Struct AIShipCaptainParams>                 Captains                                           // 0x40(0x10)
	TArray<Class Captains>                             CaptainGenders                                     // 0x50(0x10)
};


// Size 0x10
class AIShipCaptainParams: public None
{
public:
	class                                              AIClassId                                          // 0x0(0x8)
	struct FName                                       Name                                               // 0x8(0x8)
};


// Size 0x10
class AIShipSingleWaveEncounterDescGenerationParams: public None
{
public:
	TArray<Struct AIShipClassWeightedSizes>            ShipClassWeightedSizes                             // 0x0(0x10)
};


// Size 0x18
class AIShipClassWeightedSizes: public None
{
public:
	class                                              TargetShipSize                                     // 0x0(0x8)
	TArray<Struct AIShipWeightedSize>                  ShipSizes                                          // 0x8(0x10)
};


// Size 0x18
class AIShipWeightedSize: public None
{
public:
	struct FName                                       Feature                                            // 0x0(0x8)
	int                                                Weight                                             // 0x8(0x4)
	class                                              ShipSize                                           // 0x10(0x8)
};


// Size 0x28
class AIShipBattleEncounterDescGenerationParams: public None
{
public:
	bool                                               EnableHardShip                                     // 0x0(0x1)
	TArray<Struct FeatureLockedAIShipEncounterBattleGenerationParams> BattleGenerationParams                             // 0x8(0x10)
	TArray<Struct AIShipEncounterBattleDesc>           BattleDescs                                        // 0x18(0x10)
};


// Size 0x10
class AIShipEncounterBattleDesc: public None
{
public:
	TArray<Struct AIShipEncounterWaveDesc>             WaveDescs                                          // 0x0(0x10)
};


// Size 0x10
class AIShipEncounterWaveDesc: public None
{
public:
	TArray<Class BattleGenerationParams>               ShipSizes                                          // 0x0(0x10)
};


// Size 0x78
class FeatureLockedAIShipEncounterBattleGenerationParams: public None
{
public:
	struct FName                                       Feature                                            // 0x0(0x8)
	Struct AIShipEncounterBattleGenerationParams       Params                                             // 0x8(0x60)
};


// Size 0x60
class AIShipEncounterBattleGenerationParams: public None
{
public:
	class                                              HardShipType                                       // 0x0(0x8)
	Struct WeightedProbabilityRange                    NumberOfWaves                                      // 0x8(0x20)
	Struct Int32Range                                  MinMaxNumberOfShips                                // 0x28(0x10)
	int                                                MinNumberOfShipsInFinalWave                        // 0x38(0x4)
	TArray<Struct AIShipSizeLimit>                     ShipSizeLimits                                     // 0x40(0x10)
	TArray<Struct ShipSizeLimits>                      WaveConfigurations                                 // 0x50(0x10)
};


// Size 0x10
class AIShipSizeLimit: public None
{
public:
	class                                              ShipSize                                           // 0x0(0x8)
	int                                                MaxInstances                                       // 0x8(0x4)
};


// Size 0xa0
class RelativeSpawnLocationGeneratorParams: public None
{
public:
	TArray<Struct WeightedSpawnDirection>              SpawnDirections                                    // 0x0(0x10)
};


// Size 0xb0
class WeightedSpawnDirection: public None
{
public:
	float                                              DirectionAngle                                     // 0x0(0x4)
	float                                              DirectionWidth                                     // 0x4(0x4)
	float                                              Weight                                             // 0x8(0x4)
	TArray<Struct WeightedSpawnOffset>                 SpawnOffsets                                       // 0x10(0x10)
};


// Size 0x40
class WeightedSpawnOffset: public None
{
public:
	float                                              MinSpawnDistance                                   // 0x0(0x4)
	float                                              MaxSpawnDistance                                   // 0x4(0x4)
	float                                              Weight                                             // 0x8(0x4)
	Struct WeightedProbabilityRangeOfRanges            SpawnRotations                                     // 0x10(0x30)
};


// Size 0x18
class AIShipEncounterParams: public None
{
public:
	float                                              MinEngagedDistanceFromPlayers                      // 0x0(0x4)
	TArray<Struct ShipTypeAIShipEncounterParams>       ShipTypeParams                                     // 0x8(0x10)
};


// Size 0x10
class ShipTypeAIShipEncounterParams: public None
{
public:
	class                                              ShipSize                                           // 0x0(0x8)
	Class AIShipEncounterParamsDataAsset*              Params                                             // 0x8(0x8)
};


// Size 0x10
class AIShipEncounterWave: public None
{
public:
	TArray<class AIShipsInWave*>                       AIShipsInWave                                      // 0x0(0x10)
};


// Size 0x80
class CursedSailsBattleParams: public None
{
public:
	Struct FText                                       Name                                               // 0x0(0x38)
	Struct FText                                       SkellyCrewName                                     // 0x38(0x38)
	byte                                               CannonBallType                                     // 0x70(0x1)
	byte                                               SkellyType                                         // 0x71(0x1)
	Class AIShipEncounterDesc*                         EncounterDescription                               // 0x78(0x8)
};


// Size 0x10
class AIShipDespawnedEvent: public None
{
public:
	Class Actor*                                       Ship                                               // 0x0(0x8)
	byte                                               ShipDestructionReason                              // 0x8(0x1)
};


// Size 0x40
class AIShipSpawnedEvent: public None
{
public:
	Class Ship*                                        Ship                                               // 0x0(0x8)
	Struct Guid                                        SpawningCrew                                       // 0x8(0x10)
	Struct Guid                                        SpawningEventId                                    // 0x18(0x10)
	Struct Guid                                        SpawnConfigId                                      // 0x28(0x10)
	int                                                Wave                                               // 0x38(0x4)
};


// Size 0x10
class AIShipSinkNetworkEvent: public None
{
public:
};


// Size 0x10
class AIShipSpawnedNetworkEvent: public None
{
public:
};


// Size 0x18
class AIShipEncounterCompleteNetEvent: public None
{
public:
	int                                                BattleIdx                                          // 0x10(0x4)
	byte                                               CannonballIconType                                 // 0x14(0x1)
	byte                                               SkellyFormIconType                                 // 0x15(0x1)
};


// Size 0x20
class AIShipEncounterRevealNetEvent: public None
{
public:
	int                                                BattleIdx                                          // 0x10(0x4)
	int                                                SkellyCrewIdx                                      // 0x14(0x4)
	byte                                               CannonballIconType                                 // 0x18(0x1)
	byte                                               SkellyFormIconType                                 // 0x19(0x1)
};


// Size 0x80
class AIShipEncounterNotification: public None
{
public:
	Struct FText                                       BattleName                                         // 0x0(0x38)
	struct FName                                       SeaName                                            // 0x38(0x8)
	Struct FText                                       SkellyCrewName                                     // 0x40(0x38)
	byte                                               CannonBallType                                     // 0x78(0x1)
	byte                                               SkellyType                                         // 0x79(0x1)
};


// Size 0x10
class AIShipEncounterZoneExitedNetworkEvent: public None
{
public:
};


// Size 0x20
class AIShipEncounterZoneEnteredNetworkEvent: public None
{
public:
	int                                                RemainingAIShips                                   // 0x10(0x4)
	int                                                TotalAIShips                                       // 0x14(0x4)
	int                                                TotalAIShipsInFinalWave                            // 0x18(0x4)
};


// Size 0x18
class AIShipWorldSettings: public None
{
public:
	TArray<Struct FeatureLockedAIShipBattles>          FeatureToggledBattlesData                          // 0x0(0x10)
	Class AIShipBattlesDataAsset*                      DefaultBattlesData                                 // 0x10(0x8)
};


// Size 0x10
class FeatureLockedAIShipBattles: public None
{
public:
	Struct FeatureFlag                                 Feature                                            // 0x0(0x8)
	Class AIShipBattlesDataAsset*                      BattlesData                                        // 0x8(0x8)
};


// Size 0x48
class AIShipDamagedTelemetryEvent: public None
{
public:
	Struct FString                                     DamageType                                         // 0x0(0x10)
	Struct Vector                                      DamageLocation                                     // 0x10(0xc)
	Struct FString                                     DamagedShipPart                                    // 0x20(0x10)
	int                                                DamageLevel                                        // 0x30(0x4)
	Struct Guid                                        AttackId                                           // 0x34(0x10)
};


// Size 0x18
class AIShipDespawnTelemetryEvent: public None
{
public:
	Struct FString                                     AIShipId                                           // 0x0(0x10)
	byte                                               AIShipDestructionReason                            // 0x10(0x1)
};


// Size 0x68
class AIShipSpawnTelemetryEvent: public None
{
public:
	Struct FString                                     AIShipId                                           // 0x0(0x10)
	Struct FString                                     SpawningCrewId                                     // 0x10(0x10)
	Struct FString                                     AIShipBattleId                                     // 0x20(0x10)
	Struct FString                                     AIShipType                                         // 0x30(0x10)
	Struct Guid                                        SpawnConfigId                                      // 0x40(0x10)
	Struct FString                                     AIShipSize                                         // 0x50(0x10)
	int                                                AIShipWaveIndex                                    // 0x60(0x4)
};


}