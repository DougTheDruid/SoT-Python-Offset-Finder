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
//		Name   -> Function wsp_palm_cluster_03_e.wsp_palm_cluster_03_e_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void Awsp_palm_cluster_03_e_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function wsp_palm_cluster_03_e.wsp_palm_cluster_03_e_C.UserConstructionScript");

	Awsp_palm_cluster_03_e_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Awsp_palm_cluster_03_e_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(wsp_bush_fern_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_bush_fern_01_a, UStaticMeshComponent);
	READ_PTR_FULL(wsp_bush_elephant_01_a, UStaticMeshComponent);
	READ_PTR_FULL(wsp_bush_03_a4, UStaticMeshComponent);
	READ_PTR_FULL(wsp_bush_03_a3, UStaticMeshComponent);
	READ_PTR_FULL(wsp_bush_03_a2, UStaticMeshComponent);
	READ_PTR_FULL(wsp_bush_03_a1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_bush_03_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent07, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent06, UStaticMeshComponent);
	READ_PTR_FULL(NonVagueNonUniqueLandmark, UNonVagueNonUniqueLandmarkComponent);
	READ_PTR_FULL(StaticMeshComponent04, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent03, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent015, UStaticMeshComponent);
}

void Awsp_palm_cluster_03_e_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(wsp_bush_fern_01_a1);
	DELE_PTR_FULL(wsp_bush_fern_01_a);
	DELE_PTR_FULL(wsp_bush_elephant_01_a);
	DELE_PTR_FULL(wsp_bush_03_a4);
	DELE_PTR_FULL(wsp_bush_03_a3);
	DELE_PTR_FULL(wsp_bush_03_a2);
	DELE_PTR_FULL(wsp_bush_03_a1);
	DELE_PTR_FULL(wsp_bush_03_a);
	DELE_PTR_FULL(StaticMeshComponent0);
	DELE_PTR_FULL(StaticMeshComponent07);
	DELE_PTR_FULL(StaticMeshComponent06);
	DELE_PTR_FULL(NonVagueNonUniqueLandmark);
	DELE_PTR_FULL(StaticMeshComponent04);
	DELE_PTR_FULL(StaticMeshComponent03);
	DELE_PTR_FULL(StaticMeshComponent015);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
