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

// Function BP_LargeShipLanterns.BP_LargeShipLanterns_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_LargeShipLanterns_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShipLanterns.BP_LargeShipLanterns_C.UserConstructionScript");

	ABP_LargeShipLanterns_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_LargeShipLanterns_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Railing_BowRightBack, UChildActorComponent);
	READ_PTR_FULL(Railing_BowLeftBack, UChildActorComponent);
	READ_PTR_FULL(Railing_Stern, UChildActorComponent);
	READ_PTR_FULL(Cabin_Lantern, UChildActorComponent);
	READ_PTR_FULL(BrigDeck_StairsRight, UChildActorComponent);
	READ_PTR_FULL(BrigDeck_StairsLeft, UChildActorComponent);
	READ_PTR_FULL(BrigDeck_OutsideBrig, UChildActorComponent);
	READ_PTR_FULL(BrigDeck_InsideBrig, UChildActorComponent);
	READ_PTR_FULL(MapDeck_RearStairs, UChildActorComponent);
	READ_PTR_FULL(MapDeck_BowRight, UChildActorComponent);
	READ_PTR_FULL(MapDeck_BowLeft, UChildActorComponent);
	READ_PTR_FULL(MapDeck_Galley, UChildActorComponent);
	READ_PTR_FULL(MapDeck_MapTable, UChildActorComponent);
	READ_PTR_FULL(MapDeck_MainStairs, UChildActorComponent);
	READ_PTR_FULL(Cabin_Entrance, UChildActorComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_LargeShipLanterns_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Railing_BowRightBack);
	DELE_PTR_FULL(Railing_BowLeftBack);
	DELE_PTR_FULL(Railing_Stern);
	DELE_PTR_FULL(Cabin_Lantern);
	DELE_PTR_FULL(BrigDeck_StairsRight);
	DELE_PTR_FULL(BrigDeck_StairsLeft);
	DELE_PTR_FULL(BrigDeck_OutsideBrig);
	DELE_PTR_FULL(BrigDeck_InsideBrig);
	DELE_PTR_FULL(MapDeck_RearStairs);
	DELE_PTR_FULL(MapDeck_BowRight);
	DELE_PTR_FULL(MapDeck_BowLeft);
	DELE_PTR_FULL(MapDeck_Galley);
	DELE_PTR_FULL(MapDeck_MapTable);
	DELE_PTR_FULL(MapDeck_MainStairs);
	DELE_PTR_FULL(Cabin_Entrance);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
