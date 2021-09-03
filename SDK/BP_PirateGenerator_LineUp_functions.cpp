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

// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.GetPirateSelector
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPirateSelector*         PirateSelectorComponent        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PirateGenerator_LineUp_C::GetPirateSelector(class UPirateSelector** PirateSelectorComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.GetPirateSelector");

	ABP_PirateGenerator_LineUp_C_GetPirateSelector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PirateSelectorComponent != nullptr)
		*PirateSelectorComponent = params.PirateSelectorComponent;

}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.Reset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_PirateGenerator_LineUp_C::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.Reset");

	ABP_PirateGenerator_LineUp_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.DelayBasedOnAngle
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PirateGenerator_LineUp_C::DelayBasedOnAngle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.DelayBasedOnAngle");

	ABP_PirateGenerator_LineUp_C_DelayBasedOnAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.FadeProps
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PirateGenerator_LineUp_C::FadeProps(float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.FadeProps");

	ABP_PirateGenerator_LineUp_C_FadeProps_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ActivateGhostMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          MeshComponent                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           FadeIn                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PirateGenerator_LineUp_C::ActivateGhostMaterial(class UMeshComponent* MeshComponent, bool FadeIn, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ActivateGhostMaterial");

	ABP_PirateGenerator_LineUp_C_ActivateGhostMaterial_Params params;
	params.MeshComponent = MeshComponent;
	params.FadeIn = FadeIn;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ClearProps
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PirateGenerator_LineUp_C::ClearProps()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ClearProps");

	ABP_PirateGenerator_LineUp_C_ClearProps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.SetProp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBP_LineUp_Props        BP_LineUp_Props                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           Primary_                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PirateGenerator_LineUp_C::SetProp(const struct FBP_LineUp_Props& BP_LineUp_Props, bool Primary_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.SetProp");

	ABP_PirateGenerator_LineUp_C_SetProp_Params params;
	params.BP_LineUp_Props = BP_LineUp_Props;
	params.Primary_ = Primary_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.UpdateAnimation
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PirateGenerator_LineUp_C::UpdateAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.UpdateAnimation");

	ABP_PirateGenerator_LineUp_C_UpdateAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.RandomizePirate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PoseIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPirateDescription      PirateDesc                     (Parm)
// TArray<class UClass*>          Outfit                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
void ABP_PirateGenerator_LineUp_C::RandomizePirate(int PoseIndex, const struct FPirateDescription& PirateDesc, TArray<class UClass*>* Outfit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.RandomizePirate");

	ABP_PirateGenerator_LineUp_C_RandomizePirate_Params params;
	params.PoseIndex = PoseIndex;
	params.PirateDesc = PirateDesc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Outfit != nullptr)
		*Outfit = params.Outfit;

}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_PirateGenerator_LineUp_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.UserConstructionScript");

	ABP_PirateGenerator_LineUp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.PlayMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimInstance*           Character                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimSequence*           OutOf                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimSequence*           LoopAnim                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*           Prop                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimSequence*           OutOf2                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimSequence*           PropLoop                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PirateGenerator_LineUp_C::PlayMontage(class UAnimInstance* Character, class UAnimSequence* OutOf, class UAnimSequence* LoopAnim, class UAnimInstance* Prop, class UAnimSequence* OutOf2, class UAnimSequence* PropLoop)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.PlayMontage");

	ABP_PirateGenerator_LineUp_C_PlayMontage_Params params;
	params.Character = Character;
	params.OutOf = OutOf;
	params.LoopAnim = LoopAnim;
	params.Prop = Prop;
	params.OutOf2 = OutOf2;
	params.PropLoop = PropLoop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.Highlighted
// (BlueprintCallable, BlueprintEvent)
void ABP_PirateGenerator_LineUp_C::Highlighted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.Highlighted");

	ABP_PirateGenerator_LineUp_C_Highlighted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.OutOfHighlight
// (BlueprintCallable, BlueprintEvent)
void ABP_PirateGenerator_LineUp_C::OutOfHighlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.OutOfHighlight");

	ABP_PirateGenerator_LineUp_C_OutOfHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.Selected
// (BlueprintCallable, BlueprintEvent)
void ABP_PirateGenerator_LineUp_C::Selected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.Selected");

	ABP_PirateGenerator_LineUp_C_Selected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.OnEndGeneratingPirate
// (Event, Protected, BlueprintEvent)
void ABP_PirateGenerator_LineUp_C::OnEndGeneratingPirate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.OnEndGeneratingPirate");

	ABP_PirateGenerator_LineUp_C_OnEndGeneratingPirate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.OnBeginGeneratingPirate
// (Event, Protected, BlueprintEvent)
void ABP_PirateGenerator_LineUp_C::OnBeginGeneratingPirate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.OnBeginGeneratingPirate");

	ABP_PirateGenerator_LineUp_C_OnBeginGeneratingPirate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.RandomizePirateEvent
// (Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPirateDescription      PirateDesc                     (Parm)
// TArray<class UClass*>          Outfit                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
void ABP_PirateGenerator_LineUp_C::RandomizePirateEvent(const struct FPirateDescription& PirateDesc, TArray<class UClass*>* Outfit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.RandomizePirateEvent");

	ABP_PirateGenerator_LineUp_C_RandomizePirateEvent_Params params;
	params.PirateDesc = PirateDesc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Outfit != nullptr)
		*Outfit = params.Outfit;

}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ShipSelect
// (BlueprintCallable, BlueprintEvent)
void ABP_PirateGenerator_LineUp_C::ShipSelect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ShipSelect");

	ABP_PirateGenerator_LineUp_C_ShipSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PirateGenerator_LineUp_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ReceiveTick");

	ABP_PirateGenerator_LineUp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.OnSignalSpawnIn
// (Event, Protected, BlueprintEvent)
void ABP_PirateGenerator_LineUp_C::OnSignalSpawnIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.OnSignalSpawnIn");

	ABP_PirateGenerator_LineUp_C_OnSignalSpawnIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ExecuteUbergraph_BP_PirateGenerator_LineUp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PirateGenerator_LineUp_C::ExecuteUbergraph_BP_PirateGenerator_LineUp(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ExecuteUbergraph_BP_PirateGenerator_LineUp");

	ABP_PirateGenerator_LineUp_C_ExecuteUbergraph_BP_PirateGenerator_LineUp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.LineUpPirateInitializedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_PirateGenerator_LineUp_C::LineUpPirateInitializedDispatcher__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.LineUpPirateInitializedDispatcher__DelegateSignature");

	ABP_PirateGenerator_LineUp_C_LineUpPirateInitializedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_PirateGenerator_LineUp_C::AfterRead()
{
	APosablePirate::AfterRead();

	READ_PTR_FULL(Capsule, UCapsuleComponent);
	READ_PTR_FULL(GhostParticlesOut, UParticleSystemComponent);
	READ_PTR_FULL(GhostParticlesIn, UParticleSystemComponent);
	READ_PTR_FULL(AnimNotifyWwiseEmitter, UAnimNotifyWwiseEmitterComponent);
	READ_PTR_FULL(SkeletalProp, USkeletalMeshComponent);
	READ_PTR_FULL(StaticPropSecondary, UStaticMeshComponent);
	READ_PTR_FULL(SkeletalPropSecondary, USkeletalMeshComponent);
	READ_PTR_FULL(StaticProp, UStaticMeshComponent);
	READ_PTR_FULL(CharacterSelectAnimgraph, UBP_Anim_CharacterSelect_C);
	READ_PTR_FULL(AnimationSwitch, UAnimationSwitchDataAsset);
	READ_PTR_FULL(AnimationAsset, UAnimationDataStoreAsset);
	READ_PTR_FULL(ShipSelectAnimToPlay, UAnimSequence);
	READ_PTR_FULL(ShipSelectPropAnimToPlay, UAnimSequence);
}

void ABP_PirateGenerator_LineUp_C::BeforeDelete()
{
	APosablePirate::BeforeDelete();

	DELE_PTR_FULL(Capsule);
	DELE_PTR_FULL(GhostParticlesOut);
	DELE_PTR_FULL(GhostParticlesIn);
	DELE_PTR_FULL(AnimNotifyWwiseEmitter);
	DELE_PTR_FULL(SkeletalProp);
	DELE_PTR_FULL(StaticPropSecondary);
	DELE_PTR_FULL(SkeletalPropSecondary);
	DELE_PTR_FULL(StaticProp);
	DELE_PTR_FULL(CharacterSelectAnimgraph);
	DELE_PTR_FULL(AnimationSwitch);
	DELE_PTR_FULL(AnimationAsset);
	DELE_PTR_FULL(ShipSelectAnimToPlay);
	DELE_PTR_FULL(ShipSelectPropAnimToPlay);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
