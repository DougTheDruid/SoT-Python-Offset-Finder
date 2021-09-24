// Name: SoT, Version: 2.3.0.Brig

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
//		Name   -> Function wld_shp_rocks_cluster_02.wld_shp_rocks_cluster_02_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void Awld_shp_rocks_cluster_02_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function wld_shp_rocks_cluster_02.wld_shp_rocks_cluster_02_C.UserConstructionScript");

	Awld_shp_rocks_cluster_02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Awld_shp_rocks_cluster_02_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(wld_rock_xlarge_05_a, UStaticMeshComponent);
	READ_PTR_FULL(wld_rock_large_01__c, UStaticMeshComponent);
	READ_PTR_FULL(wld_rock_xlarge_04_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh7, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh10, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh9, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(Scene, USceneComponent);
}

void Awld_shp_rocks_cluster_02_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(wld_rock_xlarge_05_a);
	DELE_PTR_FULL(wld_rock_large_01__c);
	DELE_PTR_FULL(wld_rock_xlarge_04_a);
	DELE_PTR_FULL(StaticMesh7);
	DELE_PTR_FULL(StaticMesh10);
	DELE_PTR_FULL(StaticMesh9);
	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(Scene);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
