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
//		Name   -> Function BP_MediumShip_StandardHull_Art_Interior_Lower_Deck.BP_MediumShip_StandardHull_Art_Interior_Lower_Deck_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_MediumShip_StandardHull_Art_Interior_Lower_Deck_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumShip_StandardHull_Art_Interior_Lower_Deck.BP_MediumShip_StandardHull_Art_Interior_Lower_Deck_C.UserConstructionScript");

	ABP_MediumShip_StandardHull_Art_Interior_Lower_Deck_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_MediumShip_StandardHull_Art_Interior_Lower_Deck_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(cap_cage_03_a, UStaticMeshComponent);
	READ_PTR_FULL(BP_CookingPot, UChildActorComponent);
	READ_PTR_FULL(shp_kitchen_shelf_02_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_kitchen_extractor_01_a, UStaticMeshComponent);
	READ_PTR_FULL(tls_tankard_01_b, UStaticMeshComponent);
	READ_PTR_FULL(cmn_bottle_01_a, UStaticMeshComponent);
	READ_PTR_FULL(ptn_cure_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_mid_lower_deck_rope_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_map_rolls_01_a, UStaticMeshComponent);
	READ_PTR_FULL(MergedStaticMesh, UMergedStaticMeshComponent);
	READ_PTR_FULL(shp_cooker_02_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_item_shelf_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_mid_curtain_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_rug_02_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_trunk_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_skull_candle_01_a, UStaticMeshComponent);
	READ_PTR_FULL(MergedStaticMesh_col, UMergedStaticMeshComponent);
	READ_PTR_FULL(PostProcess, UPostProcessComponent);
	READ_PTR_FULL(PP_collision, UBoxComponent);
	READ_PTR_FULL(shp_mid_brig_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_mid_stairs_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_mid_lower_deck_01_a, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_MediumShip_StandardHull_Art_Interior_Lower_Deck_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(cap_cage_03_a);
	DELE_PTR_FULL(BP_CookingPot);
	DELE_PTR_FULL(shp_kitchen_shelf_02_a);
	DELE_PTR_FULL(shp_kitchen_extractor_01_a);
	DELE_PTR_FULL(tls_tankard_01_b);
	DELE_PTR_FULL(cmn_bottle_01_a);
	DELE_PTR_FULL(ptn_cure_01_a);
	DELE_PTR_FULL(shp_mid_lower_deck_rope_01_a);
	DELE_PTR_FULL(cap_cabin_map_rolls_01_a);
	DELE_PTR_FULL(MergedStaticMesh);
	DELE_PTR_FULL(shp_cooker_02_a);
	DELE_PTR_FULL(shp_item_shelf_01_a);
	DELE_PTR_FULL(shp_mid_curtain_01_a);
	DELE_PTR_FULL(cap_cabin_rug_02_a);
	DELE_PTR_FULL(cap_cabin_trunk_01_a);
	DELE_PTR_FULL(cap_skull_candle_01_a);
	DELE_PTR_FULL(MergedStaticMesh_col);
	DELE_PTR_FULL(PostProcess);
	DELE_PTR_FULL(PP_collision);
	DELE_PTR_FULL(shp_mid_brig_01_a);
	DELE_PTR_FULL(shp_mid_stairs_01_a);
	DELE_PTR_FULL(shp_mid_lower_deck_01_a);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
