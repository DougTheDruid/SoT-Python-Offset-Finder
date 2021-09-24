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
//		Name   -> Function dvr_sea_volcano_a.dvr_sea_volcano_a_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void Advr_sea_volcano_a_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function dvr_sea_volcano_a.dvr_sea_volcano_a_C.UserConstructionScript");

	Advr_sea_volcano_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Advr_sea_volcano_a_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(StaticMesh26, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh25, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh24, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh23, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh22, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh21, UStaticMeshComponent);
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
	READ_PTR_FULL(StaticMesh7, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh6, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh5, UStaticMeshComponent);
	READ_PTR_FULL(dvr_lv_crystal_large_01_b, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh4, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh3, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh2, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh1, UStaticMeshComponent);
	READ_PTR_FULL(dvr_rock_xlarge_02_a, UStaticMeshComponent);
	READ_PTR_FULL(dvr_rock_xlarge_04_a, UStaticMeshComponent);
	READ_PTR_FULL(dvr_lv_rock_xlarge_04_a1, UStaticMeshComponent);
	READ_PTR_FULL(dvr_lv_rock_xlarge_04_a, UStaticMeshComponent);
	READ_PTR_FULL(dvr_lv_sea_rocks_d, UStaticMeshComponent);
	READ_PTR_FULL(dvr_lv_rock_xlarge_02_c, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(dvr_lv_rock_xlarge_05_b, UStaticMeshComponent);
	READ_PTR_FULL(wld_rock_xlarge_05_b, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent010, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent09, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent08, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent07, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent06, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent05, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent04, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent03, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent02, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent01, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0, UStaticMeshComponent);
	READ_PTR_FULL(SharedRoot, USceneComponent);
}

void Advr_sea_volcano_a_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(StaticMesh26);
	DELE_PTR_FULL(StaticMesh25);
	DELE_PTR_FULL(StaticMesh24);
	DELE_PTR_FULL(StaticMesh23);
	DELE_PTR_FULL(StaticMesh22);
	DELE_PTR_FULL(StaticMesh21);
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
	DELE_PTR_FULL(StaticMesh7);
	DELE_PTR_FULL(StaticMesh6);
	DELE_PTR_FULL(StaticMesh5);
	DELE_PTR_FULL(dvr_lv_crystal_large_01_b);
	DELE_PTR_FULL(StaticMesh4);
	DELE_PTR_FULL(StaticMesh3);
	DELE_PTR_FULL(StaticMesh2);
	DELE_PTR_FULL(StaticMesh1);
	DELE_PTR_FULL(dvr_rock_xlarge_02_a);
	DELE_PTR_FULL(dvr_rock_xlarge_04_a);
	DELE_PTR_FULL(dvr_lv_rock_xlarge_04_a1);
	DELE_PTR_FULL(dvr_lv_rock_xlarge_04_a);
	DELE_PTR_FULL(dvr_lv_sea_rocks_d);
	DELE_PTR_FULL(dvr_lv_rock_xlarge_02_c);
	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(dvr_lv_rock_xlarge_05_b);
	DELE_PTR_FULL(wld_rock_xlarge_05_b);
	DELE_PTR_FULL(StaticMeshComponent010);
	DELE_PTR_FULL(StaticMeshComponent09);
	DELE_PTR_FULL(StaticMeshComponent08);
	DELE_PTR_FULL(StaticMeshComponent07);
	DELE_PTR_FULL(StaticMeshComponent06);
	DELE_PTR_FULL(StaticMeshComponent05);
	DELE_PTR_FULL(StaticMeshComponent04);
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
