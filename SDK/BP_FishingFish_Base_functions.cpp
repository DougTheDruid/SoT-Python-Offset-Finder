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

// Function BP_FishingFish_Base.BP_FishingFish_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_FishingFish_Base_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FishingFish_Base.BP_FishingFish_Base_C.UserConstructionScript");

	ABP_FishingFish_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_FishingFish_Base_C::AfterRead()
{
	AFishingFish::AfterRead();

	READ_PTR_FULL(WaterInteractionOverlap, UBoxComponent);
	READ_PTR_FULL(MaterialManipulation, UMaterialManipulationComponent);
}

void ABP_FishingFish_Base_C::BeforeDelete()
{
	AFishingFish::BeforeDelete();

	DELE_PTR_FULL(WaterInteractionOverlap);
	DELE_PTR_FULL(MaterialManipulation);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
