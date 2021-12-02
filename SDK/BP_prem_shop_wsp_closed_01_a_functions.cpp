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
//		Name   -> Function BP_prem_shop_wsp_closed_01_a.BP_prem_shop_wsp_closed_01_a_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_prem_shop_wsp_closed_01_a_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_prem_shop_wsp_closed_01_a.BP_prem_shop_wsp_closed_01_a_C.UserConstructionScript");

	ABP_prem_shop_wsp_closed_01_a_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_prem_shop_wsp_closed_01_a_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Box, UBoxComponent);
	READ_PTR_FULL(Triton, UTritonComponent);
	READ_PTR_FULL(StaticMesh6, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh5, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh4, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh3, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh2, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh1, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(bld_prem_shop_plunder_details_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_prem_shop_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_shop_door_frame_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(bld_shops_closed_boards_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_shop_roof_beam_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_shop_chimney_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_gate_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_fence_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_shop_window_01_a3, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_hatch_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_shop_door_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_shop_window_01_a2, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_shop_window_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_shop_window_01_a, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_prem_shop_wsp_closed_01_a_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Box);
	DELE_PTR_FULL(Triton);
	DELE_PTR_FULL(StaticMesh6);
	DELE_PTR_FULL(StaticMesh5);
	DELE_PTR_FULL(StaticMesh4);
	DELE_PTR_FULL(StaticMesh3);
	DELE_PTR_FULL(StaticMesh2);
	DELE_PTR_FULL(StaticMesh1);
	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(bld_prem_shop_plunder_details_01_a);
	DELE_PTR_FULL(bld_prem_shop_01_a);
	DELE_PTR_FULL(bld_pot_shop_door_frame_01_a1);
	DELE_PTR_FULL(bld_shops_closed_boards_01_a);
	DELE_PTR_FULL(bld_pot_shop_roof_beam_01_a);
	DELE_PTR_FULL(bld_pot_shop_chimney_01_a);
	DELE_PTR_FULL(bld_pot_gate_01_a);
	DELE_PTR_FULL(bld_pot_fence_01_a);
	DELE_PTR_FULL(bld_pot_shop_window_01_a3);
	DELE_PTR_FULL(bld_pot_hatch_01_a);
	DELE_PTR_FULL(bld_pot_shop_door_01_a);
	DELE_PTR_FULL(bld_pot_shop_window_01_a2);
	DELE_PTR_FULL(bld_pot_shop_window_01_a1);
	DELE_PTR_FULL(bld_pot_shop_window_01_a);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
