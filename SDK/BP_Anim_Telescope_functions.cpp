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
//		Name   -> Function BP_Anim_Telescope.BP_Anim_Telescope_C.ExecuteUbergraph_BP_Anim_Telescope
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Anim_Telescope_C::ExecuteUbergraph_BP_Anim_Telescope(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_Telescope.BP_Anim_Telescope_C.ExecuteUbergraph_BP_Anim_Telescope");

	UBP_Anim_Telescope_C_ExecuteUbergraph_BP_Anim_Telescope_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Anim_Telescope_C::AfterRead()
{
	UWieldableItemAnimationInstance::AfterRead();

}

void UBP_Anim_Telescope_C::BeforeDelete()
{
	UWieldableItemAnimationInstance::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
