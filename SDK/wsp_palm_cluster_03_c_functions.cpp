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
//		Name   -> Function wsp_palm_cluster_03_c.wsp_palm_cluster_03_c_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void Awsp_palm_cluster_03_c_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function wsp_palm_cluster_03_c.wsp_palm_cluster_03_c_C.UserConstructionScript");

	Awsp_palm_cluster_03_c_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Awsp_palm_cluster_03_c_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(wsp_tree_palm_02_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent015, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent012, UStaticMeshComponent);
	READ_PTR_FULL(NonVagueNonUniqueLandmark, UNonVagueNonUniqueLandmarkComponent);
	READ_PTR_FULL(StaticMeshComponent011, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent09, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent08, UStaticMeshComponent);
}

void Awsp_palm_cluster_03_c_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(wsp_tree_palm_02_a);
	DELE_PTR_FULL(StaticMeshComponent015);
	DELE_PTR_FULL(StaticMeshComponent012);
	DELE_PTR_FULL(NonVagueNonUniqueLandmark);
	DELE_PTR_FULL(StaticMeshComponent011);
	DELE_PTR_FULL(StaticMeshComponent09);
	DELE_PTR_FULL(StaticMeshComponent08);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
