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

// Function sot_frontend_01_a.sot_frontend_01_a_C.Get Pirate Selector Component
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPirateSelector*         PirateSelectorComponent        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Asot_frontend_01_a_C::Get_Pirate_Selector_Component(class UPirateSelector** PirateSelectorComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.Get Pirate Selector Component");

	Asot_frontend_01_a_C_Get_Pirate_Selector_Component_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PirateSelectorComponent != nullptr)
		*PirateSelectorComponent = params.PirateSelectorComponent;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.GetFrontendCameraComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFrontendCameraComponent* Camera_Component               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Asot_frontend_01_a_C::GetFrontendCameraComponent(class UFrontendCameraComponent** Camera_Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.GetFrontendCameraComponent");

	Asot_frontend_01_a_C_GetFrontendCameraComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Camera_Component != nullptr)
		*Camera_Component = params.Camera_Component;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.ResetLineUpPirates
// (Public, BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_a_C::ResetLineUpPirates()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.ResetLineUpPirates");

	Asot_frontend_01_a_C_ResetLineUpPirates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.RefreshCharSlotStatus
// (Public, BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_a_C::RefreshCharSlotStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.RefreshCharSlotStatus");

	Asot_frontend_01_a_C_RefreshCharSlotStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.SetCharSlotId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewCharSlotID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Asot_frontend_01_a_C::SetCharSlotId(int NewCharSlotID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.SetCharSlotId");

	Asot_frontend_01_a_C_SetCharSlotId_Params params;
	params.NewCharSlotID = NewCharSlotID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.PirateHighlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Asot_frontend_01_a_C::PirateHighlight(float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.PirateHighlight");

	Asot_frontend_01_a_C_PirateHighlight_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.GetSelectedPirate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_PirateGenerator_LineUp_C* Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Asot_frontend_01_a_C::GetSelectedPirate(class ABP_PirateGenerator_LineUp_C** Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.GetSelectedPirate");

	Asot_frontend_01_a_C_GetSelectedPirate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.GetPirateLineup
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PirateGenerator_LineUpUI_C* Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Asot_frontend_01_a_C::GetPirateLineup(class ABP_PirateGenerator_LineUpUI_C** Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.GetPirateLineup");

	Asot_frontend_01_a_C_GetPirateLineup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernSelect_UniqueObjectNameForCooking_1729007687
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)
void Asot_frontend_01_a_C::InpActEvt_FrontendTavernSelect_UniqueObjectNameForCooking_1729007687(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernSelect_UniqueObjectNameForCooking_1729007687");

	Asot_frontend_01_a_C_InpActEvt_FrontendTavernSelect_UniqueObjectNameForCooking_1729007687_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernNextPage_UniqueObjectNameForCooking_1729007686
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)
void Asot_frontend_01_a_C::InpActEvt_FrontendTavernNextPage_UniqueObjectNameForCooking_1729007686(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernNextPage_UniqueObjectNameForCooking_1729007686");

	Asot_frontend_01_a_C_InpActEvt_FrontendTavernNextPage_UniqueObjectNameForCooking_1729007686_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Stop
// (BlueprintEvent)
void Asot_frontend_01_a_C::K2Node_MatineeController_5_Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Stop");

	Asot_frontend_01_a_C_K2Node_MatineeController_5_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Pause
// (BlueprintEvent)
void Asot_frontend_01_a_C::K2Node_MatineeController_5_Pause()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Pause");

	Asot_frontend_01_a_C_K2Node_MatineeController_5_Pause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Start
// (BlueprintEvent)
void Asot_frontend_01_a_C::K2Node_MatineeController_5_Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Start");

	Asot_frontend_01_a_C_K2Node_MatineeController_5_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Finished
// (BlueprintEvent)
void Asot_frontend_01_a_C::K2Node_MatineeController_5_Finished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Finished");

	Asot_frontend_01_a_C_K2Node_MatineeController_5_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernChangeProfile_UniqueObjectNameForCooking_1729007685
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)
void Asot_frontend_01_a_C::InpActEvt_FrontendTavernChangeProfile_UniqueObjectNameForCooking_1729007685(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernChangeProfile_UniqueObjectNameForCooking_1729007685");

	Asot_frontend_01_a_C_InpActEvt_FrontendTavernChangeProfile_UniqueObjectNameForCooking_1729007685_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernFavourite_UniqueObjectNameForCooking_1729007684
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)
void Asot_frontend_01_a_C::InpActEvt_FrontendTavernFavourite_UniqueObjectNameForCooking_1729007684(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernFavourite_UniqueObjectNameForCooking_1729007684");

	Asot_frontend_01_a_C_InpActEvt_FrontendTavernFavourite_UniqueObjectNameForCooking_1729007684_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernQuitGame_UniqueObjectNameForCooking_1729007683
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)
void Asot_frontend_01_a_C::InpActEvt_FrontendTavernQuitGame_UniqueObjectNameForCooking_1729007683(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernQuitGame_UniqueObjectNameForCooking_1729007683");

	Asot_frontend_01_a_C_InpActEvt_FrontendTavernQuitGame_UniqueObjectNameForCooking_1729007683_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.InpAxisEvt_FrontendTavernRotate_K2Node_InputAxisEvent_22
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Asot_frontend_01_a_C::InpAxisEvt_FrontendTavernRotate_K2Node_InputAxisEvent_22(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.InpAxisEvt_FrontendTavernRotate_K2Node_InputAxisEvent_22");

	Asot_frontend_01_a_C_InpAxisEvt_FrontendTavernRotate_K2Node_InputAxisEvent_22_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void Asot_frontend_01_a_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.ReceiveBeginPlay");

	Asot_frontend_01_a_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.BeginCelebration
// (BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_a_C::BeginCelebration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.BeginCelebration");

	Asot_frontend_01_a_C_BeginCelebration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.pirateSelectCam
// (BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_a_C::pirateSelectCam()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.pirateSelectCam");

	Asot_frontend_01_a_C_pirateSelectCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.showShipSelectPirate
// (BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_a_C::showShipSelectPirate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.showShipSelectPirate");

	Asot_frontend_01_a_C_showShipSelectPirate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.reinstateSelectedPirateLoc
// (BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_a_C::reinstateSelectedPirateLoc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.reinstateSelectedPirateLoc");

	Asot_frontend_01_a_C_reinstateSelectedPirateLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.StartGeneratingPirates
// (BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_a_C::StartGeneratingPirates()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.StartGeneratingPirates");

	Asot_frontend_01_a_C_StartGeneratingPirates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.SelectionCancelled
// (BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_a_C::SelectionCancelled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.SelectionCancelled");

	Asot_frontend_01_a_C_SelectionCancelled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.SelectPirateButtonPressed
// (BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_a_C::SelectPirateButtonPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.SelectPirateButtonPressed");

	Asot_frontend_01_a_C_SelectPirateButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.RefreshPiratesButtonPressed
// (BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_a_C::RefreshPiratesButtonPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.RefreshPiratesButtonPressed");

	Asot_frontend_01_a_C_RefreshPiratesButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.FavoritePirateButtonPressed
// (BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_a_C::FavoritePirateButtonPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.FavoritePirateButtonPressed");

	Asot_frontend_01_a_C_FavoritePirateButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Asot_frontend_01_a_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.ReceiveTick");

	Asot_frontend_01_a_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.PiratesInitializedEvent
// (BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_a_C::PiratesInitializedEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.PiratesInitializedEvent");

	Asot_frontend_01_a_C_PiratesInitializedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.StartPirateCreationAnimation
// (BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_a_C::StartPirateCreationAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.StartPirateCreationAnimation");

	Asot_frontend_01_a_C_StartPirateCreationAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.OnLeavingSelectionState
// (BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_a_C::OnLeavingSelectionState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.OnLeavingSelectionState");

	Asot_frontend_01_a_C_OnLeavingSelectionState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a.sot_frontend_01_a_C.ExecuteUbergraph_sot_frontend_01_a
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Asot_frontend_01_a_C::ExecuteUbergraph_sot_frontend_01_a(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.ExecuteUbergraph_sot_frontend_01_a");

	Asot_frontend_01_a_C_ExecuteUbergraph_sot_frontend_01_a_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Asot_frontend_01_a_C::AfterRead()
{
	ALevelScriptActor::AfterRead();

	READ_PTR_FULL(PirateUI, UPirateSelector);
	READ_PTR_FULL(pirateLineUpAnimgraph, UBP_Anim_CharacterSelect_C);
	READ_PTR_FULL(BP_CarouselCam_C_2_ExecuteUbergraph_sot_frontend_01_a_RefProperty, ABP_CarouselCam_C);
	READ_PTR_FULL(MatineeActor_PirateSelect_ExecuteUbergraph_sot_frontend_01_a_RefProperty, AMatineeActor);
	READ_PTR_FULL(BP_CarouselCam_C_2_UniqueObjectNameForCooking_232772163_RefProperty, ABP_CarouselCam_C);
}

void Asot_frontend_01_a_C::BeforeDelete()
{
	ALevelScriptActor::BeforeDelete();

	DELE_PTR_FULL(PirateUI);
	DELE_PTR_FULL(pirateLineUpAnimgraph);
	DELE_PTR_FULL(BP_CarouselCam_C_2_ExecuteUbergraph_sot_frontend_01_a_RefProperty);
	DELE_PTR_FULL(MatineeActor_PirateSelect_ExecuteUbergraph_sot_frontend_01_a_RefProperty);
	DELE_PTR_FULL(BP_CarouselCam_C_2_UniqueObjectNameForCooking_232772163_RefProperty);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
