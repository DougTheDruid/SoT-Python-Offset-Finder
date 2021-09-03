﻿// Name: SoT, Version: 2.2.1.1

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

// Function gmp_wrld_res_wood_3_planks_01_b.gmp_wrld_res_wood_3_planks_01_b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Agmp_wrld_res_wood_3_planks_01_b_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function gmp_wrld_res_wood_3_planks_01_b.gmp_wrld_res_wood_3_planks_01_b_C.UserConstructionScript");

	Agmp_wrld_res_wood_3_planks_01_b_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Agmp_wrld_res_wood_3_planks_01_b_C::AfterRead()
{
	ACluster::AfterRead();

	READ_PTR_FULL(PlankOfWoodThree, UClusterStaticMeshComponent);
	READ_PTR_FULL(PlankOfWoodTwo, UClusterStaticMeshComponent);
	READ_PTR_FULL(PlankOfWoodOne, UClusterStaticMeshComponent);
}

void Agmp_wrld_res_wood_3_planks_01_b_C::BeforeDelete()
{
	ACluster::BeforeDelete();

	DELE_PTR_FULL(PlankOfWoodThree);
	DELE_PTR_FULL(PlankOfWoodTwo);
	DELE_PTR_FULL(PlankOfWoodOne);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif