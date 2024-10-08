#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x18
struct OrientedPoint
{
public:
	struct Vector                                                Location;                                          // 0x0(0xc)
	struct Rotator                                               Rotation;                                          // 0xc(0xc)
};


// Size 0x20
struct WeightedProbabilityRange
{
public:
	uint32                                                       Min;                                               // 0x8(0x4)
	uint32                                                       Max;                                               // 0xc(0x4)
	TArray<float>                                                Weights;                                           // 0x10(0x10)
};


// Size 0x10
struct InertialSmoothedFloat
{
public:
	float                                                        AccelerationMagnitude;                             // 0x0(0x4)
	float                                                        MaxSpeed;                                          // 0x4(0x4)
	float                                                        CurrentVelocity;                                   // 0x8(0x4)
	float                                                        CurrentValue;                                      // 0xc(0x4)
};


// Size 0x8
struct WeightedProbabilityRangeOfRangesFloatPair
{
public:
	float                                                        Min;                                               // 0x0(0x4)
	float                                                        Max;                                               // 0x4(0x4)
};


// Size 0x10
struct FixedStepInterpCurvePointVector2D
{
public:
	struct Vector2D                                              OutVal;                                            // 0x0(0x8)
	struct Vector2D                                              Tangent;                                           // 0x8(0x8)
};


// Size 0x60
struct Pendulum
{
public:
	float                                                        Increment;                                         // 0x0(0x4)
	float                                                        IncrementDirectionMultiplier;                      // 0x4(0x4)
	bool                                                         IsSwinging;                                        // 0x8(0x1)
	float                                                        RPM;                                               // 0xc(0x4)
	float                                                        MinAngleDegrees;                                   // 0x10(0x4)
	float                                                        MaxAngleDegrees;                                   // 0x14(0x4)
	float                                                        Length;                                            // 0x18(0x4)
	float                                                        CurrentSwingProgress;                              // 0x1c(0x4)
	float                                                        CurrentRotationAngleDegrees;                       // 0x20(0x4)
	struct Transform                                             InterpolationAsTransform;                          // 0x30(0x30)
};


// Size 0x8
struct SpatialOffset
{
public:
	float                                                        OffsetValue;                                       // 0x0(0x4)
	char                                                         OffsetMethod;                                      // 0x4(0x1)
};


// Size 0x18
struct RotationUpdateResult
{
public:
	struct Rotator                                               UpdatedRotation;                                   // 0x0(0xc)
	float                                                        SpinAngle;                                         // 0xc(0x4)
	float                                                        TiltAngle;                                         // 0x10(0x4)
	float                                                        TiltDirection;                                     // 0x14(0x4)
};


// Size 0x30
struct WeightedProbabilityRangeOfRanges
{
public:
	TArray<struct WeightedProbabilityRangeOfRangesFloatPair>     SubRanges;                                         // 0x20(0x10)
};


// Size 0x18
struct FixedStepInterpCurveVector2D
{
public:
	TArray<struct FixedStepInterpCurvePointVector2D>             Points;                                            // 0x0(0x10)
	float                                                        StepTime;                                          // 0x10(0x4)
	bool                                                         IsLooped;                                          // 0x14(0x1)
};


