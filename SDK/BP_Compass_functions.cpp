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
//		Name   -> Function BP_Compass.BP_Compass_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Compass_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Compass.BP_Compass_C.UserConstructionScript");

	ABP_Compass_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Compass_C::AfterRead()
{
	ACompass::AfterRead();

	READ_PTR_FULL(InventoryItem, UInventoryItemComponent);
}

void ABP_Compass_C::BeforeDelete()
{
	ACompass::BeforeDelete();

	DELE_PTR_FULL(InventoryItem);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
