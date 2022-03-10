namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
class RowboatDamageEffectData: public None
{
public:
	Class MaterialInstanceDynamic*                     DynamicMaterialInstance                            // 0x0(0x8)
	float                                              FadeInDuration                                     // 0x8(0x4)
};


// Size 0x20
class RowboatStrainDamageData: public None
{
public:
	float                                              StormDamageScalar                                  // 0x0(0x4)
	float                                              WaterStrengthToCountAsStorm                        // 0x4(0x4)
	float                                              StormStrengthThresholdForDamage                    // 0x8(0x4)
	float                                              MinStormDamageFrequencyInSeconds                   // 0xc(0x4)
	float                                              MaxStormDamageFrequencyInSeconds                   // 0x10(0x4)
	float                                              WorldEdgeDamageScalar                              // 0x14(0x4)
	float                                              MinWorldEdgeDamageFrequencyInSeconds               // 0x18(0x4)
	float                                              MaxWorldEdgeDamageFrequencyInSeconds               // 0x1c(0x4)
};


// Size 0x18
class ScrapeableDamageSpeedEntry: public None
{
public:
	class                                              SpeedBand                                          // 0x0(0x8)
	Class ForceFeedbackEffect*                         ForceFeedbackEffect                                // 0x8(0x8)
	int                                                DamageAmount                                       // 0x10(0x4)
};


// Size 0xc
class WatercraftRolloverCorrector: public None
{
public:
	float                                              RollThresholdToConsiderRolledOver                  // 0x0(0x4)
	float                                              TorqueScalar                                       // 0x4(0x4)
};


// Size 0x38
class OarParams: public None
{
public:
	float                                              RowingPower                                        // 0x0(0x4)
	float                                              OarLength                                          // 0x4(0x4)
	Struct Vector                                      OarOffsetDirection                                 // 0x8(0xc)
	Struct Vector                                      OarForwardForceDirection                           // 0x14(0xc)
	float                                              TimeForCompleteStroke                              // 0x20(0x4)
	float                                              TimeForResetCompletion                             // 0x24(0x4)
	Class CurveFloat*                                  RowingPowerCurve                                   // 0x28(0x8)
	float                                              BrakeForcePerMetresPerSecond                       // 0x30(0x4)
	float                                              EndOfStrokeBrakeForcePerMetresPerSecond            // 0x34(0x4)
};


// Size 0x60
class Oar: public None
{
public:
	Struct OarParams                                   OarParams                                          // 0x0(0x38)
};


// Size 0x20
class QuestVariableWatercraft: public None
{
public:
};


// Size 0x1
class EventOarStrokeEnded: public None
{
public:
};


// Size 0x1
class EventRowboatExitedWater: public None
{
public:
};


// Size 0x1
class EventRowboatEnteredWater: public None
{
public:
};


// Size 0x14
class RowboatMountStateTelemetryEvent: public None
{
public:
	Struct Guid                                        WatercraftId                                       // 0x0(0x10)
	byte                                               ActionName                                         // 0x10(0x1)
};


// Size 0x20
class WatercraftDespawnTelemetryEvent: public None
{
public:
	Struct Guid                                        WatercraftId                                       // 0x0(0x10)
	Struct Vector                                      Location                                           // 0x10(0xc)
	byte                                               DespawnReason                                      // 0x1c(0x1)
};


// Size 0x38
class WatercraftSpawnTelemetryEvent: public None
{
public:
	Struct Guid                                        WatercraftId                                       // 0x0(0x10)
	Struct FString                                     WatercraftType                                     // 0x10(0x10)
	Struct Vector                                      Location                                           // 0x20(0xc)
	Struct Vector                                      Forward                                            // 0x2c(0xc)
};


// Size 0x10
class EventExitedWatercraft: public None
{
public:
	Class Actor*                                       Watercraft                                         // 0x0(0x8)
	Class Actor*                                       Actor                                              // 0x8(0x8)
};


// Size 0x10
class EventEnteredWatercraft: public None
{
public:
	Class Actor*                                       Watercraft                                         // 0x0(0x8)
	Class Actor*                                       Actor                                              // 0x8(0x8)
};


}