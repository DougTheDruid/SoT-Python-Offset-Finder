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
//		Name   -> Function wsp_devils_bsh_clstr_01_a.wsp_devils_bsh_clstr_01_a_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void Awsp_devils_bsh_clstr_01_a_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function wsp_devils_bsh_clstr_01_a.wsp_devils_bsh_clstr_01_a_C.UserConstructionScript");

	Awsp_devils_bsh_clstr_01_a_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Awsp_devils_bsh_clstr_01_a_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(wsp_bush_03_a3, UStaticMeshComponent);
	READ_PTR_FULL(wsp_bush_03_a1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_bush_03_a, UStaticMeshComponent);
	READ_PTR_FULL(wsp_bush_06_b, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh1, UStaticMeshComponent);
}

void Awsp_devils_bsh_clstr_01_a_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(wsp_bush_03_a3);
	DELE_PTR_FULL(wsp_bush_03_a1);
	DELE_PTR_FULL(wsp_bush_03_a);
	DELE_PTR_FULL(wsp_bush_06_b);
	DELE_PTR_FULL(StaticMesh1);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
