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
//		Name   -> Function BP_MerchantCrate_AIShipAnyItemCrate_Proxy.BP_MerchantCrate_AIShipAnyItemCrate_Proxy_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_MerchantCrate_AIShipAnyItemCrate_Proxy_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MerchantCrate_AIShipAnyItemCrate_Proxy.BP_MerchantCrate_AIShipAnyItemCrate_Proxy_C.UserConstructionScript");

	ABP_MerchantCrate_AIShipAnyItemCrate_Proxy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_MerchantCrate_AIShipAnyItemCrate_Proxy_C::AfterRead()
{
	AStorageCrateItemProxy::AfterRead();

	READ_PTR_FULL(AddOpenContainerActionRule, UAddOpenContainerActionRuleComponent);
	READ_PTR_FULL(StorageContainer, UStorageContainerComponent);
	READ_PTR_FULL(Interactable, UInteractableComponent);
}

void ABP_MerchantCrate_AIShipAnyItemCrate_Proxy_C::BeforeDelete()
{
	AStorageCrateItemProxy::BeforeDelete();

	DELE_PTR_FULL(AddOpenContainerActionRule);
	DELE_PTR_FULL(StorageContainer);
	DELE_PTR_FULL(Interactable);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
