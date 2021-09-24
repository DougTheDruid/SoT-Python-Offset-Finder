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
//		Name   -> Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetCompanyTutorials
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FName                                       CompanyName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<class UBP_CT_VoyageProgress_C*>             CompanyTutorials                                           (Parm, OutParm, ZeroConstructor)
void UBP_CT_TutorialProgress_C::GetCompanyTutorials(const struct FName& CompanyName, TArray<class UBP_CT_VoyageProgress_C*>* CompanyTutorials)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetCompanyTutorials");

	UBP_CT_TutorialProgress_C_GetCompanyTutorials_Params params;
	params.CompanyName = CompanyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CompanyTutorials != nullptr)
		*CompanyTutorials = params.CompanyTutorials;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetOrderOfSoulsTutorials
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<class UBP_CT_VoyageProgress_C*>             Result                                                     (Parm, OutParm, ZeroConstructor)
void UBP_CT_TutorialProgress_C::GetOrderOfSoulsTutorials(TArray<class UBP_CT_VoyageProgress_C*>* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetOrderOfSoulsTutorials");

	UBP_CT_TutorialProgress_C_GetOrderOfSoulsTutorials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetMerchantAllianceTutorials
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<class UBP_CT_VoyageProgress_C*>             Result                                                     (Parm, OutParm, ZeroConstructor)
void UBP_CT_TutorialProgress_C::GetMerchantAllianceTutorials(TArray<class UBP_CT_VoyageProgress_C*>* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetMerchantAllianceTutorials");

	UBP_CT_TutorialProgress_C_GetMerchantAllianceTutorials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetGoldhoarderTutorials
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<class UBP_CT_VoyageProgress_C*>             Result                                                     (Parm, OutParm, ZeroConstructor)
void UBP_CT_TutorialProgress_C::GetGoldhoarderTutorials(TArray<class UBP_CT_VoyageProgress_C*>* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetGoldhoarderTutorials");

	UBP_CT_TutorialProgress_C_GetGoldhoarderTutorials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.AreAllTutorialsOnState
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TEnumAsByte<TutorialVoyageInternalState_ETutorialVoyageInternalState> QueryVoyageState                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CT_TutorialProgress_C::AreAllTutorialsOnState(TEnumAsByte<TutorialVoyageInternalState_ETutorialVoyageInternalState> QueryVoyageState, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.AreAllTutorialsOnState");

	UBP_CT_TutorialProgress_C_AreAllTutorialsOnState_Params params;
	params.QueryVoyageState = QueryVoyageState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.IsAnyTutorialOnState
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TEnumAsByte<TutorialVoyageInternalState_ETutorialVoyageInternalState> QueryVoyageState                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CT_TutorialProgress_C::IsAnyTutorialOnState(TEnumAsByte<TutorialVoyageInternalState_ETutorialVoyageInternalState> QueryVoyageState, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.IsAnyTutorialOnState");

	UBP_CT_TutorialProgress_C_IsAnyTutorialOnState_Params params;
	params.QueryVoyageState = QueryVoyageState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.FindTutorialProgressObject
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		struct FText                                       VoyageName                                                 (Parm)
//		class UBP_CT_VoyageProgress_C*                     Voyage                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CT_TutorialProgress_C::FindTutorialProgressObject(const struct FText& VoyageName, class UBP_CT_VoyageProgress_C** Voyage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.FindTutorialProgressObject");

	UBP_CT_TutorialProgress_C_FindTutorialProgressObject_Params params;
	params.VoyageName = VoyageName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Voyage != nullptr)
		*Voyage = params.Voyage;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.CreateTutorialProgressTracker
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      VoyageProposalDesc                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UClass*                                      TaleRankDesc                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UClass*                                      ExclusionRank                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Disable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UBP_CT_VoyageProgress_C*                     Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CT_TutorialProgress_C::CreateTutorialProgressTracker(class UClass* VoyageProposalDesc, class UClass* TaleRankDesc, class UClass* ExclusionRank, bool Disable, class UBP_CT_VoyageProgress_C** Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.CreateTutorialProgressTracker");

	UBP_CT_TutorialProgress_C_CreateTutorialProgressTracker_Params params;
	params.VoyageProposalDesc = VoyageProposalDesc;
	params.TaleRankDesc = TaleRankDesc;
	params.ExclusionRank = ExclusionRank;
	params.Disable = Disable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.Start
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_CT_TutorialProgress_C::Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.Start");

	UBP_CT_TutorialProgress_C_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.Change Voyage Progress
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       VoyageName                                                 (Parm)
//		TEnumAsByte<TutorialVoyageInternalState_ETutorialVoyageInternalState> New_Progress_State                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CT_TutorialProgress_C::Change_Voyage_Progress(const struct FText& VoyageName, TEnumAsByte<TutorialVoyageInternalState_ETutorialVoyageInternalState> New_Progress_State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.Change Voyage Progress");

	UBP_CT_TutorialProgress_C_Change_Voyage_Progress_Params params;
	params.VoyageName = VoyageName;
	params.New_Progress_State = New_Progress_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.ExecuteUbergraph_BP_CT_TutorialProgress
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CT_TutorialProgress_C::ExecuteUbergraph_BP_CT_TutorialProgress(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.ExecuteUbergraph_BP_CT_TutorialProgress");

	UBP_CT_TutorialProgress_C_ExecuteUbergraph_BP_CT_TutorialProgress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_CT_TutorialProgress_C::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(AthenaPlayerController, AAthenaPlayerController);
	READ_PTR_FULL(XMarksTutorialProgress, UBP_CT_VoyageProgress_C);
	READ_PTR_FULL(RiddleTutorialProgress, UBP_CT_VoyageProgress_C);
	READ_PTR_FULL(FaunaTutorialProgress, UBP_CT_VoyageProgress_C);
	READ_PTR_FULL(CargoTutorialProgress, UBP_CT_VoyageProgress_C);
	READ_PTR_FULL(BootyTutorialProgress, UBP_CT_VoyageProgress_C);
}

void UBP_CT_TutorialProgress_C::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(AthenaPlayerController);
	DELE_PTR_FULL(XMarksTutorialProgress);
	DELE_PTR_FULL(RiddleTutorialProgress);
	DELE_PTR_FULL(FaunaTutorialProgress);
	DELE_PTR_FULL(CargoTutorialProgress);
	DELE_PTR_FULL(BootyTutorialProgress);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
