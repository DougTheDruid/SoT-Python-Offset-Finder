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
//		Name   -> Function BP_SmallShipLanterns.BP_SmallShipLanterns_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_SmallShipLanterns_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmallShipLanterns.BP_SmallShipLanterns_C.UserConstructionScript");

	ABP_SmallShipLanterns_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_SmallShipLanterns_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Railing_Wheel, UChildActorComponent);
	READ_PTR_FULL(BottomDeckFront, UChildActorComponent);
	READ_PTR_FULL(BottomDeckBrig, UChildActorComponent);
	READ_PTR_FULL(CabinMapTable, UChildActorComponent);
	READ_PTR_FULL(Railing_BowRightFront, UChildActorComponent);
	READ_PTR_FULL(Railing_BowLeftFront, UChildActorComponent);
	READ_PTR_FULL(CabinQuestTable, UChildActorComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_SmallShipLanterns_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Railing_Wheel);
	DELE_PTR_FULL(BottomDeckFront);
	DELE_PTR_FULL(BottomDeckBrig);
	DELE_PTR_FULL(CabinMapTable);
	DELE_PTR_FULL(Railing_BowRightFront);
	DELE_PTR_FULL(Railing_BowLeftFront);
	DELE_PTR_FULL(CabinQuestTable);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
