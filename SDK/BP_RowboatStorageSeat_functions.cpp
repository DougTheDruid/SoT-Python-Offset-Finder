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

// Function BP_RowboatStorageSeat.BP_RowboatStorageSeat_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_RowboatStorageSeat_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RowboatStorageSeat.BP_RowboatStorageSeat_C.UserConstructionScript");

	ABP_RowboatStorageSeat_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_RowboatStorageSeat_C::AfterRead()
{
	AStorageSeat::AfterRead();

	READ_PTR_FULL(Replenishable, UReplenishableComponent);
}

void ABP_RowboatStorageSeat_C::BeforeDelete()
{
	AStorageSeat::BeforeDelete();

	DELE_PTR_FULL(Replenishable);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
