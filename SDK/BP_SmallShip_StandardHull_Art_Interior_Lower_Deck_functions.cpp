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
//		Name   -> Function BP_SmallShip_StandardHull_Art_Interior_Lower_Deck.BP_SmallShip_StandardHull_Art_Interior_Lower_Deck_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_SmallShip_StandardHull_Art_Interior_Lower_Deck_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmallShip_StandardHull_Art_Interior_Lower_Deck.BP_SmallShip_StandardHull_Art_Interior_Lower_Deck_C.UserConstructionScript");

	ABP_SmallShip_StandardHull_Art_Interior_Lower_Deck_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_SmallShip_StandardHull_Art_Interior_Lower_Deck_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(BP_CookingPot, UChildActorComponent);
	READ_PTR_FULL(shp_kitchen_extractor_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_cooker_02_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_small_brig_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_small_lower_deck_rope_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_small_lower_deck_01_a, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_SmallShip_StandardHull_Art_Interior_Lower_Deck_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(BP_CookingPot);
	DELE_PTR_FULL(shp_kitchen_extractor_01_a);
	DELE_PTR_FULL(shp_cooker_02_a);
	DELE_PTR_FULL(shp_small_brig_01_a);
	DELE_PTR_FULL(shp_small_lower_deck_rope_01_a);
	DELE_PTR_FULL(shp_small_lower_deck_01_a);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
