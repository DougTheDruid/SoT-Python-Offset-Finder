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
//		Name   -> Function wld_palm_cluster_01_a.wld_palm_cluster_01_a_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void Awld_palm_cluster_01_a_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function wld_palm_cluster_01_a.wld_palm_cluster_01_a_C.UserConstructionScript");

	Awld_palm_cluster_01_a_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Awld_palm_cluster_01_a_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(wsp_tree_palm_02_b, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small_e, UStaticMeshComponent);
	READ_PTR_FULL(NonVagueNonUniqueLandmark, UNonVagueNonUniqueLandmarkComponent);
	READ_PTR_FULL(wsp_bush_01_a_02, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small_a_01, UStaticMeshComponent);
	READ_PTR_FULL(wsp_tree_palm_02_a_02, UStaticMeshComponent);
	READ_PTR_FULL(wsp_tre_palm_02_a_01, UStaticMeshComponent);
	READ_PTR_FULL(wsp_bush_01_a_01, UStaticMeshComponent);
	READ_PTR_FULL(Scene, USceneComponent);
}

void Awld_palm_cluster_01_a_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(wsp_tree_palm_02_b);
	DELE_PTR_FULL(wsp_rock_xtra_small_e);
	DELE_PTR_FULL(NonVagueNonUniqueLandmark);
	DELE_PTR_FULL(wsp_bush_01_a_02);
	DELE_PTR_FULL(wsp_rock_xtra_small_a_01);
	DELE_PTR_FULL(wsp_tree_palm_02_a_02);
	DELE_PTR_FULL(wsp_tre_palm_02_a_01);
	DELE_PTR_FULL(wsp_bush_01_a_01);
	DELE_PTR_FULL(Scene);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
