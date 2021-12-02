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
//		Name   -> Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.GetPxActorCapacityForPhysXAggregate
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
unsigned char ABP_LargeShipTemplate_C::GetPxActorCapacityForPhysXAggregate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.GetPxActorCapacityForPhysXAggregate");

	ABP_LargeShipTemplate_C_GetPxActorCapacityForPhysXAggregate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.SetupMastControls
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UChildActorComponent*                        LeftHoist                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UChildActorComponent*                        RightHoist                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UChildActorComponent*                        LeftAngle                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UChildActorComponent*                        RightAngle                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FName                                       RiggingGroupName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_LargeShipTemplate_C::SetupMastControls(class UChildActorComponent* LeftHoist, class UChildActorComponent* RightHoist, class UChildActorComponent* LeftAngle, class UChildActorComponent* RightAngle, const struct FName& RiggingGroupName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.SetupMastControls");

	ABP_LargeShipTemplate_C_SetupMastControls_Params params {};
	params.LeftHoist = LeftHoist;
	params.RightHoist = RightHoist;
	params.LeftAngle = LeftAngle;
	params.RightAngle = RightAngle;
	params.RiggingGroupName = RiggingGroupName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_LargeShipTemplate_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.UserConstructionScript");

	ABP_LargeShipTemplate_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_LargeShipTemplate_C::AfterRead()
{
	AShip::AfterRead();

	READ_PTR_FULL(Rat3, UStaticMeshComponent);
	READ_PTR_FULL(Rat2, UStaticMeshComponent);
	READ_PTR_FULL(Rat1, UStaticMeshComponent);
	READ_PTR_FULL(BP_BedComponent, UBP_BedComponent_C);
	READ_PTR_FULL(RatManager, URatManagerComponent);
	READ_PTR_FULL(Seat_BottomDeckBarrel_5, UBP_SeatComponent_C);
	READ_PTR_FULL(Seat_BottomDeckBarrel_4, UBP_SeatComponent_C);
	READ_PTR_FULL(Seat_BottomDeckBarrel_3, UBP_SeatComponent_C);
	READ_PTR_FULL(Seat_Cabin_Chest, UBP_SeatComponent_C);
	READ_PTR_FULL(Seat_Platform_Starboard, UBP_SeatComponent_C);
	READ_PTR_FULL(Seat_Platform_Port, UBP_SeatComponent_C);
	READ_PTR_FULL(Seat_Bannister_Bow_3, UBP_SeatComponent_C);
	READ_PTR_FULL(Seat_Bannister_Bow, UBP_SeatComponent_C);
	READ_PTR_FULL(Seat_BottomDeckBarrel, UBP_SeatComponent_C);
	READ_PTR_FULL(Seat_MapTable_Cooking, UBP_SeatComponent_C);
	READ_PTR_FULL(Seat_MapTable, UBP_SeatComponent_C);
	READ_PTR_FULL(Seat_Balcony_Rear_Starboard, UBP_SeatComponent_C);
	READ_PTR_FULL(Seat_Balcony_Rear_Port, UBP_SeatComponent_C);
	READ_PTR_FULL(Seat_Plank_Port, UBP_SeatComponent_C);
	READ_PTR_FULL(Seat_Hatch_2, UBP_SeatComponent_C);
	READ_PTR_FULL(Seat_Plank_Starboard, UBP_SeatComponent_C);
	READ_PTR_FULL(Seat_CaptainsChair, UBP_SeatComponent_C);
	READ_PTR_FULL(AIRegion, UAIRegionComponent);
	READ_PTR_FULL(NamedPoints, UNamedPointsComponent);
	READ_PTR_FULL(BP_ShipStorageBarrelTwo6, UChildActorComponent);
	READ_PTR_FULL(BP_ShipStorageBarrelThree4, UChildActorComponent);
	READ_PTR_FULL(BP_ShipStorageBarrelThree3, UChildActorComponent);
	READ_PTR_FULL(BP_ShipStorageBarrelTwo5, UChildActorComponent);
	READ_PTR_FULL(BP_ShipStorageBarrelTwo4, UChildActorComponent);
	READ_PTR_FULL(BP_ShipStorageBarrelTwo3, UChildActorComponent);
	READ_PTR_FULL(BP_ShipStorageBarrelTwo2, UChildActorComponent);
	READ_PTR_FULL(BP_ShipStorageBarrelTwo1, UChildActorComponent);
	READ_PTR_FULL(BP_ShipStorageBarrelTwo, UChildActorComponent);
	READ_PTR_FULL(BP_ShipStorageBarrelThree2, UChildActorComponent);
	READ_PTR_FULL(BP_ShipStorageBarrelThree1, UChildActorComponent);
	READ_PTR_FULL(BP_ShipStorageBarrelThree, UChildActorComponent);
	READ_PTR_FULL(shp_galleon_ladder_gap_hits_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_flag_hole_01_a, UStaticMeshComponent);
	READ_PTR_FULL(BP_EmissaryFlag, UChildActorComponent);
	READ_PTR_FULL(EmissaryFlotsamItemSpawner, UEmissaryFlotsamItemSpawnComponent);
	READ_PTR_FULL(BP_LargeShip_CageLatch_03_a, UChildActorComponent);
	READ_PTR_FULL(BP_LargeShip_CageLatch_03_b, UChildActorComponent);
	READ_PTR_FULL(BP_WaterBarrel, UChildActorComponent);
	READ_PTR_FULL(BP_Shroudbreaker, UChildActorComponent);
	READ_PTR_FULL(BP_ShipPetChest, UChildActorComponent);
	READ_PTR_FULL(PetHangoutSpot, UPetHangoutSpotComponent);
	READ_PTR_FULL(ShipStorageBarrelFood2, UChildActorComponent);
	READ_PTR_FULL(BP_HarpoonLauncher1, UChildActorComponent);
	READ_PTR_FULL(BP_HarpoonLauncher, UChildActorComponent);
	READ_PTR_FULL(RowboatMountpoint, UChildActorComponent);
	READ_PTR_FULL(ShipTelemetry, UShipTelemetryComponent);
	READ_PTR_FULL(BP_ShipVanityChest, UChildActorComponent);
	READ_PTR_FULL(BP_Bell, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_LowestDeck17, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_LowestDeck16, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_LowestDeck15, UChildActorComponent);
	READ_PTR_FULL(BP_WallClock, UChildActorComponent);
	READ_PTR_FULL(BP_WeaponsChest, UChildActorComponent);
	READ_PTR_FULL(BP_EquipmentChest, UChildActorComponent);
	READ_PTR_FULL(BP_ClothingChest, UChildActorComponent);
	READ_PTR_FULL(VFX_Drips, UShipPointParticleComponent);
	READ_PTR_FULL(RammingSpurZone, UBoxComponent);
	READ_PTR_FULL(shp_shark_hits_01_a, UStaticMeshComponent);
	READ_PTR_FULL(ShipStorageBarrel_Cannonball3, UChildActorComponent);
	READ_PTR_FULL(BP_AmmoChest, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_Grog, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_Food, UChildActorComponent);
	READ_PTR_FULL(Lanterns, UChildActorComponent);
	READ_PTR_FULL(TeleportLocation11_TopDeck_NearWheel, UTeleportLocationComponent);
	READ_PTR_FULL(TeleportLocation_09_BottomDeck_OutsideBrig, UTeleportLocationComponent);
	READ_PTR_FULL(TeleportLocation_08_BottomDeck_FacingStairs, UTeleportLocationComponent);
	READ_PTR_FULL(TeleportLocation_07_MiddleDeck_BackOfShip, UTeleportLocationComponent);
	READ_PTR_FULL(TeleportLocation_06_MiddleDeck_FrontOfShip, UTeleportLocationComponent);
	READ_PTR_FULL(TeleportLocation_05_TopDeck_NearCannons, UTeleportLocationComponent);
	READ_PTR_FULL(TeleportLocation_04_TopDeck_FrontOfShip, UTeleportLocationComponent);
	READ_PTR_FULL(TeleportLocation_03_TopDeck_BackOfShip, UTeleportLocationComponent);
	READ_PTR_FULL(TeleportLocation_02_TopDeck_NearLadder, UTeleportLocationComponent);
	READ_PTR_FULL(TeleportLocation_01_CaptainsCabin, UTeleportLocationComponent);
	READ_PTR_FULL(MainRigging, URiggingSystemComponent);
	READ_PTR_FULL(ControlsRigging, URiggingSystemComponent);
	READ_PTR_FULL(MapTable, UChildActorComponent);
	READ_PTR_FULL(ShipsCompass, UChildActorComponent);
	READ_PTR_FULL(Figurehead, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_LowestDeck13, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_BottomOfLowestStairs2, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_BottomOfLowestStairs1, UChildActorComponent);
	READ_PTR_FULL(LowerDeckBarrels, USceneComponent);
	READ_PTR_FULL(ShipStorageBarrel_NearLowerStairs5, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_Cannonball2, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_Cannonball1, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_NearLowerStairs6, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_NearLowerStairs4, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_NearLowerStairs3, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_NearLowerStairs2, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_NearLowerStairs1, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_BehindStairs5, UChildActorComponent);
	READ_PTR_FULL(CannonRight4, UChildActorComponent);
	READ_PTR_FULL(CannonRight3, UChildActorComponent);
	READ_PTR_FULL(CannonRight2, UChildActorComponent);
	READ_PTR_FULL(CannonRight1, UChildActorComponent);
	READ_PTR_FULL(CannonLeft4, UChildActorComponent);
	READ_PTR_FULL(CannonLeft3, UChildActorComponent);
	READ_PTR_FULL(CannonLeft2, UChildActorComponent);
	READ_PTR_FULL(CannonLeft1, UChildActorComponent);
	READ_PTR_FULL(LadderStbd, UChildActorComponent);
	READ_PTR_FULL(LadderPort, UChildActorComponent);
	READ_PTR_FULL(Hull, UChildActorComponent);
	READ_PTR_FULL(MastForeSailAngleRight, UChildActorComponent);
	READ_PTR_FULL(MastForeSailAngleLeft, UChildActorComponent);
	READ_PTR_FULL(MiddleDeckBarrels, USceneComponent);
	READ_PTR_FULL(MastMainSailAngleRight, UChildActorComponent);
	READ_PTR_FULL(MastMizzenSailAngleRight, UChildActorComponent);
	READ_PTR_FULL(MastMizzenSailAngleLeft, UChildActorComponent);
	READ_PTR_FULL(MastForeSailHoistRight, UChildActorComponent);
	READ_PTR_FULL(MastForeSailHoistLeft, UChildActorComponent);
	READ_PTR_FULL(MastMizzenSailHoistRight, UChildActorComponent);
	READ_PTR_FULL(MastMizzenSailHoistLeft, UChildActorComponent);
	READ_PTR_FULL(MastMainSailHoistRight, UChildActorComponent);
	READ_PTR_FULL(MastMainSailHoistLeft, UChildActorComponent);
	READ_PTR_FULL(Capstan, UChildActorComponent);
	READ_PTR_FULL(MastFore, UChildActorComponent);
	READ_PTR_FULL(MastMain, UChildActorComponent);
	READ_PTR_FULL(MastMizzen, UChildActorComponent);
	READ_PTR_FULL(Anchor, UChildActorComponent);
	READ_PTR_FULL(Rudder, UChildActorComponent);
	READ_PTR_FULL(Wheel, UChildActorComponent);
	READ_PTR_FULL(AudioBoat, UChildActorComponent);
	READ_PTR_FULL(MastMainSailAngleLeft, UChildActorComponent);
}

void ABP_LargeShipTemplate_C::BeforeDelete()
{
	AShip::BeforeDelete();

	DELE_PTR_FULL(Rat3);
	DELE_PTR_FULL(Rat2);
	DELE_PTR_FULL(Rat1);
	DELE_PTR_FULL(BP_BedComponent);
	DELE_PTR_FULL(RatManager);
	DELE_PTR_FULL(Seat_BottomDeckBarrel_5);
	DELE_PTR_FULL(Seat_BottomDeckBarrel_4);
	DELE_PTR_FULL(Seat_BottomDeckBarrel_3);
	DELE_PTR_FULL(Seat_Cabin_Chest);
	DELE_PTR_FULL(Seat_Platform_Starboard);
	DELE_PTR_FULL(Seat_Platform_Port);
	DELE_PTR_FULL(Seat_Bannister_Bow_3);
	DELE_PTR_FULL(Seat_Bannister_Bow);
	DELE_PTR_FULL(Seat_BottomDeckBarrel);
	DELE_PTR_FULL(Seat_MapTable_Cooking);
	DELE_PTR_FULL(Seat_MapTable);
	DELE_PTR_FULL(Seat_Balcony_Rear_Starboard);
	DELE_PTR_FULL(Seat_Balcony_Rear_Port);
	DELE_PTR_FULL(Seat_Plank_Port);
	DELE_PTR_FULL(Seat_Hatch_2);
	DELE_PTR_FULL(Seat_Plank_Starboard);
	DELE_PTR_FULL(Seat_CaptainsChair);
	DELE_PTR_FULL(AIRegion);
	DELE_PTR_FULL(NamedPoints);
	DELE_PTR_FULL(BP_ShipStorageBarrelTwo6);
	DELE_PTR_FULL(BP_ShipStorageBarrelThree4);
	DELE_PTR_FULL(BP_ShipStorageBarrelThree3);
	DELE_PTR_FULL(BP_ShipStorageBarrelTwo5);
	DELE_PTR_FULL(BP_ShipStorageBarrelTwo4);
	DELE_PTR_FULL(BP_ShipStorageBarrelTwo3);
	DELE_PTR_FULL(BP_ShipStorageBarrelTwo2);
	DELE_PTR_FULL(BP_ShipStorageBarrelTwo1);
	DELE_PTR_FULL(BP_ShipStorageBarrelTwo);
	DELE_PTR_FULL(BP_ShipStorageBarrelThree2);
	DELE_PTR_FULL(BP_ShipStorageBarrelThree1);
	DELE_PTR_FULL(BP_ShipStorageBarrelThree);
	DELE_PTR_FULL(shp_galleon_ladder_gap_hits_01_a);
	DELE_PTR_FULL(shp_flag_hole_01_a);
	DELE_PTR_FULL(BP_EmissaryFlag);
	DELE_PTR_FULL(EmissaryFlotsamItemSpawner);
	DELE_PTR_FULL(BP_LargeShip_CageLatch_03_a);
	DELE_PTR_FULL(BP_LargeShip_CageLatch_03_b);
	DELE_PTR_FULL(BP_WaterBarrel);
	DELE_PTR_FULL(BP_Shroudbreaker);
	DELE_PTR_FULL(BP_ShipPetChest);
	DELE_PTR_FULL(PetHangoutSpot);
	DELE_PTR_FULL(ShipStorageBarrelFood2);
	DELE_PTR_FULL(BP_HarpoonLauncher1);
	DELE_PTR_FULL(BP_HarpoonLauncher);
	DELE_PTR_FULL(RowboatMountpoint);
	DELE_PTR_FULL(ShipTelemetry);
	DELE_PTR_FULL(BP_ShipVanityChest);
	DELE_PTR_FULL(BP_Bell);
	DELE_PTR_FULL(ShipStorageBarrel_LowestDeck17);
	DELE_PTR_FULL(ShipStorageBarrel_LowestDeck16);
	DELE_PTR_FULL(ShipStorageBarrel_LowestDeck15);
	DELE_PTR_FULL(BP_WallClock);
	DELE_PTR_FULL(BP_WeaponsChest);
	DELE_PTR_FULL(BP_EquipmentChest);
	DELE_PTR_FULL(BP_ClothingChest);
	DELE_PTR_FULL(VFX_Drips);
	DELE_PTR_FULL(RammingSpurZone);
	DELE_PTR_FULL(shp_shark_hits_01_a);
	DELE_PTR_FULL(ShipStorageBarrel_Cannonball3);
	DELE_PTR_FULL(BP_AmmoChest);
	DELE_PTR_FULL(ShipStorageBarrel_Grog);
	DELE_PTR_FULL(ShipStorageBarrel_Food);
	DELE_PTR_FULL(Lanterns);
	DELE_PTR_FULL(TeleportLocation11_TopDeck_NearWheel);
	DELE_PTR_FULL(TeleportLocation_09_BottomDeck_OutsideBrig);
	DELE_PTR_FULL(TeleportLocation_08_BottomDeck_FacingStairs);
	DELE_PTR_FULL(TeleportLocation_07_MiddleDeck_BackOfShip);
	DELE_PTR_FULL(TeleportLocation_06_MiddleDeck_FrontOfShip);
	DELE_PTR_FULL(TeleportLocation_05_TopDeck_NearCannons);
	DELE_PTR_FULL(TeleportLocation_04_TopDeck_FrontOfShip);
	DELE_PTR_FULL(TeleportLocation_03_TopDeck_BackOfShip);
	DELE_PTR_FULL(TeleportLocation_02_TopDeck_NearLadder);
	DELE_PTR_FULL(TeleportLocation_01_CaptainsCabin);
	DELE_PTR_FULL(MainRigging);
	DELE_PTR_FULL(ControlsRigging);
	DELE_PTR_FULL(MapTable);
	DELE_PTR_FULL(ShipsCompass);
	DELE_PTR_FULL(Figurehead);
	DELE_PTR_FULL(ShipStorageBarrel_LowestDeck13);
	DELE_PTR_FULL(ShipStorageBarrel_BottomOfLowestStairs2);
	DELE_PTR_FULL(ShipStorageBarrel_BottomOfLowestStairs1);
	DELE_PTR_FULL(LowerDeckBarrels);
	DELE_PTR_FULL(ShipStorageBarrel_NearLowerStairs5);
	DELE_PTR_FULL(ShipStorageBarrel_Cannonball2);
	DELE_PTR_FULL(ShipStorageBarrel_Cannonball1);
	DELE_PTR_FULL(ShipStorageBarrel_NearLowerStairs6);
	DELE_PTR_FULL(ShipStorageBarrel_NearLowerStairs4);
	DELE_PTR_FULL(ShipStorageBarrel_NearLowerStairs3);
	DELE_PTR_FULL(ShipStorageBarrel_NearLowerStairs2);
	DELE_PTR_FULL(ShipStorageBarrel_NearLowerStairs1);
	DELE_PTR_FULL(ShipStorageBarrel_BehindStairs5);
	DELE_PTR_FULL(CannonRight4);
	DELE_PTR_FULL(CannonRight3);
	DELE_PTR_FULL(CannonRight2);
	DELE_PTR_FULL(CannonRight1);
	DELE_PTR_FULL(CannonLeft4);
	DELE_PTR_FULL(CannonLeft3);
	DELE_PTR_FULL(CannonLeft2);
	DELE_PTR_FULL(CannonLeft1);
	DELE_PTR_FULL(LadderStbd);
	DELE_PTR_FULL(LadderPort);
	DELE_PTR_FULL(Hull);
	DELE_PTR_FULL(MastForeSailAngleRight);
	DELE_PTR_FULL(MastForeSailAngleLeft);
	DELE_PTR_FULL(MiddleDeckBarrels);
	DELE_PTR_FULL(MastMainSailAngleRight);
	DELE_PTR_FULL(MastMizzenSailAngleRight);
	DELE_PTR_FULL(MastMizzenSailAngleLeft);
	DELE_PTR_FULL(MastForeSailHoistRight);
	DELE_PTR_FULL(MastForeSailHoistLeft);
	DELE_PTR_FULL(MastMizzenSailHoistRight);
	DELE_PTR_FULL(MastMizzenSailHoistLeft);
	DELE_PTR_FULL(MastMainSailHoistRight);
	DELE_PTR_FULL(MastMainSailHoistLeft);
	DELE_PTR_FULL(Capstan);
	DELE_PTR_FULL(MastFore);
	DELE_PTR_FULL(MastMain);
	DELE_PTR_FULL(MastMizzen);
	DELE_PTR_FULL(Anchor);
	DELE_PTR_FULL(Rudder);
	DELE_PTR_FULL(Wheel);
	DELE_PTR_FULL(AudioBoat);
	DELE_PTR_FULL(MastMainSailAngleLeft);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
