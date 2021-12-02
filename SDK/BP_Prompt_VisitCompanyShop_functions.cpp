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
//		Name   -> Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.HasAlreadyVisitedCompanyShop
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               HasVistedCompanyShop                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_VisitCompanyShop_C::HasAlreadyVisitedCompanyShop(bool* HasVistedCompanyShop)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.HasAlreadyVisitedCompanyShop");

	UBP_Prompt_VisitCompanyShop_C_HasAlreadyVisitedCompanyShop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasVistedCompanyShop != nullptr)
		*HasVistedCompanyShop = params.HasVistedCompanyShop;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.SetCompanyPromptInfo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      Company                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UClass*                                      AccessKey                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FPrioritisedPromptWithHandle                Prompt                                                     (Parm)
//		class UClass*                                      CompanyRankDesc                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_VisitCompanyShop_C::SetCompanyPromptInfo(class UClass* Company, class UClass* AccessKey, const struct FPrioritisedPromptWithHandle& Prompt, class UClass* CompanyRankDesc)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.SetCompanyPromptInfo");

	UBP_Prompt_VisitCompanyShop_C_SetCompanyPromptInfo_Params params {};
	params.Company = Company;
	params.AccessKey = AccessKey;
	params.Prompt = Prompt;
	params.CompanyRankDesc = CompanyRankDesc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.OnTreasureChestSold
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTreasureChestSoldClientPredictionEvent     Event                                                      (Parm)
void UBP_Prompt_VisitCompanyShop_C::OnTreasureChestSold(const struct FTreasureChestSoldClientPredictionEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.OnTreasureChestSold");

	UBP_Prompt_VisitCompanyShop_C_OnTreasureChestSold_Params params {};
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.Evaluate
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_VisitCompanyShop_C::Evaluate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.Evaluate");

	UBP_Prompt_VisitCompanyShop_C_Evaluate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.RegisterOtherEvents_Implementable
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_Prompt_VisitCompanyShop_C::RegisterOtherEvents_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.RegisterOtherEvents_Implementable");

	UBP_Prompt_VisitCompanyShop_C_RegisterOtherEvents_Implementable_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.UnregisterOtherEvents_Implementable
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_Prompt_VisitCompanyShop_C::UnregisterOtherEvents_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.UnregisterOtherEvents_Implementable");

	UBP_Prompt_VisitCompanyShop_C_UnregisterOtherEvents_Implementable_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.TreasureChestSoldPredictedEvent
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTreasureChestSoldClientPredictionEvent     Event                                                      (Parm)
void UBP_Prompt_VisitCompanyShop_C::TreasureChestSoldPredictedEvent(const struct FTreasureChestSoldClientPredictionEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.TreasureChestSoldPredictedEvent");

	UBP_Prompt_VisitCompanyShop_C_TreasureChestSoldPredictedEvent_Params params {};
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.ExecuteUbergraph_BP_Prompt_VisitCompanyShop
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_VisitCompanyShop_C::ExecuteUbergraph_BP_Prompt_VisitCompanyShop(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.ExecuteUbergraph_BP_Prompt_VisitCompanyShop");

	UBP_Prompt_VisitCompanyShop_C_ExecuteUbergraph_BP_Prompt_VisitCompanyShop_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Prompt_VisitCompanyShop_C::AfterRead()
{
	UBP_PromptCoordinator_Base_C::AfterRead();

	READ_PTR_FULL(Company, UClass);
	READ_PTR_FULL(AccessKey, UClass);
	READ_PTR_FULL(CompanyRankDesc, UClass);
}

void UBP_Prompt_VisitCompanyShop_C::BeforeDelete()
{
	UBP_PromptCoordinator_Base_C::BeforeDelete();

	DELE_PTR_FULL(Company);
	DELE_PTR_FULL(AccessKey);
	DELE_PTR_FULL(CompanyRankDesc);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
