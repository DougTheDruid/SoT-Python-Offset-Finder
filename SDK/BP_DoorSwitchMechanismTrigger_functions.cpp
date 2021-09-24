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
//		Name   -> Function BP_DoorSwitchMechanismTrigger.BP_DoorSwitchMechanismTrigger_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_DoorSwitchMechanismTrigger_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorSwitchMechanismTrigger.BP_DoorSwitchMechanismTrigger_C.UserConstructionScript");

	ABP_DoorSwitchMechanismTrigger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_DoorSwitchMechanismTrigger_C::AfterRead()
{
	ASwitchMechanismTrigger::AfterRead();

	READ_PTR_FULL(Arrow, UArrowComponent);
	READ_PTR_FULL(Interactable, UInteractableComponent);
}

void ABP_DoorSwitchMechanismTrigger_C::BeforeDelete()
{
	ASwitchMechanismTrigger::BeforeDelete();

	DELE_PTR_FULL(Arrow);
	DELE_PTR_FULL(Interactable);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
