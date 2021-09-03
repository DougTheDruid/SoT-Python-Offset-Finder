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

void FWaterInformation::AfterRead()
{
	READ_PTR_FULL(WaterType, UClass);
}

void FWaterInformation::BeforeDelete()
{
	DELE_PTR_FULL(WaterType);
}

void FWaterSplashProbe::AfterRead()
{
}

void FWaterSplashProbe::BeforeDelete()
{
}

void FSplashProbe::AfterRead()
{
	READ_PTR_FULL(ParticleSystem, UObject);
	READ_PTR_FULL(CurrentlyPlayingVFX, UParticleSystemComponent);
}

void FSplashProbe::BeforeDelete()
{
	DELE_PTR_FULL(ParticleSystem);
	DELE_PTR_FULL(CurrentlyPlayingVFX);
}

void FBuoyancyVolumeSample::AfterRead()
{
	READ_PTR_FULL(DistUnderwaterVSBuoyancyForce, UCurveFloat);
	READ_PTR_FULL(DistUnderwaterVSBuoyancyForceSecondary, UCurveFloat);
	READ_PTR_FULL(DistUnderwaterVSBuoyancyForceTertiary, UCurveFloat);
	READ_PTR_FULL(FakeZOffsetGeneratorCurve, UCurveFloat);
}

void FBuoyancyVolumeSample::BeforeDelete()
{
	DELE_PTR_FULL(DistUnderwaterVSBuoyancyForce);
	DELE_PTR_FULL(DistUnderwaterVSBuoyancyForceSecondary);
	DELE_PTR_FULL(DistUnderwaterVSBuoyancyForceTertiary);
	DELE_PTR_FULL(FakeZOffsetGeneratorCurve);
}

void FBuoyancyDragSample::AfterRead()
{
}

void FBuoyancyDragSample::BeforeDelete()
{
}

void FWaterBuoyancy::AfterRead()
{
	READ_PTR_FULL(PrimitiveComponent, UPrimitiveComponent);
	READ_PTR_FULL(BuyoancySampleZSpeedVSDampeningScalar, UCurveFloat);
}

void FWaterBuoyancy::BeforeDelete()
{
	DELE_PTR_FULL(PrimitiveComponent);
	DELE_PTR_FULL(BuyoancySampleZSpeedVSDampeningScalar);
}

void FBuoyancySampleMovementConfigurationEntry::AfterRead()
{
	READ_PTR_FULL(BuoyancyScaleCurve, UCurveFloat);
}

void FBuoyancySampleMovementConfigurationEntry::BeforeDelete()
{
	DELE_PTR_FULL(BuoyancyScaleCurve);
}

void FBuoyancySampleMovementConfiguration::AfterRead()
{
	READ_PTR_FULL(CenterOfMassOffsetCurve, UCurveVector);
	READ_PTR_FULL(OverallBuoyancyScalarBlendCurve, UCurveFloat);
	READ_PTR_FULL(ProbeMovementBlendCurve, UCurveFloat);
}

void FBuoyancySampleMovementConfiguration::BeforeDelete()
{
	DELE_PTR_FULL(CenterOfMassOffsetCurve);
	DELE_PTR_FULL(OverallBuoyancyScalarBlendCurve);
	DELE_PTR_FULL(ProbeMovementBlendCurve);
}

void FBuoyancySampleMovement::AfterRead()
{
	READ_PTR_FULL(BuoyancyScalarCurve, UCurveFloat);
	READ_PTR_FULL(ProbeMovementCurve, UCurveFloat);
}

void FBuoyancySampleMovement::BeforeDelete()
{
	DELE_PTR_FULL(BuoyancyScalarCurve);
	DELE_PTR_FULL(ProbeMovementCurve);
}

void FWaterSpout::AfterRead()
{
	READ_PTR_FULL(SpoutParticleSystem, UParticleSystemComponent);
	READ_PTR_FULL(SplashParticleSystem, UParticleSystemComponent);
}

