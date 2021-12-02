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
// Parameters
//---------------------------------------------------------------------------

// Function Water.FFTWaterInterface.SetExtendedPlaneComponent
struct UFFTWaterInterface_SetExtendedPlaneComponent_Params
{
	class UFFTWaterExtendedPlaneComponent*             InFFTWaterComponent;                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.FFTWaterInterface.SetComponent
struct UFFTWaterInterface_SetComponent_Params
{
	class UFFTWaterComponent*                          InFFTWaterComponent;                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.FFTWaterInterface.SetActor
struct UFFTWaterInterface_SetActor_Params
{
	class AAthenaFFTWater*                             InFFTWaterActor;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.FFTWaterInterface.GetExtendedPlaneComponent
struct UFFTWaterInterface_GetExtendedPlaneComponent_Params
{
	class UFFTWaterExtendedPlaneComponent*             ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.FFTWaterInterface.GetComponent
struct UFFTWaterInterface_GetComponent_Params
{
	class UFFTWaterComponent*                          ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.FFTWaterInterface.GetActor
struct UFFTWaterInterface_GetActor_Params
{
	class AAthenaFFTWater*                             ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterInterface.IsReadyToBeQueried
struct UWaterInterface_IsReadyToBeQueried_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Water.WaterInterface.GetWaterInformationWithScaledChoppyness
struct UWaterInterface_GetWaterInformationWithScaledChoppyness_Params
{
	struct FVector                                     SamplePosition;                                            // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              Height;                                                    // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   ApproxVelocity;                                            // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Normal;                                                    // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      Actor;                                                     // 0x0028(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChoppynessScalar;                                          // 0x0030(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Water_EWaterQueryResult>               ReturnValue;                                               // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterInterface.GetWaterInformationBatched
struct UWaterInterface_GetWaterInformationBatched_Params
{
	TArray<struct FVector2D>                           SamplePositions;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      Heights;                                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector2D>                           ApproxVelocities;                                          // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector>                             Normals;                                                   // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor)
	class AActor*                                      Actor;                                                     // 0x0040(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Water_EWaterQueryResult>               ReturnValue;                                               // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterInterface.GetWaterInformation
struct UWaterInterface_GetWaterInformation_Params
{
	struct FVector                                     SamplePosition;                                            // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              Height;                                                    // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   ApproxVelocity;                                            // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Normal;                                                    // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      Actor;                                                     // 0x0028(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Water_EWaterQueryResult>               ReturnValue;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterInterface.GetWaterHeightWithScaledChoppyness
struct UWaterInterface_GetWaterHeightWithScaledChoppyness_Params
{
	struct FVector                                     SamplePosition;                                            // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	class AActor*                                      Actor;                                                     // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interpolate;                                               // 0x0018(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Height;                                                    // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChoppynessScalar;                                          // 0x0020(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Water_EWaterQueryResult>               ReturnValue;                                               // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterInterface.GetWaterHeight
struct UWaterInterface_GetWaterHeight_Params
{
	struct FVector                                     SamplePosition;                                            // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	class AActor*                                      Actor;                                                     // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interpolate;                                               // 0x0018(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Height;                                                    // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Water_EWaterQueryResult>               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterInterface.GetActorWaterPlane
struct UWaterInterface_GetActorWaterPlane_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWaterSimPlane                              ReturnValue;                                               // 0x0010(0x0030)  (Parm, OutParm, ReturnParm)
};

// Function Water.WaterInterface.GetActorWaterInformation
struct UWaterInterface_GetActorWaterInformation_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWaterInformation                           ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ReturnParm)
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
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.FlatWaterPlaneComponent.OnActorEnterWaterPlane
struct UFlatWaterPlaneComponent_OnActorEnterWaterPlane_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.FlatWaterPlaneComponent.ConvertToWaterSpace
struct UFlatWaterPlaneComponent_ConvertToWaterSpace_Params
{
	struct FVector                                     WorldSpacePosition;                                        // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   ReturnValue;                                               // 0x000C(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Water.WaterBuoyancyFunctionLibrary.TickBuoyancy
struct UWaterBuoyancyFunctionLibrary_TickBuoyancy_Params
{
	class AActor*                                      InOwner;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWaterBuoyancy                              InWaterBuoyancy;                                           // 0x0010(0x0130)  (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	float                                              InDeltaTime;                                               // 0x0140(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InChoppinessScalar;                                        // 0x0144(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FakeZOffsetGeneratorScalar;                                // 0x0148(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // 0x014C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancySamplesZOffsetSymmetricalAroundXAxis
struct UWaterBuoyancyFunctionLibrary_SetBuoyancySamplesZOffsetSymmetricalAroundXAxis_Params
{
	struct FWaterBuoyancy                              InWaterBuoyancy;                                           // 0x0000(0x0130)  (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	float                                              ZOffset;                                                   // 0x0130(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlendDebugOverride
struct UWaterBuoyancyFunctionLibrary_SetBuoyancyProbeCurveBlendDebugOverride_Params
{
	struct FWaterBuoyancy                              InWaterBuoyancy;                                           // 0x0000(0x0130)  (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	float                                              UnaryBlendOverride;                                        // 0x0130(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlend
struct UWaterBuoyancyFunctionLibrary_SetBuoyancyProbeCurveBlend_Params
{
	struct FWaterBuoyancy                              InWaterBuoyancy;                                           // 0x0000(0x0130)  (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	float                                              Blend;                                                     // 0x0130(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Maths_EBuoyancyBlend>                  BlendType;                                                 // 0x0134(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterBuoyancySampleMovementFunctionLibrary.TickLocalSampleMovement
struct UWaterBuoyancySampleMovementFunctionLibrary_TickLocalSampleMovement_Params
{
	class AActor*                                      InActor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWaterBuoyancy                              InWaterBuoyancy;                                           // 0x0010(0x0130)  (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FBuoyancySampleMovement                     InSampleMovement;                                          // 0x0140(0x0068)  (Parm, OutParm)
	float                                              DeltaTime;                                                 // 0x01A8(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByRandomConfigurationIndex
struct UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocallyByRandomConfigurationIndex_Params
{
	class AActor*                                      InActor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWaterBuoyancy                              InWaterBuoyancy;                                           // 0x0010(0x0130)  (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FBuoyancySampleMovement                     InSampleMovement;                                          // 0x0140(0x0068)  (Parm, OutParm)
};

// Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByConfigurationIndex
struct UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocallyByConfigurationIndex_Params
{
	class AActor*                                      InActor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWaterBuoyancy                              InWaterBuoyancy;                                           // 0x0010(0x0130)  (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FBuoyancySampleMovement                     InSampleMovement;                                          // 0x0140(0x0068)  (Parm, OutParm)
	int                                                ConfigurationIndex;                                        // 0x01A8(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocally
struct UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocally_Params
{
	class AActor*                                      InActor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWaterBuoyancy                              InWaterBuoyancy;                                           // 0x0010(0x0130)  (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FBuoyancySampleMovement                     InSampleMovement;                                          // 0x0140(0x0068)  (Parm, OutParm)
	class UCurveVector*                                InCenterOfMassOffsetCurve;                                 // 0x01A8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FBuoyancySampleMovementConfigurationEntry> NewSampleData;                                             // 0x01B0(0x0010)  (Parm, OutParm, ZeroConstructor)
	float                                              BuoyancyScalarAtNewPosition;                               // 0x01C0(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 BuoyancyScalarCurve;                                       // 0x01C8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 ProbeMovementCurve;                                        // 0x01D0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveTime;                                                  // 0x01D8(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterInteractionComponent.LeaveWaterPlane
struct UWaterInteractionComponent_LeaveWaterPlane_Params
{
	class UBaseWaterComponent*                         WaterComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterInteractionComponent.LeaveWaterExclusionZone
struct UWaterInteractionComponent_LeaveWaterExclusionZone_Params
{
};

// Function Water.WaterInteractionComponent.IsUsingWaterExcludedZone
struct UWaterInteractionComponent_IsUsingWaterExcludedZone_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Water.WaterInteractionComponent.IsUsingNonDefaultWaterPlane
struct UWaterInteractionComponent_IsUsingNonDefaultWaterPlane_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Water.WaterInteractionComponent.IsInWaterExcludedZone
struct UWaterInteractionComponent_IsInWaterExcludedZone_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Water.WaterInteractionComponent.GetWaterPlaneComponent
struct UWaterInteractionComponent_GetWaterPlaneComponent_Params
{
	class UBaseWaterComponent*                         ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterInteractionComponent.GetNumberOfWaterPlanes
struct UWaterInteractionComponent_GetNumberOfWaterPlanes_Params
{
	unsigned char                                      ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterInteractionComponent.EnterWaterPlane
struct UWaterInteractionComponent_EnterWaterPlane_Params
{
	class UBaseWaterComponent*                         WaterComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterInteractionComponent.EnterWaterExclusionZone
struct UWaterInteractionComponent_EnterWaterExclusionZone_Params
{
};

// Function Water.WaterPlaneExclusionComponent.OnOverlapEnd
struct UWaterPlaneExclusionComponent_OnOverlapEnd_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterPlaneExclusionComponent.OnOverlapBegin
struct UWaterPlaneExclusionComponent_OnOverlapBegin_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FromSweep;                                                 // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0018(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Water.WaterSplashProbeFunctionLibrary.TickProbes
struct UWaterSplashProbeFunctionLibrary_TickProbes_Params
{
	class AActor*                                      InOwner;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FWaterSplashProbe>                   InSplashProbes;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              InDeltaTime;                                               // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterSplashProbeFunctionLibrary.TickProbe
struct UWaterSplashProbeFunctionLibrary_TickProbe_Params
{
	class AActor*                                      InOwner;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWaterSplashProbe                           InSplashProbe;                                             // 0x0008(0x00D8)  (Parm, OutParm, ReferenceParm)
	float                                              InDeltaTime;                                               // 0x00E0(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterSplashProbeFunctionLibrary.SetSamplingTime
struct UWaterSplashProbeFunctionLibrary_SetSamplingTime_Params
{
	TArray<struct FWaterSplashProbe>                   InSplashProbes;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              SamplingTime;                                              // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Water.WaterSplashProbeFunctionLibrary.GetRelativeWaterHeightChangeSpd
struct UWaterSplashProbeFunctionLibrary_GetRelativeWaterHeightChangeSpd_Params
{
	TArray<struct FWaterSplashProbe>                   InSplashProbes;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ProbeIndex;                                                // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ReturnValue;                                               // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Water.WaterSpoutVFXComponent.AddSplashVFXSpawnerWithLocation
struct UWaterSpoutVFXComponent_AddSplashVFXSpawnerWithLocation_Params
{
	struct FWaterSpout                                 WaterSplashLocator;                                        // 0x0000(0x0070)  (Parm, OutParm, ContainsInstancedReference)
};

// Function Water.WaterSpoutVFXComponent.ActivateSplashVFXWithDelay
struct UWaterSpoutVFXComponent_ActivateSplashVFXWithDelay_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
