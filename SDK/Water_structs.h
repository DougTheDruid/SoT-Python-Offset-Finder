#pragma once

// Name: SoT, Version: 2.4.0


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

// Enum Water.EWaterQueryResult
enum class Water_EWaterQueryResult : uint8_t
{
	EWaterQueryResult__Success     = 0,
	EWaterQueryResult__Failed      = 1,
	EWaterQueryResult__NoWater     = 2,
	EWaterQueryResult__Count       = 3,
	EWaterQueryResult__EWaterQueryResult_MAX = 4,

};

// Enum Water.EWaterHeightType
enum class Water_EWaterHeightType : uint8_t
{
	EWaterHeightType__Dynamic      = 0,
	EWaterHeightType__Static       = 1,
	EWaterHeightType__EWaterHeightType_MAX = 2,

};

// Enum Water.EWaterSplashProbeType
enum class Water_EWaterSplashProbeType : uint8_t
{
	EWaterSplashProbeType__ThresholdedRateOfChange = 0,
	EWaterSplashProbeType__StateChangeWaterToAir = 1,
	EWaterSplashProbeType__StateChangeAirToWater = 2,
	EWaterSplashProbeType__StateChangeAny = 3,
	EWaterSplashProbeType__Continuous = 4,
	EWaterSplashProbeType__EWaterSplashProbeType_MAX = 5,

};

// Enum Water.EBuoyancyDragSampleType
enum class Water_EBuoyancyDragSampleType : uint8_t
{
	EBuoyancyDragSampleType__Spherical = 0,
	EBuoyancyDragSampleType__Planar = 1,
	EBuoyancyDragSampleType__EBuoyancyDragSampleType_MAX = 2,

};