void FWaterSpout::BeforeDelete()
{
	DELE_PTR_FULL(SpoutParticleSystem);
	DELE_PTR_FULL(SplashParticleSystem);
}

void FWaterSplashProbesContainer::AfterRead()
{
}

void FWaterSplashProbesContainer::BeforeDelete()
{
}

void FEventCurrentWaterPlaneChange::AfterRead()
{
	READ_PTR_FULL(FormerWaterPlane, UBaseWaterComponent);
	READ_PTR_FULL(NewWaterPlane, UBaseWaterComponent);
}

void FEventCurrentWaterPlaneChange::BeforeDelete()
{
	DELE_PTR_FULL(FormerWaterPlane);
	DELE_PTR_FULL(NewWaterPlane);
}

void FEventLeftWaterExclusionZone::AfterRead()
{
}

void FEventLeftWaterExclusionZone::BeforeDelete()
{
}

void FEventEnteredWaterExclusionZone::AfterRead()
{
}

void FEventEnteredWaterExclusionZone::BeforeDelete()
{
}

void FFFTWaterQueryResult::AfterRead()
{
}

void FFFTWaterQueryResult::BeforeDelete()
{
}

void AAthenaFFTWater::AfterRead()
{
	AFFTWater::AfterRead();

}

void AAthenaFFTWater::BeforeDelete()
{
	AFFTWater::BeforeDelete();

}

void UWaterEmissionVolumeInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UWaterEmissionVolumeInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void AAthenaWaterEmissionVolume::AfterRead()
{
	AWaterEmissionVolume::AfterRead();

}

void AAthenaWaterEmissionVolume::BeforeDelete()
{
	AWaterEmissionVolume::BeforeDelete();

}

