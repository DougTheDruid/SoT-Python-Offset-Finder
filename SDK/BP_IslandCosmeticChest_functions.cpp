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
//		Name   -> Function BP_IslandCosmeticChest.BP_IslandCosmeticChest_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_IslandCosmeticChest_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_IslandCosmeticChest.BP_IslandCosmeticChest_C.UserConstructionScript");

	ABP_IslandCosmeticChest_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_IslandCosmeticChest_C::AfterRead()
{
	AShipCustomizationChest::AfterRead();

	READ_PTR_FULL(Harbour, UHarbourComponent);
}

void ABP_IslandCosmeticChest_C::BeforeDelete()
{
	AShipCustomizationChest::BeforeDelete();

	DELE_PTR_FULL(Harbour);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
