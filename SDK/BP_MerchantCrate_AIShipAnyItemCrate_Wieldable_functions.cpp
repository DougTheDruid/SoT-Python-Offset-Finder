// Name: SoT, Version: 2.3.0.Brig

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
//		Name   -> Function BP_MerchantCrate_AIShipAnyItemCrate_Wieldable.BP_MerchantCrate_AIShipAnyItemCrate_Wieldable_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_MerchantCrate_AIShipAnyItemCrate_Wieldable_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MerchantCrate_AIShipAnyItemCrate_Wieldable.BP_MerchantCrate_AIShipAnyItemCrate_Wieldable_C.UserConstructionScript");

	ABP_MerchantCrate_AIShipAnyItemCrate_Wieldable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_MerchantCrate_AIShipAnyItemCrate_Wieldable_C::AfterRead()
{
	AStaticStorageCrateWieldable::AfterRead();

	READ_PTR_FULL(HitVolume, UBoxComponent);
	READ_PTR_FULL(AddOpenContainerActionRule, UAddOpenContainerActionRuleComponent);
	READ_PTR_FULL(Pickupable, UPickupableComponent);
	READ_PTR_FULL(UsableWieldable, UUsableWieldableComponent);
	READ_PTR_FULL(WieldableInteractable, UWieldableInteractableComponent);
	READ_PTR_FULL(StorageContainer, UStorageContainerComponent);
}

void ABP_MerchantCrate_AIShipAnyItemCrate_Wieldable_C::BeforeDelete()
{
	AStaticStorageCrateWieldable::BeforeDelete();

	DELE_PTR_FULL(HitVolume);
	DELE_PTR_FULL(AddOpenContainerActionRule);
	DELE_PTR_FULL(Pickupable);
	DELE_PTR_FULL(UsableWieldable);
	DELE_PTR_FULL(WieldableInteractable);
	DELE_PTR_FULL(StorageContainer);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
