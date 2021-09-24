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
//		Name   -> Function BP_EmissaryFlotsam_Wieldable_Base.BP_EmissaryFlotsam_Wieldable_Base_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_EmissaryFlotsam_Wieldable_Base_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EmissaryFlotsam_Wieldable_Base.BP_EmissaryFlotsam_Wieldable_Base_C.UserConstructionScript");

	ABP_EmissaryFlotsam_Wieldable_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_EmissaryFlotsam_Wieldable_Base_C::AfterRead()
{
	AStaticSimpleBootyWieldableItem::AfterRead();

	READ_PTR_FULL(HitVolume, UBoxComponent);
	READ_PTR_FULL(WieldableInteractable, UWieldableInteractableComponent);
	READ_PTR_FULL(Pickupable, UPickupableComponent);
	READ_PTR_FULL(UsableWieldable, UUsableWieldableComponent);
}

void ABP_EmissaryFlotsam_Wieldable_Base_C::BeforeDelete()
{
	AStaticSimpleBootyWieldableItem::BeforeDelete();

	DELE_PTR_FULL(HitVolume);
	DELE_PTR_FULL(WieldableInteractable);
	DELE_PTR_FULL(Pickupable);
	DELE_PTR_FULL(UsableWieldable);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
