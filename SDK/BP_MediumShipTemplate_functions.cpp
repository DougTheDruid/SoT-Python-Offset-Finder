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
//		Name   -> Function BP_MediumShipTemplate.BP_MediumShipTemplate_C.GetPxActorCapacityForPhysXAggregate
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
unsigned char ABP_MediumShipTemplate_C::GetPxActorCapacityForPhysXAggregate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumShipTemplate.BP_MediumShipTemplate_C.GetPxActorCapacityForPhysXAggregate");

	ABP_MediumShipTemplate_C_GetPxActorCapacityForPhysXAggregate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_MediumShipTemplate.BP_MediumShipTemplate_C.SetupMastControls
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UChildActorComponent*                        LeftHoist                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UChildActorComponent*                        RightHoist                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UChildActorComponent*                        LeftAngle                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UChildActorComponent*                        RightAngle                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FName                                       RiggingGroupName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MediumShipTemplate_C::SetupMastControls(class UChildActorComponent* LeftHoist, class UChildActorComponent* RightHoist, class UChildActorComponent* LeftAngle, class UChildActorComponent* RightAngle, const struct FName& RiggingGroupName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumShipTemplate.BP_MediumShipTemplate_C.SetupMastControls");

	ABP_MediumShipTemplate_C_SetupMastControls_Params params;
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
//		Offset -> 0x01637030
//		Name   -> Function BP_MediumShipTemplate.BP_MediumShipTemplate_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MediumShipTemplate_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumShipTemplate.BP_MediumShipTemplate_C.UserConstructionScript");

	ABP_MediumShipTemplate_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_MediumShipTemplate_C::AfterRead()
{
	AShip::AfterRead();

	READ_PTR_FULL(AIRegion, UAIRegionComponent);
	READ_PTR_FULL(NamedPoints, UNamedPointsComponent);
	READ_PTR_FULL(shp_mid_ladder_gap_hits_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_flag_hole_01_a, UStaticMeshComponent);
	READ_PTR_FULL(BP_EmissaryFlag, UChildActorComponent);
	READ_PTR_FULL(EmissaryFlotsamItemSpawner, UEmissaryFlotsamItemSpawnComponent);
	READ_PTR_FULL(BP_LargeShip_CageLatch_03_b, UChildActorComponent);
	READ_PTR_FULL(BP_WaterBarrel, UChildActorComponent);
	READ_PTR_FULL(BP_MediumShip_ServingHatch_Left, UChildActorComponent);
	READ_PTR_FULL(BP_MediumShip_ServingHatch_Right, UChildActorComponent);
	READ_PTR_FULL(BP_Shroudbreaker, UChildActorComponent);
	READ_PTR_FULL(BP_ShipPetChest, UChildActorComponent);
	READ_PTR_FULL(PetHangoutSpot, UPetHangoutSpotComponent);
	READ_PTR_FULL(BP_HarpoonLauncher1, UChildActorComponent);
	READ_PTR_FULL(BP_HarpoonLauncher, UChildActorComponent);
	READ_PTR_FULL(RowboatMountpoint, UChildActorComponent);
	READ_PTR_FULL(ShipTelemetry, UShipTelemetryComponent);
	READ_PTR_FULL(TeleportLocation_06, UTeleportLocationComponent);
	READ_PTR_FULL(TeleportLocation_05, UTeleportLocationComponent);
	READ_PTR_FULL(TeleportLocation_04, UTeleportLocationComponent);
	READ_PTR_FULL(TeleportLocation_03, UTeleportLocationComponent);
	READ_PTR_FULL(TeleportLocation_02, UTeleportLocationComponent);
	READ_PTR_FULL(StorageBarrel_LowerDeck17, UChildActorComponent);
	READ_PTR_FULL(Figurehead, UChildActorComponent);
	READ_PTR_FULL(BP_MediumShip_StandardHull_Art_Interior_Lower_Deck, UChildActorComponent);
	READ_PTR_FULL(StorageBarrel_LowerDeck16, UChildActorComponent);
	READ_PTR_FULL(StorageBarrel_LowerDeck15, UChildActorComponent);
	READ_PTR_FULL(StorageBarrel_LowerDeck14, UChildActorComponent);
	READ_PTR_FULL(StorageBarrel_LowerDeck13, UChildActorComponent);
	READ_PTR_FULL(StorageBarrel_LowerDeck12, UChildActorComponent);
	READ_PTR_FULL(StorageBarrel_LowerDeck11, UChildActorComponent);
	READ_PTR_FULL(StorageBarrel_LowerDeck10, UChildActorComponent);
	READ_PTR_FULL(StorageBarrel_LowerDeck9, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_Food2, UChildActorComponent);
	READ_PTR_FULL(StorageBarrel_LowerDeck7, UChildActorComponent);
	READ_PTR_FULL(StorageBarrel_LowerDeck4, UChildActorComponent);
	READ_PTR_FULL(StorageBarrel_LowerDeck2, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_Cannonball3, UChildActorComponent);
	READ_PTR_FULL(StorageBarrel_LowerDeck1, UChildActorComponent);
	READ_PTR_FULL(CannonLeft2, UChildActorComponent);
	READ_PTR_FULL(CannonRight2, UChildActorComponent);
	READ_PTR_FULL(LadderStbd, UChildActorComponent);
	READ_PTR_FULL(MastSecondarySailAngleLeft, UChildActorComponent);
	READ_PTR_FULL(MastSecondarySailAngleRight, UChildActorComponent);
	READ_PTR_FULL(MastSecondarySailHoistRight, UChildActorComponent);
	READ_PTR_FULL(MastSecondarySailHoistLeft, UChildActorComponent);
	READ_PTR_FULL(ControlsRigging, URiggingSystemComponent);
	READ_PTR_FULL(MastSecondary, UChildActorComponent);
	READ_PTR_FULL(BP_ShipVanityChest, UChildActorComponent);
	READ_PTR_FULL(QuestTable, UChildActorComponent);
	READ_PTR_FULL(Lanterns, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_Food, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_Cannonball2, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_Cannonball1, UChildActorComponent);
	READ_PTR_FULL(BP_EquipmentChest, UChildActorComponent);
	READ_PTR_FULL(BP_ClothingChest, UChildActorComponent);
	READ_PTR_FULL(BP_WeaponsChest, UChildActorComponent);
	READ_PTR_FULL(BP_MediumMapTable, UChildActorComponent);
	READ_PTR_FULL(Capstan, UChildActorComponent);
	READ_PTR_FULL(GrogBarrel, UChildActorComponent);
	READ_PTR_FULL(MastMainSailAngleLeft, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_Wood, UChildActorComponent);
	READ_PTR_FULL(RammingSpurZone, UBoxComponent);
	READ_PTR_FULL(shp_shark_hits_01_a, UStaticMeshComponent);
	READ_PTR_FULL(BP_AmmoChest, UChildActorComponent);
	READ_PTR_FULL(TeleportLocation_01, UTeleportLocationComponent);
	READ_PTR_FULL(MainRigging, URiggingSystemComponent);
	READ_PTR_FULL(ShipsCompass, UChildActorComponent);
	READ_PTR_FULL(CannonRight1, UChildActorComponent);
	READ_PTR_FULL(CannonLeft1, UChildActorComponent);
	READ_PTR_FULL(LadderPort, UChildActorComponent);
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

void ABP_MediumShipTemplate_C::BeforeDelete()
{
	AShip::BeforeDelete();

	DELE_PTR_FULL(AIRegion);
	DELE_PTR_FULL(NamedPoints);
	DELE_PTR_FULL(shp_mid_ladder_gap_hits_01_a);
	DELE_PTR_FULL(shp_flag_hole_01_a);
	DELE_PTR_FULL(BP_EmissaryFlag);
	DELE_PTR_FULL(EmissaryFlotsamItemSpawner);
	DELE_PTR_FULL(BP_LargeShip_CageLatch_03_b);
	DELE_PTR_FULL(BP_WaterBarrel);
	DELE_PTR_FULL(BP_MediumShip_ServingHatch_Left);
	DELE_PTR_FULL(BP_MediumShip_ServingHatch_Right);
	DELE_PTR_FULL(BP_Shroudbreaker);
	DELE_PTR_FULL(BP_ShipPetChest);
	DELE_PTR_FULL(PetHangoutSpot);
	DELE_PTR_FULL(BP_HarpoonLauncher1);
	DELE_PTR_FULL(BP_HarpoonLauncher);
	DELE_PTR_FULL(RowboatMountpoint);
	DELE_PTR_FULL(ShipTelemetry);
	DELE_PTR_FULL(TeleportLocation_06);
	DELE_PTR_FULL(TeleportLocation_05);
	DELE_PTR_FULL(TeleportLocation_04);
	DELE_PTR_FULL(TeleportLocation_03);
	DELE_PTR_FULL(TeleportLocation_02);
	DELE_PTR_FULL(StorageBarrel_LowerDeck17);
	DELE_PTR_FULL(Figurehead);
	DELE_PTR_FULL(BP_MediumShip_StandardHull_Art_Interior_Lower_Deck);
	DELE_PTR_FULL(StorageBarrel_LowerDeck16);
	DELE_PTR_FULL(StorageBarrel_LowerDeck15);
	DELE_PTR_FULL(StorageBarrel_LowerDeck14);
	DELE_PTR_FULL(StorageBarrel_LowerDeck13);
	DELE_PTR_FULL(StorageBarrel_LowerDeck12);
	DELE_PTR_FULL(StorageBarrel_LowerDeck11);
	DELE_PTR_FULL(StorageBarrel_LowerDeck10);
	DELE_PTR_FULL(StorageBarrel_LowerDeck9);
	DELE_PTR_FULL(ShipStorageBarrel_Food2);
	DELE_PTR_FULL(StorageBarrel_LowerDeck7);
	DELE_PTR_FULL(StorageBarrel_LowerDeck4);
	DELE_PTR_FULL(StorageBarrel_LowerDeck2);
	DELE_PTR_FULL(ShipStorageBarrel_Cannonball3);
	DELE_PTR_FULL(StorageBarrel_LowerDeck1);
	DELE_PTR_FULL(CannonLeft2);
	DELE_PTR_FULL(CannonRight2);
	DELE_PTR_FULL(LadderStbd);
	DELE_PTR_FULL(MastSecondarySailAngleLeft);
	DELE_PTR_FULL(MastSecondarySailAngleRight);
	DELE_PTR_FULL(MastSecondarySailHoistRight);
	DELE_PTR_FULL(MastSecondarySailHoistLeft);
	DELE_PTR_FULL(ControlsRigging);
	DELE_PTR_FULL(MastSecondary);
	DELE_PTR_FULL(BP_ShipVanityChest);
	DELE_PTR_FULL(QuestTable);
	DELE_PTR_FULL(Lanterns);
	DELE_PTR_FULL(ShipStorageBarrel_Food);
	DELE_PTR_FULL(ShipStorageBarrel_Cannonball2);
	DELE_PTR_FULL(ShipStorageBarrel_Cannonball1);
	DELE_PTR_FULL(BP_EquipmentChest);
	DELE_PTR_FULL(BP_ClothingChest);
	DELE_PTR_FULL(BP_WeaponsChest);
	DELE_PTR_FULL(BP_MediumMapTable);
	DELE_PTR_FULL(Capstan);
	DELE_PTR_FULL(GrogBarrel);
	DELE_PTR_FULL(MastMainSailAngleLeft);
	DELE_PTR_FULL(ShipStorageBarrel_Wood);
	DELE_PTR_FULL(RammingSpurZone);
	DELE_PTR_FULL(shp_shark_hits_01_a);
	DELE_PTR_FULL(BP_AmmoChest);
	DELE_PTR_FULL(TeleportLocation_01);
	DELE_PTR_FULL(MainRigging);
	DELE_PTR_FULL(ShipsCompass);
	DELE_PTR_FULL(CannonRight1);
	DELE_PTR_FULL(CannonLeft1);
	DELE_PTR_FULL(LadderPort);
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
