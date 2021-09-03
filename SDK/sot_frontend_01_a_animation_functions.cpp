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

// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.OnReturnToPirateSelection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_a_animation_C::OnReturnToPirateSelection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.OnReturnToPirateSelection");

	Asot_frontend_01_a_animation_C_OnReturnToPirateSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GetPirateSelector
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPirateSelector*         PirateSelectorComponent        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Asot_frontend_01_a_animation_C::GetPirateSelector(class UPirateSelector** PirateSelectorComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GetPirateSelector");

	Asot_frontend_01_a_animation_C_GetPirateSelector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PirateSelectorComponent != nullptr)
		*PirateSelectorComponent = params.PirateSelectorComponent;

}


// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GetFrontendCameraComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFrontendCameraComponent* Frontend_Camera_Component      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Asot_frontend_01_a_animation_C::GetFrontendCameraComponent(class UFrontendCameraComponent** Frontend_Camera_Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GetFrontendCameraComponent");

	Asot_frontend_01_a_animation_C_GetFrontendCameraComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Frontend_Camera_Component != nullptr)
		*Frontend_Camera_Component = params.Frontend_Camera_Component;

}


// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.goToShipSelCam
// (Public, BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_a_animation_C::goToShipSelCam()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.goToShipSelCam");

	Asot_frontend_01_a_animation_C_goToShipSelCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void Asot_frontend_01_a_animation_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ReceiveBeginPlay");

	Asot_frontend_01_a_animation_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ShipSelect
// (BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_a_animation_C::ShipSelect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ShipSelect");

	Asot_frontend_01_a_animation_C_ShipSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GenerateShipSelectionPirate
// (BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_a_animation_C::GenerateShipSelectionPirate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GenerateShipSelectionPirate");

	Asot_frontend_01_a_animation_C_GenerateShipSelectionPirate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.HideShipSelectionPirate
// (BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_a_animation_C::HideShipSelectionPirate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.HideShipSelectionPirate");

	Asot_frontend_01_a_animation_C_HideShipSelectionPirate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ExecuteUbergraph_sot_frontend_01_a_animation
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Asot_frontend_01_a_animation_C::ExecuteUbergraph_sot_frontend_01_a_animation(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ExecuteUbergraph_sot_frontend_01_a_animation");

	Asot_frontend_01_a_animation_C_ExecuteUbergraph_sot_frontend_01_a_animation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Asot_frontend_01_a_animation_C::AfterRead()
{
	ALevelScriptActor::AfterRead();

	READ_PTR_FULL(shipSelectUI_title_14_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty, AStaticMeshActor);
	READ_PTR_FULL(shipSelectUI_gallion_10_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty, AStaticMeshActor);
	READ_PTR_FULL(shipSelectUI_sloop_12_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty, AStaticMeshActor);
	READ_PTR_FULL(shipSelect_CharMarker2_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty, ASkeletalMeshActor);
	READ_PTR_FULL(BP_PirateGenerator_LineUp_C_4_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty, ABP_PirateGenerator_LineUp_C);
	READ_PTR_FULL(MatineeActor_ShipSelect_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty, AMatineeActor);
	READ_PTR_FULL(MatineeActor_ShipSelect_UniqueObjectNameForCooking_1530807069_RefProperty, AMatineeActor);
	READ_PTR_FULL(ShipSelectScreenCam_UniqueObjectNameForCooking_1530807069_RefProperty, ACameraActor);
	READ_PTR_FULL(MatineeActor_ShipSelect_UniqueObjectNameForCooking_1530807072_RefProperty, AMatineeActor);
	READ_PTR_FULL(BP_PirateGenerator_LineUp_C_4_UniqueObjectNameForCooking_1530807072_RefProperty, ABP_PirateGenerator_LineUp_C);
}

void Asot_frontend_01_a_animation_C::BeforeDelete()
{
	ALevelScriptActor::BeforeDelete();

	DELE_PTR_FULL(shipSelectUI_title_14_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty);
	DELE_PTR_FULL(shipSelectUI_gallion_10_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty);
	DELE_PTR_FULL(shipSelectUI_sloop_12_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty);
	DELE_PTR_FULL(shipSelect_CharMarker2_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty);
	DELE_PTR_FULL(BP_PirateGenerator_LineUp_C_4_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty);
	DELE_PTR_FULL(MatineeActor_ShipSelect_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty);
	DELE_PTR_FULL(MatineeActor_ShipSelect_UniqueObjectNameForCooking_1530807069_RefProperty);
	DELE_PTR_FULL(ShipSelectScreenCam_UniqueObjectNameForCooking_1530807069_RefProperty);
	DELE_PTR_FULL(MatineeActor_ShipSelect_UniqueObjectNameForCooking_1530807072_RefProperty);
	DELE_PTR_FULL(BP_PirateGenerator_LineUp_C_4_UniqueObjectNameForCooking_1530807072_RefProperty);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
