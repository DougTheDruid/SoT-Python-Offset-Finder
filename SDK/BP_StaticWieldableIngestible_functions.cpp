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
//		Name   -> Function BP_StaticWieldableIngestible.BP_StaticWieldableIngestible_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_StaticWieldableIngestible_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StaticWieldableIngestible.BP_StaticWieldableIngestible_C.UserConstructionScript");

	ABP_StaticWieldableIngestible_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_StaticWieldableIngestible_C::AfterRead()
{
	AStaticWieldableIngestible::AfterRead();

	READ_PTR_FULL(MaterialManipulation, UMaterialManipulationComponent);
	READ_PTR_FULL(Pottable, UPottableComponent);
	READ_PTR_FULL(WieldableInteractable, UWieldableInteractableComponent);
	READ_PTR_FULL(UsableWieldable, UUsableWieldableComponent);
	READ_PTR_FULL(Pickupable, UPickupableComponent);
}

void ABP_StaticWieldableIngestible_C::BeforeDelete()
{
	AStaticWieldableIngestible::BeforeDelete();

	DELE_PTR_FULL(MaterialManipulation);
	DELE_PTR_FULL(Pottable);
	DELE_PTR_FULL(WieldableInteractable);
	DELE_PTR_FULL(UsableWieldable);
	DELE_PTR_FULL(Pickupable);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
