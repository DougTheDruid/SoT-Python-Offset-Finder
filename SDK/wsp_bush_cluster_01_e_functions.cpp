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
//		Name   -> Function wsp_bush_cluster_01_e.wsp_bush_cluster_01_e_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void Awsp_bush_cluster_01_e_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function wsp_bush_cluster_01_e.wsp_bush_cluster_01_e_C.UserConstructionScript");

	Awsp_bush_cluster_01_e_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Awsp_bush_cluster_01_e_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(wsp_bush_03_a6_1, UStaticMeshComponent);
	READ_PTR_FULL(Scene1, USceneComponent);
}

void Awsp_bush_cluster_01_e_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(wsp_bush_03_a6_1);
	DELE_PTR_FULL(Scene1);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
