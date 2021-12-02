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
//		Name   -> Function BP_Firework_Wieldable.BP_Firework_Wieldable_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Firework_Wieldable_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firework_Wieldable.BP_Firework_Wieldable_C.UserConstructionScript");

	ABP_Firework_Wieldable_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Firework_Wieldable_C::AfterRead()
{
	AStaticMeshWieldableItem::AfterRead();

	READ_PTR_FULL(UsableWieldable, UUsableWieldableComponent);
	READ_PTR_FULL(WieldableInteractable, UWieldableInteractableComponent);
	READ_PTR_FULL(Pickupable, UPickupableComponent);
	READ_PTR_FULL(ConsumableWieldable, UConsumableWieldableComponent);
	READ_PTR_FULL(InventoryItem, UInventoryItemComponent);
}

void ABP_Firework_Wieldable_C::BeforeDelete()
{
	AStaticMeshWieldableItem::BeforeDelete();

	DELE_PTR_FULL(UsableWieldable);
	DELE_PTR_FULL(WieldableInteractable);
	DELE_PTR_FULL(Pickupable);
	DELE_PTR_FULL(ConsumableWieldable);
	DELE_PTR_FULL(InventoryItem);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
