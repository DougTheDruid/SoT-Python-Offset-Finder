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

// Function BP_LargeShip_QuestTable.BP_LargeShip_QuestTable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_LargeShip_QuestTable_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShip_QuestTable.BP_LargeShip_QuestTable_C.UserConstructionScript");

	ABP_LargeShip_QuestTable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_LargeShip_QuestTable_C::AfterRead()
{
	AVoyageProposalContainer::AfterRead();

	READ_PTR_FULL(CancelTale, UChildActorComponent);
	READ_PTR_FULL(CancelVoyage, UChildActorComponent);
	READ_PTR_FULL(VoyageSelectionSlot4, UChildActorComponent);
	READ_PTR_FULL(VoyageSelectionSlot3, UChildActorComponent);
	READ_PTR_FULL(VoyageSelectionSlot2, UChildActorComponent);
	READ_PTR_FULL(VoyageSelectionSlot1, UChildActorComponent);
}

void ABP_LargeShip_QuestTable_C::BeforeDelete()
{
	AVoyageProposalContainer::BeforeDelete();

	DELE_PTR_FULL(CancelTale);
	DELE_PTR_FULL(CancelVoyage);
	DELE_PTR_FULL(VoyageSelectionSlot4);
	DELE_PTR_FULL(VoyageSelectionSlot3);
	DELE_PTR_FULL(VoyageSelectionSlot2);
	DELE_PTR_FULL(VoyageSelectionSlot1);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
