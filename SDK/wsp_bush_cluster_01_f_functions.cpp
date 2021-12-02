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
//		Name   -> Function wsp_bush_cluster_01_f.wsp_bush_cluster_01_f_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void Awsp_bush_cluster_01_f_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function wsp_bush_cluster_01_f.wsp_bush_cluster_01_f_C.UserConstructionScript");

	Awsp_bush_cluster_01_f_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Awsp_bush_cluster_01_f_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(wsp_bush_cheese_01_a, UStaticMeshComponent);
	READ_PTR_FULL(wsp_bush_06_a7_1, UStaticMeshComponent);
}

void Awsp_bush_cluster_01_f_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(wsp_bush_cheese_01_a);
	DELE_PTR_FULL(wsp_bush_06_a7_1);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
