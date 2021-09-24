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
//		Name   -> Function wsp_beach_rocks_04_c.wsp_beach_rocks_04_c_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void Awsp_beach_rocks_04_c_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function wsp_beach_rocks_04_c.wsp_beach_rocks_04_c_C.UserConstructionScript");

	Awsp_beach_rocks_04_c_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Awsp_beach_rocks_04_c_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(StaticMesh22, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh20, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh19, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh18, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh17, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh16, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh15, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh14, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh13, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh12, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh11, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh10, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh9, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh8, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh6, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh5, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh4, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh3, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh2, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh1, UStaticMeshComponent);
	READ_PTR_FULL(Scene, USceneComponent);
}

void Awsp_beach_rocks_04_c_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(StaticMesh22);
	DELE_PTR_FULL(StaticMesh20);
	DELE_PTR_FULL(StaticMesh19);
	DELE_PTR_FULL(StaticMesh18);
	DELE_PTR_FULL(StaticMesh17);
	DELE_PTR_FULL(StaticMesh16);
	DELE_PTR_FULL(StaticMesh15);
	DELE_PTR_FULL(StaticMesh14);
	DELE_PTR_FULL(StaticMesh13);
	DELE_PTR_FULL(StaticMesh12);
	DELE_PTR_FULL(StaticMesh11);
	DELE_PTR_FULL(StaticMesh10);
	DELE_PTR_FULL(StaticMesh9);
	DELE_PTR_FULL(StaticMesh8);
	DELE_PTR_FULL(StaticMesh6);
	DELE_PTR_FULL(StaticMesh5);
	DELE_PTR_FULL(StaticMesh4);
	DELE_PTR_FULL(StaticMesh3);
	DELE_PTR_FULL(StaticMesh2);
	DELE_PTR_FULL(StaticMesh1);
	DELE_PTR_FULL(Scene);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
