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
//		Name   -> Function BP_IslandStorageBarrel_Outpost.BP_IslandStorageBarrel_Outpost_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_IslandStorageBarrel_Outpost_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_IslandStorageBarrel_Outpost.BP_IslandStorageBarrel_Outpost_C.UserConstructionScript");

	ABP_IslandStorageBarrel_Outpost_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_IslandStorageBarrel_Outpost_C::AfterRead()
{
	AStorageContainer::AfterRead();

	READ_PTR_FULL(Replenishable, UReplenishableComponent);
	READ_PTR_FULL(IslandTelemetrySubject, UIslandTelemetrySubjectComponent);
	READ_PTR_FULL(StorageContainer, UStorageContainerComponent);
}

void ABP_IslandStorageBarrel_Outpost_C::BeforeDelete()
{
	AStorageContainer::BeforeDelete();

	DELE_PTR_FULL(Replenishable);
	DELE_PTR_FULL(IslandTelemetrySubject);
	DELE_PTR_FULL(StorageContainer);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
