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
// Classes
//---------------------------------------------------------------------------

// Class Maths.AngleMaths
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAngleMaths : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Maths.AngleMaths");
		return ptr;
	}



	float STATIC_CalculateEulerAngle(float FromAngle, float ToAngle);
	float STATIC_AngleMoveTowardsMod180(float Angle, float TargetAngle, float Rate);
	float STATIC_AngleMod360(float Angle);
	float STATIC_AngleMod180(float Angle);
	float STATIC_AngleLerpShortest(float Start, float End, float Amount);
	void AfterRead();
	void BeforeDelete();

};

// Class Maths.BuoyancyMaths
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBuoyancyMaths : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Maths.BuoyancyMaths");
		return ptr;
	}



	float STATIC_CalculateMagnitude(float InSubmersedVolume, float InFluidDensity, float InGravity);
	float STATIC_CalcBlendedProbeCurveBuoyancy(class UCurveFloat* PrimaryBuoyancyCurve, class UCurveFloat* SecondaryBuoyancyCurve, class UCurveFloat* TertiaryBuoyancyCurve, float UnaryDistUnderwater, float Blend, TEnumAsByte<Maths_EBuoyancyBlend> BlendType);
	void AfterRead();
	void BeforeDelete();

};

// Class Maths.CircleMaths
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCircleMaths : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Maths.CircleMaths");
		return ptr;
	}



	int STATIC_ConvertAngleToCircleSectorIndex(float AngleInDegrees, int NumberOfSectors, float IgnoredFraction);
	float STATIC_Area(float InRadius);
	void AfterRead();
	void BeforeDelete();

};

// Class Maths.CurveMaths
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCurveMaths : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Maths.CurveMaths");
		return ptr;
	}



	float STATIC_GetDistanceSquaredToCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline);
	float STATIC_GetClosestTimeOnCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline);
	struct FVector STATIC_GetClosestPositionOnCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline);
	float STATIC_GetClosestPointOnCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline);
	struct FVector STATIC_GetCentre(class USplineComponent* Spline);
	void AfterRead();
	void BeforeDelete();

};

// Class Maths.Density
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDensity : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Maths.Density");
		return ptr;
	}



	float STATIC_Water();
	float STATIC_SeaWater();
	float STATIC_Min();
	float STATIC_Max();
	bool STATIC_IsValid(float InValue);
	float STATIC_Air();
	void AfterRead();
	void BeforeDelete();

};

// Class Maths.DragCoefficients
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDragCoefficients : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Maths.DragCoefficients");
		return ptr;
	}



	float STATIC_Sphere();
	float STATIC_PlanePerpendicularToFlow();
	float STATIC_PlaneParallelToFlow();
	float STATIC_Min();
	float STATIC_Max();
	bool STATIC_IsValid(float Value);
	float STATIC_Cube();
	void AfterRead();
	void BeforeDelete();

};

// Class Maths.DragMaths
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDragMaths : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Maths.DragMaths");
		return ptr;
	}



	float STATIC_CalculateMagnitude(float InSurfaceArea, float InSpeedReltaiveToFluid, float InDragCoefficient, float InFluidDensity);
	void AfterRead();
	void BeforeDelete();

};

// Class Maths.FloatMaths
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFloatMaths : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Maths.FloatMaths");
		return ptr;
	}



	float STATIC_WrapToRange(float Input, float LowerLimit, float UpperLimit);
	float STATIC_WrapToPositiveRange(float Input, float UpperLimit);
	float STATIC_WrapAroundPivot(float Input, float Pivot, float Range);
	float STATIC_MoveTowards(float From, float To, float Speed, float Time);
	float STATIC_Map(float ValueToMapFrom, float FromRangeStart, float FromRangeEnd, float ToRangeStart, float ToRangeEnd, bool Clamp);
	bool STATIC_IncrementCounter(float* Counter, float Delta, float CounterMax);
	float STATIC_GetShortestSignedDistanceBetweenPointsInWrappedRange(float FromValue, float ToValue, float LowerLimit, float UpperLimit);
	float STATIC_FindMidpointInWrappedRange(float Value1, float Value2, float LowerLimit, float UpperLimit);
	float STATIC_Bound(float ValueToBound, float Bound1, float Bound2);
	void AfterRead();
	void BeforeDelete();

};

// Class Maths.Gravity
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGravity : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Maths.Gravity");
		return ptr;
	}



	float STATIC_Earth();
	void AfterRead();
	void BeforeDelete();

};

// Class Maths.OrientedPointBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UOrientedPointBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Maths.OrientedPointBlueprintFunctionLibrary");
		return ptr;
	}



	struct FTransform STATIC_GetPointAsTransform(const struct FOrientedPoint& Point);
	void AfterRead();
	void BeforeDelete();

};

// Class Maths.PoissonDiscSampling
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPoissonDiscSampling : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Maths.PoissonDiscSampling");
		return ptr;
	}



	TArray<struct FVector> STATIC_GeneratePoissonDiscDistributionAcrossPlane(const struct FVector& InCenter, const struct FQuat& InOrientation, float InWidth, float InHeight, float InMinDistance, int InRNGSeed);
	void AfterRead();
	void BeforeDelete();

};

// Class Maths.ProjectileMaths
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UProjectileMaths : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Maths.ProjectileMaths");
		return ptr;
	}



	float STATIC_PredictProjectileFlightTime(float Speed, float Gravity, float Pitch, float Height);
	float STATIC_FindProjectileSpeedModifierToHitTarget(const struct FVector& From, const struct FVector& Target, float Pitch, float ProjectileSpeed, float Gravity);
	bool STATIC_FindAimDirectionToHitTarget(struct FRotator* OutAimDirection, const struct FVector& From, const struct FVector& Target, float ProjectileSpeed, float Gravity, bool PreferHigherAngles);
	bool STATIC_CalculateLaunchVelocity(struct FVector* OutLaunchVelocty, float* OutFlightTime, const struct FVector& From, const struct FVector& Target, const struct FVector& TargetVelocity, float ProjectileSpeed, float Gravity, bool PreferHigherAngles);
	void AfterRead();
	void BeforeDelete();

};

