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

// Function BP_LargeShip_StandardHull_Art_Interior_Captains_Cabin.BP_LargeShip_StandardHull_Art_Interior_Captains_Cabin_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_LargeShip_StandardHull_Art_Interior_Captains_Cabin_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShip_StandardHull_Art_Interior_Captains_Cabin.BP_LargeShip_StandardHull_Art_Interior_Captains_Cabin_C.UserConstructionScript");

	ABP_LargeShip_StandardHull_Art_Interior_Captains_Cabin_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_LargeShip_StandardHull_Art_Interior_Captains_Cabin_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(cap_cabinet_02_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cage_01_b, UStaticMeshComponent);
	READ_PTR_FULL(cap_cage_01_a, UStaticMeshComponent);
	READ_PTR_FULL(CaptainsTable, UChildActorComponent);
	READ_PTR_FULL(vfx_tavern_candle_looping_01_a8, UParticleSystemComponent);
	READ_PTR_FULL(vfx_tavern_candle_looping_01_a1, UParticleSystemComponent);
	READ_PTR_FULL(vfx_tavern_candle_looping_01_a, UParticleSystemComponent);
	READ_PTR_FULL(shp_item_shelf_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_rug_rnd_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_rug_02_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_rug_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(cap_candle_chandelier_flame, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_curtain_03_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_candle_chandelier_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_book_stand_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabinet_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_chair_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_bunk_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_drawer_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_trunk_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_trunk_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(MergedStaticMesh_col, UMergedStaticMeshComponent);
	READ_PTR_FULL(trs_candlestick_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_candle_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_candle_01_e, UStaticMeshComponent);
	READ_PTR_FULL(cap_shark_jaws_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_books_03_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_books_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_books_aged_02_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_books_03_a1, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_books_02_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_books_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_wooden_plaque_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_inkwell_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_model_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_curtain_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_drapes_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_curtain_02_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_skull_candle_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_map_rolls_01_a, UStaticMeshComponent);
	READ_PTR_FULL(MergedStaticMesh, UMergedStaticMeshComponent);
	READ_PTR_FULL(shp_interior_captains_cabin_01_a, UStaticMeshComponent);
}

void ABP_LargeShip_StandardHull_Art_Interior_Captains_Cabin_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(cap_cabinet_02_a);
	DELE_PTR_FULL(cap_cage_01_b);
	DELE_PTR_FULL(cap_cage_01_a);
	DELE_PTR_FULL(CaptainsTable);
	DELE_PTR_FULL(vfx_tavern_candle_looping_01_a8);
	DELE_PTR_FULL(vfx_tavern_candle_looping_01_a1);
	DELE_PTR_FULL(vfx_tavern_candle_looping_01_a);
	DELE_PTR_FULL(shp_item_shelf_01_a);
	DELE_PTR_FULL(cap_cabin_rug_rnd_01_a);
	DELE_PTR_FULL(cap_cabin_rug_02_a);
	DELE_PTR_FULL(cap_cabin_rug_01_a1);
	DELE_PTR_FULL(cap_candle_chandelier_flame);
	DELE_PTR_FULL(cap_cabin_curtain_03_a);
	DELE_PTR_FULL(cap_candle_chandelier_01_a);
	DELE_PTR_FULL(cap_book_stand_01_a);
	DELE_PTR_FULL(cap_cabinet_01_a);
	DELE_PTR_FULL(cap_chair_01_a);
	DELE_PTR_FULL(cap_bunk_01_a);
	DELE_PTR_FULL(cap_cabin_drawer_01_a);
	DELE_PTR_FULL(cap_cabin_trunk_01_a);
	DELE_PTR_FULL(cap_cabin_trunk_01_a1);
	DELE_PTR_FULL(MergedStaticMesh_col);
	DELE_PTR_FULL(trs_candlestick_01_a);
	DELE_PTR_FULL(cmn_candle_01_a);
	DELE_PTR_FULL(cmn_candle_01_e);
	DELE_PTR_FULL(cap_shark_jaws_01_a);
	DELE_PTR_FULL(cap_cabin_books_03_a);
	DELE_PTR_FULL(cap_cabin_books_01_a1);
	DELE_PTR_FULL(cap_cabin_books_aged_02_a);
	DELE_PTR_FULL(cap_cabin_books_03_a1);
	DELE_PTR_FULL(cap_cabin_books_02_a);
	DELE_PTR_FULL(cap_cabin_books_01_a);
	DELE_PTR_FULL(cap_wooden_plaque_01_a);
	DELE_PTR_FULL(cap_inkwell_01_a);
	DELE_PTR_FULL(cap_model_01_a);
	DELE_PTR_FULL(cap_curtain_01_a);
	DELE_PTR_FULL(cap_cabin_drapes_01_a);
	DELE_PTR_FULL(cap_cabin_curtain_02_a);
	DELE_PTR_FULL(cap_skull_candle_01_a);
	DELE_PTR_FULL(cap_cabin_map_rolls_01_a);
	DELE_PTR_FULL(MergedStaticMesh);
	DELE_PTR_FULL(shp_interior_captains_cabin_01_a);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
