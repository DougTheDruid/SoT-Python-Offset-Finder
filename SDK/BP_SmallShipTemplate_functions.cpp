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
//		Name   -> Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.GetPxActorCapacityForPhysXAggregate
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
unsigned char ABP_SmallShipTemplate_C::GetPxActorCapacityForPhysXAggregate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.GetPxActorCapacityForPhysXAggregate");

	ABP_SmallShipTemplate_C_GetPxActorCapacityForPhysXAggregate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_SmallShipTemplate_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.UserConstructionScript");

	ABP_SmallShipTemplate_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_SmallShipTemplate_C::AfterRead()
{
	AShip::AfterRead();

	READ_PTR_FULL(BP_BedComponent, UBP_BedComponent_C);
	READ_PTR_FULL(Rat3, UStaticMeshComponent);
	READ_PTR_FULL(Rat2, UStaticMeshComponent);
	READ_PTR_FULL(Rat1, UStaticMeshComponent);
	READ_PTR_FULL(RatManager, URatManagerComponent);
	READ_PTR_FULL(Seat_MapTable_3, UBP_SeatComponent_C);
	READ_PTR_FULL(Seat_MapTable_2, UBP_SeatComponent_C);
	READ_PTR_FULL(Seat_Barrel_Top, UBP_SeatComponent_C);
	READ_PTR_FULL(Seat_Front_Starboard, UBP_SeatComponent_C);
	READ_PTR_FULL(Seat_Front_Port, UBP_SeatComponent_C);
	READ_PTR_FULL(Seat_Side_Starboard, UBP_SeatComponent_C);
	READ_PTR_FULL(Seat_Side_Port, UBP_SeatComponent_C);
	READ_PTR_FULL(Seat_Bottom_Barrel, UBP_SeatComponent_C);
	READ_PTR_FULL(Seat_Bottom_Port, UBP_SeatComponent_C);
	READ_PTR_FULL(Seat_Bottom_Starboard, UBP_SeatComponent_C);
	READ_PTR_FULL(Seat_Top_Rear_3, UBP_SeatComponent_C);
	READ_PTR_FULL(Arrow, UArrowComponent);
	READ_PTR_FULL(Seat_Top_Rear_2, UBP_SeatComponent_C);
	READ_PTR_FULL(AIRegion, UAIRegionComponent);
	READ_PTR_FULL(NamedPoints, UNamedPointsComponent);
	READ_PTR_FULL(shp_small_ladder_gap_hits_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_flag_hole_01_a, UStaticMeshComponent);
	READ_PTR_FULL(BP_EmissaryFlag, UChildActorComponent);
	READ_PTR_FULL(EmissaryFlotsamItemSpawner, UEmissaryFlotsamItemSpawnComponent);
	READ_PTR_FULL(BP_LargeShip_CageLatch_03_b, UChildActorComponent);
	READ_PTR_FULL(BP_SmallShip_WindowHatchRight, UChildActorComponent);
	READ_PTR_FULL(BP_SmallShip_WindowHatchLeft, UChildActorComponent);
	READ_PTR_FULL(BP_WaterBarrel, UChildActorComponent);
	READ_PTR_FULL(BP_Shroudbreaker, UChildActorComponent);
	READ_PTR_FULL(BP_ShipPetChest, UChildActorComponent);
	READ_PTR_FULL(PetHangoutSpot, UPetHangoutSpotComponent);
	READ_PTR_FULL(ShipStorageBarrel_Food_3, UChildActorComponent);
	READ_PTR_FULL(BP_HarpoonLauncher1, UChildActorComponent);
	READ_PTR_FULL(BP_HarpoonLauncher, UChildActorComponent);
	READ_PTR_FULL(RowboatMountpoint, UChildActorComponent);
	READ_PTR_FULL(ShipTelemetry, UShipTelemetryComponent);
	READ_PTR_FULL(ControlsRigging, URiggingSystemComponent);
	READ_PTR_FULL(BP_ShipVanityChest, UChildActorComponent);
	READ_PTR_FULL(QuestTable, UChildActorComponent);
	READ_PTR_FULL(BP_SmallShipLadder_02, UChildActorComponent);
	READ_PTR_FULL(Lanterns, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_LowerDeck9, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_LowerDeck10, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_LowerDeck8, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_LowerDeck7, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_Food_2, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_Cannonball2, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_Cannonball1, UChildActorComponent);
	READ_PTR_FULL(BP_EquipmentChest, UChildActorComponent);
	READ_PTR_FULL(BP_ClothingChest, UChildActorComponent);
	READ_PTR_FULL(BP_WeaponsChest, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_LowerDeck3, UChildActorComponent);
	READ_PTR_FULL(BP_SmallMapTable, UChildActorComponent);
	READ_PTR_FULL(Capstan, UChildActorComponent);
	READ_PTR_FULL(GrogBarrel, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_HalfDeck2, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_HalfDeck1, UChildActorComponent);
	READ_PTR_FULL(MastMainSailAngleLeft, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_LowerDeck2, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_LowerDeck1, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_LowerDeck11, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_Wood, UChildActorComponent);
	READ_PTR_FULL(RammingSpurZone, UBoxComponent);
	READ_PTR_FULL(shp_shark_hits_01_a, UStaticMeshComponent);
	READ_PTR_FULL(BP_AmmoChest, UChildActorComponent);
	READ_PTR_FULL(TeleportLocation_04, UTeleportLocationComponent);
	READ_PTR_FULL(TeleportLocation_03, UTeleportLocationComponent);
	READ_PTR_FULL(TeleportLocation_02, UTeleportLocationComponent);
	READ_PTR_FULL(TeleportLocation_01, UTeleportLocationComponent);
	READ_PTR_FULL(MainRigging, URiggingSystemComponent);
	READ_PTR_FULL(ShipsCompass, UChildActorComponent);
	READ_PTR_FULL(Figurehead, UChildActorComponent);
	READ_PTR_FULL(CannonRight1, UChildActorComponent);
	READ_PTR_FULL(CannonLeft1, UChildActorComponent);
	READ_PTR_FULL(LadderStbd, UChildActorComponent);
	READ_PTR_FULL(Hull, UChildActorComponent);
	READ_PTR_FULL(MastMainSailAngleRight, UChildActorComponent);
	READ_PTR_FULL(MastMainSailHoistRight, UChildActorComponent);
	READ_PTR_FULL(MastMainSailHoistLeft, UChildActorComponent);
	READ_PTR_FULL(MastMain, UChildActorComponent);
	READ_PTR_FULL(Anchor, UChildActorComponent);
	READ_PTR_FULL(Rudder, UChildActorComponent);
	READ_PTR_FULL(Wheel, UChildActorComponent);
	READ_PTR_FULL(AudioBoat, UChildActorComponent);
}

