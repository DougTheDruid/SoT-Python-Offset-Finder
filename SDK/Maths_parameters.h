#pragma once

// Name: SoT, Version: 2.2.1.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Maths.AngleMaths.CalculateEulerAngle
struct UAngleMaths_CalculateEulerAngle_Params
{
	float                                              FromAngle;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ToAngle;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.AngleMaths.AngleMoveTowardsMod180
struct UAngleMaths_AngleMoveTowardsMod180_Params
{
	float                                              Angle;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetAngle;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Rate;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.AngleMaths.AngleMod360
struct UAngleMaths_AngleMod360_Params
{
	float                                              Angle;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.AngleMaths.AngleMod180
struct UAngleMaths_AngleMod180_Params
{
	float                                              Angle;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.AngleMaths.AngleLerpShortest
struct UAngleMaths_AngleLerpShortest_Params
{
	float                                              Start;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              End;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.BuoyancyMaths.CalculateMagnitude
struct UBuoyancyMaths_CalculateMagnitude_Params
{
	float                                              InSubmersedVolume;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InFluidDensity;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InGravity;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.BuoyancyMaths.CalcBlendedProbeCurveBuoyancy
struct UBuoyancyMaths_CalcBlendedProbeCurveBuoyancy_Params
{
	class UCurveFloat*                                 PrimaryBuoyancyCurve;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 SecondaryBuoyancyCurve;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 TertiaryBuoyancyCurve;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UnaryDistUnderwater;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Blend;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Maths_EBuoyancyBlend>                  BlendType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.CircleMaths.ConvertAngleToCircleSectorIndex
struct UCircleMaths_ConvertAngleToCircleSectorIndex_Params
{
	float                                              AngleInDegrees;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumberOfSectors;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IgnoredFraction;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.CircleMaths.Area
struct UCircleMaths_Area_Params
{
	float                                              InRadius;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.CurveMaths.GetDistanceSquaredToCurve
struct UCurveMaths_GetDistanceSquaredToCurve_Params
{
	struct FVector                                     WorldSpacePos;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USplineComponent*                            Spline;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.CurveMaths.GetClosestTimeOnCurve
struct UCurveMaths_GetClosestTimeOnCurve_Params
{
	struct FVector                                     WorldSpacePos;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USplineComponent*                            Spline;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.CurveMaths.GetClosestPositionOnCurve
struct UCurveMaths_GetClosestPositionOnCurve_Params
{
	struct FVector                                     WorldSpacePos;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USplineComponent*                            Spline;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Maths.CurveMaths.GetClosestPointOnCurve
struct UCurveMaths_GetClosestPointOnCurve_Params
{
	struct FVector                                     WorldSpacePos;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USplineComponent*                            Spline;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.CurveMaths.GetCentre
struct UCurveMaths_GetCentre_Params
{
	class USplineComponent*                            Spline;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Maths.Density.Water
struct UDensity_Water_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.Density.SeaWater
struct UDensity_SeaWater_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.Density.Min
struct UDensity_Min_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.Density.Max
struct UDensity_Max_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.Density.IsValid
struct UDensity_IsValid_Params
{
	float                                              InValue;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Maths.Density.Air
struct UDensity_Air_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.DragCoefficients.Sphere
struct UDragCoefficients_Sphere_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.DragCoefficients.PlanePerpendicularToFlow
struct UDragCoefficients_PlanePerpendicularToFlow_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.DragCoefficients.PlaneParallelToFlow
struct UDragCoefficients_PlaneParallelToFlow_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.DragCoefficients.Min
struct UDragCoefficients_Min_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.DragCoefficients.Max
struct UDragCoefficients_Max_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.DragCoefficients.IsValid
struct UDragCoefficients_IsValid_Params
{
	float                                              Value;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Maths.DragCoefficients.Cube
struct UDragCoefficients_Cube_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.DragMaths.CalculateMagnitude
struct UDragMaths_CalculateMagnitude_Params
{
	float                                              InSurfaceArea;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InSpeedReltaiveToFluid;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InDragCoefficient;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InFluidDensity;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.FloatMaths.WrapToRange
struct UFloatMaths_WrapToRange_Params
{
	float                                              Input;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LowerLimit;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UpperLimit;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.FloatMaths.WrapToPositiveRange
struct UFloatMaths_WrapToPositiveRange_Params
{
	float                                              Input;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UpperLimit;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.FloatMaths.WrapAroundPivot
struct UFloatMaths_WrapAroundPivot_Params
{
	float                                              Input;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Pivot;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Range;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.FloatMaths.MoveTowards
struct UFloatMaths_MoveTowards_Params
{
	float                                              From;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              To;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Speed;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Time;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.FloatMaths.Map
struct UFloatMaths_Map_Params
{
	float                                              ValueToMapFrom;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FromRangeStart;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FromRangeEnd;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ToRangeStart;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ToRangeEnd;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Clamp;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.FloatMaths.IncrementCounter
struct UFloatMaths_IncrementCounter_Params
{
	float                                              Counter;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Delta;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CounterMax;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Maths.FloatMaths.GetShortestSignedDistanceBetweenPointsInWrappedRange
struct UFloatMaths_GetShortestSignedDistanceBetweenPointsInWrappedRange_Params
{
	float                                              FromValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ToValue;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LowerLimit;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UpperLimit;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.FloatMaths.FindMidpointInWrappedRange
struct UFloatMaths_FindMidpointInWrappedRange_Params
{
	float                                              Value1;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value2;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LowerLimit;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UpperLimit;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.FloatMaths.Bound
struct UFloatMaths_Bound_Params
{
	float                                              ValueToBound;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Bound1;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Bound2;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.Gravity.Earth
struct UGravity_Earth_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.OrientedPointBlueprintFunctionLibrary.GetPointAsTransform
struct UOrientedPointBlueprintFunctionLibrary_GetPointAsTransform_Params
{
	struct FOrientedPoint                              Point;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Maths.PoissonDiscSampling.GeneratePoissonDiscDistributionAcrossPlane
struct UPoissonDiscSampling_GeneratePoissonDiscDistributionAcrossPlane_Params
{
	struct FVector                                     InCenter;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FQuat                                       InOrientation;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              InWidth;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InHeight;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InMinDistance;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InRNGSeed;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Maths.ProjectileMaths.PredictProjectileFlightTime
struct UProjectileMaths_PredictProjectileFlightTime_Params
{
	float                                              Speed;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Gravity;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Pitch;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Height;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.ProjectileMaths.FindProjectileSpeedModifierToHitTarget
struct UProjectileMaths_FindProjectileSpeedModifierToHitTarget_Params
{
	struct FVector                                     From;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FVector                                     Target;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              Pitch;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ProjectileSpeed;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Gravity;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.ProjectileMaths.FindAimDirectionToHitTarget
struct UProjectileMaths_FindAimDirectionToHitTarget_Params
{
	struct FRotator                                    OutAimDirection;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     From;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FVector                                     Target;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              ProjectileSpeed;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Gravity;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PreferHigherAngles;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Maths.ProjectileMaths.CalculateLaunchVelocity
struct UProjectileMaths_CalculateLaunchVelocity_Params
{
	struct FVector                                     OutLaunchVelocty;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              OutFlightTime;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     From;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FVector                                     Target;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FVector                                     TargetVelocity;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              ProjectileSpeed;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Gravity;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PreferHigherAngles;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Maths.RotationMaths.TransformAroundArbitraryPivot
struct URotationMaths_TransformAroundArbitraryPivot_Params
{
	struct FTransform                                  TargetTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FTransform                                  BaseTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FTransform                                  TransformToApply;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	bool                                               LockFinalOrientation;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Maths.RotationMaths.RotatorToQuat
struct URotationMaths_RotatorToQuat_Params
{
	struct FRotator                                    Rotation;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FQuat                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Maths.RotationMaths.RotateDirectionInterpConstantTo
struct URotationMaths_RotateDirectionInterpConstantTo_Params
{
	struct FVector                                     CurrentDirectionNormalised;                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FVector                                     TargetDirectionNormalised;                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InterpSpeedRadPerSec;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Maths.RotationMaths.FindRotationAxisAndRadAngleBetweenVectors
struct URotationMaths_FindRotationAxisAndRadAngleBetweenVectors_Params
{
	struct FVector                                     FromVectorNormalised;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FVector                                     ToVectorNormalised;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FVector                                     OutRotationAxis;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              OutRotationAngleRadians;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.RotationMaths.AreRotatorsTheSameRotation
struct URotationMaths_AreRotatorsTheSameRotation_Params
{
	struct FRotator                                    Rotator1;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rotator2;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              ErrorTolerance;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Maths.RotationMaths.AdvanceRotationBySpinAndTiltSynced
struct URotationMaths_AdvanceRotationBySpinAndTiltSynced_Params
{
	struct FRotator                                    StartRotation;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FRotator                                    TargetRotation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              RotationRateDegrees;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaTime;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotationUpdateResult                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Maths.ShapeMathsBlueprintLibrary.IsPointOnOrWithinABox
struct UShapeMathsBlueprintLibrary_IsPointOnOrWithinABox_Params
{
	class UBoxComponent*                               BoxComponent;                                              // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     WorldSpaceReferencePoint;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinASphere
struct UShapeMathsBlueprintLibrary_FindClosestPointWithinASphere_Params
{
	class USphereComponent*                            SphereComponent;                                           // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     WorldSpaceReferencePoint;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinACylinder
struct UShapeMathsBlueprintLibrary_FindClosestPointWithinACylinder_Params
{
	class UCapsuleComponent*                           CylinderComponent;                                         // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     WorldSpaceReferencePoint;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinACapsule
struct UShapeMathsBlueprintLibrary_FindClosestPointWithinACapsule_Params
{
	class UCapsuleComponent*                           CapsuleComponent;                                          // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     WorldSpaceReferencePoint;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinABox
struct UShapeMathsBlueprintLibrary_FindClosestPointWithinABox_Params
{
	class UBoxComponent*                               BoxComponent;                                              // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     WorldSpaceReferencePoint;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Maths.SphereMaths.VolumeFromRadius
struct USphereMaths_VolumeFromRadius_Params
{
	float                                              InRadius;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.SphereMaths.SurfaceAreaFromRadius
struct USphereMaths_SurfaceAreaFromRadius_Params
{
	float                                              InRadius;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.SphericalCapMaths.Volume
struct USphericalCapMaths_Volume_Params
{
	float                                              InRadius;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InHeight;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.SphericalCapMaths.CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid
struct USphericalCapMaths_CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid_Params
{
	float                                              InRadius;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InHeight;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.SphericalCapMaths.BaseRadius
struct USphericalCapMaths_BaseRadius_Params
{
	float                                              InRadius;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InHeight;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.TimedBufferFunctionLibrary.UpdateInterval
struct UTimedBufferFunctionLibrary_UpdateInterval_Params
{
	struct FTimedBuffer                                TimedBuffer;                                               // (Parm, OutParm, ReferenceParm)
	float                                              DeltaTime;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.TimedBufferFunctionLibrary.GetValueRange
struct UTimedBufferFunctionLibrary_GetValueRange_Params
{
	struct FTimedBuffer                                TimedBuffer;                                               // (Parm, OutParm, ReferenceParm)
	float                                              MinWindowLength;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ValueRange;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Maths.TimedBufferFunctionLibrary.CreateTimedBuffer
struct UTimedBufferFunctionLibrary_CreateTimedBuffer_Params
{
	float                                              WindowLength;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimedBuffer                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Maths.TimeMaths.GetDifference
struct UTimeMaths_GetDifference_Params
{
	struct FDateTime                                   A;                                                         // (Parm, ZeroConstructor)
	struct FDateTime                                   B;                                                         // (Parm, ZeroConstructor)
	struct FTimespan                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Maths.VectorMaths.LineIntersectsSphere
struct UVectorMaths_LineIntersectsSphere_Params
{
	struct FVector                                     LineStart;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     LineDir;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     SphereCentre;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SphereRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ClosestIntersectionPoint;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Maths.VectorMaths.LineIntersectsCircleWithExitPoint
struct UVectorMaths_LineIntersectsCircleWithExitPoint_Params
{
	struct FVector2D                                   LineOrigin;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   LineDir;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   CircleOrigin;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              CircleRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   OutClosestIntersectionPoint;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   OutSecondaryIntersectionPoint;                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              OutClosestIntersectionDistance;                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OutSecondaryIntersectionDistance;                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Maths.VectorMaths.LineIntersectsCircle
struct UVectorMaths_LineIntersectsCircle_Params
{
	struct FVector2D                                   LineOrigin;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   LineDir;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   CircleOrigin;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              CircleRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   OutClosestIntersectionPoint;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              OutIntersectionDistance;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Maths.VectorMaths.IntersectLineSegmentWithPlane
struct UVectorMaths_IntersectLineSegmentWithPlane_Params
{
	struct FVector                                     LineStart;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FVector                                     LineEnd;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FVector                                     PlanePos;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FVector                                     PlaneNormal;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              PlaneThickness;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     IntersectionPos;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              NormalisedIntersectionTOnLineSegment;                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Maths_EPlaneLineIntersectionType>      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.VectorMaths.Distance
struct UVectorMaths_Distance_Params
{
	struct FVector                                     A;                                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FVector                                     B;                                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Maths.VectorMaths.Cross_Vector2DVector2D
struct UVectorMaths_Cross_Vector2DVector2D_Params
{
	struct FVector2D                                   A;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   B;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
