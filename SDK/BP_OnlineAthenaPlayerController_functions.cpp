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
//		Name   -> Function BP_OnlineAthenaPlayerController.BP_OnlineAthenaPlayerController_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_OnlineAthenaPlayerController_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_OnlineAthenaPlayerController.BP_OnlineAthenaPlayerController_C.UserConstructionScript");

	ABP_OnlineAthenaPlayerController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_OnlineAthenaPlayerController_C::AfterRead()
{
	AOnlineAthenaPlayerController::AfterRead();

	READ_PTR_FULL(VisitShopkeepersTutorialComponent, UBP_Component_Tutorial2019_C);
}

void ABP_OnlineAthenaPlayerController_C::BeforeDelete()
{
	AOnlineAthenaPlayerController::BeforeDelete();

	DELE_PTR_FULL(VisitShopkeepersTutorialComponent);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