void ABP_SmallShipTemplate_C::BeforeDelete()
{
	AShip::BeforeDelete();

	DELE_PTR_FULL(BP_BedComponent);
	DELE_PTR_FULL(Rat3);
	DELE_PTR_FULL(Rat2);
	DELE_PTR_FULL(Rat1);
	DELE_PTR_FULL(RatManager);
	DELE_PTR_FULL(Seat_MapTable_3);
	DELE_PTR_FULL(Seat_MapTable_2);
	DELE_PTR_FULL(Seat_Barrel_Top);
	DELE_PTR_FULL(Seat_Front_Starboard);
	DELE_PTR_FULL(Seat_Front_Port);
	DELE_PTR_FULL(Seat_Side_Starboard);
	DELE_PTR_FULL(Seat_Side_Port);
	DELE_PTR_FULL(Seat_Bottom_Barrel);
	DELE_PTR_FULL(Seat_Bottom_Port);
	DELE_PTR_FULL(Seat_Bottom_Starboard);
	DELE_PTR_FULL(Seat_Top_Rear_3);
	DELE_PTR_FULL(Arrow);
	DELE_PTR_FULL(Seat_Top_Rear_2);
	DELE_PTR_FULL(AIRegion);
	DELE_PTR_FULL(NamedPoints);
	DELE_PTR_FULL(shp_small_ladder_gap_hits_01_a);
	DELE_PTR_FULL(shp_flag_hole_01_a);
	DELE_PTR_FULL(BP_EmissaryFlag);
	DELE_PTR_FULL(EmissaryFlotsamItemSpawner);
	DELE_PTR_FULL(BP_LargeShip_CageLatch_03_b);
	DELE_PTR_FULL(BP_SmallShip_WindowHatchRight);
	DELE_PTR_FULL(BP_SmallShip_WindowHatchLeft);
	DELE_PTR_FULL(BP_WaterBarrel);
	DELE_PTR_FULL(BP_Shroudbreaker);
	DELE_PTR_FULL(BP_ShipPetChest);
	DELE_PTR_FULL(PetHangoutSpot);
	DELE_PTR_FULL(ShipStorageBarrel_Food_3);
	DELE_PTR_FULL(BP_HarpoonLauncher1);
	DELE_PTR_FULL(BP_HarpoonLauncher);
	DELE_PTR_FULL(RowboatMountpoint);
	DELE_PTR_FULL(ShipTelemetry);
	DELE_PTR_FULL(ControlsRigging);
	DELE_PTR_FULL(BP_ShipVanityChest);
	DELE_PTR_FULL(QuestTable);
	DELE_PTR_FULL(BP_SmallShipLadder_02);
	DELE_PTR_FULL(Lanterns);
	DELE_PTR_FULL(ShipStorageBarrel_LowerDeck9);
	DELE_PTR_FULL(ShipStorageBarrel_LowerDeck10);
	DELE_PTR_FULL(ShipStorageBarrel_LowerDeck8);
	DELE_PTR_FULL(ShipStorageBarrel_LowerDeck7);
	DELE_PTR_FULL(ShipStorageBarrel_Food_2);
	DELE_PTR_FULL(ShipStorageBarrel_Cannonball2);
	DELE_PTR_FULL(ShipStorageBarrel_Cannonball1);
	DELE_PTR_FULL(BP_EquipmentChest);
	DELE_PTR_FULL(BP_ClothingChest);
	DELE_PTR_FULL(BP_WeaponsChest);
	DELE_PTR_FULL(ShipStorageBarrel_LowerDeck3);
	DELE_PTR_FULL(BP_SmallMapTable);
	DELE_PTR_FULL(Capstan);
	DELE_PTR_FULL(GrogBarrel);
	DELE_PTR_FULL(ShipStorageBarrel_HalfDeck2);
	DELE_PTR_FULL(ShipStorageBarrel_HalfDeck1);
	DELE_PTR_FULL(MastMainSailAngleLeft);
	DELE_PTR_FULL(ShipStorageBarrel_LowerDeck2);
	DELE_PTR_FULL(ShipStorageBarrel_LowerDeck1);
	DELE_PTR_FULL(ShipStorageBarrel_LowerDeck11);
	DELE_PTR_FULL(ShipStorageBarrel_Wood);
	DELE_PTR_FULL(RammingSpurZone);
	DELE_PTR_FULL(shp_shark_hits_01_a);
	DELE_PTR_FULL(BP_AmmoChest);
	DELE_PTR_FULL(TeleportLocation_04);
	DELE_PTR_FULL(TeleportLocation_03);
	DELE_PTR_FULL(TeleportLocation_02);
	DELE_PTR_FULL(TeleportLocation_01);
	DELE_PTR_FULL(MainRigging);
	DELE_PTR_FULL(ShipsCompass);
	DELE_PTR_FULL(Figurehead);
	DELE_PTR_FULL(CannonRight1);
	DELE_PTR_FULL(CannonLeft1);
	DELE_PTR_FULL(LadderStbd);
	DELE_PTR_FULL(Hull);
	DELE_PTR_FULL(MastMainSailAngleRight);
	DELE_PTR_FULL(MastMainSailHoistRight);
	DELE_PTR_FULL(MastMainSailHoistLeft);
	DELE_PTR_FULL(MastMain);
	DELE_PTR_FULL(Anchor);
	DELE_PTR_FULL(Rudder);
	DELE_PTR_FULL(Wheel);
	DELE_PTR_FULL(AudioBoat);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
