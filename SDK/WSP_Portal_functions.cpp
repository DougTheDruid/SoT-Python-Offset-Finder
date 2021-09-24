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
//		Name   -> Function WSP_Portal.WSP_Portal_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void AWSP_Portal_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WSP_Portal.WSP_Portal_C.UserConstructionScript");

	AWSP_Portal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AWSP_Portal_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(StaticMeshComponent027, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent026, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent025, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent024, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent023, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent022, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent021, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent020, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent019, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent018, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent017, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent016, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent015, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0, UStaticMeshComponent);
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
	READ_PTR_FULL(StaticMeshComponent014, UStaticMeshComponent);
	READ_PTR_FULL(Scene, USceneComponent);
	READ_PTR_FULL(SharedRoot, USceneComponent);
}

void AWSP_Portal_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(StaticMeshComponent027);
	DELE_PTR_FULL(StaticMeshComponent026);
	DELE_PTR_FULL(StaticMeshComponent025);
	DELE_PTR_FULL(StaticMeshComponent024);
	DELE_PTR_FULL(StaticMeshComponent023);
	DELE_PTR_FULL(StaticMeshComponent022);
	DELE_PTR_FULL(StaticMeshComponent021);
	DELE_PTR_FULL(StaticMeshComponent020);
	DELE_PTR_FULL(StaticMeshComponent019);
	DELE_PTR_FULL(StaticMeshComponent018);
	DELE_PTR_FULL(StaticMeshComponent017);
	DELE_PTR_FULL(StaticMeshComponent016);
	DELE_PTR_FULL(StaticMeshComponent015);
	DELE_PTR_FULL(StaticMeshComponent0);
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
	DELE_PTR_FULL(StaticMeshComponent014);
	DELE_PTR_FULL(Scene);
	DELE_PTR_FULL(SharedRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
