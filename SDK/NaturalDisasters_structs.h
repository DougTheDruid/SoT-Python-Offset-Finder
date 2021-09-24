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

// Enum NaturalDisasters.EAshCloudState
enum class NaturalDisasters_EAshCloudState : uint8_t
{
	EAshCloudState__Spawning       = 0,
	EAshCloudState__Active         = 1,
	EAshCloudState__Dissipating    = 2,
	EAshCloudState__EAshCloudState_MAX = 3,

};

// Enum NaturalDisasters.EVolcanoTargetHitType
enum class NaturalDisasters_EVolcanoTargetHitType : uint8_t
{
	EVolcanoTargetHitType__OnTarget = 0,
	EVolcanoTargetHitType__NearMiss = 1,
	EVolcanoTargetHitType__Random  = 2,
	EVolcanoTargetHitType__EVolcanoTargetHitType_MAX = 3,

};

// Enum NaturalDisasters.EVolcanoTargetType
enum class NaturalDisasters_EVolcanoTargetType : uint8_t
{
	EVolcanoTargetType__Player     = 0,
	EVolcanoTargetType__Ship       = 1,
	EVolcanoTargetType__Watercraft = 2,
	EVolcanoTargetType__EVolcanoTargetType_MAX = 3,

};

// Enum NaturalDisasters.EAshenLordWorldEndCloudState
enum class NaturalDisasters_EAshenLordWorldEndCloudState : uint8_t
{
	EAshenLordWorldEndCloudState__Inactive = 0,
	EAshenLordWorldEndCloudState__Active = 1,
	EAshenLordWorldEndCloudState__EAshenLordWorldEndCloudState_MAX = 2,

};

// Enum NaturalDisasters.EGeyserState
enum class NaturalDisasters_EGeyserState : uint8_t
{
	EGeyserState__Dormant          = 0,
	EGeyserState__Active           = 1,
	EGeyserState__Disabled         = 2,
	EGeyserState__EGeyserState_MAX = 3,

};

// Enum NaturalDisasters.EEarthquakeState
enum class NaturalDisasters_EEarthquakeState : uint8_t
{
	EEarthquakeState__Dormant      = 0,
	EEarthquakeState__WarmingUp    = 1,
	EEarthquakeState__Active       = 2,
	EEarthquakeState__CoolingDown  = 3,
	EEarthquakeState__EEarthquakeState_MAX = 4,

};

// Enum NaturalDisasters.EGeyserManagerState
enum class NaturalDisasters_EGeyserManagerState : uint8_t
{
	EGeyserManagerState__Dormant   = 0,
	EGeyserManagerState__Active    = 1,
	EGeyserManagerState__EGeyserManagerState_MAX = 2,

};

// Enum NaturalDisasters.EVolcanoState
enum class NaturalDisasters_EVolcanoState : uint8_t
{
	EVolcanoState__Dormant         = 0,
	EVolcanoState__WarmingUp       = 1,
	EVolcanoState__Erupting        = 2,
	EVolcanoState__EVolcanoState_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NaturalDisasters.VolcanoSetupDataEmbersEntry
// 0x0010
struct FVolcanoSetupDataEmbersEntry
{
	float                                              MaxDistanceInMetres;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SW6Q[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     Effect;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct NaturalDisasters.WeightedVolcanoProjectile
// 0x00C0
struct FWeightedVolcanoProjectile
{
	float                                              Weight;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JEFA[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ProjectileClass;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              ProjectileSpeedMinAtInnerRadius;                           // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ProjectileSpeedMaxAtInnerRadius;                           // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ProjectileSpeedMinAtOuterRadius;                           // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ProjectileSpeedMaxAtOuterRadius;                           // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ProjectileGravityScale;                                    // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IYWK[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeightedProbabilityRangeOfRanges           RotationRatePitch;                                         // 0x0028(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           RotationRateRoll;                                          // 0x0058(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           RotationRateYaw;                                           // 0x0088(0x0030) (Edit, DisableEditOnInstance)
	class UWwiseEvent*                                 LaunchAudioPlayEvent;                                      // 0x00B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct NaturalDisasters.VolcanoTargetChances
// 0x0058
struct FVolcanoTargetChances
{
	float                                              OnTarget;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NearMiss;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Random;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9GYE[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeightedProbabilityRange                   OnTargetNumExtraShots;                                     // 0x0010(0x0020) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRange                   NearMissNumExtraShots;                                     // 0x0030(0x0020) (Edit, DisableEditOnInstance)
	float                                              CoolDownDuration;                                          // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_E4F5[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct NaturalDisasters.WeightedAshenLordVolcanoProjectile
// 0x00D0
struct FWeightedAshenLordVolcanoProjectile
{
	float                                              Weight;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GravityMultiplier;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeightedProbabilityRangeOfRanges           Speed;                                                     // 0x0008(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           RotationRatePitch;                                         // 0x0038(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           RotationRateRoll;                                          // 0x0068(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           RotationRateYaw;                                           // 0x0098(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      ProjectileClass;                                           // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct NaturalDisasters.AshenLordWorldEndCloudAnimation
// 0x0008
struct FAshenLordWorldEndCloudAnimation
{
	float                                              ServerStartTime;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ServerLifeTime;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct NaturalDisasters.EarthquakeForceFeedbackOption
// 0x0010
struct FEarthquakeForceFeedbackOption
{
	TArray<struct FLandmarkReactionEventPlayForceFeedbackEntry> ForceFeedback;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct NaturalDisasters.EarthquakeForceFeedback
// 0x0040
struct FEarthquakeForceFeedback
{
	TArray<struct FEarthquakeForceFeedbackOption>      ForceFeedbackOptions;                                      // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TimeBetweenRumbles;                                        // 0x0010(0x0030) (Edit, DisableEditOnInstance)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct NaturalDisasters.PlayerFeedback
// 0x0080
struct FPlayerFeedback
{
	struct FEarthquakeForceFeedback                    ForceFeedback;                                             // 0x0000(0x0040) (Edit, DisableEditOnInstance)
	TArray<class UClass*>                              CameraShakes;                                              // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)
	struct FWeightedProbabilityRangeOfRanges           StaggerStrength;                                           // 0x0050(0x0030) (Edit, DisableEditOnInstance)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct NaturalDisasters.GeyserSpawnAngleOption
// 0x000C
struct FGeyserSpawnAngleOption
{
	float                                              Weight;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Direction;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Range;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct NaturalDisasters.VolcanoStateData
// 0x000C
struct FVolcanoStateData
{
	TEnumAsByte<NaturalDisasters_EVolcanoState>        State;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OK2B[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StateDuration;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PercentageOfMaxTargetingRange;                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct NaturalDisasters.VolcanoProjectileData
// 0x001C
struct FVolcanoProjectileData
{
	int                                                WeightedVolcanoProjectileIndex;                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     LaunchVelocity;                                            // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     RotationRate;                                              // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct NaturalDisasters.VolcanoTarget
// 0x0018
struct FVolcanoTarget
{
	TEnumAsByte<NaturalDisasters_EVolcanoTargetType>   Type;                                                      // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<NaturalDisasters_EVolcanoTargetHitType> HitType;                                                   // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FJNY[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Target;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumExtraShots;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IBOG[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct NaturalDisasters.VolcanoTargetCoolDown
// 0x0010
struct FVolcanoTargetCoolDown
{
	class AActor*                                      Target;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TY4H[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
