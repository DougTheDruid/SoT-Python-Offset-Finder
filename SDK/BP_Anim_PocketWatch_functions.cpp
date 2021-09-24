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
//		Name   -> Function BP_Anim_PocketWatch.BP_Anim_PocketWatch_C.ExecuteUbergraph_BP_Anim_PocketWatch
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Anim_PocketWatch_C::ExecuteUbergraph_BP_Anim_PocketWatch(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_PocketWatch.BP_Anim_PocketWatch_C.ExecuteUbergraph_BP_Anim_PocketWatch");

	UBP_Anim_PocketWatch_C_ExecuteUbergraph_BP_Anim_PocketWatch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Anim_PocketWatch_C::AfterRead()
{
	UPocketWatchAnimationInstance::AfterRead();

}

void UBP_Anim_PocketWatch_C::BeforeDelete()
{
	UPocketWatchAnimationInstance::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
