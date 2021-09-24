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
//		Name   -> Function wsp_palm_cluster_03_d.wsp_palm_cluster_03_d_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void Awsp_palm_cluster_03_d_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function wsp_palm_cluster_03_d.wsp_palm_cluster_03_d_C.UserConstructionScript");

	Awsp_palm_cluster_03_d_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Awsp_palm_cluster_03_d_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(wsp_flower_01_a, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles__e, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles__f, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles__h, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles__g, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles__b, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles__a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent011, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent09, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent06, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent05, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent04, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent02, UStaticMeshComponent);
	READ_PTR_FULL(NonVagueNonUniqueLandmark, UNonVagueNonUniqueLandmarkComponent);
	READ_PTR_FULL(StaticMeshComponent01, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0, UStaticMeshComponent);
	READ_PTR_FULL(SharedRoot, USceneComponent);
}

void Awsp_palm_cluster_03_d_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(wsp_flower_01_a);
	DELE_PTR_FULL(wsp_rock_pebbles__e);
	DELE_PTR_FULL(wsp_rock_pebbles__f);
	DELE_PTR_FULL(wsp_rock_pebbles__h);
	DELE_PTR_FULL(wsp_rock_pebbles__g);
	DELE_PTR_FULL(wsp_rock_pebbles__b);
	DELE_PTR_FULL(wsp_rock_pebbles__a);
	DELE_PTR_FULL(StaticMeshComponent011);
	DELE_PTR_FULL(StaticMeshComponent09);
	DELE_PTR_FULL(StaticMeshComponent06);
	DELE_PTR_FULL(StaticMeshComponent05);
	DELE_PTR_FULL(StaticMeshComponent04);
	DELE_PTR_FULL(StaticMeshComponent02);
	DELE_PTR_FULL(NonVagueNonUniqueLandmark);
	DELE_PTR_FULL(StaticMeshComponent01);
	DELE_PTR_FULL(StaticMeshComponent0);
	DELE_PTR_FULL(SharedRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
