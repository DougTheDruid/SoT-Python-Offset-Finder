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
//		Name   -> Function wsp_palm_cluster_02_a.wsp_palm_cluster_02_a_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void Awsp_palm_cluster_02_a_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function wsp_palm_cluster_02_a.wsp_palm_cluster_02_a_C.UserConstructionScript");

	Awsp_palm_cluster_02_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Awsp_palm_cluster_02_a_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(NonVagueNonUniqueLandmark, UNonVagueNonUniqueLandmarkComponent);
	READ_PTR_FULL(StaticMesh2, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh1, UStaticMeshComponent);
}

void Awsp_palm_cluster_02_a_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(NonVagueNonUniqueLandmark);
	DELE_PTR_FULL(StaticMesh2);
	DELE_PTR_FULL(StaticMesh1);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
