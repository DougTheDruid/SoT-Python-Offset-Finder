// Name: SoT, Version: 2.3.0.Brig

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
//		Name   -> Function wld_bush_cluster_02_a.wld_bush_cluster_02_a_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void Awld_bush_cluster_02_a_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function wld_bush_cluster_02_a.wld_bush_cluster_02_a_C.UserConstructionScript");

	Awld_bush_cluster_02_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Awld_bush_cluster_02_a_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(wsp_rock_pebbles_d_01, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles_f_01, UStaticMeshComponent);
	READ_PTR_FULL(wld_bush_01_a_01, UStaticMeshComponent);
	READ_PTR_FULL(wsp_cave_tunnel_wall_rock_01_a, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small_b_01, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small_d_01, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles_c_01, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small_a_01, UStaticMeshComponent);
	READ_PTR_FULL(SharedRoot, USceneComponent);
}

void Awld_bush_cluster_02_a_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(wsp_rock_pebbles_d_01);
	DELE_PTR_FULL(wsp_rock_pebbles_f_01);
	DELE_PTR_FULL(wld_bush_01_a_01);
	DELE_PTR_FULL(wsp_cave_tunnel_wall_rock_01_a);
	DELE_PTR_FULL(wsp_rock_xtra_small_b_01);
	DELE_PTR_FULL(wsp_rock_xtra_small_d_01);
	DELE_PTR_FULL(wsp_rock_pebbles_c_01);
	DELE_PTR_FULL(wsp_rock_xtra_small_a_01);
	DELE_PTR_FULL(SharedRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
