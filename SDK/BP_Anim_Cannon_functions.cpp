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
//		Name   -> Function BP_Anim_Cannon.BP_Anim_Cannon_C.AnimNotify_FireEnd
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_Anim_Cannon_C::AnimNotify_FireEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_Cannon.BP_Anim_Cannon_C.AnimNotify_FireEnd");

	UBP_Anim_Cannon_C_AnimNotify_FireEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Anim_Cannon.BP_Anim_Cannon_C.ExecuteUbergraph_BP_Anim_Cannon
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Anim_Cannon_C::ExecuteUbergraph_BP_Anim_Cannon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_Cannon.BP_Anim_Cannon_C.ExecuteUbergraph_BP_Anim_Cannon");

	UBP_Anim_Cannon_C_ExecuteUbergraph_BP_Anim_Cannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Anim_Cannon_C::AfterRead()
{
	UCannonAnimInstance::AfterRead();

}

void UBP_Anim_Cannon_C::BeforeDelete()
{
	UCannonAnimInstance::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
