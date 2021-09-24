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
//		Name   -> Function bsp_sea_rock_cluster_a.bsp_sea_rock_cluster_a_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void Absp_sea_rock_cluster_a_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function bsp_sea_rock_cluster_a.bsp_sea_rock_cluster_a_C.UserConstructionScript");

	Absp_sea_rock_cluster_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Absp_sea_rock_cluster_a_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(bsp_rock_cliff_01_g, UStaticMeshComponent);
	READ_PTR_FULL(bsp_rock_cliff_01_e, UStaticMeshComponent);
	READ_PTR_FULL(bsp_sea_rocks_e, UStaticMeshComponent);
	READ_PTR_FULL(bsp_rock_cliff_01_i, UStaticMeshComponent);
	READ_PTR_FULL(bsp_sea_rocks_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent01, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0, UStaticMeshComponent);
	READ_PTR_FULL(SharedRoot, USceneComponent);
}

void Absp_sea_rock_cluster_a_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(bsp_rock_cliff_01_g);
	DELE_PTR_FULL(bsp_rock_cliff_01_e);
	DELE_PTR_FULL(bsp_sea_rocks_e);
	DELE_PTR_FULL(bsp_rock_cliff_01_i);
	DELE_PTR_FULL(bsp_sea_rocks_a);
	DELE_PTR_FULL(StaticMeshComponent01);
	DELE_PTR_FULL(StaticMeshComponent0);
	DELE_PTR_FULL(SharedRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
