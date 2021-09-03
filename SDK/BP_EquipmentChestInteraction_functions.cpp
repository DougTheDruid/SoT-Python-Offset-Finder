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

// Function BP_EquipmentChestInteraction.BP_EquipmentChestInteraction_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_EquipmentChestInteraction_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EquipmentChestInteraction.BP_EquipmentChestInteraction_C.UserConstructionScript");

	ABP_EquipmentChestInteraction_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_EquipmentChestInteraction_C::AfterRead()
{
	AEquipmentChestInteraction::AfterRead();

	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_EquipmentChestInteraction_C::BeforeDelete()
{
	AEquipmentChestInteraction::BeforeDelete();

	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
