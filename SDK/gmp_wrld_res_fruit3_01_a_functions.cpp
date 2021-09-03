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

// Function gmp_wrld_res_fruit3_01_a.gmp_wrld_res_fruit3_01_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Agmp_wrld_res_fruit3_01_a_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function gmp_wrld_res_fruit3_01_a.gmp_wrld_res_fruit3_01_a_C.UserConstructionScript");

	Agmp_wrld_res_fruit3_01_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Agmp_wrld_res_fruit3_01_a_C::AfterRead()
{
	ACluster::AfterRead();

	READ_PTR_FULL(BANANA, UClusterStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent03, UStaticMeshComponent);
	READ_PTR_FULL(COCONUT, UClusterStaticMeshComponent);
	READ_PTR_FULL(Banana2, UClusterStaticMeshComponent);
}

void Agmp_wrld_res_fruit3_01_a_C::BeforeDelete()
{
	ACluster::BeforeDelete();

	DELE_PTR_FULL(BANANA);
	DELE_PTR_FULL(StaticMeshComponent03);
	DELE_PTR_FULL(COCONUT);
	DELE_PTR_FULL(Banana2);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
