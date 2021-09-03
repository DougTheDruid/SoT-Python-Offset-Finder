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

// Function BP_Rowboat_Lantern_Front.BP_Rowboat_Lantern_Front_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Rowboat_Lantern_Front_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Rowboat_Lantern_Front.BP_Rowboat_Lantern_Front_C.UserConstructionScript");

	ABP_Rowboat_Lantern_Front_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Rowboat_Lantern_Front_C::AfterRead()
{
	ABP_InteractableRowboatLantern_C::AfterRead();

}

void ABP_Rowboat_Lantern_Front_C::BeforeDelete()
{
	ABP_InteractableRowboatLantern_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
