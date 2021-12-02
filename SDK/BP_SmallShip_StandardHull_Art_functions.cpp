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
//		Name   -> Function BP_SmallShip_StandardHull_Art.BP_SmallShip_StandardHull_Art_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_SmallShip_StandardHull_Art_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmallShip_StandardHull_Art.BP_SmallShip_StandardHull_Art_C.UserConstructionScript");

	ABP_SmallShip_StandardHull_Art_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_SmallShip_StandardHull_Art_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(HitRegSnapshotRedirectImpactToReplicatedMovementAttachParent, UHitRegSnapshotRedirectImpactToReplicatedMovementAttachParentComponent);
	READ_PTR_FULL(FirePostProcess, UPostProcessComponent);
	READ_PTR_FULL(Fire_PP_Volume, UBoxComponent);
	READ_PTR_FULL(cap_cage_03_c, UStaticMeshComponent);
	READ_PTR_FULL(shp_item_shelf_01_a, UStaticMeshComponent);
	READ_PTR_FULL(SurfaceWater, USurfaceWaterComponent);
	READ_PTR_FULL(shp_small_rain_occlusion, UStaticMeshComponent);
	READ_PTR_FULL(shp_small_canopy_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(shp_small_hatch_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_rug_02_a1, UStaticMeshComponent);
	READ_PTR_FULL(PostProcess2, UPostProcessComponent);
	READ_PTR_FULL(Below_Deck, UBoxComponent);
	READ_PTR_FULL(PostProcess1, UPostProcessComponent);
	READ_PTR_FULL(Map_Deck_B, UBoxComponent);
	READ_PTR_FULL(PostProcess, UPostProcessComponent);
	READ_PTR_FULL(Map_Deck, UBoxComponent);
	READ_PTR_FULL(shp_small_hull_rope_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_small_curtain_01_a, UStaticMeshComponent);
	READ_PTR_FULL(MergedStaticMesh, UMergedStaticMeshComponent);
	READ_PTR_FULL(BP_SmallShip_StandardHull_Art_Interior_Lower_Deck, UChildActorComponent);
	READ_PTR_FULL(shp_small_stairs_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_small_main_deck_01_a, UStaticMeshComponent);
}

void ABP_SmallShip_StandardHull_Art_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(HitRegSnapshotRedirectImpactToReplicatedMovementAttachParent);
	DELE_PTR_FULL(FirePostProcess);
	DELE_PTR_FULL(Fire_PP_Volume);
	DELE_PTR_FULL(cap_cage_03_c);
	DELE_PTR_FULL(shp_item_shelf_01_a);
	DELE_PTR_FULL(SurfaceWater);
	DELE_PTR_FULL(shp_small_rain_occlusion);
	DELE_PTR_FULL(shp_small_canopy_01_a1);
	DELE_PTR_FULL(shp_small_hatch_01_a);
	DELE_PTR_FULL(cap_cabin_rug_02_a1);
	DELE_PTR_FULL(PostProcess2);
	DELE_PTR_FULL(Below_Deck);
	DELE_PTR_FULL(PostProcess1);
	DELE_PTR_FULL(Map_Deck_B);
	DELE_PTR_FULL(PostProcess);
	DELE_PTR_FULL(Map_Deck);
	DELE_PTR_FULL(shp_small_hull_rope_01_a);
	DELE_PTR_FULL(shp_small_curtain_01_a);
	DELE_PTR_FULL(MergedStaticMesh);
	DELE_PTR_FULL(BP_SmallShip_StandardHull_Art_Interior_Lower_Deck);
	DELE_PTR_FULL(shp_small_stairs_01_a);
	DELE_PTR_FULL(shp_small_main_deck_01_a);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
