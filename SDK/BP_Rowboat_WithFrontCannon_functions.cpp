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

// Function BP_Rowboat_WithFrontCannon.BP_Rowboat_WithFrontCannon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Rowboat_WithFrontCannon_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Rowboat_WithFrontCannon.BP_Rowboat_WithFrontCannon_C.UserConstructionScript");

	ABP_Rowboat_WithFrontCannon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Rowboat_WithFrontCannon_C::AfterRead()
{
	ABP_Rowboat_C::AfterRead();

	READ_PTR_FULL(CannonRecoil, UCannonRecoilComponent);
	READ_PTR_FULL(Cannon, UChildActorComponent);
}

void ABP_Rowboat_WithFrontCannon_C::BeforeDelete()
{
	ABP_Rowboat_C::BeforeDelete();

	DELE_PTR_FULL(CannonRecoil);
	DELE_PTR_FULL(Cannon);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
