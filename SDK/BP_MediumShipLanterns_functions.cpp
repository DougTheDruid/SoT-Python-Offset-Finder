// Name: SoT, Version: 2.4.0

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
//		Offset -> 0x016629C0
//		Name   -> Function BP_MediumShipLanterns.BP_MediumShipLanterns_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_MediumShipLanterns_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumShipLanterns.BP_MediumShipLanterns_C.UserConstructionScript");

	ABP_MediumShipLanterns_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_MediumShipLanterns_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(brig_new_4, UChildActorComponent);
	READ_PTR_FULL(brig_new_3, UChildActorComponent);
	READ_PTR_FULL(brig_new, UChildActorComponent);
	READ_PTR_FULL(Railing_Wheel, UChildActorComponent);
	READ_PTR_FULL(Cabin_QuestTable, UChildActorComponent);
	READ_PTR_FULL(Railing_BowRightFront, UChildActorComponent);
	READ_PTR_FULL(Railing_BowLeftFront, UChildActorComponent);
	READ_PTR_FULL(CabinQuestTable, UChildActorComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_MediumShipLanterns_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(brig_new_4);
	DELE_PTR_FULL(brig_new_3);
	DELE_PTR_FULL(brig_new);
	DELE_PTR_FULL(Railing_Wheel);
	DELE_PTR_FULL(Cabin_QuestTable);
	DELE_PTR_FULL(Railing_BowRightFront);
	DELE_PTR_FULL(Railing_BowLeftFront);
	DELE_PTR_FULL(CabinQuestTable);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
