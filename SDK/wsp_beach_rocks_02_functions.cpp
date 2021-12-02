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
//		Name   -> Function wsp_beach_rocks_02.wsp_beach_rocks_02_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void Awsp_beach_rocks_02_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function wsp_beach_rocks_02.wsp_beach_rocks_02_C.UserConstructionScript");

	Awsp_beach_rocks_02_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Awsp_beach_rocks_02_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(wsp_rock_xtra_small__c10_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__e4_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__e3_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__c6_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__c5_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__c9_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__c8_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__c7_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__c4_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__e2_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_cliff_o8_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_cliff_o9_1, UStaticMeshComponent);
	READ_PTR_FULL(Scene, USceneComponent);
}

void Awsp_beach_rocks_02_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(wsp_rock_xtra_small__c10_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__e4_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__e3_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__c6_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__c5_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__c9_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__c8_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__c7_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__c4_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__e2_1);
	DELE_PTR_FULL(wsp_rock_cliff_o8_1);
	DELE_PTR_FULL(wsp_rock_cliff_o9_1);
	DELE_PTR_FULL(Scene);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
