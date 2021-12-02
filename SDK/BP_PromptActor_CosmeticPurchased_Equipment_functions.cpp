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
//		Name   -> Function BP_PromptActor_CosmeticPurchased_Equipment.BP_PromptActor_CosmeticPurchased_Equipment_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_PromptActor_CosmeticPurchased_Equipment_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActor_CosmeticPurchased_Equipment.BP_PromptActor_CosmeticPurchased_Equipment_C.UserConstructionScript");

	ABP_PromptActor_CosmeticPurchased_Equipment_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PromptActor_CosmeticPurchased_Equipment.BP_PromptActor_CosmeticPurchased_Equipment_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_PromptActor_CosmeticPurchased_Equipment_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActor_CosmeticPurchased_Equipment.BP_PromptActor_CosmeticPurchased_Equipment_C.ReceiveBeginPlay");

	ABP_PromptActor_CosmeticPurchased_Equipment_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PromptActor_CosmeticPurchased_Equipment.BP_PromptActor_CosmeticPurchased_Equipment_C.ReceiveEndPlay
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PromptActor_CosmeticPurchased_Equipment_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActor_CosmeticPurchased_Equipment.BP_PromptActor_CosmeticPurchased_Equipment_C.ReceiveEndPlay");

	ABP_PromptActor_CosmeticPurchased_Equipment_C_ReceiveEndPlay_Params params {};
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PromptActor_CosmeticPurchased_Equipment.BP_PromptActor_CosmeticPurchased_Equipment_C.ExecuteUbergraph_BP_PromptActor_CosmeticPurchased_Equipment
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PromptActor_CosmeticPurchased_Equipment_C::ExecuteUbergraph_BP_PromptActor_CosmeticPurchased_Equipment(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActor_CosmeticPurchased_Equipment.BP_PromptActor_CosmeticPurchased_Equipment_C.ExecuteUbergraph_BP_PromptActor_CosmeticPurchased_Equipment");

	ABP_PromptActor_CosmeticPurchased_Equipment_C_ExecuteUbergraph_BP_PromptActor_CosmeticPurchased_Equipment_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_PromptActor_CosmeticPurchased_Equipment_C::AfterRead()
{
	ABP_PromptActorBase_C::AfterRead();

	READ_PTR_FULL(PromptCoordinator, UBP_Prompt_CosmeticPurchased_C);
	READ_PTR_FULL(AccessKey, UClass);
}

void ABP_PromptActor_CosmeticPurchased_Equipment_C::BeforeDelete()
{
	ABP_PromptActorBase_C::BeforeDelete();

	DELE_PTR_FULL(PromptCoordinator);
	DELE_PTR_FULL(AccessKey);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
