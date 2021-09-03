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

// Function BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
void UBP_Anim_CharacterSelect_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C.BlueprintInitializeAnimation");

	UBP_Anim_CharacterSelect_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C.AnimNotify_SelectedCameraZoom
// (BlueprintCallable, BlueprintEvent)
void UBP_Anim_CharacterSelect_C::AnimNotify_SelectedCameraZoom()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C.AnimNotify_SelectedCameraZoom");

	UBP_Anim_CharacterSelect_C_AnimNotify_SelectedCameraZoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C.AnimNotify_BeginFade
// (BlueprintCallable, BlueprintEvent)
void UBP_Anim_CharacterSelect_C::AnimNotify_BeginFade()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C.AnimNotify_BeginFade");

	UBP_Anim_CharacterSelect_C_AnimNotify_BeginFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C.ExecuteUbergraph_BP_Anim_CharacterSelect
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Anim_CharacterSelect_C::ExecuteUbergraph_BP_Anim_CharacterSelect(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C.ExecuteUbergraph_BP_Anim_CharacterSelect");

	UBP_Anim_CharacterSelect_C_ExecuteUbergraph_BP_Anim_CharacterSelect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Anim_CharacterSelect_C::AfterRead()
{
	UThirdPersonAnimationInstance::AfterRead();

	READ_PTR_FULL(FallBackAnimation, UAnimSequenceBase);
}

void UBP_Anim_CharacterSelect_C::BeforeDelete()
{
	UThirdPersonAnimationInstance::BeforeDelete();

	DELE_PTR_FULL(FallBackAnimation);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