// Enum Water.EBuoyancySampleType
enum class Water_EBuoyancySampleType : uint8_t
{
	EBuoyancySampleType__Spherical = 0,
	EBuoyancySampleType__Cuboidal  = 1,
	EBuoyancySampleType__ProbeCurve = 2,
	EBuoyancySampleType__EBuoyancySampleType_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Water.WaterInformation
// 0x0010
struct FWaterInformation
{
	class UClass*                                      WaterType;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               CanSwim;                                                   // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HRK7[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Water.WaterSplashProbe
// 0x00D8
struct FWaterSplashProbe
{
	unsigned char                                      UnknownData_GIRB[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ProbeDebugName;                                            // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                     LocalOffset;                                               // 0x0018(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Height;                                                    // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Pitch;                                                     // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Yaw;                                                       // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Roll;                                                      // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RateOfChangeThreshold;                                     // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     LocalOffsetAdjustment;                                     // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LocalOffsetAdjustmentDuration;                             // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Water_EWaterSplashProbeType>           Type;                                                      // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Water_EWaterHeightType>                WaterHeightType;                                           // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GDHV[0x2];                                     // 0x004A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StaticWaterHeightValue;                                    // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JMEN[0x88];                                    // 0x0050(0x0088) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Water.SplashProbe
// 0x0128
struct FSplashProbe
{
	unsigned char                                      UnknownData_HFDW[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWaterSplashProbe                           Probe;                                                     // 0x0008(0x00D8) (Edit, DisableEditOnInstance)
	float                                              ProbeSamplingTime;                                         // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeBetweenProbeVfx;                                       // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     ParticleSystem;                                            // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SpawnAttached;                                             // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AttachToWaterSurface;                                      // 0x00F1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EAttachLocation>                SplashAttachType;                                          // 0x00F2(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DL2N[0x1];                                     // 0x00F3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     VfxSpawnOffset;                                            // 0x00F4(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Enabled;                                                   // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VOSP[0x7];                                     // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    CurrentlyPlayingVFX;                                       // 0x0108(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MY53[0x18];                                    // 0x0110(0x0018) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Water.BuoyancyDragSample
// 0x0090
struct FBuoyancyDragSample
{
	struct FVector                                     Offset;                                                    // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Normal;                                                    // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Tangent;                                                   // 0x0018(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DragCoefficient;                                           // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Water_EBuoyancyDragSampleType>         Type;                                                      // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L80H[0x63];                                    // 0x002D(0x0063) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Water.BuoyancyVolumeSample
// 0x0058
struct FBuoyancyVolumeSample
{
	struct FVector                                     Offset;                                                    // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Water_EBuoyancySampleType>             Type;                                                      // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bRelevantForSubmersionVolumeCalculation;                   // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5OK8[0x2];                                     // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Scalar;                                                    // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DampingScalar;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_39CE[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 DistUnderwaterVSBuoyancyForce;                             // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 DistUnderwaterVSBuoyancyForceSecondary;                    // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 DistUnderwaterVSBuoyancyForceTertiary;                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 FakeZOffsetGeneratorCurve;                                 // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FakeZOffsetAmp;                                            // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FakeZOffsetGeneratorTimeScale;                             // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IRBS[0x10];                                    // 0x0048(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Water.WaterBuoyancy
// 0x0130
struct FWaterBuoyancy
{
	class UPrimitiveComponent*                         PrimitiveComponent;                                        // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OverallBuyoancyScalar;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DampingPerSample;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AdditionalAngularDampingWhenSubmerged;                     // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BH2Z[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBuoyancyVolumeSample>               VolumeSamples;                                             // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FBuoyancyDragSample>                 DragSamples;                                               // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UCurveFloat*                                 BuyoancySampleZSpeedVSDampeningScalar;                     // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              QuadSubmersionTestSampleResolution;                        // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GYV8[0xEC];                                    // 0x0044(0x00EC) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Water.BuoyancySampleMovementConfigurationEntry
// 0x0018
struct FBuoyancySampleMovementConfigurationEntry
{
	struct FVector                                     SampleOffset;                                              // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8NLB[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 BuoyancyScaleCurve;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Water.BuoyancySampleMovementConfiguration
// 0x0038
struct FBuoyancySampleMovementConfiguration
{
	class UCurveVector*                                CenterOfMassOffsetCurve;                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FBuoyancySampleMovementConfigurationEntry> SampleMoveData;                                            // 0x0008(0x0010) (Edit, ZeroConstructor)
	float                                              OverallBuoyancyScalar;                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JC9E[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 OverallBuoyancyScalarBlendCurve;                           // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 ProbeMovementBlendCurve;                                   // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OLO1[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Water.BuoyancySampleMovement
// 0x0068
struct FBuoyancySampleMovement
{
	TArray<struct FBuoyancySampleMovementConfiguration> Configurations;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData_LR0T[0x40];                                    // 0x0010(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 BuoyancyScalarCurve;                                       // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 ProbeMovementCurve;                                        // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Z32J[0x8];                                     // 0x0060(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Water.WaterSpout
// 0x0070
struct FWaterSpout
{
	struct FTransform                                  SpoutLocatorTransform;                                     // 0x0000(0x0030) (Edit, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*                    SpoutParticleSystem;                                       // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    SplashParticleSystem;                                      // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TEBR[0x30];                                    // 0x0040(0x0030) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Water.WaterSplashProbesContainer
// 0x0018
struct FWaterSplashProbesContainer
{
	TArray<struct FWaterSplashProbe>                   Probes;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              ProbeSamplingTime;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_M5FS[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Water.EventCurrentWaterPlaneChange
// 0x0010
struct FEventCurrentWaterPlaneChange
{
	class UBaseWaterComponent*                         FormerWaterPlane;                                          // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBaseWaterComponent*                         NewWaterPlane;                                             // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Water.EventLeftWaterExclusionZone
// 0x0001
struct FEventLeftWaterExclusionZone
{
	unsigned char                                      UnknownData_EJYV[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Water.EventEnteredWaterExclusionZone
// 0x0001
struct FEventEnteredWaterExclusionZone
{
	unsigned char                                      UnknownData_9Q2E[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Water.FFTWaterQueryResult
// 0x001C
struct FFFTWaterQueryResult
{
	float                                              Height;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Choppiness;                                                // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Normal;                                                    // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Water_EWaterQueryResult>               WaterQueryResult;                                          // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RY6L[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
