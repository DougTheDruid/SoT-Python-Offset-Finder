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
//		Name   -> Function BP_SirenTrident_Wieldable.BP_SirenTrident_Wieldable_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_SirenTrident_Wieldable_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SirenTrident_Wieldable.BP_SirenTrident_Wieldable_C.UserConstructionScript");

	ABP_SirenTrident_Wieldable_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_SirenTrident_Wieldable_C::AfterRead()
{
	ADoubleActionItemWithAmmo::AfterRead();

	READ_PTR_FULL(AimSensitivity, UAimSensitivityComponent);
	READ_PTR_FULL(AmmoEffects, UAmmoEffectsComponent);
	READ_PTR_FULL(StaticStashedMeshMemoryConstraint, UStaticStashedMeshMemoryConstraintComponent);
	READ_PTR_FULL(AmmoTransfer, UAmmoTransferComponent);
	READ_PTR_FULL(AimDownSightAction, UItemActionComponent);
	READ_PTR_FULL(SirenTridentShotAction, USirenTridentShotActionComponent);
	READ_PTR_FULL(LaunchableAttachPoint, ULaunchableAttachPointComponent);
	READ_PTR_FULL(PostProcess, UPostProcessComponent);
}

void ABP_SirenTrident_Wieldable_C::BeforeDelete()
{
	ADoubleActionItemWithAmmo::BeforeDelete();

	DELE_PTR_FULL(AimSensitivity);
	DELE_PTR_FULL(AmmoEffects);
	DELE_PTR_FULL(StaticStashedMeshMemoryConstraint);
	DELE_PTR_FULL(AmmoTransfer);
	DELE_PTR_FULL(AimDownSightAction);
	DELE_PTR_FULL(SirenTridentShotAction);
	DELE_PTR_FULL(LaunchableAttachPoint);
	DELE_PTR_FULL(PostProcess);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
