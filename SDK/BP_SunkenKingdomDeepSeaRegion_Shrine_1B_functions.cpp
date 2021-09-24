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
//		Name   -> Function BP_SunkenKingdomDeepSeaRegion_Shrine_1B.BP_SunkenKingdomDeepSeaRegion_Shrine_1B_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_SunkenKingdomDeepSeaRegion_Shrine_1B_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SunkenKingdomDeepSeaRegion_Shrine_1B.BP_SunkenKingdomDeepSeaRegion_Shrine_1B_C.UserConstructionScript");

	ABP_SunkenKingdomDeepSeaRegion_Shrine_1B_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_SunkenKingdomDeepSeaRegion_Shrine_1B_C::AfterRead()
{
	ADeepSeaRegion::AfterRead();

	READ_PTR_FULL(Capsule, UCapsuleComponent);
}

void ABP_SunkenKingdomDeepSeaRegion_Shrine_1B_C::BeforeDelete()
{
	ADeepSeaRegion::BeforeDelete();

	DELE_PTR_FULL(Capsule);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
