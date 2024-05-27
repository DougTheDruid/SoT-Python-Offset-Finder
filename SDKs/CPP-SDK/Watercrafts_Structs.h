#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid



// Size 0x60
struct Oar
{
public:
	struct                                                       OarParams;                                         // 0x0(0x38)
};


// Size 0x18
struct RowboatLiveryPickerDataAssetConditions
{
public:
	class RowboatLiveryPickerDataAsset*                          RowboatLiveryPickerDataAsset;                      // 0x0(0x8)
	float                                                        Weight;                                            // 0x8(0x4)
	struct                                                       Feature;                                           // 0xc(0xc)
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


// Size 0x20
struct WatercraftDespawnTelemetryEvent
{
public:
	struct                                                       WatercraftId;                                      // 0x0(0x10)
	struct                                                       Location;                                          // 0x10(0xc)
	char                                                         DespawnReason;                                     // 0x1c(0x1)
};


// Size 0x10
struct EventExitedWatercraft
{
public:
	class Actor*                                                 Watercraft;                                        // 0x0(0x8)
	class Actor*                                                 Actor;                                             // 0x8(0x8)
};


// Size 0x18
struct RowboatDamageEffectData
{
public:
	class MaterialInstanceDynamic*                               DynamicMaterialInstance;                           // 0x0(0x8)
	float                                                        FadeInDuration;                                    // 0x8(0x4)
};


// Size 0x28
struct RowboatLiveryByWeight
{
public:
	assetclass                                                   LiveryEntitlement;                                 // 0x0(0x20)
	float                                                        Weight;                                            // 0x20(0x4)
};


// Size 0xc
struct WatercraftRolloverCorrector
{
public:
	float                                                        RollThresholdToConsiderRolledOver;                 // 0x0(0x4)
	float                                                        TorqueScalar;                                      // 0x4(0x4)
};


// Size 0x14
struct RowboatMountStateTelemetryEvent
{
public:
	struct                                                       WatercraftId;                                      // 0x0(0x10)
	char                                                         ActionName;                                        // 0x10(0x1)
};


// Size 0x10
struct EventEnteredWatercraft
{
public:
	class Actor*                                                 Watercraft;                                        // 0x0(0x8)
	class Actor*                                                 Actor;                                             // 0x8(0x8)
};


// Size 0x48
struct WatercraftSpawnTelemetryEvent
{
public:
	struct                                                       WatercraftId;                                      // 0x0(0x10)
	struct FString                                               WatercraftType;                                    // 0x10(0x10)
	struct FString                                               OriginDescription;                                 // 0x20(0x10)
	struct                                                       Location;                                          // 0x30(0xc)
	struct                                                       Forward;                                           // 0x3c(0xc)
};


// Size 0x18
struct ScrapeableDamageSpeedEntry
{
public:
	class UClass*                                                SpeedBand;                                         // 0x0(0x8)
	class ForceFeedbackEffect*                                   ForceFeedbackEffect;                               // 0x8(0x8)
	int                                                          DamageAmount;                                      // 0x10(0x4)
};


// Size 0x38
struct OarParams
{
public:
	float                                                        RowingPower;                                       // 0x0(0x4)
	float                                                        OarLength;                                         // 0x4(0x4)
	struct                                                       OarOffsetDirection;                                // 0x8(0xc)
	struct                                                       OarForwardForceDirection;                          // 0x14(0xc)
	float                                                        TimeForCompleteStroke;                             // 0x20(0x4)
	float                                                        TimeForResetCompletion;                            // 0x24(0x4)
	class CurveFloat*                                            RowingPowerCurve;                                  // 0x28(0x8)
	float                                                        BrakeForcePerMetresPerSecond;                      // 0x30(0x4)
	float                                                        EndOfStrokeBrakeForcePerMetresPerSecond;           // 0x34(0x4)
};


