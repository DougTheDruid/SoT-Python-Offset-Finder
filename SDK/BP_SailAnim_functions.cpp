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

// Function BP_SailAnim.BP_SailAnim_C.Set Billow Animation Rate
// (BlueprintCallable, BlueprintEvent)
void UBP_SailAnim_C::Set_Billow_Animation_Rate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SailAnim.BP_SailAnim_C.Set Billow Animation Rate");

	UBP_SailAnim_C_Set_Billow_Animation_Rate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SailAnim.BP_SailAnim_C.InitialiseSail
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PlayRateMultiplier             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           MainSail                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_SailAnim_C::InitialiseSail(float PlayRateMultiplier, bool MainSail)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SailAnim.BP_SailAnim_C.InitialiseSail");

	UBP_SailAnim_C_InitialiseSail_Params params;
	params.PlayRateMultiplier = PlayRateMultiplier;
	params.MainSail = MainSail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SailAnim.BP_SailAnim_C.ExecuteUbergraph_BP_SailAnim
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_SailAnim_C::ExecuteUbergraph_BP_SailAnim(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SailAnim.BP_SailAnim_C.ExecuteUbergraph_BP_SailAnim");

	UBP_SailAnim_C_ExecuteUbergraph_BP_SailAnim_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_SailAnim_C::AfterRead()
{
	USailAnimInstance::AfterRead();

}

void UBP_SailAnim_C::BeforeDelete()
{
	USailAnimInstance::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
