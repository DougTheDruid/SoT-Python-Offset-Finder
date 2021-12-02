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
//		Name   -> Function BP_Cutlass_Item.BP_Cutlass_Item_C.DoBlockEffect
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_Cutlass_Item_C::DoBlockEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cutlass_Item.BP_Cutlass_Item_C.DoBlockEffect");

	ABP_Cutlass_Item_C_DoBlockEffect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Cutlass_Item.BP_Cutlass_Item_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Cutlass_Item_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cutlass_Item.BP_Cutlass_Item_C.UserConstructionScript");

	ABP_Cutlass_Item_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Cutlass_Item.BP_Cutlass_Item_C.OnBlockedAttack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FEventBlocked                               Event                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void ABP_Cutlass_Item_C::OnBlockedAttack(const struct FEventBlocked& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cutlass_Item.BP_Cutlass_Item_C.OnBlockedAttack");

	ABP_Cutlass_Item_C_OnBlockedAttack_Params params {};
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Cutlass_Item.BP_Cutlass_Item_C.ExecuteUbergraph_BP_Cutlass_Item
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Cutlass_Item_C::ExecuteUbergraph_BP_Cutlass_Item(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cutlass_Item.BP_Cutlass_Item_C.ExecuteUbergraph_BP_Cutlass_Item");

	ABP_Cutlass_Item_C_ExecuteUbergraph_BP_Cutlass_Item_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Cutlass_Item_C::AfterRead()
{
	APlayerMeleeWeapon::AfterRead();

}

void ABP_Cutlass_Item_C::BeforeDelete()
{
	APlayerMeleeWeapon::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
