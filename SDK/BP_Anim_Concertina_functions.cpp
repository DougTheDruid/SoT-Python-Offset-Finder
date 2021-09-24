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
//		Name   -> Function BP_Anim_Concertina.BP_Anim_Concertina_C.OnUseStarted
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		class UClass*                                      InputID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FWieldableItemActionVisuals                 ActionVisuals                                              (ConstParm, Parm, OutParm, ReferenceParm)
void UBP_Anim_Concertina_C::OnUseStarted(class UClass* InputID, const struct FWieldableItemActionVisuals& ActionVisuals)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_Concertina.BP_Anim_Concertina_C.OnUseStarted");

	UBP_Anim_Concertina_C_OnUseStarted_Params params;
	params.InputID = InputID;
	params.ActionVisuals = ActionVisuals;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Anim_Concertina.BP_Anim_Concertina_C.OnUseStopped
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UClass*                                      InputID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Anim_Concertina_C::OnUseStopped(class UClass* InputID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_Concertina.BP_Anim_Concertina_C.OnUseStopped");

	UBP_Anim_Concertina_C_OnUseStopped_Params params;
	params.InputID = InputID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Anim_Concertina.BP_Anim_Concertina_C.ExecuteUbergraph_BP_Anim_Concertina
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Anim_Concertina_C::ExecuteUbergraph_BP_Anim_Concertina(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_Concertina.BP_Anim_Concertina_C.ExecuteUbergraph_BP_Anim_Concertina");

	UBP_Anim_Concertina_C_ExecuteUbergraph_BP_Anim_Concertina_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Anim_Concertina_C::AfterRead()
{
	UWieldableItemAnimationInstance::AfterRead();

}

void UBP_Anim_Concertina_C::BeforeDelete()
{
	UWieldableItemAnimationInstance::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
