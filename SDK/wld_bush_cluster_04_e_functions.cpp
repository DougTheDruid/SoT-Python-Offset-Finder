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
//		Name   -> Function wld_bush_cluster_04_e.wld_bush_cluster_04_e_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void Awld_bush_cluster_04_e_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function wld_bush_cluster_04_e.wld_bush_cluster_04_e_C.UserConstructionScript");

	Awld_bush_cluster_04_e_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Awld_bush_cluster_04_e_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(wld_bush_03_a_01, UStaticMeshComponent);
	READ_PTR_FULL(wld_plant_03_a_01, UStaticMeshComponent);
	READ_PTR_FULL(wld_plant_01_a_01, UStaticMeshComponent);
	READ_PTR_FULL(wld_bush_01_b_01, UStaticMeshComponent);
	READ_PTR_FULL(SharedRoot, USceneComponent);
}

void Awld_bush_cluster_04_e_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(wld_bush_03_a_01);
	DELE_PTR_FULL(wld_plant_03_a_01);
	DELE_PTR_FULL(wld_plant_01_a_01);
	DELE_PTR_FULL(wld_bush_01_b_01);
	DELE_PTR_FULL(SharedRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
