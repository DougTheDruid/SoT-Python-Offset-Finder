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

// Function BP_Anim_Rowboat_Cannon.BP_Anim_Rowboat_Cannon_C.ExecuteUbergraph_BP_Anim_Rowboat_Cannon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Anim_Rowboat_Cannon_C::ExecuteUbergraph_BP_Anim_Rowboat_Cannon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_Rowboat_Cannon.BP_Anim_Rowboat_Cannon_C.ExecuteUbergraph_BP_Anim_Rowboat_Cannon");

	UBP_Anim_Rowboat_Cannon_C_ExecuteUbergraph_BP_Anim_Rowboat_Cannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Anim_Rowboat_Cannon_C::AfterRead()
{
	UCannonAnimInstance::AfterRead();

}

void UBP_Anim_Rowboat_Cannon_C::BeforeDelete()
{
	UCannonAnimInstance::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
