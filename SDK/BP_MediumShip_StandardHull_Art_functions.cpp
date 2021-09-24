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
//		Name   -> Function BP_MediumShip_StandardHull_Art.BP_MediumShip_StandardHull_Art_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_MediumShip_StandardHull_Art_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumShip_StandardHull_Art.BP_MediumShip_StandardHull_Art_C.UserConstructionScript");

	ABP_MediumShip_StandardHull_Art_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_MediumShip_StandardHull_Art_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(FirePostProcess, UPostProcessComponent);
	READ_PTR_FULL(Fire_PP_Volume, UBoxComponent);
	READ_PTR_FULL(SurfaceWater, USurfaceWaterComponent);
	READ_PTR_FULL(shp_small_rain_occlusion, UStaticMeshComponent);
	READ_PTR_FULL(shp_galleon_main_deck_01_a, UStaticMeshComponent);
}

void ABP_MediumShip_StandardHull_Art_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(FirePostProcess);
	DELE_PTR_FULL(Fire_PP_Volume);
	DELE_PTR_FULL(SurfaceWater);
	DELE_PTR_FULL(shp_small_rain_occlusion);
	DELE_PTR_FULL(shp_galleon_main_deck_01_a);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
