// Name: SoT, Version: 2.2.1.1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FOrientedPoint::AfterRead()
{
}

void FOrientedPoint::BeforeDelete()
{
}

void FRotationUpdateResult::AfterRead()
{
}

void FRotationUpdateResult::BeforeDelete()
{
}

void FTimedBuffer::AfterRead()
{
}

void FTimedBuffer::BeforeDelete()
{
}

void FWeightedProbabilityRange::AfterRead()
{
}

void FWeightedProbabilityRange::BeforeDelete()
{
}

void FWeightedProbabilityRangeOfRangesFloatPair::AfterRead()
{
}

void FWeightedProbabilityRangeOfRangesFloatPair::BeforeDelete()
{
}

void FWeightedProbabilityRangeOfRanges::AfterRead()
{
	FWeightedProbabilityRange::AfterRead();

}

void FWeightedProbabilityRangeOfRanges::BeforeDelete()
{
	FWeightedProbabilityRange::BeforeDelete();

}

void FFixedStepInterpCurvePointVector2D::AfterRead()
{
}

void FFixedStepInterpCurvePointVector2D::BeforeDelete()
{
}

void FFixedStepInterpCurveVector2D::AfterRead()
{
}

void FFixedStepInterpCurveVector2D::BeforeDelete()
{
}

void FInertialSmoothedFloat::AfterRead()
{
}

void FInertialSmoothedFloat::BeforeDelete()
{
}

void FSpatialOffset::AfterRead()
{
}

void FSpatialOffset::BeforeDelete()
{
}

