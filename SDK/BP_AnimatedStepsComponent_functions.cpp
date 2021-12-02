// Name: SoT, Version: 2.4.0

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

// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.StartOpeningSteps
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_AnimatedStepsComponent_C::StartOpeningSteps()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.StartOpeningSteps");

	UBP_AnimatedStepsComponent_C_StartOpeningSteps_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.SetAllStepsZs
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<float>                                      TargetZOffsets                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		bool                                               OpeningOrClosing                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_AnimatedStepsComponent_C::SetAllStepsZs(TArray<float>* TargetZOffsets, bool OpeningOrClosing)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.SetAllStepsZs");

	UBP_AnimatedStepsComponent_C_SetAllStepsZs_Params params {};
	params.OpeningOrClosing = OpeningOrClosing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TargetZOffsets != nullptr)
		*TargetZOffsets = params.TargetZOffsets;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.UpdateStep
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                BoneIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              TargetZ                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              MovementDelay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UBoxComponent*                               AttachedBox                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     BoxOrigin                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_AnimatedStepsComponent_C::UpdateStep(int BoneIndex, float TargetZ, float MovementDelay, class UBoxComponent* AttachedBox, const struct FVector& BoxOrigin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.UpdateStep");

	UBP_AnimatedStepsComponent_C_UpdateStep_Params params {};
	params.BoneIndex = BoneIndex;
	params.TargetZ = TargetZ;
	params.MovementDelay = MovementDelay;
	params.AttachedBox = AttachedBox;
	params.BoxOrigin = BoxOrigin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_AnimatedStepsComponent_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.ReceiveTick");

	UBP_AnimatedStepsComponent_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.StartOpening
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_AnimatedStepsComponent_C::StartOpening()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.StartOpening");

	UBP_AnimatedStepsComponent_C_StartOpening_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.OpenImmediate
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UBP_AnimatedStepsComponent_C::OpenImmediate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.OpenImmediate");

	UBP_AnimatedStepsComponent_C_OpenImmediate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.Close
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UBP_AnimatedStepsComponent_C::Close()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.Close");

	UBP_AnimatedStepsComponent_C_Close_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.ExecuteUbergraph_BP_AnimatedStepsComponent
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_AnimatedStepsComponent_C::ExecuteUbergraph_BP_AnimatedStepsComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.ExecuteUbergraph_BP_AnimatedStepsComponent");

	UBP_AnimatedStepsComponent_C_ExecuteUbergraph_BP_AnimatedStepsComponent_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_AnimatedStepsComponent_C::AfterRead()
{
	UAnimatedStepsComponent::AfterRead();

	READ_PTR_FULL(AnimCurve, UCurveFloat);
}

void UBP_AnimatedStepsComponent_C::BeforeDelete()
{
	UAnimatedStepsComponent::BeforeDelete();

	DELE_PTR_FULL(AnimCurve);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
