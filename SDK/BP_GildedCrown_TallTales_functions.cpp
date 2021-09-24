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
//		Name   -> Function BP_GildedCrown_TallTales.BP_GildedCrown_TallTales_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_GildedCrown_TallTales_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GildedCrown_TallTales.BP_GildedCrown_TallTales_C.UserConstructionScript");

	ABP_GildedCrown_TallTales_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_GildedCrown_TallTales_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(gmp_tal_guilded_crown_01_a, UStaticMeshComponent);
}

void ABP_GildedCrown_TallTales_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(gmp_tal_guilded_crown_01_a);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
