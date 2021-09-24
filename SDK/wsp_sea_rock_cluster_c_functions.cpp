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
//		Name   -> Function wsp_sea_rock_cluster_c.wsp_sea_rock_cluster_c_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void Awsp_sea_rock_cluster_c_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function wsp_sea_rock_cluster_c.wsp_sea_rock_cluster_c_C.UserConstructionScript");

	Awsp_sea_rock_cluster_c_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Awsp_sea_rock_cluster_c_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(wsp_sea_rocks_e, UStaticMeshComponent);
	READ_PTR_FULL(wsp_sea_rocks_d, UStaticMeshComponent);
	READ_PTR_FULL(wsp_sea_rocks_f, UStaticMeshComponent);
	READ_PTR_FULL(wsp_sea_rocks_a, UStaticMeshComponent);
	READ_PTR_FULL(SharedRoot, USceneComponent);
}

void Awsp_sea_rock_cluster_c_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(wsp_sea_rocks_e);
	DELE_PTR_FULL(wsp_sea_rocks_d);
	DELE_PTR_FULL(wsp_sea_rocks_f);
	DELE_PTR_FULL(wsp_sea_rocks_a);
	DELE_PTR_FULL(SharedRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
