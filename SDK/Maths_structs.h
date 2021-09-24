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

// Enum Maths.EBuoyancyBlend
enum class Maths_EBuoyancyBlend : uint8_t
{
	EBuoyancyBlend__PrimaryToSecondary = 0,
	EBuoyancyBlend__SecondaryToTertiary = 1,
	EBuoyancyBlend__EBuoyancyBlend_MAX = 2,

};

// Enum Maths.EPlaneLineIntersectionType
enum class Maths_EPlaneLineIntersectionType : uint8_t
{
	EPlaneLineIntersectionType__IntersectionWithinLineSegment = 0,
	EPlaneLineIntersectionType__IntersectionOutsideOfLineSegment = 1,
	EPlaneLineIntersectionType__PlaneAndLineParallel = 2,
	EPlaneLineIntersectionType__EPlaneLineIntersectionType_MAX = 3,

};

// Enum Maths.ESpatialOffsetMethod
enum class Maths_ESpatialOffsetMethod : uint8_t
{
	ESpatialOffsetMethod__ThreeDimensional = 0,
	ESpatialOffsetMethod__Horizontal = 1,
	ESpatialOffsetMethod__Vertical = 2,
	ESpatialOffsetMethod__ESpatialOffsetMethod_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Maths.OrientedPoint
// 0x0018
struct FOrientedPoint
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Maths.RotationUpdateResult
// 0x0018
struct FRotationUpdateResult
{
	struct FRotator                                    UpdatedRotation;                                           // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SpinAngle;                                                 // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TiltAngle;                                                 // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TiltDirection;                                             // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Maths.TimedBuffer
// 0x0018
struct FTimedBuffer
{
	unsigned char                                      UnknownData_6S29[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Maths.WeightedProbabilityRange
// 0x0020
struct FWeightedProbabilityRange
{
	unsigned char                                      UnknownData_DZCU[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           Min;                                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint32_t                                           Max;                                                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                      Weights;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Maths.WeightedProbabilityRangeOfRangesFloatPair
// 0x0008
struct FWeightedProbabilityRangeOfRangesFloatPair
{
	float                                              Min;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Max;                                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Maths.WeightedProbabilityRangeOfRanges
// 0x0010 (0x0030 - 0x0020)
struct FWeightedProbabilityRangeOfRanges : public FWeightedProbabilityRange
{
	TArray<struct FWeightedProbabilityRangeOfRangesFloatPair> SubRanges;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Maths.FixedStepInterpCurvePointVector2D
// 0x0010
struct FFixedStepInterpCurvePointVector2D
{
	struct FVector2D                                   OutVal;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   Tangent;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Maths.FixedStepInterpCurveVector2D
// 0x0018
struct FFixedStepInterpCurveVector2D
{
	TArray<struct FFixedStepInterpCurvePointVector2D>  Points;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              StepTime;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsLooped;                                                  // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VRRW[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Maths.InertialSmoothedFloat
// 0x0010
struct FInertialSmoothedFloat
{
	float                                              AccelerationMagnitude;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxSpeed;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentVelocity;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentValue;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Maths.SpatialOffset
// 0x0008
struct FSpatialOffset
{
	float                                              OffsetValue;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Maths_ESpatialOffsetMethod>            OffsetMethod;                                              // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1DT4[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
