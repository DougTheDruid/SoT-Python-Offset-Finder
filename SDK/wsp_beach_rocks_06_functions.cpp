// Name: SoT, Version: 2.3.0

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
//		Name   -> Function wsp_beach_rocks_06.wsp_beach_rocks_06_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void Awsp_beach_rocks_06_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function wsp_beach_rocks_06.wsp_beach_rocks_06_C.UserConstructionScript");

	Awsp_beach_rocks_06_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Awsp_beach_rocks_06_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(wsp_rock_pebbles__b4_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles__c13_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__a14_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles__g_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__b17_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__b14_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles__h_1, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh2, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__e12_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__a17_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__e11_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__d23_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles__d10_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles__e12_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles__d13_1, UStaticMeshComponent);
	READ_PTR_FULL(Scene, USceneComponent);
}

void Awsp_beach_rocks_06_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(wsp_rock_pebbles__b4_1);
	DELE_PTR_FULL(wsp_rock_pebbles__c13_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__a14_1);
	DELE_PTR_FULL(wsp_rock_pebbles__g_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__b17_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__b14_1);
	DELE_PTR_FULL(wsp_rock_pebbles__h_1);
	DELE_PTR_FULL(StaticMesh2);
	DELE_PTR_FULL(wsp_rock_xtra_small__e12_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__a17_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__e11_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__d23_1);
	DELE_PTR_FULL(wsp_rock_pebbles__d10_1);
	DELE_PTR_FULL(wsp_rock_pebbles__e12_1);
	DELE_PTR_FULL(wsp_rock_pebbles__d13_1);
	DELE_PTR_FULL(Scene);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
