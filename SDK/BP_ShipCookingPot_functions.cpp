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
//		Name   -> Function BP_ShipCookingPot.BP_ShipCookingPot_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_ShipCookingPot_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShipCookingPot.BP_ShipCookingPot_C.UserConstructionScript");

	ABP_ShipCookingPot_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_ShipCookingPot_C::AfterRead()
{
	ABP_CookingPotBase_C::AfterRead();

	READ_PTR_FULL(HitRegSnapshotRedirectImpactToReplicatedMovementAttachParent, UHitRegSnapshotRedirectImpactToReplicatedMovementAttachParentComponent);
	READ_PTR_FULL(CookerIgnition, UCookerIgnitionComponent);
}

void ABP_ShipCookingPot_C::BeforeDelete()
{
	ABP_CookingPotBase_C::BeforeDelete();

	DELE_PTR_FULL(HitRegSnapshotRedirectImpactToReplicatedMovementAttachParent);
	DELE_PTR_FULL(CookerIgnition);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
