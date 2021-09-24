// Name: SoT, Version: 2.3.0.Brig

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
//		Name   -> Function BP_MediumShipStorageBarrel_Cannonball.BP_MediumShipStorageBarrel_Cannonball_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_MediumShipStorageBarrel_Cannonball_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumShipStorageBarrel_Cannonball.BP_MediumShipStorageBarrel_Cannonball_C.UserConstructionScript");

	ABP_MediumShipStorageBarrel_Cannonball_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_MediumShipStorageBarrel_Cannonball_C::AfterRead()
{
	AStorageContainer::AfterRead();

	READ_PTR_FULL(Replenishable, UReplenishableComponent);
	READ_PTR_FULL(ShipTelemetrySubject, UShipTelemetrySubjectComponent);
	READ_PTR_FULL(StorageContainer, UStorageContainerComponent);
}

void ABP_MediumShipStorageBarrel_Cannonball_C::BeforeDelete()
{
	AStorageContainer::BeforeDelete();

	DELE_PTR_FULL(Replenishable);
	DELE_PTR_FULL(ShipTelemetrySubject);
	DELE_PTR_FULL(StorageContainer);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
