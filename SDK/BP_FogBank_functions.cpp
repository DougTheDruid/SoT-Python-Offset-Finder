// Name: SoT, Version: 2.2.1.1

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

// Function BP_FogBank.BP_FogBank_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_FogBank_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FogBank.BP_FogBank_C.UserConstructionScript");

	ABP_FogBank_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_FogBank_C::AfterRead()
{
	AFogBank::AfterRead();

	READ_PTR_FULL(AthenaPlayerZonePenetrationTracker, UAthenaPlayerZonePenetrationTrackerComponent);
}

void ABP_FogBank_C::BeforeDelete()
{
	AFogBank::BeforeDelete();

	DELE_PTR_FULL(AthenaPlayerZonePenetrationTracker);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
