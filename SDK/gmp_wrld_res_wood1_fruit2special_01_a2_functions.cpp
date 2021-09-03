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

// Function gmp_wrld_res_wood1_fruit2special_01_a2.gmp_wrld_res_wood1_fruit2special_01_a2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Agmp_wrld_res_wood1_fruit2special_01_a2_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function gmp_wrld_res_wood1_fruit2special_01_a2.gmp_wrld_res_wood1_fruit2special_01_a2_C.UserConstructionScript");

	Agmp_wrld_res_wood1_fruit2special_01_a2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Agmp_wrld_res_wood1_fruit2special_01_a2_C::AfterRead()
{
	ACluster::AfterRead();

	READ_PTR_FULL(ClusterStaticMeshPomegranate, UClusterStaticMeshComponent);
	READ_PTR_FULL(ClusterStaticMeshBanana1, UClusterStaticMeshComponent);
	READ_PTR_FULL(ClusterStaticMeshWood, UClusterStaticMeshComponent);
}

void Agmp_wrld_res_wood1_fruit2special_01_a2_C::BeforeDelete()
{
	ACluster::BeforeDelete();

	DELE_PTR_FULL(ClusterStaticMeshPomegranate);
	DELE_PTR_FULL(ClusterStaticMeshBanana1);
	DELE_PTR_FULL(ClusterStaticMeshWood);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