// Function Maths.AngleMaths.CalculateEulerAngle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          FromAngle                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ToAngle                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UAngleMaths::STATIC_CalculateEulerAngle(float FromAngle, float ToAngle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.AngleMaths.CalculateEulerAngle");

	UAngleMaths_CalculateEulerAngle_Params params;
	params.FromAngle = FromAngle;
	params.ToAngle = ToAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.AngleMaths.AngleMoveTowardsMod180
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Angle                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TargetAngle                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Rate                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UAngleMaths::STATIC_AngleMoveTowardsMod180(float Angle, float TargetAngle, float Rate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.AngleMaths.AngleMoveTowardsMod180");

	UAngleMaths_AngleMoveTowardsMod180_Params params;
	params.Angle = Angle;
	params.TargetAngle = TargetAngle;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.AngleMaths.AngleMod360
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Angle                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UAngleMaths::STATIC_AngleMod360(float Angle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.AngleMaths.AngleMod360");

	UAngleMaths_AngleMod360_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.AngleMaths.AngleMod180
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Angle                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UAngleMaths::STATIC_AngleMod180(float Angle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.AngleMaths.AngleMod180");

	UAngleMaths_AngleMod180_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.AngleMaths.AngleLerpShortest
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Start                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          End                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Amount                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UAngleMaths::STATIC_AngleLerpShortest(float Start, float End, float Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.AngleMaths.AngleLerpShortest");

	UAngleMaths_AngleLerpShortest_Params params;
	params.Start = Start;
	params.End = End;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAngleMaths::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UAngleMaths::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function Maths.BuoyancyMaths.CalculateMagnitude
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          InSubmersedVolume              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InFluidDensity                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InGravity                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UBuoyancyMaths::STATIC_CalculateMagnitude(float InSubmersedVolume, float InFluidDensity, float InGravity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.BuoyancyMaths.CalculateMagnitude");

	UBuoyancyMaths_CalculateMagnitude_Params params;
	params.InSubmersedVolume = InSubmersedVolume;
	params.InFluidDensity = InFluidDensity;
	params.InGravity = InGravity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.BuoyancyMaths.CalcBlendedProbeCurveBuoyancy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCurveFloat*             PrimaryBuoyancyCurve           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*             SecondaryBuoyancyCurve         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*             TertiaryBuoyancyCurve          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          UnaryDistUnderwater            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Blend                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Maths_EBuoyancyBlend> BlendType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UBuoyancyMaths::STATIC_CalcBlendedProbeCurveBuoyancy(class UCurveFloat* PrimaryBuoyancyCurve, class UCurveFloat* SecondaryBuoyancyCurve, class UCurveFloat* TertiaryBuoyancyCurve, float UnaryDistUnderwater, float Blend, TEnumAsByte<Maths_EBuoyancyBlend> BlendType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.BuoyancyMaths.CalcBlendedProbeCurveBuoyancy");

	UBuoyancyMaths_CalcBlendedProbeCurveBuoyancy_Params params;
	params.PrimaryBuoyancyCurve = PrimaryBuoyancyCurve;
	params.SecondaryBuoyancyCurve = SecondaryBuoyancyCurve;
	params.TertiaryBuoyancyCurve = TertiaryBuoyancyCurve;
	params.UnaryDistUnderwater = UnaryDistUnderwater;
	params.Blend = Blend;
	params.BlendType = BlendType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UBuoyancyMaths::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UBuoyancyMaths::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function Maths.CircleMaths.ConvertAngleToCircleSectorIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          AngleInDegrees                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NumberOfSectors                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          IgnoredFraction                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UCircleMaths::STATIC_ConvertAngleToCircleSectorIndex(float AngleInDegrees, int NumberOfSectors, float IgnoredFraction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.CircleMaths.ConvertAngleToCircleSectorIndex");

	UCircleMaths_ConvertAngleToCircleSectorIndex_Params params;
	params.AngleInDegrees = AngleInDegrees;
	params.NumberOfSectors = NumberOfSectors;
	params.IgnoredFraction = IgnoredFraction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.CircleMaths.Area
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          InRadius                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UCircleMaths::STATIC_Area(float InRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.CircleMaths.Area");

	UCircleMaths_Area_Params params;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCircleMaths::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UCircleMaths::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function Maths.CurveMaths.GetDistanceSquaredToCurve
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 WorldSpacePos                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USplineComponent*        Spline                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UCurveMaths::STATIC_GetDistanceSquaredToCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.CurveMaths.GetDistanceSquaredToCurve");

	UCurveMaths_GetDistanceSquaredToCurve_Params params;
	params.WorldSpacePos = WorldSpacePos;
	params.Spline = Spline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.CurveMaths.GetClosestTimeOnCurve
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 WorldSpacePos                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USplineComponent*        Spline                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UCurveMaths::STATIC_GetClosestTimeOnCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.CurveMaths.GetClosestTimeOnCurve");

	UCurveMaths_GetClosestTimeOnCurve_Params params;
	params.WorldSpacePos = WorldSpacePos;
	params.Spline = Spline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.CurveMaths.GetClosestPositionOnCurve
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 WorldSpacePos                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USplineComponent*        Spline                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector UCurveMaths::STATIC_GetClosestPositionOnCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.CurveMaths.GetClosestPositionOnCurve");

	UCurveMaths_GetClosestPositionOnCurve_Params params;
	params.WorldSpacePos = WorldSpacePos;
	params.Spline = Spline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.CurveMaths.GetClosestPointOnCurve
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 WorldSpacePos                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USplineComponent*        Spline                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UCurveMaths::STATIC_GetClosestPointOnCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.CurveMaths.GetClosestPointOnCurve");

	UCurveMaths_GetClosestPointOnCurve_Params params;
	params.WorldSpacePos = WorldSpacePos;
	params.Spline = Spline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.CurveMaths.GetCentre
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USplineComponent*        Spline                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector UCurveMaths::STATIC_GetCentre(class USplineComponent* Spline)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.CurveMaths.GetCentre");

	UCurveMaths_GetCentre_Params params;
	params.Spline = Spline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCurveMaths::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UCurveMaths::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function Maths.Density.Water
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UDensity::STATIC_Water()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.Density.Water");

	UDensity_Water_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.Density.SeaWater
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UDensity::STATIC_SeaWater()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.Density.SeaWater");

	UDensity_SeaWater_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.Density.Min
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UDensity::STATIC_Min()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.Density.Min");

	UDensity_Min_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.Density.Max
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UDensity::STATIC_Max()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.Density.Max");

	UDensity_Max_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.Density.IsValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          InValue                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UDensity::STATIC_IsValid(float InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.Density.IsValid");

	UDensity_IsValid_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.Density.Air
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UDensity::STATIC_Air()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.Density.Air");

	UDensity_Air_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UDensity::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UDensity::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function Maths.DragCoefficients.Sphere
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UDragCoefficients::STATIC_Sphere()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.DragCoefficients.Sphere");

	UDragCoefficients_Sphere_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.DragCoefficients.PlanePerpendicularToFlow
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UDragCoefficients::STATIC_PlanePerpendicularToFlow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.DragCoefficients.PlanePerpendicularToFlow");

	UDragCoefficients_PlanePerpendicularToFlow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.DragCoefficients.PlaneParallelToFlow
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UDragCoefficients::STATIC_PlaneParallelToFlow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.DragCoefficients.PlaneParallelToFlow");

	UDragCoefficients_PlaneParallelToFlow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.DragCoefficients.Min
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UDragCoefficients::STATIC_Min()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.DragCoefficients.Min");

	UDragCoefficients_Min_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.DragCoefficients.Max
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UDragCoefficients::STATIC_Max()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.DragCoefficients.Max");

	UDragCoefficients_Max_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.DragCoefficients.IsValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UDragCoefficients::STATIC_IsValid(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.DragCoefficients.IsValid");

	UDragCoefficients_IsValid_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.DragCoefficients.Cube
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UDragCoefficients::STATIC_Cube()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.DragCoefficients.Cube");

	UDragCoefficients_Cube_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UDragCoefficients::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UDragCoefficients::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function Maths.DragMaths.CalculateMagnitude
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          InSurfaceArea                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InSpeedReltaiveToFluid         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InDragCoefficient              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InFluidDensity                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UDragMaths::STATIC_CalculateMagnitude(float InSurfaceArea, float InSpeedReltaiveToFluid, float InDragCoefficient, float InFluidDensity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.DragMaths.CalculateMagnitude");

	UDragMaths_CalculateMagnitude_Params params;
	params.InSurfaceArea = InSurfaceArea;
	params.InSpeedReltaiveToFluid = InSpeedReltaiveToFluid;
	params.InDragCoefficient = InDragCoefficient;
	params.InFluidDensity = InFluidDensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UDragMaths::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UDragMaths::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function Maths.FloatMaths.WrapToRange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Input                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          LowerLimit                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          UpperLimit                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UFloatMaths::STATIC_WrapToRange(float Input, float LowerLimit, float UpperLimit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.FloatMaths.WrapToRange");

	UFloatMaths_WrapToRange_Params params;
	params.Input = Input;
	params.LowerLimit = LowerLimit;
	params.UpperLimit = UpperLimit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.FloatMaths.WrapToPositiveRange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Input                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          UpperLimit                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UFloatMaths::STATIC_WrapToPositiveRange(float Input, float UpperLimit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.FloatMaths.WrapToPositiveRange");

	UFloatMaths_WrapToPositiveRange_Params params;
	params.Input = Input;
	params.UpperLimit = UpperLimit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.FloatMaths.WrapAroundPivot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Input                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Pivot                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Range                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UFloatMaths::STATIC_WrapAroundPivot(float Input, float Pivot, float Range)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.FloatMaths.WrapAroundPivot");

	UFloatMaths_WrapAroundPivot_Params params;
	params.Input = Input;
	params.Pivot = Pivot;
	params.Range = Range;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.FloatMaths.MoveTowards
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          From                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          To                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Speed                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Time                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UFloatMaths::STATIC_MoveTowards(float From, float To, float Speed, float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.FloatMaths.MoveTowards");

	UFloatMaths_MoveTowards_Params params;
	params.From = From;
	params.To = To;
	params.Speed = Speed;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.FloatMaths.Map
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ValueToMapFrom                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          FromRangeStart                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          FromRangeEnd                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ToRangeStart                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ToRangeEnd                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Clamp                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UFloatMaths::STATIC_Map(float ValueToMapFrom, float FromRangeStart, float FromRangeEnd, float ToRangeStart, float ToRangeEnd, bool Clamp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.FloatMaths.Map");

	UFloatMaths_Map_Params params;
	params.ValueToMapFrom = ValueToMapFrom;
	params.FromRangeStart = FromRangeStart;
	params.FromRangeEnd = FromRangeEnd;
	params.ToRangeStart = ToRangeStart;
	params.ToRangeEnd = ToRangeEnd;
	params.Clamp = Clamp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.FloatMaths.IncrementCounter
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          Counter                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Delta                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CounterMax                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UFloatMaths::STATIC_IncrementCounter(float* Counter, float Delta, float CounterMax)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.FloatMaths.IncrementCounter");

	UFloatMaths_IncrementCounter_Params params;
	params.Delta = Delta;
	params.CounterMax = CounterMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Counter != nullptr)
		*Counter = params.Counter;


	return params.ReturnValue;
}


// Function Maths.FloatMaths.GetShortestSignedDistanceBetweenPointsInWrappedRange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          FromValue                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ToValue                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          LowerLimit                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          UpperLimit                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UFloatMaths::STATIC_GetShortestSignedDistanceBetweenPointsInWrappedRange(float FromValue, float ToValue, float LowerLimit, float UpperLimit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.FloatMaths.GetShortestSignedDistanceBetweenPointsInWrappedRange");

	UFloatMaths_GetShortestSignedDistanceBetweenPointsInWrappedRange_Params params;
	params.FromValue = FromValue;
	params.ToValue = ToValue;
	params.LowerLimit = LowerLimit;
	params.UpperLimit = UpperLimit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.FloatMaths.FindMidpointInWrappedRange
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Value1                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Value2                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          LowerLimit                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          UpperLimit                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UFloatMaths::STATIC_FindMidpointInWrappedRange(float Value1, float Value2, float LowerLimit, float UpperLimit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.FloatMaths.FindMidpointInWrappedRange");

	UFloatMaths_FindMidpointInWrappedRange_Params params;
	params.Value1 = Value1;
	params.Value2 = Value2;
	params.LowerLimit = LowerLimit;
	params.UpperLimit = UpperLimit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.FloatMaths.Bound
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ValueToBound                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Bound1                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Bound2                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UFloatMaths::STATIC_Bound(float ValueToBound, float Bound1, float Bound2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.FloatMaths.Bound");

	UFloatMaths_Bound_Params params;
	params.ValueToBound = ValueToBound;
	params.Bound1 = Bound1;
	params.Bound2 = Bound2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UFloatMaths::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UFloatMaths::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function Maths.Gravity.Earth
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UGravity::STATIC_Earth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.Gravity.Earth");

	UGravity_Earth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UGravity::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UGravity::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function Maths.OrientedPointBlueprintFunctionLibrary.GetPointAsTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FOrientedPoint          Point                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
struct FTransform UOrientedPointBlueprintFunctionLibrary::STATIC_GetPointAsTransform(const struct FOrientedPoint& Point)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.OrientedPointBlueprintFunctionLibrary.GetPointAsTransform");

	UOrientedPointBlueprintFunctionLibrary_GetPointAsTransform_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UOrientedPointBlueprintFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UOrientedPointBlueprintFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function Maths.PoissonDiscSampling.GeneratePoissonDiscDistributionAcrossPlane
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InCenter                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FQuat                   InOrientation                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// float                          InWidth                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InHeight                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InMinDistance                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InRNGSeed                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<struct FVector> UPoissonDiscSampling::STATIC_GeneratePoissonDiscDistributionAcrossPlane(const struct FVector& InCenter, const struct FQuat& InOrientation, float InWidth, float InHeight, float InMinDistance, int InRNGSeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.PoissonDiscSampling.GeneratePoissonDiscDistributionAcrossPlane");

	UPoissonDiscSampling_GeneratePoissonDiscDistributionAcrossPlane_Params params;
	params.InCenter = InCenter;
	params.InOrientation = InOrientation;
	params.InWidth = InWidth;
	params.InHeight = InHeight;
	params.InMinDistance = InMinDistance;
	params.InRNGSeed = InRNGSeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UPoissonDiscSampling::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UPoissonDiscSampling::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function Maths.ProjectileMaths.PredictProjectileFlightTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Speed                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Gravity                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Pitch                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Height                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UProjectileMaths::STATIC_PredictProjectileFlightTime(float Speed, float Gravity, float Pitch, float Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.ProjectileMaths.PredictProjectileFlightTime");

	UProjectileMaths_PredictProjectileFlightTime_Params params;
	params.Speed = Speed;
	params.Gravity = Gravity;
	params.Pitch = Pitch;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.ProjectileMaths.FindProjectileSpeedModifierToHitTarget
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 From                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FVector                 Target                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                          Pitch                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ProjectileSpeed                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Gravity                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UProjectileMaths::STATIC_FindProjectileSpeedModifierToHitTarget(const struct FVector& From, const struct FVector& Target, float Pitch, float ProjectileSpeed, float Gravity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.ProjectileMaths.FindProjectileSpeedModifierToHitTarget");

	UProjectileMaths_FindProjectileSpeedModifierToHitTarget_Params params;
	params.From = From;
	params.Target = Target;
	params.Pitch = Pitch;
	params.ProjectileSpeed = ProjectileSpeed;
	params.Gravity = Gravity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.ProjectileMaths.FindAimDirectionToHitTarget
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                OutAimDirection                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 From                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FVector                 Target                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                          ProjectileSpeed                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Gravity                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           PreferHigherAngles             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UProjectileMaths::STATIC_FindAimDirectionToHitTarget(struct FRotator* OutAimDirection, const struct FVector& From, const struct FVector& Target, float ProjectileSpeed, float Gravity, bool PreferHigherAngles)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.ProjectileMaths.FindAimDirectionToHitTarget");

	UProjectileMaths_FindAimDirectionToHitTarget_Params params;
	params.From = From;
	params.Target = Target;
	params.ProjectileSpeed = ProjectileSpeed;
	params.Gravity = Gravity;
	params.PreferHigherAngles = PreferHigherAngles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAimDirection != nullptr)
		*OutAimDirection = params.OutAimDirection;


	return params.ReturnValue;
}


// Function Maths.ProjectileMaths.CalculateLaunchVelocity
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 OutLaunchVelocty               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          OutFlightTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 From                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FVector                 Target                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FVector                 TargetVelocity                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                          ProjectileSpeed                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Gravity                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           PreferHigherAngles             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UProjectileMaths::STATIC_CalculateLaunchVelocity(struct FVector* OutLaunchVelocty, float* OutFlightTime, const struct FVector& From, const struct FVector& Target, const struct FVector& TargetVelocity, float ProjectileSpeed, float Gravity, bool PreferHigherAngles)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.ProjectileMaths.CalculateLaunchVelocity");

	UProjectileMaths_CalculateLaunchVelocity_Params params;
	params.From = From;
	params.Target = Target;
	params.TargetVelocity = TargetVelocity;
	params.ProjectileSpeed = ProjectileSpeed;
	params.Gravity = Gravity;
	params.PreferHigherAngles = PreferHigherAngles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutLaunchVelocty != nullptr)
		*OutLaunchVelocty = params.OutLaunchVelocty;
	if (OutFlightTime != nullptr)
		*OutFlightTime = params.OutFlightTime;


	return params.ReturnValue;
}


void UProjectileMaths::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UProjectileMaths::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function Maths.RotationMaths.TransformAroundArbitraryPivot
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              TargetTransform                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FTransform              BaseTransform                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FTransform              TransformToApply               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// bool                           LockFinalOrientation           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
struct FTransform URotationMaths::STATIC_TransformAroundArbitraryPivot(const struct FTransform& TargetTransform, const struct FTransform& BaseTransform, const struct FTransform& TransformToApply, bool LockFinalOrientation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.RotationMaths.TransformAroundArbitraryPivot");

	URotationMaths_TransformAroundArbitraryPivot_Params params;
	params.TargetTransform = TargetTransform;
	params.BaseTransform = BaseTransform;
	params.TransformToApply = TransformToApply;
	params.LockFinalOrientation = LockFinalOrientation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.RotationMaths.RotatorToQuat
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                Rotation                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
struct FQuat URotationMaths::STATIC_RotatorToQuat(const struct FRotator& Rotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.RotationMaths.RotatorToQuat");

	URotationMaths_RotatorToQuat_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.RotationMaths.RotateDirectionInterpConstantTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 CurrentDirectionNormalised     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FVector                 TargetDirectionNormalised      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InterpSpeedRadPerSec           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector URotationMaths::STATIC_RotateDirectionInterpConstantTo(const struct FVector& CurrentDirectionNormalised, const struct FVector& TargetDirectionNormalised, float DeltaTime, float InterpSpeedRadPerSec)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.RotationMaths.RotateDirectionInterpConstantTo");

	URotationMaths_RotateDirectionInterpConstantTo_Params params;
	params.CurrentDirectionNormalised = CurrentDirectionNormalised;
	params.TargetDirectionNormalised = TargetDirectionNormalised;
	params.DeltaTime = DeltaTime;
	params.InterpSpeedRadPerSec = InterpSpeedRadPerSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.RotationMaths.FindRotationAxisAndRadAngleBetweenVectors
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 FromVectorNormalised           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FVector                 ToVectorNormalised             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FVector                 OutRotationAxis                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          OutRotationAngleRadians        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URotationMaths::STATIC_FindRotationAxisAndRadAngleBetweenVectors(const struct FVector& FromVectorNormalised, const struct FVector& ToVectorNormalised, struct FVector* OutRotationAxis, float* OutRotationAngleRadians)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.RotationMaths.FindRotationAxisAndRadAngleBetweenVectors");

	URotationMaths_FindRotationAxisAndRadAngleBetweenVectors_Params params;
	params.FromVectorNormalised = FromVectorNormalised;
	params.ToVectorNormalised = ToVectorNormalised;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutRotationAxis != nullptr)
		*OutRotationAxis = params.OutRotationAxis;
	if (OutRotationAngleRadians != nullptr)
		*OutRotationAngleRadians = params.OutRotationAngleRadians;

}


// Function Maths.RotationMaths.AreRotatorsTheSameRotation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                Rotator1                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FRotator                Rotator2                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                          ErrorTolerance                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool URotationMaths::STATIC_AreRotatorsTheSameRotation(const struct FRotator& Rotator1, const struct FRotator& Rotator2, float ErrorTolerance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.RotationMaths.AreRotatorsTheSameRotation");

	URotationMaths_AreRotatorsTheSameRotation_Params params;
	params.Rotator1 = Rotator1;
	params.Rotator2 = Rotator2;
	params.ErrorTolerance = ErrorTolerance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.RotationMaths.AdvanceRotationBySpinAndTiltSynced
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                StartRotation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FRotator                TargetRotation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                          RotationRateDegrees            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DeltaTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotationUpdateResult   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FRotationUpdateResult URotationMaths::STATIC_AdvanceRotationBySpinAndTiltSynced(const struct FRotator& StartRotation, const struct FRotator& TargetRotation, float RotationRateDegrees, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.RotationMaths.AdvanceRotationBySpinAndTiltSynced");

	URotationMaths_AdvanceRotationBySpinAndTiltSynced_Params params;
	params.StartRotation = StartRotation;
	params.TargetRotation = TargetRotation;
	params.RotationRateDegrees = RotationRateDegrees;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void URotationMaths::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void URotationMaths::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function Maths.ShapeMathsBlueprintLibrary.IsPointOnOrWithinABox
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBoxComponent*           BoxComponent                   (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 WorldSpaceReferencePoint       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UShapeMathsBlueprintLibrary::STATIC_IsPointOnOrWithinABox(class UBoxComponent* BoxComponent, const struct FVector& WorldSpaceReferencePoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.ShapeMathsBlueprintLibrary.IsPointOnOrWithinABox");

	UShapeMathsBlueprintLibrary_IsPointOnOrWithinABox_Params params;
	params.BoxComponent = BoxComponent;
	params.WorldSpaceReferencePoint = WorldSpaceReferencePoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinASphere
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USphereComponent*        SphereComponent                (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 WorldSpaceReferencePoint       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector UShapeMathsBlueprintLibrary::STATIC_FindClosestPointWithinASphere(class USphereComponent* SphereComponent, const struct FVector& WorldSpaceReferencePoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinASphere");

	UShapeMathsBlueprintLibrary_FindClosestPointWithinASphere_Params params;
	params.SphereComponent = SphereComponent;
	params.WorldSpaceReferencePoint = WorldSpaceReferencePoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinACylinder
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UCapsuleComponent*       CylinderComponent              (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 WorldSpaceReferencePoint       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector UShapeMathsBlueprintLibrary::STATIC_FindClosestPointWithinACylinder(class UCapsuleComponent* CylinderComponent, const struct FVector& WorldSpaceReferencePoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinACylinder");

	UShapeMathsBlueprintLibrary_FindClosestPointWithinACylinder_Params params;
	params.CylinderComponent = CylinderComponent;
	params.WorldSpaceReferencePoint = WorldSpaceReferencePoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinACapsule
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UCapsuleComponent*       CapsuleComponent               (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 WorldSpaceReferencePoint       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector UShapeMathsBlueprintLibrary::STATIC_FindClosestPointWithinACapsule(class UCapsuleComponent* CapsuleComponent, const struct FVector& WorldSpaceReferencePoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinACapsule");

	UShapeMathsBlueprintLibrary_FindClosestPointWithinACapsule_Params params;
	params.CapsuleComponent = CapsuleComponent;
	params.WorldSpaceReferencePoint = WorldSpaceReferencePoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinABox
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBoxComponent*           BoxComponent                   (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 WorldSpaceReferencePoint       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector UShapeMathsBlueprintLibrary::STATIC_FindClosestPointWithinABox(class UBoxComponent* BoxComponent, const struct FVector& WorldSpaceReferencePoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinABox");

	UShapeMathsBlueprintLibrary_FindClosestPointWithinABox_Params params;
	params.BoxComponent = BoxComponent;
	params.WorldSpaceReferencePoint = WorldSpaceReferencePoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UShapeMathsBlueprintLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UShapeMathsBlueprintLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function Maths.SphereMaths.VolumeFromRadius
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          InRadius                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float USphereMaths::STATIC_VolumeFromRadius(float InRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.SphereMaths.VolumeFromRadius");

	USphereMaths_VolumeFromRadius_Params params;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.SphereMaths.SurfaceAreaFromRadius
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          InRadius                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float USphereMaths::STATIC_SurfaceAreaFromRadius(float InRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.SphereMaths.SurfaceAreaFromRadius");

	USphereMaths_SurfaceAreaFromRadius_Params params;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void USphereMaths::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void USphereMaths::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function Maths.SphericalCapMaths.Volume
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          InRadius                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InHeight                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float USphericalCapMaths::STATIC_Volume(float InRadius, float InHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.SphericalCapMaths.Volume");

	USphericalCapMaths_Volume_Params params;
	params.InRadius = InRadius;
	params.InHeight = InHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.SphericalCapMaths.CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          InRadius                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InHeight                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float USphericalCapMaths::STATIC_CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid(float InRadius, float InHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.SphericalCapMaths.CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid");

	USphericalCapMaths_CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid_Params params;
	params.InRadius = InRadius;
	params.InHeight = InHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.SphericalCapMaths.BaseRadius
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          InRadius                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InHeight                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float USphericalCapMaths::STATIC_BaseRadius(float InRadius, float InHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.SphericalCapMaths.BaseRadius");

	USphericalCapMaths_BaseRadius_Params params;
	params.InRadius = InRadius;
	params.InHeight = InHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void USphericalCapMaths::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void USphericalCapMaths::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UStatisticsMaths::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UStatisticsMaths::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function Maths.TimedBufferFunctionLibrary.UpdateInterval
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FTimedBuffer            TimedBuffer                    (Parm, OutParm, ReferenceParm)
// float                          DeltaTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTimedBufferFunctionLibrary::STATIC_UpdateInterval(struct FTimedBuffer* TimedBuffer, float DeltaTime, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.TimedBufferFunctionLibrary.UpdateInterval");

	UTimedBufferFunctionLibrary_UpdateInterval_Params params;
	params.DeltaTime = DeltaTime;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TimedBuffer != nullptr)
		*TimedBuffer = params.TimedBuffer;

}


// Function Maths.TimedBufferFunctionLibrary.GetValueRange
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTimedBuffer            TimedBuffer                    (Parm, OutParm, ReferenceParm)
// float                          MinWindowLength                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ValueRange                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTimedBufferFunctionLibrary::STATIC_GetValueRange(struct FTimedBuffer* TimedBuffer, float MinWindowLength, float* ValueRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.TimedBufferFunctionLibrary.GetValueRange");

	UTimedBufferFunctionLibrary_GetValueRange_Params params;
	params.MinWindowLength = MinWindowLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TimedBuffer != nullptr)
		*TimedBuffer = params.TimedBuffer;
	if (ValueRange != nullptr)
		*ValueRange = params.ValueRange;


	return params.ReturnValue;
}


// Function Maths.TimedBufferFunctionLibrary.CreateTimedBuffer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          WindowLength                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimedBuffer            ReturnValue                    (Parm, OutParm, ReturnParm)
struct FTimedBuffer UTimedBufferFunctionLibrary::STATIC_CreateTimedBuffer(float WindowLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.TimedBufferFunctionLibrary.CreateTimedBuffer");

	UTimedBufferFunctionLibrary_CreateTimedBuffer_Params params;
	params.WindowLength = WindowLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UTimedBufferFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UTimedBufferFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function Maths.TimeMaths.GetDifference
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime               A                              (Parm, ZeroConstructor)
// struct FDateTime               B                              (Parm, ZeroConstructor)
// struct FTimespan               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
struct FTimespan UTimeMaths::STATIC_GetDifference(const struct FDateTime& A, const struct FDateTime& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.TimeMaths.GetDifference");

	UTimeMaths_GetDifference_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UTimeMaths::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UTimeMaths::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function Maths.VectorMaths.LineIntersectsSphere
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 LineStart                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 LineDir                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 SphereCentre                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          SphereRadius                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ClosestIntersectionPoint       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UVectorMaths::STATIC_LineIntersectsSphere(const struct FVector& LineStart, const struct FVector& LineDir, const struct FVector& SphereCentre, float SphereRadius, struct FVector* ClosestIntersectionPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.VectorMaths.LineIntersectsSphere");

	UVectorMaths_LineIntersectsSphere_Params params;
	params.LineStart = LineStart;
	params.LineDir = LineDir;
	params.SphereCentre = SphereCentre;
	params.SphereRadius = SphereRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ClosestIntersectionPoint != nullptr)
		*ClosestIntersectionPoint = params.ClosestIntersectionPoint;


	return params.ReturnValue;
}


// Function Maths.VectorMaths.LineIntersectsCircleWithExitPoint
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D               LineOrigin                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D               LineDir                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D               CircleOrigin                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          CircleRadius                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D               OutClosestIntersectionPoint    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D               OutSecondaryIntersectionPoint  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          OutClosestIntersectionDistance (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          OutSecondaryIntersectionDistance (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UVectorMaths::STATIC_LineIntersectsCircleWithExitPoint(const struct FVector2D& LineOrigin, const struct FVector2D& LineDir, const struct FVector2D& CircleOrigin, float CircleRadius, struct FVector2D* OutClosestIntersectionPoint, struct FVector2D* OutSecondaryIntersectionPoint, float* OutClosestIntersectionDistance, float* OutSecondaryIntersectionDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.VectorMaths.LineIntersectsCircleWithExitPoint");

	UVectorMaths_LineIntersectsCircleWithExitPoint_Params params;
	params.LineOrigin = LineOrigin;
	params.LineDir = LineDir;
	params.CircleOrigin = CircleOrigin;
	params.CircleRadius = CircleRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutClosestIntersectionPoint != nullptr)
		*OutClosestIntersectionPoint = params.OutClosestIntersectionPoint;
	if (OutSecondaryIntersectionPoint != nullptr)
		*OutSecondaryIntersectionPoint = params.OutSecondaryIntersectionPoint;
	if (OutClosestIntersectionDistance != nullptr)
		*OutClosestIntersectionDistance = params.OutClosestIntersectionDistance;
	if (OutSecondaryIntersectionDistance != nullptr)
		*OutSecondaryIntersectionDistance = params.OutSecondaryIntersectionDistance;


	return params.ReturnValue;
}


// Function Maths.VectorMaths.LineIntersectsCircle
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D               LineOrigin                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D               LineDir                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D               CircleOrigin                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          CircleRadius                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D               OutClosestIntersectionPoint    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          OutIntersectionDistance        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UVectorMaths::STATIC_LineIntersectsCircle(const struct FVector2D& LineOrigin, const struct FVector2D& LineDir, const struct FVector2D& CircleOrigin, float CircleRadius, struct FVector2D* OutClosestIntersectionPoint, float* OutIntersectionDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.VectorMaths.LineIntersectsCircle");

	UVectorMaths_LineIntersectsCircle_Params params;
	params.LineOrigin = LineOrigin;
	params.LineDir = LineDir;
	params.CircleOrigin = CircleOrigin;
	params.CircleRadius = CircleRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutClosestIntersectionPoint != nullptr)
		*OutClosestIntersectionPoint = params.OutClosestIntersectionPoint;
	if (OutIntersectionDistance != nullptr)
		*OutIntersectionDistance = params.OutIntersectionDistance;


	return params.ReturnValue;
}


// Function Maths.VectorMaths.IntersectLineSegmentWithPlane
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 LineStart                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FVector                 LineEnd                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FVector                 PlanePos                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FVector                 PlaneNormal                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                          PlaneThickness                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 IntersectionPos                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          NormalisedIntersectionTOnLineSegment (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Maths_EPlaneLineIntersectionType> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<Maths_EPlaneLineIntersectionType> UVectorMaths::STATIC_IntersectLineSegmentWithPlane(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& PlanePos, const struct FVector& PlaneNormal, float PlaneThickness, struct FVector* IntersectionPos, float* NormalisedIntersectionTOnLineSegment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.VectorMaths.IntersectLineSegmentWithPlane");

	UVectorMaths_IntersectLineSegmentWithPlane_Params params;
	params.LineStart = LineStart;
	params.LineEnd = LineEnd;
	params.PlanePos = PlanePos;
	params.PlaneNormal = PlaneNormal;
	params.PlaneThickness = PlaneThickness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IntersectionPos != nullptr)
		*IntersectionPos = params.IntersectionPos;
	if (NormalisedIntersectionTOnLineSegment != nullptr)
		*NormalisedIntersectionTOnLineSegment = params.NormalisedIntersectionTOnLineSegment;


	return params.ReturnValue;
}


// Function Maths.VectorMaths.Distance
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 A                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FVector                 B                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UVectorMaths::STATIC_Distance(const struct FVector& A, const struct FVector& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.VectorMaths.Distance");

	UVectorMaths_Distance_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maths.VectorMaths.Cross_Vector2DVector2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D               A                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D               B                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UVectorMaths::STATIC_Cross_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Maths.VectorMaths.Cross_Vector2DVector2D");

	UVectorMaths_Cross_Vector2DVector2D_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UVectorMaths::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UVectorMaths::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
