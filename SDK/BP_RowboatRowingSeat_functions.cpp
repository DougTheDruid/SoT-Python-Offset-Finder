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

// Function BP_RowboatRowingSeat.BP_RowboatRowingSeat_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_RowboatRowingSeat_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RowboatRowingSeat.BP_RowboatRowingSeat_C.UserConstructionScript");

	ABP_RowboatRowingSeat_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_RowboatRowingSeat_C::AfterRead()
{
	ARowingSeat::AfterRead();

	READ_PTR_FULL(RowboatEmitter, UWwiseEmitterComponent);
}

void ABP_RowboatRowingSeat_C::BeforeDelete()
{
	ARowingSeat::BeforeDelete();

	DELE_PTR_FULL(RowboatEmitter);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
