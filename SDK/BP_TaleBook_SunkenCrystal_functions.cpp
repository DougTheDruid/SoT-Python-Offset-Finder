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
//		Name   -> Function BP_TaleBook_SunkenCrystal.BP_TaleBook_SunkenCrystal_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TaleBook_SunkenCrystal_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TaleBook_SunkenCrystal.BP_TaleBook_SunkenCrystal_C.UserConstructionScript");

	ABP_TaleBook_SunkenCrystal_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_TaleBook_SunkenCrystal_C::AfterRead()
{
	AVoyageProposalContainer::AfterRead();

	READ_PTR_FULL(TaleSelectionSlot_6, UChildActorComponent);
	READ_PTR_FULL(TaleSelectionSlot_5, UChildActorComponent);
	READ_PTR_FULL(TaleSelectionSlot_4, UChildActorComponent);
	READ_PTR_FULL(TaleSelectionSlot_3, UChildActorComponent);
	READ_PTR_FULL(TaleSelectionSlot_2, UChildActorComponent);
	READ_PTR_FULL(TaleSelectionSlot_1, UChildActorComponent);
}

void ABP_TaleBook_SunkenCrystal_C::BeforeDelete()
{
	AVoyageProposalContainer::BeforeDelete();

	DELE_PTR_FULL(TaleSelectionSlot_6);
	DELE_PTR_FULL(TaleSelectionSlot_5);
	DELE_PTR_FULL(TaleSelectionSlot_4);
	DELE_PTR_FULL(TaleSelectionSlot_3);
	DELE_PTR_FULL(TaleSelectionSlot_2);
	DELE_PTR_FULL(TaleSelectionSlot_1);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
