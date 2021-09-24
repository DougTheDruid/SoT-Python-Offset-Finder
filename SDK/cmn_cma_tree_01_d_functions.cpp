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
//		Name   -> Function cmn_cma_tree_01_d.cmn_cma_tree_01_d_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void Acmn_cma_tree_01_d_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function cmn_cma_tree_01_d.cmn_cma_tree_01_d_C.UserConstructionScript");

	Acmn_cma_tree_01_d_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Acmn_cma_tree_01_d_C::AfterRead()
{
	ACoveredMeshActor::AfterRead();

	READ_PTR_FULL(AudioEventToComponentMap, UAudioEventToComponentMapComponent);
	READ_PTR_FULL(NonVagueNonUniqueLandmark, UNonVagueNonUniqueLandmarkComponent);
	READ_PTR_FULL(wsp_trunk_01_a, UStaticMeshComponent);
}

void Acmn_cma_tree_01_d_C::BeforeDelete()
{
	ACoveredMeshActor::BeforeDelete();

	DELE_PTR_FULL(AudioEventToComponentMap);
	DELE_PTR_FULL(NonVagueNonUniqueLandmark);
	DELE_PTR_FULL(wsp_trunk_01_a);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