// Function Water.FFTWaterInterface.SetExtendedPlaneComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UFFTWaterExtendedPlaneComponent* InFFTWaterComponent            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFFTWaterInterface::SetExtendedPlaneComponent(class UFFTWaterExtendedPlaneComponent* InFFTWaterComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.FFTWaterInterface.SetExtendedPlaneComponent");

	UFFTWaterInterface_SetExtendedPlaneComponent_Params params;
	params.InFFTWaterComponent = InFFTWaterComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Water.FFTWaterInterface.SetComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UFFTWaterComponent*      InFFTWaterComponent            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFFTWaterInterface::SetComponent(class UFFTWaterComponent* InFFTWaterComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.FFTWaterInterface.SetComponent");

	UFFTWaterInterface_SetComponent_Params params;
	params.InFFTWaterComponent = InFFTWaterComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Water.FFTWaterInterface.SetActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AAthenaFFTWater*         InFFTWaterActor                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFFTWaterInterface::SetActor(class AAthenaFFTWater* InFFTWaterActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.FFTWaterInterface.SetActor");

	UFFTWaterInterface_SetActor_Params params;
	params.InFFTWaterActor = InFFTWaterActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Water.FFTWaterInterface.GetExtendedPlaneComponent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFFTWaterExtendedPlaneComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UFFTWaterExtendedPlaneComponent* UFFTWaterInterface::GetExtendedPlaneComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.FFTWaterInterface.GetExtendedPlaneComponent");

	UFFTWaterInterface_GetExtendedPlaneComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.FFTWaterInterface.GetComponent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFFTWaterComponent*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UFFTWaterComponent* UFFTWaterInterface::GetComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.FFTWaterInterface.GetComponent");

	UFFTWaterInterface_GetComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.FFTWaterInterface.GetActor
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AAthenaFFTWater*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AAthenaFFTWater* UFFTWaterInterface::GetActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.FFTWaterInterface.GetActor");

	UFFTWaterInterface_GetActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UFFTWaterInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UFFTWaterInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UWaterProperties::AfterRead()
{
	UObject::AfterRead();

}

void UWaterProperties::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function Water.WaterInterface.IsReadyToBeQueried
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWaterInterface::IsReadyToBeQueried()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterInterface.IsReadyToBeQueried");

	UWaterInterface_IsReadyToBeQueried_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.WaterInterface.GetWaterInformationWithScaledChoppyness
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 SamplePosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D               ApproxVelocity                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Normal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ChoppynessScalar               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Water_EWaterQueryResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<Water_EWaterQueryResult> UWaterInterface::GetWaterInformationWithScaledChoppyness(const struct FVector& SamplePosition, float* Height, struct FVector2D* ApproxVelocity, struct FVector* Normal, class AActor* Actor, float ChoppynessScalar)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterInterface.GetWaterInformationWithScaledChoppyness");

	UWaterInterface_GetWaterInformationWithScaledChoppyness_Params params;
	params.SamplePosition = SamplePosition;
	params.Actor = Actor;
	params.ChoppynessScalar = ChoppynessScalar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;
	if (ApproxVelocity != nullptr)
		*ApproxVelocity = params.ApproxVelocity;
	if (Normal != nullptr)
		*Normal = params.Normal;


	return params.ReturnValue;
}


// Function Water.WaterInterface.GetWaterInformationBatched
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector2D>       SamplePositions                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  Heights                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector2D>       ApproxVelocities               (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>         Normals                        (Parm, OutParm, ZeroConstructor)
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Water_EWaterQueryResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<Water_EWaterQueryResult> UWaterInterface::GetWaterInformationBatched(TArray<struct FVector2D> SamplePositions, TArray<float>* Heights, TArray<struct FVector2D>* ApproxVelocities, TArray<struct FVector>* Normals, class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterInterface.GetWaterInformationBatched");

	UWaterInterface_GetWaterInformationBatched_Params params;
	params.SamplePositions = SamplePositions;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Heights != nullptr)
		*Heights = params.Heights;
	if (ApproxVelocities != nullptr)
		*ApproxVelocities = params.ApproxVelocities;
	if (Normals != nullptr)
		*Normals = params.Normals;


	return params.ReturnValue;
}


// Function Water.WaterInterface.GetWaterInformation
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 SamplePosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D               ApproxVelocity                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Normal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Water_EWaterQueryResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<Water_EWaterQueryResult> UWaterInterface::GetWaterInformation(const struct FVector& SamplePosition, float* Height, struct FVector2D* ApproxVelocity, struct FVector* Normal, class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterInterface.GetWaterInformation");

	UWaterInterface_GetWaterInformation_Params params;
	params.SamplePosition = SamplePosition;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;
	if (ApproxVelocity != nullptr)
		*ApproxVelocity = params.ApproxVelocity;
	if (Normal != nullptr)
		*Normal = params.Normal;


	return params.ReturnValue;
}


// Function Water.WaterInterface.GetWaterHeightWithScaledChoppyness
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 SamplePosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interpolate                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Height                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ChoppynessScalar               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Water_EWaterQueryResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<Water_EWaterQueryResult> UWaterInterface::GetWaterHeightWithScaledChoppyness(const struct FVector& SamplePosition, class AActor* Actor, bool Interpolate, float* Height, float ChoppynessScalar)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterInterface.GetWaterHeightWithScaledChoppyness");

	UWaterInterface_GetWaterHeightWithScaledChoppyness_Params params;
	params.SamplePosition = SamplePosition;
	params.Actor = Actor;
	params.Interpolate = Interpolate;
	params.ChoppynessScalar = ChoppynessScalar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;


	return params.ReturnValue;
}


// Function Water.WaterInterface.GetWaterHeight
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 SamplePosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interpolate                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Height                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Water_EWaterQueryResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<Water_EWaterQueryResult> UWaterInterface::GetWaterHeight(const struct FVector& SamplePosition, class AActor* Actor, bool Interpolate, float* Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterInterface.GetWaterHeight");

	UWaterInterface_GetWaterHeight_Params params;
	params.SamplePosition = SamplePosition;
	params.Actor = Actor;
	params.Interpolate = Interpolate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;


	return params.ReturnValue;
}


