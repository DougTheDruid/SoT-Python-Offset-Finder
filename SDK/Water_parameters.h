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

// Function Water.FFTWaterInterface.SetExtendedPlaneComponent
struct UFFTWaterInterface_SetExtendedPlaneComponent_Params
{
	class UFFTWaterExtendedPlaneComponent*             InFFTWaterComponent;                                       // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.FFTWaterInterface.SetComponent
struct UFFTWaterInterface_SetComponent_Params
{
	class UFFTWaterComponent*                          InFFTWaterComponent;                                       // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.FFTWaterInterface.SetActor
struct UFFTWaterInterface_SetActor_Params
{
	class AAthenaFFTWater*                             InFFTWaterActor;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.FFTWaterInterface.GetExtendedPlaneComponent
struct UFFTWaterInterface_GetExtendedPlaneComponent_Params
{
	class UFFTWaterExtendedPlaneComponent*             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.FFTWaterInterface.GetComponent
struct UFFTWaterInterface_GetComponent_Params
{
	class UFFTWaterComponent*                          ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.FFTWaterInterface.GetActor
struct UFFTWaterInterface_GetActor_Params
{
	class AAthenaFFTWater*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterInterface.IsReadyToBeQueried
struct UWaterInterface_IsReadyToBeQueried_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Water.WaterInterface.GetWaterInformationWithScaledChoppyness
struct UWaterInterface_GetWaterInformationWithScaledChoppyness_Params
{
	struct FVector                                     SamplePosition;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              Height;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   ApproxVelocity;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Normal;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChoppynessScalar;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Water_EWaterQueryResult>               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterInterface.GetWaterInformationBatched
struct UWaterInterface_GetWaterInformationBatched_Params
{
	TArray<struct FVector2D>                           SamplePositions;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      Heights;                                                   // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector2D>                           ApproxVelocities;                                          // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector>                             Normals;                                                   // (Parm, OutParm, ZeroConstructor)
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Water_EWaterQueryResult>               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterInterface.GetWaterInformation
struct UWaterInterface_GetWaterInformation_Params
{
	struct FVector                                     SamplePosition;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              Height;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   ApproxVelocity;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Normal;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Water_EWaterQueryResult>               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterInterface.GetWaterHeightWithScaledChoppyness
struct UWaterInterface_GetWaterHeightWithScaledChoppyness_Params
{
	struct FVector                                     SamplePosition;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interpolate;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Height;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChoppynessScalar;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Water_EWaterQueryResult>               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterInterface.GetWaterHeight
struct UWaterInterface_GetWaterHeight_Params
{
	struct FVector                                     SamplePosition;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interpolate;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Height;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Water_EWaterQueryResult>               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterInterface.GetActorWaterPlane
struct UWaterInterface_GetActorWaterPlane_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWaterSimPlane                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Water.WaterInterface.GetActorWaterInformation
struct UWaterInterface_GetActorWaterInformation_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWaterInformation                           ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Water.FFTWaterService.OnRep_FFTWaterComponent
struct AFFTWaterService_OnRep_FFTWaterComponent_Params
{
};

// Function Water.FFTWaterService.OnRep_ExtendedPlaneComponent
struct AFFTWaterService_OnRep_ExtendedPlaneComponent_Params
{
};

// Function Water.FlatWaterPlaneComponent.OnActorLeaveWaterPlane
struct UFlatWaterPlaneComponent_OnActorLeaveWaterPlane_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.FlatWaterPlaneComponent.OnActorEnterWaterPlane
struct UFlatWaterPlaneComponent_OnActorEnterWaterPlane_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.FlatWaterPlaneComponent.ConvertToWaterSpace
struct UFlatWaterPlaneComponent_ConvertToWaterSpace_Params
{
	struct FVector                                     WorldSpacePosition;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Water.WaterBuoyancyFunctionLibrary.TickBuoyancy
struct UWaterBuoyancyFunctionLibrary_TickBuoyancy_Params
{
	class AActor*                                      InOwner;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWaterBuoyancy                              InWaterBuoyancy;                                           // (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	float                                              InDeltaTime;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InChoppinessScalar;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FakeZOffsetGeneratorScalar;                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancySamplesZOffsetSymmetricalAroundXAxis
struct UWaterBuoyancyFunctionLibrary_SetBuoyancySamplesZOffsetSymmetricalAroundXAxis_Params
{
	struct FWaterBuoyancy                              InWaterBuoyancy;                                           // (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	float                                              ZOffset;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlendDebugOverride
struct UWaterBuoyancyFunctionLibrary_SetBuoyancyProbeCurveBlendDebugOverride_Params
{
	struct FWaterBuoyancy                              InWaterBuoyancy;                                           // (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	float                                              UnaryBlendOverride;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlend
struct UWaterBuoyancyFunctionLibrary_SetBuoyancyProbeCurveBlend_Params
{
	struct FWaterBuoyancy                              InWaterBuoyancy;                                           // (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	float                                              Blend;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Maths_EBuoyancyBlend>                  BlendType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterBuoyancySampleMovementFunctionLibrary.TickLocalSampleMovement
struct UWaterBuoyancySampleMovementFunctionLibrary_TickLocalSampleMovement_Params
{
	class AActor*                                      InActor;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWaterBuoyancy                              InWaterBuoyancy;                                           // (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FBuoyancySampleMovement                     InSampleMovement;                                          // (Parm, OutParm)
	float                                              DeltaTime;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByRandomConfigurationIndex
struct UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocallyByRandomConfigurationIndex_Params
{
	class AActor*                                      InActor;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWaterBuoyancy                              InWaterBuoyancy;                                           // (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FBuoyancySampleMovement                     InSampleMovement;                                          // (Parm, OutParm)
};

// Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByConfigurationIndex
struct UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocallyByConfigurationIndex_Params
{
	class AActor*                                      InActor;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWaterBuoyancy                              InWaterBuoyancy;                                           // (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FBuoyancySampleMovement                     InSampleMovement;                                          // (Parm, OutParm)
	int                                                ConfigurationIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocally
struct UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocally_Params
{
	class AActor*                                      InActor;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWaterBuoyancy                              InWaterBuoyancy;                                           // (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FBuoyancySampleMovement                     InSampleMovement;                                          // (Parm, OutParm)
	class UCurveVector*                                InCenterOfMassOffsetCurve;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FBuoyancySampleMovementConfigurationEntry> NewSampleData;                                             // (Parm, OutParm, ZeroConstructor)
	float                                              BuoyancyScalarAtNewPosition;                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 BuoyancyScalarCurve;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 ProbeMovementCurve;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveTime;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterInteractionComponent.LeaveWaterPlane
struct UWaterInteractionComponent_LeaveWaterPlane_Params
{
	class UBaseWaterComponent*                         WaterComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterInteractionComponent.LeaveWaterExclusionZone
struct UWaterInteractionComponent_LeaveWaterExclusionZone_Params
{
};

// Function Water.WaterInteractionComponent.IsUsingWaterExcludedZone
struct UWaterInteractionComponent_IsUsingWaterExcludedZone_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Water.WaterInteractionComponent.IsUsingNonDefaultWaterPlane
struct UWaterInteractionComponent_IsUsingNonDefaultWaterPlane_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Water.WaterInteractionComponent.IsInWaterExcludedZone
struct UWaterInteractionComponent_IsInWaterExcludedZone_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Water.WaterInteractionComponent.GetWaterPlaneComponent
struct UWaterInteractionComponent_GetWaterPlaneComponent_Params
{
	class UBaseWaterComponent*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterInteractionComponent.GetNumberOfWaterPlanes
struct UWaterInteractionComponent_GetNumberOfWaterPlanes_Params
{
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterInteractionComponent.EnterWaterPlane
struct UWaterInteractionComponent_EnterWaterPlane_Params
{
	class UBaseWaterComponent*                         WaterComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterInteractionComponent.EnterWaterExclusionZone
struct UWaterInteractionComponent_EnterWaterExclusionZone_Params
{
};

// Function Water.WaterPlaneExclusionComponent.OnOverlapEnd
struct UWaterPlaneExclusionComponent_OnOverlapEnd_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterPlaneExclusionComponent.OnOverlapBegin
struct UWaterPlaneExclusionComponent_OnOverlapBegin_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FromSweep;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Water.WaterSplashProbeFunctionLibrary.TickProbes
struct UWaterSplashProbeFunctionLibrary_TickProbes_Params
{
	class AActor*                                      InOwner;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FWaterSplashProbe>                   InSplashProbes;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              InDeltaTime;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterSplashProbeFunctionLibrary.TickProbe
struct UWaterSplashProbeFunctionLibrary_TickProbe_Params
{
	class AActor*                                      InOwner;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWaterSplashProbe                           InSplashProbe;                                             // (Parm, OutParm, ReferenceParm)
	float                                              InDeltaTime;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterSplashProbeFunctionLibrary.SetSamplingTime
struct UWaterSplashProbeFunctionLibrary_SetSamplingTime_Params
{
	TArray<struct FWaterSplashProbe>                   InSplashProbes;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              SamplingTime;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterSplashProbeFunctionLibrary.GetRelativeWaterHeightChangeSpd
struct UWaterSplashProbeFunctionLibrary_GetRelativeWaterHeightChangeSpd_Params
{
	TArray<struct FWaterSplashProbe>                   InSplashProbes;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ProbeIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Water.WaterSpoutVFXComponent.AddSplashVFXSpawnerWithLocation
struct UWaterSpoutVFXComponent_AddSplashVFXSpawnerWithLocation_Params
{
	struct FWaterSpout                                 WaterSplashLocator;                                        // (Parm, OutParm, ContainsInstancedReference)
};

// Function Water.WaterSpoutVFXComponent.ActivateSplashVFXWithDelay
struct UWaterSpoutVFXComponent_ActivateSplashVFXWithDelay_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
