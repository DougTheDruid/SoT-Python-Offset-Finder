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

// Function BP_Rowboat.BP_Rowboat_C.GetPxActorCapacityForPhysXAggregate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
unsigned char ABP_Rowboat_C::GetPxActorCapacityForPhysXAggregate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Rowboat.BP_Rowboat_C.GetPxActorCapacityForPhysXAggregate");

	ABP_Rowboat_C_GetPxActorCapacityForPhysXAggregate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Rowboat.BP_Rowboat_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Rowboat_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Rowboat.BP_Rowboat_C.UserConstructionScript");

	ABP_Rowboat_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Rowboat_C::AfterRead()
{
	ARowboat::AfterRead();

	READ_PTR_FULL(PetHangoutSpot, UPetHangoutSpotComponent);
	READ_PTR_FULL(WaterInteraction, UWaterInteractionComponent);
	READ_PTR_FULL(ImpulseThrottler, UImpulseThrottlerComponent);
	READ_PTR_FULL(MiddleRightSeat, UChildActorComponent);
	READ_PTR_FULL(MiddleLeftSeat, UChildActorComponent);
}

void ABP_Rowboat_C::BeforeDelete()
{
	ARowboat::BeforeDelete();

	DELE_PTR_FULL(PetHangoutSpot);
	DELE_PTR_FULL(WaterInteraction);
	DELE_PTR_FULL(ImpulseThrottler);
	DELE_PTR_FULL(MiddleRightSeat);
	DELE_PTR_FULL(MiddleLeftSeat);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
