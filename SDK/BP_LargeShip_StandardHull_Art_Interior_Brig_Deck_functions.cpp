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

// Function BP_LargeShip_StandardHull_Art_Interior_Brig_Deck.BP_LargeShip_StandardHull_Art_Interior_Brig_Deck_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_LargeShip_StandardHull_Art_Interior_Brig_Deck_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShip_StandardHull_Art_Interior_Brig_Deck.BP_LargeShip_StandardHull_Art_Interior_Brig_Deck_C.UserConstructionScript");

	ABP_LargeShip_StandardHull_Art_Interior_Brig_Deck_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_LargeShip_StandardHull_Art_Interior_Brig_Deck_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(shp_int_brig_cell_02_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_int_brig_beam_01_a6, UStaticMeshComponent);
	READ_PTR_FULL(shp_int_brig_beam_01_b6, UStaticMeshComponent);
	READ_PTR_FULL(shp_int_brig_beam_01_a8, UStaticMeshComponent);
	READ_PTR_FULL(shp_int_brig_beam_01_b5, UStaticMeshComponent);
	READ_PTR_FULL(shp_int_brig_beam_01_a3, UStaticMeshComponent);
	READ_PTR_FULL(shp_int_brig_beam_01_b1, UStaticMeshComponent);
	READ_PTR_FULL(shp_int_brig_beam_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(shp_int_brig_beam_01_b, UStaticMeshComponent);
	READ_PTR_FULL(shp_int_brig_beam_01_b2, UStaticMeshComponent);
	READ_PTR_FULL(shp_int_brig_beam_01_b4, UStaticMeshComponent);
	READ_PTR_FULL(shp_int_brig_beam_01_b3, UStaticMeshComponent);
	READ_PTR_FULL(shp_int_brig_beam_01_b7, UStaticMeshComponent);
	READ_PTR_FULL(MergedStaticMesh, UMergedStaticMeshComponent);
	READ_PTR_FULL(shp_int_brig_stairs_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_int_map_pillar_01_a7, UStaticMeshComponent);
	READ_PTR_FULL(shp_int_map_pillar_01_a6, UStaticMeshComponent);
	READ_PTR_FULL(shp_int_brig_beam_01_a5, UStaticMeshComponent);
	READ_PTR_FULL(shp_int_brig_beam_01_a4, UStaticMeshComponent);
	READ_PTR_FULL(shp_int_map_pillar_01_a5, UStaticMeshComponent);
	READ_PTR_FULL(shp_int_map_pillar_01_a4, UStaticMeshComponent);
	READ_PTR_FULL(shp_int_map_pillar_01_a3, UStaticMeshComponent);
	READ_PTR_FULL(shp_int_map_pillar_01_a2, UStaticMeshComponent);
	READ_PTR_FULL(shp_int_map_pillar_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(shp_int_map_pillar_01_a, UStaticMeshComponent);
	READ_PTR_FULL(MergedStaticMesh_col, UMergedStaticMeshComponent);
	READ_PTR_FULL(shp_interior_brig_deck_01_a, UStaticMeshComponent);
}

void ABP_LargeShip_StandardHull_Art_Interior_Brig_Deck_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(shp_int_brig_cell_02_a);
	DELE_PTR_FULL(shp_int_brig_beam_01_a6);
	DELE_PTR_FULL(shp_int_brig_beam_01_b6);
	DELE_PTR_FULL(shp_int_brig_beam_01_a8);
	DELE_PTR_FULL(shp_int_brig_beam_01_b5);
	DELE_PTR_FULL(shp_int_brig_beam_01_a3);
	DELE_PTR_FULL(shp_int_brig_beam_01_b1);
	DELE_PTR_FULL(shp_int_brig_beam_01_a1);
	DELE_PTR_FULL(shp_int_brig_beam_01_b);
	DELE_PTR_FULL(shp_int_brig_beam_01_b2);
	DELE_PTR_FULL(shp_int_brig_beam_01_b4);
	DELE_PTR_FULL(shp_int_brig_beam_01_b3);
	DELE_PTR_FULL(shp_int_brig_beam_01_b7);
	DELE_PTR_FULL(MergedStaticMesh);
	DELE_PTR_FULL(shp_int_brig_stairs_01_a);
	DELE_PTR_FULL(shp_int_map_pillar_01_a7);
	DELE_PTR_FULL(shp_int_map_pillar_01_a6);
	DELE_PTR_FULL(shp_int_brig_beam_01_a5);
	DELE_PTR_FULL(shp_int_brig_beam_01_a4);
	DELE_PTR_FULL(shp_int_map_pillar_01_a5);
	DELE_PTR_FULL(shp_int_map_pillar_01_a4);
	DELE_PTR_FULL(shp_int_map_pillar_01_a3);
	DELE_PTR_FULL(shp_int_map_pillar_01_a2);
	DELE_PTR_FULL(shp_int_map_pillar_01_a1);
	DELE_PTR_FULL(shp_int_map_pillar_01_a);
	DELE_PTR_FULL(MergedStaticMesh_col);
	DELE_PTR_FULL(shp_interior_brig_deck_01_a);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