// Class Maths.RotationMaths
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URotationMaths : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Maths.RotationMaths");
		return ptr;
	}



	struct FTransform STATIC_TransformAroundArbitraryPivot(const struct FTransform& TargetTransform, const struct FTransform& BaseTransform, const struct FTransform& TransformToApply, bool LockFinalOrientation);
	struct FQuat STATIC_RotatorToQuat(const struct FRotator& Rotation);
	struct FVector STATIC_RotateDirectionInterpConstantTo(const struct FVector& CurrentDirectionNormalised, const struct FVector& TargetDirectionNormalised, float DeltaTime, float InterpSpeedRadPerSec);
	void STATIC_FindRotationAxisAndRadAngleBetweenVectors(const struct FVector& FromVectorNormalised, const struct FVector& ToVectorNormalised, struct FVector* OutRotationAxis, float* OutRotationAngleRadians);
	bool STATIC_AreRotatorsTheSameRotation(const struct FRotator& Rotator1, const struct FRotator& Rotator2, float ErrorTolerance);
	struct FRotationUpdateResult STATIC_AdvanceRotationBySpinAndTiltSynced(const struct FRotator& StartRotation, const struct FRotator& TargetRotation, float RotationRateDegrees, float DeltaTime);
	void AfterRead();
	void BeforeDelete();

};

// Class Maths.ShapeMathsBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UShapeMathsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Maths.ShapeMathsBlueprintLibrary");
		return ptr;
	}



	bool STATIC_IsPointOnOrWithinABox(class UBoxComponent* BoxComponent, const struct FVector& WorldSpaceReferencePoint);
	struct FVector STATIC_FindClosestPointWithinASphere(class USphereComponent* SphereComponent, const struct FVector& WorldSpaceReferencePoint);
	struct FVector STATIC_FindClosestPointWithinACylinder(class UCapsuleComponent* CylinderComponent, const struct FVector& WorldSpaceReferencePoint);
	struct FVector STATIC_FindClosestPointWithinACapsule(class UCapsuleComponent* CapsuleComponent, const struct FVector& WorldSpaceReferencePoint);
	struct FVector STATIC_FindClosestPointWithinABox(class UBoxComponent* BoxComponent, const struct FVector& WorldSpaceReferencePoint);
	void AfterRead();
	void BeforeDelete();

};

// Class Maths.SphereMaths
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USphereMaths : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Maths.SphereMaths");
		return ptr;
	}



	float STATIC_VolumeFromRadius(float InRadius);
	float STATIC_SurfaceAreaFromRadius(float InRadius);
	void AfterRead();
	void BeforeDelete();

};

// Class Maths.SphericalCapMaths
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USphericalCapMaths : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Maths.SphericalCapMaths");
		return ptr;
	}



	float STATIC_Volume(float InRadius, float InHeight);
	float STATIC_CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid(float InRadius, float InHeight);
	float STATIC_BaseRadius(float InRadius, float InHeight);
	void AfterRead();
	void BeforeDelete();

};

// Class Maths.StatisticsMaths
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStatisticsMaths : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Maths.StatisticsMaths");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Maths.TimedBufferFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTimedBufferFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Maths.TimedBufferFunctionLibrary");
		return ptr;
	}



	void STATIC_UpdateInterval(struct FTimedBuffer* TimedBuffer, float DeltaTime, float Value);
	bool STATIC_GetValueRange(struct FTimedBuffer* TimedBuffer, float MinWindowLength, float* ValueRange);
	struct FTimedBuffer STATIC_CreateTimedBuffer(float WindowLength);
	void AfterRead();
	void BeforeDelete();

};

// Class Maths.TimeMaths
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTimeMaths : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Maths.TimeMaths");
		return ptr;
	}



	struct FTimespan STATIC_GetDifference(const struct FDateTime& A, const struct FDateTime& B);
	void AfterRead();
	void BeforeDelete();

};

// Class Maths.VectorMaths
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVectorMaths : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Maths.VectorMaths");
		return ptr;
	}



	bool STATIC_LineIntersectsSphere(const struct FVector& LineStart, const struct FVector& LineDir, const struct FVector& SphereCentre, float SphereRadius, struct FVector* ClosestIntersectionPoint);
	bool STATIC_LineIntersectsCircleWithExitPoint(const struct FVector2D& LineOrigin, const struct FVector2D& LineDir, const struct FVector2D& CircleOrigin, float CircleRadius, struct FVector2D* OutClosestIntersectionPoint, struct FVector2D* OutSecondaryIntersectionPoint, float* OutClosestIntersectionDistance, float* OutSecondaryIntersectionDistance);
	bool STATIC_LineIntersectsCircle(const struct FVector2D& LineOrigin, const struct FVector2D& LineDir, const struct FVector2D& CircleOrigin, float CircleRadius, struct FVector2D* OutClosestIntersectionPoint, float* OutIntersectionDistance);
	TEnumAsByte<Maths_EPlaneLineIntersectionType> STATIC_IntersectLineSegmentWithPlane(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& PlanePos, const struct FVector& PlaneNormal, float PlaneThickness, struct FVector* IntersectionPos, float* NormalisedIntersectionTOnLineSegment);
	float STATIC_Distance(const struct FVector& A, const struct FVector& B);
	float STATIC_Cross_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
