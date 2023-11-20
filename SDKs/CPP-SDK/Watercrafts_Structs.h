// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
struct RowboatLiveryPickerDataAssetConditions
{
public:
	class RowboatLiveryPickerDataAsset*                          RowboatLiveryPickerDataAsset;                      // 0x0(0x8)
	float                                                        Weight;                                            // 0x8(0x4)
	struct FeatureFlag                                           Feature;                                           // 0xc(0xc)
};


// Size 0x28
struct RowboatLiveryByWeight
{
public:
	char                                                         pad0x20_PE9QA[0x20];                               // 0x0(0x20)
	float                                                        Weight;                                            // 0x20(0x4)
	char                                                         pad0x4_ZKZ67[0x4];                                 // 0x24(0x4)
};


// Size 0x18
struct RowboatDamageEffectData
{
public:
	class MaterialInstanceDynamic*                               DynamicMaterialInstance;                           // 0x0(0x8)
	float                                                        FadeInDuration;                                    // 0x8(0x4)
	char                                                         pad0xc_2S27S[0xc];                                 // 0xc(0xc)
};


// Size 0x20
struct RowboatStrainDamageData
{
public:
	float                                                        StormDamageScalar;                                 // 0x0(0x4)
	float                                                        WaterStrengthToCountAsStorm;                       // 0x4(0x4)
	float                                                        StormStrengthThresholdForDamage;                   // 0x8(0x4)
	float                                                        MinStormDamageFrequencyInSeconds;                  // 0xc(0x4)
	float                                                        MaxStormDamageFrequencyInSeconds;                  // 0x10(0x4)
	float                                                        WorldEdgeDamageScalar;                             // 0x14(0x4)
	float                                                        MinWorldEdgeDamageFrequencyInSeconds;              // 0x18(0x4)
	float                                                        MaxWorldEdgeDamageFrequencyInSeconds;              // 0x1c(0x4)
};


// Size 0x18
struct ScrapeableDamageSpeedEntry
{
public:
	class UClass*                                                SpeedBand;                                         // 0x0(0x8)
	class ForceFeedbackEffect*                                   ForceFeedbackEffect;                               // 0x8(0x8)
	int                                                          DamageAmount;                                      // 0x10(0x4)
	char                                                         pad0x4_15ZUH[0x4];                                 // 0x14(0x4)
};


// Size 0xc
struct WatercraftRolloverCorrector
{
public:
	float                                                        RollThresholdToConsiderRolledOver;                 // 0x0(0x4)
	float                                                        TorqueScalar;                                      // 0x4(0x4)
	char                                                         pad0x4_SU3SN[0x4];                                 // 0x8(0x4)
};


// Size 0x38
struct OarParams
{
public:
	float                                                        RowingPower;                                       // 0x0(0x4)
	float                                                        OarLength;                                         // 0x4(0x4)
	struct Vector                                                OarOffsetDirection;                                // 0x8(0xc)
	struct Vector                                                OarForwardForceDirection;                          // 0x14(0xc)
	float                                                        TimeForCompleteStroke;                             // 0x20(0x4)
	float                                                        TimeForResetCompletion;                            // 0x24(0x4)
	class CurveFloat*                                            RowingPowerCurve;                                  // 0x28(0x8)
	float                                                        BrakeForcePerMetresPerSecond;                      // 0x30(0x4)
	float                                                        EndOfStrokeBrakeForcePerMetresPerSecond;           // 0x34(0x4)
};


// Size 0x60
struct Oar
{
public:
	struct OarParams                                             OarParams;                                         // 0x0(0x38)
	char                                                         pad0x28_3ECQK[0x28];                               // 0x38(0x28)
};


// Size 0x30
struct QuestVariableWatercraft
{
public:
	char                                                         pad0x30_7L1YP[0x30];                               // 0x0(0x30)
};


// Size 0x1
struct EventRowboatLoaded
{
public:
	char                                                         pad0x1_SIPEJ[0x1];                                 // 0x0(0x1)
};


// Size 0x1
struct EventOarStrokeEnded
{
public:
	char                                                         pad0x1_7GU4I[0x1];                                 // 0x0(0x1)
};


// Size 0x1
struct EventRowboatExitedWater
{
public:
	char                                                         pad0x1_2W4E1[0x1];                                 // 0x0(0x1)
};


// Size 0x1
struct EventRowboatEnteredWater
{
public:
	char                                                         pad0x1_TLAFR[0x1];                                 // 0x0(0x1)
};


// Size 0x14
struct RowboatMountStateTelemetryEvent
{
public:
	struct Guid                                                  WatercraftId;                                      // 0x0(0x10)
	byte                                                         ActionName;                                        // 0x10(0x1)
	char                                                         pad0x3_BICIF[0x3];                                 // 0x11(0x3)
};


// Size 0x20
struct WatercraftDespawnTelemetryEvent
{
public:
	struct Guid                                                  WatercraftId;                                      // 0x0(0x10)
	struct Vector                                                Location;                                          // 0x10(0xc)
	byte                                                         DespawnReason;                                     // 0x1c(0x1)
	char                                                         pad0x3_JIJR4[0x3];                                 // 0x1d(0x3)
};


// Size 0x48
struct WatercraftSpawnTelemetryEvent
{
public:
	struct Guid                                                  WatercraftId;                                      // 0x0(0x10)
	struct FString                                               WatercraftType;                                    // 0x10(0x10)
	struct FString                                               OriginDescription;                                 // 0x20(0x10)
	struct Vector                                                Location;                                          // 0x30(0xc)
	struct Vector                                                Forward;                                           // 0x3c(0xc)
};


// Size 0x10
struct EventExitedWatercraft
{
public:
	class Actor*                                                 Watercraft;                                        // 0x0(0x8)
	class Actor*                                                 Actor;                                             // 0x8(0x8)
};


// Size 0x10
struct EventEnteredWatercraft
{
public:
	class Actor*                                                 Watercraft;                                        // 0x0(0x8)
	class Actor*                                                 Actor;                                             // 0x8(0x8)
};


}