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
//		Name   -> Function BP_xmas_tavern_wld_dressing.BP_xmas_tavern_wld_dressing_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_xmas_tavern_wld_dressing_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_xmas_tavern_wld_dressing.BP_xmas_tavern_wld_dressing_C.UserConstructionScript");

	ABP_xmas_tavern_wld_dressing_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_xmas_tavern_wld_dressing_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(cmn_candle_group_01, UChildActorComponent);
	READ_PTR_FULL(bld_tvn_bar_arches_xms_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent03, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent02, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent01, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0, UStaticMeshComponent);
	READ_PTR_FULL(SharedRoot, USceneComponent);
}

void ABP_xmas_tavern_wld_dressing_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(cmn_candle_group_01);
	DELE_PTR_FULL(bld_tvn_bar_arches_xms_01_a);
	DELE_PTR_FULL(StaticMeshComponent03);
	DELE_PTR_FULL(StaticMeshComponent02);
	DELE_PTR_FULL(StaticMeshComponent01);
	DELE_PTR_FULL(StaticMeshComponent0);
	DELE_PTR_FULL(SharedRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
