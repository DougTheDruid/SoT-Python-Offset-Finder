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

// Function BP_CannonRowboatStorageSeat.BP_CannonRowboatStorageSeat_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_CannonRowboatStorageSeat_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CannonRowboatStorageSeat.BP_CannonRowboatStorageSeat_C.UserConstructionScript");

	ABP_CannonRowboatStorageSeat_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_CannonRowboatStorageSeat_C::AfterRead()
{
	ABP_RowboatStorageSeat_C::AfterRead();

}

void ABP_CannonRowboatStorageSeat_C::BeforeDelete()
{
	ABP_RowboatStorageSeat_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