// Function Water.WaterInterface.GetActorWaterPlane
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWaterSimPlane          ReturnValue                    (Parm, OutParm, ReturnParm)
struct FWaterSimPlane UWaterInterface::GetActorWaterPlane(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterInterface.GetActorWaterPlane");

	UWaterInterface_GetActorWaterPlane_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.WaterInterface.GetActorWaterInformation
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWaterInformation       ReturnValue                    (Parm, OutParm, ReturnParm)
struct FWaterInformation UWaterInterface::GetActorWaterInformation(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterInterface.GetActorWaterInformation");

	UWaterInterface_GetActorWaterInformation_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UWaterInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UWaterInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function Water.FFTWaterService.OnRep_FFTWaterComponent
// (Final, Native, Public)
void AFFTWaterService::OnRep_FFTWaterComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.FFTWaterService.OnRep_FFTWaterComponent");

	AFFTWaterService_OnRep_FFTWaterComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Water.FFTWaterService.OnRep_ExtendedPlaneComponent
// (Final, Native, Public)
void AFFTWaterService::OnRep_ExtendedPlaneComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.FFTWaterService.OnRep_ExtendedPlaneComponent");

	AFFTWaterService_OnRep_ExtendedPlaneComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AFFTWaterService::AfterRead()
{
	AActor::AfterRead();

}

void AFFTWaterService::BeforeDelete()
{
	AActor::BeforeDelete();

}

// Function Water.FlatWaterPlaneComponent.OnActorLeaveWaterPlane
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFlatWaterPlaneComponent::OnActorLeaveWaterPlane(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.FlatWaterPlaneComponent.OnActorLeaveWaterPlane");

	UFlatWaterPlaneComponent_OnActorLeaveWaterPlane_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Water.FlatWaterPlaneComponent.OnActorEnterWaterPlane
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFlatWaterPlaneComponent::OnActorEnterWaterPlane(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.FlatWaterPlaneComponent.OnActorEnterWaterPlane");

	UFlatWaterPlaneComponent_OnActorEnterWaterPlane_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Water.FlatWaterPlaneComponent.ConvertToWaterSpace
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 WorldSpacePosition             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector2D UFlatWaterPlaneComponent::ConvertToWaterSpace(const struct FVector& WorldSpacePosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.FlatWaterPlaneComponent.ConvertToWaterSpace");

	UFlatWaterPlaneComponent_ConvertToWaterSpace_Params params;
	params.WorldSpacePosition = WorldSpacePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UFlatWaterPlaneComponent::AfterRead()
{
	UBaseWaterComponent::AfterRead();

}

void UFlatWaterPlaneComponent::BeforeDelete()
{
	UBaseWaterComponent::BeforeDelete();

}

void UMockWaterInterface::AfterRead()
{
	UObject::AfterRead();

}

void UMockWaterInterface::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UMockWaterServiceWithValidWaterPlane::AfterRead()
{
	UMockWaterInterface::AfterRead();

	READ_PTR_FULL(DefaultWaterComponent, UFFTWaterComponent);
}

void UMockWaterServiceWithValidWaterPlane::BeforeDelete()
{
	UMockWaterInterface::BeforeDelete();

	DELE_PTR_FULL(DefaultWaterComponent);
}

void UNoSwimWaterId::AfterRead()
{
	UWaterId::AfterRead();

}

void UNoSwimWaterId::BeforeDelete()
{
	UWaterId::BeforeDelete();

}

void USeaWaterId::AfterRead()
{
	UWaterId::AfterRead();

}

void USeaWaterId::BeforeDelete()
{
	UWaterId::BeforeDelete();

}

void UShipWaterId::AfterRead()
{
	UWaterId::AfterRead();

}

void UShipWaterId::BeforeDelete()
{
	UWaterId::BeforeDelete();

}

void USplashProbeDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void USplashProbeDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void USplashProbeVFXComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(Probes, USplashProbeDataAsset);
	READ_PTR_FULL(ProbesInstance, USplashProbeDataAsset);
	READ_PTR_FULL(AttachProbesToComponent, USceneComponent);
}

void USplashProbeVFXComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(Probes);
	DELE_PTR_FULL(ProbesInstance);
	DELE_PTR_FULL(AttachProbesToComponent);
}

void UUndergroundSeaWaterId::AfterRead()
{
	UWaterId::AfterRead();

}

void UUndergroundSeaWaterId::BeforeDelete()
{
	UWaterId::BeforeDelete();

}

// Function Water.WaterBuoyancyFunctionLibrary.TickBuoyancy
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  InOwner                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWaterBuoyancy          InWaterBuoyancy                (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// float                          InDeltaTime                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InChoppinessScalar             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          FakeZOffsetGeneratorScalar     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWaterBuoyancyFunctionLibrary::STATIC_TickBuoyancy(class AActor* InOwner, struct FWaterBuoyancy* InWaterBuoyancy, float InDeltaTime, float InChoppinessScalar, float FakeZOffsetGeneratorScalar)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterBuoyancyFunctionLibrary.TickBuoyancy");

	UWaterBuoyancyFunctionLibrary_TickBuoyancy_Params params;
	params.InOwner = InOwner;
	params.InDeltaTime = InDeltaTime;
	params.InChoppinessScalar = InChoppinessScalar;
	params.FakeZOffsetGeneratorScalar = FakeZOffsetGeneratorScalar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;


	return params.ReturnValue;
}


// Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancySamplesZOffsetSymmetricalAroundXAxis
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWaterBuoyancy          InWaterBuoyancy                (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// float                          ZOffset                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWaterBuoyancyFunctionLibrary::STATIC_SetBuoyancySamplesZOffsetSymmetricalAroundXAxis(struct FWaterBuoyancy* InWaterBuoyancy, float ZOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancySamplesZOffsetSymmetricalAroundXAxis");

	UWaterBuoyancyFunctionLibrary_SetBuoyancySamplesZOffsetSymmetricalAroundXAxis_Params params;
	params.ZOffset = ZOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;

}


// Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlendDebugOverride
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWaterBuoyancy          InWaterBuoyancy                (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// float                          UnaryBlendOverride             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWaterBuoyancyFunctionLibrary::STATIC_SetBuoyancyProbeCurveBlendDebugOverride(struct FWaterBuoyancy* InWaterBuoyancy, float UnaryBlendOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlendDebugOverride");

	UWaterBuoyancyFunctionLibrary_SetBuoyancyProbeCurveBlendDebugOverride_Params params;
	params.UnaryBlendOverride = UnaryBlendOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;

}


// Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlend
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWaterBuoyancy          InWaterBuoyancy                (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// float                          Blend                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Maths_EBuoyancyBlend> BlendType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWaterBuoyancyFunctionLibrary::STATIC_SetBuoyancyProbeCurveBlend(struct FWaterBuoyancy* InWaterBuoyancy, float Blend, TEnumAsByte<Maths_EBuoyancyBlend> BlendType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlend");

	UWaterBuoyancyFunctionLibrary_SetBuoyancyProbeCurveBlend_Params params;
	params.Blend = Blend;
	params.BlendType = BlendType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;

}


void UWaterBuoyancyFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UWaterBuoyancyFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function Water.WaterBuoyancySampleMovementFunctionLibrary.TickLocalSampleMovement
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWaterBuoyancy          InWaterBuoyancy                (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FBuoyancySampleMovement InSampleMovement               (Parm, OutParm)
// float                          DeltaTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWaterBuoyancySampleMovementFunctionLibrary::STATIC_TickLocalSampleMovement(class AActor* InActor, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterBuoyancySampleMovementFunctionLibrary.TickLocalSampleMovement");

	UWaterBuoyancySampleMovementFunctionLibrary_TickLocalSampleMovement_Params params;
	params.InActor = InActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;
	if (InSampleMovement != nullptr)
		*InSampleMovement = params.InSampleMovement;

}


// Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByRandomConfigurationIndex
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWaterBuoyancy          InWaterBuoyancy                (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FBuoyancySampleMovement InSampleMovement               (Parm, OutParm)
void UWaterBuoyancySampleMovementFunctionLibrary::STATIC_StartMovingVolumeSamplesLocallyByRandomConfigurationIndex(class AActor* InActor, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByRandomConfigurationIndex");

	UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocallyByRandomConfigurationIndex_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;
	if (InSampleMovement != nullptr)
		*InSampleMovement = params.InSampleMovement;

}


// Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByConfigurationIndex
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWaterBuoyancy          InWaterBuoyancy                (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FBuoyancySampleMovement InSampleMovement               (Parm, OutParm)
// int                            ConfigurationIndex             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWaterBuoyancySampleMovementFunctionLibrary::STATIC_StartMovingVolumeSamplesLocallyByConfigurationIndex(class AActor* InActor, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement, int ConfigurationIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByConfigurationIndex");

	UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocallyByConfigurationIndex_Params params;
	params.InActor = InActor;
	params.ConfigurationIndex = ConfigurationIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;
	if (InSampleMovement != nullptr)
		*InSampleMovement = params.InSampleMovement;

}


// Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocally
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWaterBuoyancy          InWaterBuoyancy                (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FBuoyancySampleMovement InSampleMovement               (Parm, OutParm)
// class UCurveVector*            InCenterOfMassOffsetCurve      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FBuoyancySampleMovementConfigurationEntry> NewSampleData                  (Parm, OutParm, ZeroConstructor)
// float                          BuoyancyScalarAtNewPosition    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*             BuoyancyScalarCurve            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*             ProbeMovementCurve             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MoveTime                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWaterBuoyancySampleMovementFunctionLibrary::STATIC_StartMovingVolumeSamplesLocally(class AActor* InActor, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement, class UCurveVector* InCenterOfMassOffsetCurve, TArray<struct FBuoyancySampleMovementConfigurationEntry>* NewSampleData, float BuoyancyScalarAtNewPosition, class UCurveFloat* BuoyancyScalarCurve, class UCurveFloat* ProbeMovementCurve, float MoveTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocally");

	UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocally_Params params;
	params.InActor = InActor;
	params.InCenterOfMassOffsetCurve = InCenterOfMassOffsetCurve;
	params.BuoyancyScalarAtNewPosition = BuoyancyScalarAtNewPosition;
	params.BuoyancyScalarCurve = BuoyancyScalarCurve;
	params.ProbeMovementCurve = ProbeMovementCurve;
	params.MoveTime = MoveTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;
	if (InSampleMovement != nullptr)
		*InSampleMovement = params.InSampleMovement;
	if (NewSampleData != nullptr)
		*NewSampleData = params.NewSampleData;

}


void UWaterBuoyancySampleMovementFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UWaterBuoyancySampleMovementFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UWaterEmissionVolumeService::AfterRead()
{
	UObject::AfterRead();

}

void UWaterEmissionVolumeService::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UWaterExclusionSurfaceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UWaterExclusionSurfaceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UWaterPlaneInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UWaterPlaneInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function Water.WaterInteractionComponent.LeaveWaterPlane
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBaseWaterComponent*     WaterComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWaterInteractionComponent::LeaveWaterPlane(class UBaseWaterComponent* WaterComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterInteractionComponent.LeaveWaterPlane");

	UWaterInteractionComponent_LeaveWaterPlane_Params params;
	params.WaterComponent = WaterComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Water.WaterInteractionComponent.LeaveWaterExclusionZone
// (Final, Native, Public, BlueprintCallable)
void UWaterInteractionComponent::LeaveWaterExclusionZone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterInteractionComponent.LeaveWaterExclusionZone");

	UWaterInteractionComponent_LeaveWaterExclusionZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Water.WaterInteractionComponent.IsUsingWaterExcludedZone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWaterInteractionComponent::IsUsingWaterExcludedZone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterInteractionComponent.IsUsingWaterExcludedZone");

	UWaterInteractionComponent_IsUsingWaterExcludedZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.WaterInteractionComponent.IsUsingNonDefaultWaterPlane
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWaterInteractionComponent::IsUsingNonDefaultWaterPlane()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterInteractionComponent.IsUsingNonDefaultWaterPlane");

	UWaterInteractionComponent_IsUsingNonDefaultWaterPlane_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.WaterInteractionComponent.IsInWaterExcludedZone
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWaterInteractionComponent::IsInWaterExcludedZone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterInteractionComponent.IsInWaterExcludedZone");

	UWaterInteractionComponent_IsInWaterExcludedZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.WaterInteractionComponent.GetWaterPlaneComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBaseWaterComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UBaseWaterComponent* UWaterInteractionComponent::GetWaterPlaneComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterInteractionComponent.GetWaterPlaneComponent");

	UWaterInteractionComponent_GetWaterPlaneComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.WaterInteractionComponent.GetNumberOfWaterPlanes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
unsigned char UWaterInteractionComponent::GetNumberOfWaterPlanes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterInteractionComponent.GetNumberOfWaterPlanes");

	UWaterInteractionComponent_GetNumberOfWaterPlanes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.WaterInteractionComponent.EnterWaterPlane
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBaseWaterComponent*     WaterComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWaterInteractionComponent::EnterWaterPlane(class UBaseWaterComponent* WaterComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterInteractionComponent.EnterWaterPlane");

	UWaterInteractionComponent_EnterWaterPlane_Params params;
	params.WaterComponent = WaterComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Water.WaterInteractionComponent.EnterWaterExclusionZone
// (Final, Native, Public, BlueprintCallable)
void UWaterInteractionComponent::EnterWaterExclusionZone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterInteractionComponent.EnterWaterExclusionZone");

	UWaterInteractionComponent_EnterWaterExclusionZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UWaterInteractionComponent::AfterRead()
{
	UBoxComponent::AfterRead();

}

void UWaterInteractionComponent::BeforeDelete()
{
	UBoxComponent::BeforeDelete();

}

// Function Water.WaterPlaneExclusionComponent.OnOverlapEnd
// (Final, Native, Private)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWaterPlaneExclusionComponent::OnOverlapEnd(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterPlaneExclusionComponent.OnOverlapEnd");

	UWaterPlaneExclusionComponent_OnOverlapEnd_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Water.WaterPlaneExclusionComponent.OnOverlapBegin
// (Final, Native, Private, HasOutParms)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           FromSweep                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UWaterPlaneExclusionComponent::OnOverlapBegin(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool FromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterPlaneExclusionComponent.OnOverlapBegin");

	UWaterPlaneExclusionComponent_OnOverlapBegin_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.FromSweep = FromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UWaterPlaneExclusionComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UWaterPlaneExclusionComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UWaterPlaneRetrievalProviderInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UWaterPlaneRetrievalProviderInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function Water.WaterSplashProbeFunctionLibrary.TickProbes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  InOwner                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FWaterSplashProbe> InSplashProbes                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          InDeltaTime                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWaterSplashProbeFunctionLibrary::STATIC_TickProbes(class AActor* InOwner, TArray<struct FWaterSplashProbe>* InSplashProbes, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterSplashProbeFunctionLibrary.TickProbes");

	UWaterSplashProbeFunctionLibrary_TickProbes_Params params;
	params.InOwner = InOwner;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InSplashProbes != nullptr)
		*InSplashProbes = params.InSplashProbes;

}


// Function Water.WaterSplashProbeFunctionLibrary.TickProbe
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  InOwner                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWaterSplashProbe       InSplashProbe                  (Parm, OutParm, ReferenceParm)
// float                          InDeltaTime                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWaterSplashProbeFunctionLibrary::STATIC_TickProbe(class AActor* InOwner, struct FWaterSplashProbe* InSplashProbe, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterSplashProbeFunctionLibrary.TickProbe");

	UWaterSplashProbeFunctionLibrary_TickProbe_Params params;
	params.InOwner = InOwner;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InSplashProbe != nullptr)
		*InSplashProbe = params.InSplashProbe;

}


// Function Water.WaterSplashProbeFunctionLibrary.SetSamplingTime
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FWaterSplashProbe> InSplashProbes                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          SamplingTime                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWaterSplashProbeFunctionLibrary::STATIC_SetSamplingTime(TArray<struct FWaterSplashProbe>* InSplashProbes, float SamplingTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterSplashProbeFunctionLibrary.SetSamplingTime");

	UWaterSplashProbeFunctionLibrary_SetSamplingTime_Params params;
	params.SamplingTime = SamplingTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InSplashProbes != nullptr)
		*InSplashProbes = params.InSplashProbes;

}


// Function Water.WaterSplashProbeFunctionLibrary.GetRelativeWaterHeightChangeSpd
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<struct FWaterSplashProbe> InSplashProbes                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ProbeIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector UWaterSplashProbeFunctionLibrary::STATIC_GetRelativeWaterHeightChangeSpd(TArray<struct FWaterSplashProbe>* InSplashProbes, int ProbeIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterSplashProbeFunctionLibrary.GetRelativeWaterHeightChangeSpd");

	UWaterSplashProbeFunctionLibrary_GetRelativeWaterHeightChangeSpd_Params params;
	params.ProbeIndex = ProbeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InSplashProbes != nullptr)
		*InSplashProbes = params.InSplashProbes;


	return params.ReturnValue;
}


void UWaterSplashProbeFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UWaterSplashProbeFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function Water.WaterSpoutVFXComponent.AddSplashVFXSpawnerWithLocation
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FWaterSpout             WaterSplashLocator             (Parm, OutParm, ContainsInstancedReference)
void UWaterSpoutVFXComponent::AddSplashVFXSpawnerWithLocation(struct FWaterSpout* WaterSplashLocator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterSpoutVFXComponent.AddSplashVFXSpawnerWithLocation");

	UWaterSpoutVFXComponent_AddSplashVFXSpawnerWithLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WaterSplashLocator != nullptr)
		*WaterSplashLocator = params.WaterSplashLocator;

}


// Function Water.WaterSpoutVFXComponent.ActivateSplashVFXWithDelay
// (Final, Native, Private)
void UWaterSpoutVFXComponent::ActivateSplashVFXWithDelay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Water.WaterSpoutVFXComponent.ActivateSplashVFXWithDelay");

	UWaterSpoutVFXComponent_ActivateSplashVFXWithDelay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UWaterSpoutVFXComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(SpoutParticleSystem, UObject);
	READ_PTR_FULL(SplashParticleSystem, UObject);
	READ_PTR_FULL(SplashKillPlaneMesh, UStaticMesh);
	READ_PTR_FULL(SplashKillPlane, UStaticMeshComponent);
}

void UWaterSpoutVFXComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(SpoutParticleSystem);
	DELE_PTR_FULL(SplashParticleSystem);
	DELE_PTR_FULL(SplashKillPlaneMesh);
	DELE_PTR_FULL(SplashKillPlane);
}

void UWaterVolumeInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UWaterVolumeInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
