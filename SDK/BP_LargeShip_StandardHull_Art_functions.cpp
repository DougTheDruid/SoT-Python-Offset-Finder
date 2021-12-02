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
//		Name   -> Function BP_LargeShip_StandardHull_Art.BP_LargeShip_StandardHull_Art_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_LargeShip_StandardHull_Art_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShip_StandardHull_Art.BP_LargeShip_StandardHull_Art_C.UserConstructionScript");

	ABP_LargeShip_StandardHull_Art_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_LargeShip_StandardHull_Art_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(HitRegSnapshotRedirectImpactToReplicatedMovementAttachParent, UHitRegSnapshotRedirectImpactToReplicatedMovementAttachParentComponent);
	READ_PTR_FULL(shp_hatch_01_a, UStaticMeshComponent);
	READ_PTR_FULL(FirePostProcess, UPostProcessComponent);
	READ_PTR_FULL(Fire_PP_Volume, UBoxComponent);
	READ_PTR_FULL(SideDoor, UChildActorComponent);
	READ_PTR_FULL(FrontDoor, UChildActorComponent);
	READ_PTR_FULL(StaticDoors, UChildActorComponent);
	READ_PTR_FULL(PostProcess2, UPostProcessComponent);
	READ_PTR_FULL(captains_PP_Volume_window, UBoxComponent);
	READ_PTR_FULL(shp_hull_rain_occlusion, UStaticMeshComponent);
	READ_PTR_FULL(SurfaceWater, USurfaceWaterComponent);
	READ_PTR_FULL(shp_captain_cabin_window_glass_ext_01_a_02, UStaticMeshComponent);
	READ_PTR_FULL(shp_captain_cabin_window_glass_ext_01_a_05, UStaticMeshComponent);
	READ_PTR_FULL(shp_captain_cabin_window_glass_ext_01_a_04, UStaticMeshComponent);
	READ_PTR_FULL(shp_captain_cabin_window_glass_ext_01_a_03, UStaticMeshComponent);
	READ_PTR_FULL(shp_captain_cabin_window_glass_ext_01_a_06, UStaticMeshComponent);
	READ_PTR_FULL(shp_captains_cabin_window_feature_glass_ext_01_a, UStaticMeshComponent);
	READ_PTR_FULL(Merged_ExteriorGlass, UMergedStaticMeshComponent);
	READ_PTR_FULL(PostProcess1, UPostProcessComponent);
	READ_PTR_FULL(Ship_PP_Volume_A, UBoxComponent);
	READ_PTR_FULL(PostProcess, UPostProcessComponent);
	READ_PTR_FULL(Captain_PP_volume, UBoxComponent);
	READ_PTR_FULL(shp_deck_forecastle_steps_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_balustrade_forecastle_02_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_balustrade_forecastle_02_a1, UStaticMeshComponent);
	READ_PTR_FULL(shp_hatch_02_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_captain_cabin_window_01_a_02, UStaticMeshComponent);
	READ_PTR_FULL(shp_captain_cabin_window_01_a_06, UStaticMeshComponent);
	READ_PTR_FULL(shp_captain_cabin_window_01_a_03, UStaticMeshComponent);
	READ_PTR_FULL(shp_captain_cabin_window_01_a_04, UStaticMeshComponent);
	READ_PTR_FULL(shp_captain_cabin_window_01_a_05, UStaticMeshComponent);
	READ_PTR_FULL(shp_hull_hatch_01_a_01, UStaticMeshComponent);
	READ_PTR_FULL(shp_hull_hatch_01_a_03, UStaticMeshComponent);
	READ_PTR_FULL(shp_hull_hatch_01_a_02, UStaticMeshComponent);
	READ_PTR_FULL(shp_hull_hatch_01_a_04, UStaticMeshComponent);
	READ_PTR_FULL(shp_hull_hatch_01_a_05, UStaticMeshComponent);
	READ_PTR_FULL(shp_hull_hatch_01_a_06, UStaticMeshComponent);
	READ_PTR_FULL(shp_hull_hatch_01_a_07, UStaticMeshComponent);
	READ_PTR_FULL(shp_hull_hatch_01_a_08, UStaticMeshComponent);
	READ_PTR_FULL(shp_hull_hatch_01_a_09, UStaticMeshComponent);
	READ_PTR_FULL(shp_hull_hatch_01_a_12, UStaticMeshComponent);
	READ_PTR_FULL(shp_hull_hatch_01_a_11, UStaticMeshComponent);
	READ_PTR_FULL(shp_hull_hatch_01_a_13, UStaticMeshComponent);
	READ_PTR_FULL(shp_hull_shelf_01_a_06, UStaticMeshComponent);
	READ_PTR_FULL(shp_hull_shelf_01_a_01, UStaticMeshComponent);
	READ_PTR_FULL(shp_hull_shelf_01_a_02, UStaticMeshComponent);
	READ_PTR_FULL(shp_hull_shelf_01_a_03, UStaticMeshComponent);
	READ_PTR_FULL(shp_hull_shelf_01_a_04, UStaticMeshComponent);
	READ_PTR_FULL(shp_hull_shelf_01_a_05, UStaticMeshComponent);
	READ_PTR_FULL(shp_captains_cabin_window_feature_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_sterncastle_wheel_balustrade_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_balustrade_long_01_a_01, UStaticMeshComponent);
	READ_PTR_FULL(shp_balustrade_long_01_a_02, UStaticMeshComponent);
	READ_PTR_FULL(shp_balustrade_long_01_a_03, UStaticMeshComponent);
	READ_PTR_FULL(shp_balustrade_long_01_a_04, UStaticMeshComponent);
	READ_PTR_FULL(shp_deck_sterncastle_flagpole_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_balustrade_forecastle_curve_01_a_02, UStaticMeshComponent);
	READ_PTR_FULL(shp_captains_cabin_balcony_bannister_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_balustrade_forecastle_curve_01_a_01, UStaticMeshComponent);
	READ_PTR_FULL(cmn_driftwood_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_rear_window_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_captain_cabin_side_door_porch_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_driftwood_01_a2, UStaticMeshComponent);
	READ_PTR_FULL(MergedStaticMesh_col, UMergedStaticMeshComponent);
	READ_PTR_FULL(shp_galleon_harpoon_placement_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_balustrade_cap_01_a_01, UStaticMeshComponent);
	READ_PTR_FULL(shp_balustrade_cap_01_a_02, UStaticMeshComponent);
	READ_PTR_FULL(shp_balustrade_cap_01_a_03, UStaticMeshComponent);
	READ_PTR_FULL(shp_balustrade_cap_01_a_04, UStaticMeshComponent);
	READ_PTR_FULL(shp_balustrade_cap_01_a_3, UStaticMeshComponent);
	READ_PTR_FULL(shp_balustrade_cap_01_a_2, UStaticMeshComponent);
	READ_PTR_FULL(shp_balustrade_cap_01_a_4, UStaticMeshComponent);
	READ_PTR_FULL(shp_balustrade_cap_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_hull_rudder_hinge_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_plaque_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_rope_rigging_rear_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_rope_coil_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_rope_coil_02_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_rope_coil_04_a_03, UStaticMeshComponent);
	READ_PTR_FULL(shp_rope_coil_04_a_04, UStaticMeshComponent);
	READ_PTR_FULL(shp_rope_coil_04_a_05, UStaticMeshComponent);
	READ_PTR_FULL(shp_mast_trim_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_mast_trim_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(shp_mast_trim_01_a2, UStaticMeshComponent);
	READ_PTR_FULL(shp_capstan_trim_01_a, UStaticMeshComponent);
	READ_PTR_FULL(MergedStaticMesh, UMergedStaticMeshComponent);
	READ_PTR_FULL(cmn_walk_plank_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(cmn_walk_plank_01_a, UStaticMeshComponent);
	READ_PTR_FULL(Interior_Captains_Cabin, UChildActorComponent);
	READ_PTR_FULL(Interior_Brig_Deck, UChildActorComponent);
	READ_PTR_FULL(Interior_Map_Deck, UChildActorComponent);
	READ_PTR_FULL(shp_stern_staircase_01_a_02, UStaticMeshComponent);
	READ_PTR_FULL(shp_stern_staircase_01_a_01, UStaticMeshComponent);
	READ_PTR_FULL(shp_galleon_main_deck_01_a, UStaticMeshComponent);
}

void ABP_LargeShip_StandardHull_Art_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(HitRegSnapshotRedirectImpactToReplicatedMovementAttachParent);
	DELE_PTR_FULL(shp_hatch_01_a);
	DELE_PTR_FULL(FirePostProcess);
	DELE_PTR_FULL(Fire_PP_Volume);
	DELE_PTR_FULL(SideDoor);
	DELE_PTR_FULL(FrontDoor);
	DELE_PTR_FULL(StaticDoors);
	DELE_PTR_FULL(PostProcess2);
	DELE_PTR_FULL(captains_PP_Volume_window);
	DELE_PTR_FULL(shp_hull_rain_occlusion);
	DELE_PTR_FULL(SurfaceWater);
	DELE_PTR_FULL(shp_captain_cabin_window_glass_ext_01_a_02);
	DELE_PTR_FULL(shp_captain_cabin_window_glass_ext_01_a_05);
	DELE_PTR_FULL(shp_captain_cabin_window_glass_ext_01_a_04);
	DELE_PTR_FULL(shp_captain_cabin_window_glass_ext_01_a_03);
	DELE_PTR_FULL(shp_captain_cabin_window_glass_ext_01_a_06);
	DELE_PTR_FULL(shp_captains_cabin_window_feature_glass_ext_01_a);
	DELE_PTR_FULL(Merged_ExteriorGlass);
	DELE_PTR_FULL(PostProcess1);
	DELE_PTR_FULL(Ship_PP_Volume_A);
	DELE_PTR_FULL(PostProcess);
	DELE_PTR_FULL(Captain_PP_volume);
	DELE_PTR_FULL(shp_deck_forecastle_steps_01_a);
	DELE_PTR_FULL(shp_balustrade_forecastle_02_a);
	DELE_PTR_FULL(shp_balustrade_forecastle_02_a1);
	DELE_PTR_FULL(shp_hatch_02_a);
	DELE_PTR_FULL(shp_captain_cabin_window_01_a_02);
	DELE_PTR_FULL(shp_captain_cabin_window_01_a_06);
	DELE_PTR_FULL(shp_captain_cabin_window_01_a_03);
	DELE_PTR_FULL(shp_captain_cabin_window_01_a_04);
	DELE_PTR_FULL(shp_captain_cabin_window_01_a_05);
	DELE_PTR_FULL(shp_hull_hatch_01_a_01);
	DELE_PTR_FULL(shp_hull_hatch_01_a_03);
	DELE_PTR_FULL(shp_hull_hatch_01_a_02);
	DELE_PTR_FULL(shp_hull_hatch_01_a_04);
	DELE_PTR_FULL(shp_hull_hatch_01_a_05);
	DELE_PTR_FULL(shp_hull_hatch_01_a_06);
	DELE_PTR_FULL(shp_hull_hatch_01_a_07);
	DELE_PTR_FULL(shp_hull_hatch_01_a_08);
	DELE_PTR_FULL(shp_hull_hatch_01_a_09);
	DELE_PTR_FULL(shp_hull_hatch_01_a_12);
	DELE_PTR_FULL(shp_hull_hatch_01_a_11);
	DELE_PTR_FULL(shp_hull_hatch_01_a_13);
	DELE_PTR_FULL(shp_hull_shelf_01_a_06);
	DELE_PTR_FULL(shp_hull_shelf_01_a_01);
	DELE_PTR_FULL(shp_hull_shelf_01_a_02);
	DELE_PTR_FULL(shp_hull_shelf_01_a_03);
	DELE_PTR_FULL(shp_hull_shelf_01_a_04);
	DELE_PTR_FULL(shp_hull_shelf_01_a_05);
	DELE_PTR_FULL(shp_captains_cabin_window_feature_01_a);
	DELE_PTR_FULL(shp_sterncastle_wheel_balustrade_01_a);
	DELE_PTR_FULL(shp_balustrade_long_01_a_01);
	DELE_PTR_FULL(shp_balustrade_long_01_a_02);
	DELE_PTR_FULL(shp_balustrade_long_01_a_03);
	DELE_PTR_FULL(shp_balustrade_long_01_a_04);
	DELE_PTR_FULL(shp_deck_sterncastle_flagpole_01_a);
	DELE_PTR_FULL(shp_balustrade_forecastle_curve_01_a_02);
	DELE_PTR_FULL(shp_captains_cabin_balcony_bannister_01_a);
	DELE_PTR_FULL(shp_balustrade_forecastle_curve_01_a_01);
	DELE_PTR_FULL(cmn_driftwood_01_a);
	DELE_PTR_FULL(shp_rear_window_01_a);
	DELE_PTR_FULL(shp_captain_cabin_side_door_porch_01_a);
	DELE_PTR_FULL(cmn_driftwood_01_a2);
	DELE_PTR_FULL(MergedStaticMesh_col);
	DELE_PTR_FULL(shp_galleon_harpoon_placement_01_a);
	DELE_PTR_FULL(shp_balustrade_cap_01_a_01);
	DELE_PTR_FULL(shp_balustrade_cap_01_a_02);
	DELE_PTR_FULL(shp_balustrade_cap_01_a_03);
	DELE_PTR_FULL(shp_balustrade_cap_01_a_04);
	DELE_PTR_FULL(shp_balustrade_cap_01_a_3);
	DELE_PTR_FULL(shp_balustrade_cap_01_a_2);
	DELE_PTR_FULL(shp_balustrade_cap_01_a_4);
	DELE_PTR_FULL(shp_balustrade_cap_01_a);
	DELE_PTR_FULL(shp_hull_rudder_hinge_01_a);
	DELE_PTR_FULL(shp_plaque_01_a);
	DELE_PTR_FULL(shp_rope_rigging_rear_01_a);
	DELE_PTR_FULL(shp_rope_coil_01_a);
	DELE_PTR_FULL(shp_rope_coil_02_a);
	DELE_PTR_FULL(shp_rope_coil_04_a_03);
	DELE_PTR_FULL(shp_rope_coil_04_a_04);
	DELE_PTR_FULL(shp_rope_coil_04_a_05);
	DELE_PTR_FULL(shp_mast_trim_01_a);
	DELE_PTR_FULL(shp_mast_trim_01_a1);
	DELE_PTR_FULL(shp_mast_trim_01_a2);
	DELE_PTR_FULL(shp_capstan_trim_01_a);
	DELE_PTR_FULL(MergedStaticMesh);
	DELE_PTR_FULL(cmn_walk_plank_01_a1);
	DELE_PTR_FULL(cmn_walk_plank_01_a);
	DELE_PTR_FULL(Interior_Captains_Cabin);
	DELE_PTR_FULL(Interior_Brig_Deck);
	DELE_PTR_FULL(Interior_Map_Deck);
	DELE_PTR_FULL(shp_stern_staircase_01_a_02);
	DELE_PTR_FULL(shp_stern_staircase_01_a_01);
	DELE_PTR_FULL(shp_galleon_main_deck_01_a);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
