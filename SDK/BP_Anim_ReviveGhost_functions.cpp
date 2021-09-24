// Name: SoT, Version: 2.3.0

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
//		Offset -> 0x01637030
//		Name   -> Function BP_Anim_ReviveGhost.BP_Anim_ReviveGhost_C.AnimNotify_OutOfComplete
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_Anim_ReviveGhost_C::AnimNotify_OutOfComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_ReviveGhost.BP_Anim_ReviveGhost_C.AnimNotify_OutOfComplete");

	UBP_Anim_ReviveGhost_C_AnimNotify_OutOfComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Anim_ReviveGhost.BP_Anim_ReviveGhost_C.ExecuteUbergraph_BP_Anim_ReviveGhost
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Anim_ReviveGhost_C::ExecuteUbergraph_BP_Anim_ReviveGhost(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_ReviveGhost.BP_Anim_ReviveGhost_C.ExecuteUbergraph_BP_Anim_ReviveGhost");

	UBP_Anim_ReviveGhost_C_ExecuteUbergraph_BP_Anim_ReviveGhost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Anim_ReviveGhost_C::AfterRead()
{
	UReviveGhostAnimationInstance::AfterRead();

}

void UBP_Anim_ReviveGhost_C::BeforeDelete()
{
	UReviveGhostAnimationInstance::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
