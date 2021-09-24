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
//		Name   -> Function BP_RitualBottleTop.BP_RitualBottleTop_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_RitualBottleTop_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RitualBottleTop.BP_RitualBottleTop_C.UserConstructionScript");

	ABP_RitualBottleTop_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_RitualBottleTop_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(ptn_pois_stop_01_a, UStaticMeshComponent);
	READ_PTR_FULL(_2, UStaticMeshComponent);
	READ_PTR_FULL(_1, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_RitualBottleTop_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(ptn_pois_stop_01_a);
	DELE_PTR_FULL(_2);
	DELE_PTR_FULL(_1);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
