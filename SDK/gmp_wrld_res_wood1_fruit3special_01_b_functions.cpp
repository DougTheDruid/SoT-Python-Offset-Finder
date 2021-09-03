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

// Function gmp_wrld_res_wood1_fruit3special_01_b.gmp_wrld_res_wood1_fruit3special_01_b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Agmp_wrld_res_wood1_fruit3special_01_b_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function gmp_wrld_res_wood1_fruit3special_01_b.gmp_wrld_res_wood1_fruit3special_01_b_C.UserConstructionScript");

	Agmp_wrld_res_wood1_fruit3special_01_b_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Agmp_wrld_res_wood1_fruit3special_01_b_C::AfterRead()
{
	ACluster::AfterRead();

	READ_PTR_FULL(Decorator, UStaticMeshComponent);
	READ_PTR_FULL(PlankOfWood, UClusterStaticMeshComponent);
	READ_PTR_FULL(Banana2, UClusterStaticMeshComponent);
	READ_PTR_FULL(MANGO, UClusterStaticMeshComponent);
	READ_PTR_FULL(BANANA, UClusterStaticMeshComponent);
}

void Agmp_wrld_res_wood1_fruit3special_01_b_C::BeforeDelete()
{
	ACluster::BeforeDelete();

	DELE_PTR_FULL(Decorator);
	DELE_PTR_FULL(PlankOfWood);
	DELE_PTR_FULL(Banana2);
	DELE_PTR_FULL(MANGO);
	DELE_PTR_FULL(BANANA);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
