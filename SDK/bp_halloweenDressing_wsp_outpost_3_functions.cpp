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
//		Name   -> Function bp_halloweenDressing_wsp_outpost_3.bp_halloweenDressing_wsp_outpost_2_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void Abp_halloweenDressing_wsp_outpost_2_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function bp_halloweenDressing_wsp_outpost_3.bp_halloweenDressing_wsp_outpost_2_C.UserConstructionScript");

	Abp_halloweenDressing_wsp_outpost_2_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Abp_halloweenDressing_wsp_outpost_2_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(sod_cobweb_03_a4, UStaticMeshComponent);
	READ_PTR_FULL(sod_cobweb_03_a3, UStaticMeshComponent);
	READ_PTR_FULL(sod_cobweb_03_a2, UStaticMeshComponent);
	READ_PTR_FULL(sod_cobweb_03_a1, UStaticMeshComponent);
	READ_PTR_FULL(sod_cobweb_03_a, UStaticMeshComponent);
	READ_PTR_FULL(sod_cobweb_02_b1, UStaticMeshComponent);
	READ_PTR_FULL(sod_cobweb_02_b, UStaticMeshComponent);
	READ_PTR_FULL(sod_cobweb_02_a1, UStaticMeshComponent);
	READ_PTR_FULL(sod_cobweb_02_a, UStaticMeshComponent);
	READ_PTR_FULL(sod_cobweb_01_b, UStaticMeshComponent);
	READ_PTR_FULL(sod_cobweb_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent048, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent047, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent046, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent045, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent044, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent043, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent042, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent041, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent040, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent039, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent038, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent037, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent036, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent035, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent034, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent033, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent032, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent031, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent030, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent029, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent028, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent027, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent026, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent025, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent049, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent023, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent022, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent021, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent020, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent019, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent018, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent017, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent016, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent015, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent014, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent013, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent012, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent011, UStaticMeshComponent);
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
	READ_PTR_FULL(StaticMeshComponent024, UStaticMeshComponent);
	READ_PTR_FULL(Origin, UStaticMeshComponent);
	READ_PTR_FULL(SharedRoot, USceneComponent);
}

void Abp_halloweenDressing_wsp_outpost_2_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(sod_cobweb_03_a4);
	DELE_PTR_FULL(sod_cobweb_03_a3);
	DELE_PTR_FULL(sod_cobweb_03_a2);
	DELE_PTR_FULL(sod_cobweb_03_a1);
	DELE_PTR_FULL(sod_cobweb_03_a);
	DELE_PTR_FULL(sod_cobweb_02_b1);
	DELE_PTR_FULL(sod_cobweb_02_b);
	DELE_PTR_FULL(sod_cobweb_02_a1);
	DELE_PTR_FULL(sod_cobweb_02_a);
	DELE_PTR_FULL(sod_cobweb_01_b);
	DELE_PTR_FULL(sod_cobweb_01_a);
	DELE_PTR_FULL(StaticMeshComponent048);
	DELE_PTR_FULL(StaticMeshComponent047);
	DELE_PTR_FULL(StaticMeshComponent046);
	DELE_PTR_FULL(StaticMeshComponent045);
	DELE_PTR_FULL(StaticMeshComponent044);
	DELE_PTR_FULL(StaticMeshComponent043);
	DELE_PTR_FULL(StaticMeshComponent042);
	DELE_PTR_FULL(StaticMeshComponent041);
	DELE_PTR_FULL(StaticMeshComponent040);
	DELE_PTR_FULL(StaticMeshComponent039);
	DELE_PTR_FULL(StaticMeshComponent038);
	DELE_PTR_FULL(StaticMeshComponent037);
	DELE_PTR_FULL(StaticMeshComponent036);
	DELE_PTR_FULL(StaticMeshComponent035);
	DELE_PTR_FULL(StaticMeshComponent034);
	DELE_PTR_FULL(StaticMeshComponent033);
	DELE_PTR_FULL(StaticMeshComponent032);
	DELE_PTR_FULL(StaticMeshComponent031);
	DELE_PTR_FULL(StaticMeshComponent030);
	DELE_PTR_FULL(StaticMeshComponent029);
	DELE_PTR_FULL(StaticMeshComponent028);
	DELE_PTR_FULL(StaticMeshComponent027);
	DELE_PTR_FULL(StaticMeshComponent026);
	DELE_PTR_FULL(StaticMeshComponent025);
	DELE_PTR_FULL(StaticMeshComponent049);
	DELE_PTR_FULL(StaticMeshComponent023);
	DELE_PTR_FULL(StaticMeshComponent022);
	DELE_PTR_FULL(StaticMeshComponent021);
	DELE_PTR_FULL(StaticMeshComponent020);
	DELE_PTR_FULL(StaticMeshComponent019);
	DELE_PTR_FULL(StaticMeshComponent018);
	DELE_PTR_FULL(StaticMeshComponent017);
	DELE_PTR_FULL(StaticMeshComponent016);
	DELE_PTR_FULL(StaticMeshComponent015);
	DELE_PTR_FULL(StaticMeshComponent014);
	DELE_PTR_FULL(StaticMeshComponent013);
	DELE_PTR_FULL(StaticMeshComponent012);
	DELE_PTR_FULL(StaticMeshComponent011);
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
	DELE_PTR_FULL(StaticMeshComponent024);
	DELE_PTR_FULL(Origin);
	DELE_PTR_FULL(SharedRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
