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
//		Name   -> Function bsp_sea_rock_cluster_b.bsp_sea_rock_cluster_b_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void Absp_sea_rock_cluster_b_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function bsp_sea_rock_cluster_b.bsp_sea_rock_cluster_b_C.UserConstructionScript");

	Absp_sea_rock_cluster_b_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Absp_sea_rock_cluster_b_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(bsp_rock_cliff_01_j, UStaticMeshComponent);
	READ_PTR_FULL(bsp_rock_cliff_01_k, UStaticMeshComponent);
	READ_PTR_FULL(bsp_rock_cliff_01_h, UStaticMeshComponent);
	READ_PTR_FULL(bsp_rock_cliff_01_b, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent03, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent02, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent01, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0, UStaticMeshComponent);
	READ_PTR_FULL(SharedRoot, USceneComponent);
}

void Absp_sea_rock_cluster_b_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(bsp_rock_cliff_01_j);
	DELE_PTR_FULL(bsp_rock_cliff_01_k);
	DELE_PTR_FULL(bsp_rock_cliff_01_h);
	DELE_PTR_FULL(bsp_rock_cliff_01_b);
	DELE_PTR_FULL(StaticMeshComponent03);
	DELE_PTR_FULL(StaticMeshComponent02);
	DELE_PTR_FULL(StaticMeshComponent01);
	DELE_PTR_FULL(StaticMeshComponent0);
	DELE_PTR_FULL(SharedRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
