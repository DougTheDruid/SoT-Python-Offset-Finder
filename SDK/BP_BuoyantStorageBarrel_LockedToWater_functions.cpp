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
//		Name   -> Function BP_BuoyantStorageBarrel_LockedToWater.BP_BuoyantStorageBarrel_LockedToWater_C.GetPxActorCapacityForPhysXAggregate
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
unsigned char ABP_BuoyantStorageBarrel_LockedToWater_C::GetPxActorCapacityForPhysXAggregate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BuoyantStorageBarrel_LockedToWater.BP_BuoyantStorageBarrel_LockedToWater_C.GetPxActorCapacityForPhysXAggregate");

	ABP_BuoyantStorageBarrel_LockedToWater_C_GetPxActorCapacityForPhysXAggregate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_BuoyantStorageBarrel_LockedToWater.BP_BuoyantStorageBarrel_LockedToWater_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_BuoyantStorageBarrel_LockedToWater_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BuoyantStorageBarrel_LockedToWater.BP_BuoyantStorageBarrel_LockedToWater_C.UserConstructionScript");

	ABP_BuoyantStorageBarrel_LockedToWater_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_BuoyantStorageBarrel_LockedToWater_C::AfterRead()
{
	ABuoyantStorageContainer::AfterRead();

	READ_PTR_FULL(Sphere, USphereComponent);
	READ_PTR_FULL(Replenishable, UReplenishableComponent);
	READ_PTR_FULL(TelemetrySubject, UTelemetrySubjectComponent);
	READ_PTR_FULL(StorageContainer, UStorageContainerComponent);
}

void ABP_BuoyantStorageBarrel_LockedToWater_C::BeforeDelete()
{
	ABuoyantStorageContainer::BeforeDelete();

	DELE_PTR_FULL(Sphere);
	DELE_PTR_FULL(Replenishable);
	DELE_PTR_FULL(TelemetrySubject);
	DELE_PTR_FULL(StorageContainer);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
