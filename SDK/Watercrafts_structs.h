#pragma once

// Name: SoT, Version: 2.3.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum Watercrafts.EOarState
enum class Watercrafts_EOarState : uint8_t
{
	EOarState__Idle                = 0,
	EOarState__InStroke            = 1,
	EOarState__ApexOfStroke        = 2,
	EOarState__RecoveringFromStroke = 3,
	EOarState__Braking             = 4,
	EOarState__EOarState_MAX       = 5,

};

// Enum Watercrafts.EOarIdentifier
enum class Watercrafts_EOarIdentifier : uint8_t
{
	EOarIdentifier__Left           = 0,
	EOarIdentifier__Right          = 1,
	EOarIdentifier__EOarIdentifier_MAX = 2,

};

// Enum Watercrafts.ERowboatActionTelemetry
enum class Watercrafts_ERowboatActionTelemetry : uint8_t
{
	ERowboatActionTelemetry__None  = 0,
	ERowboatActionTelemetry__Mount = 1,
	ERowboatActionTelemetry__Unmount = 2,
	ERowboatActionTelemetry__ERowboatActionTelemetry_MAX = 3,

};

// Enum Watercrafts.EWatercraftDespawnReason
enum class Watercrafts_EWatercraftDespawnReason : uint8_t
{
	EWatercraftDespawnReason__Unknown = 0,
	EWatercraftDespawnReason__Destroyed = 1,
	EWatercraftDespawnReason__ExternalRequest = 2,
	EWatercraftDespawnReason__Migration = 3,
	EWatercraftDespawnReason__WorldEnding = 4,
	EWatercraftDespawnReason__EWatercraftDespawnReason_MAX = 5,

};

// Enum Watercrafts.EOarInputState
enum class Watercrafts_EOarInputState : uint8_t
{
	EOarInputState__Inactive       = 0,
	EOarInputState__Active         = 1,
	EOarInputState__Braking        = 2,
	EOarInputState__EOarInputState_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Watercrafts.ScrapeableDamageSpeedEntry
// 0x0018
struct FScrapeableDamageSpeedEntry
{
	class UClass*                                      SpeedBand;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                       // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DamageAmount;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QWVR[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Watercrafts.WatercraftRolloverCorrector
// 0x000C
struct FWatercraftRolloverCorrector
{
	float                                              RollThresholdToConsiderRolledOver;                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TorqueScalar;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_F63S[0x4];                                     // 0x0008(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Watercrafts.RowboatDamageEffectData
// 0x0018
struct FRowboatDamageEffectData
{
	class UMaterialInstanceDynamic*                    DynamicMaterialInstance;                                   // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeInDuration;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JAEV[0xC];                                     // 0x000C(0x000C) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Watercrafts.RowboatStrainDamageData
// 0x0020
struct FRowboatStrainDamageData
{
	float                                              StormDamageScalar;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WaterStrengthToCountAsStorm;                               // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StormStrengthThresholdForDamage;                           // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinStormDamageFrequencyInSeconds;                          // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxStormDamageFrequencyInSeconds;                          // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WorldEdgeDamageScalar;                                     // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinWorldEdgeDamageFrequencyInSeconds;                      // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxWorldEdgeDamageFrequencyInSeconds;                      // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Watercrafts.OarParams
// 0x0038
struct FOarParams
{
	float                                              RowingPower;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OarLength;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     OarOffsetDirection;                                        // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     OarForwardForceDirection;                                  // 0x0014(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TimeForCompleteStroke;                                     // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeForResetCompletion;                                    // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 RowingPowerCurve;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BrakeForcePerMetresPerSecond;                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EndOfStrokeBrakeForcePerMetresPerSecond;                   // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Watercrafts.Oar
// 0x0060
struct FOar
{
	struct FOarParams                                  OarParams;                                                 // 0x0000(0x0038) (Protected)
	unsigned char                                      UnknownData_W0GI[0x28];                                    // 0x0038(0x0028) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Watercrafts.EventOarStrokeEnded
// 0x0001
struct FEventOarStrokeEnded
{
	unsigned char                                      UnknownData_BK1B[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Watercrafts.EventRowboatExitedWater
// 0x0001
struct FEventRowboatExitedWater
{
	unsigned char                                      UnknownData_68A5[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Watercrafts.EventRowboatEnteredWater
// 0x0001
struct FEventRowboatEnteredWater
{
	unsigned char                                      UnknownData_4VLK[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Watercrafts.RowboatMountStateTelemetryEvent
// 0x0014
struct FRowboatMountStateTelemetryEvent
{
	struct FGuid                                       WatercraftId;                                              // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Watercrafts_ERowboatActionTelemetry>   ActionName;                                                // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6JSB[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Watercrafts.WatercraftDespawnTelemetryEvent
// 0x0020
struct FWatercraftDespawnTelemetryEvent
{
	struct FGuid                                       WatercraftId;                                              // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Location;                                                  // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Watercrafts_EWatercraftDespawnReason>  DespawnReason;                                             // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S35L[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Watercrafts.WatercraftSpawnTelemetryEvent
// 0x0038
struct FWatercraftSpawnTelemetryEvent
{
	struct FGuid                                       WatercraftId;                                              // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     WatercraftType;                                            // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Forward;                                                   // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Watercrafts.EventExitedWatercraft
// 0x0010
struct FEventExitedWatercraft
{
	class AActor*                                      Watercraft;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Actor;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Watercrafts.EventEnteredWatercraft
// 0x0010
struct FEventEnteredWatercraft
{
	class AActor*                                      Watercraft;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Actor;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
