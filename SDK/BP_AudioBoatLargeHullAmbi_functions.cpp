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
//		Name   -> Function BP_AudioBoatLargeHullAmbi.BP_AudioBoatLargeHullAmbi_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_AudioBoatLargeHullAmbi_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioBoatLargeHullAmbi.BP_AudioBoatLargeHullAmbi_C.UserConstructionScript");

	ABP_AudioBoatLargeHullAmbi_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_AudioBoatLargeHullAmbi_C::AfterRead()
{
	AShipHullAudio::AfterRead();

	READ_PTR_FULL(Triton, UTritonComponent);
	READ_PTR_FULL(ShipAudio_StrainEmitter, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Wake_Bow, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Water_Wash_Front_Right, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Water_Wash_Front_Left, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Water_Wash_Bow, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Water_Wash_Back_Right, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Water_Wash_Back_Left, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Wake_Stern, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_TopDeck_Side_Right, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_TopDeck_Side_Left, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_TopDeck_PitchRoll, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_TopDeck_Front_Top, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_TopDeck_Front_Right, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_TopDeck_Back_Left, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_TopDeck_Bow_Rope, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_TopDeck_Bow_Bottom, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_TopDeck_Back_Rope, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_TopDeck_Back_Right, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_TopDeck_Front_Left, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_Mast_Mizzen_Base, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_Mast_Mizzen_Sail2, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_Mast_Mizzen_Sail1, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_Mast_Main_Sail1, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_Mast_Main_Sail3, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_Mast_Main_Sail2, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_Mast_Main_Base, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_Mast_Fore_Base, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_Mast_Fore_Sail2, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_Mast_Fore_Sail1, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_MapDeck_Pillar_Mid_Right, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_MapDeck_Pillar_Front_Right, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_MapDeck_Pillar_Front_Left, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_MapDeck_Pillar_Back_Right, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_MapDeck_Pillar_Mid_Left, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_MapDeck_Mast_Mizzen, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_MapDeck_Mast_Main, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_MapDeck_Mast_Fore, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_MapDeck_Pillar_Back_Left, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_Captain_Back_Left, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_Captain_Lamp, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_Captain_Front_Right, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_Captain_Front_Left, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_Captain_Cage, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_Captain_Back_Right, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_BrigDeck_Centre, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_BrigDeck_Pillar_Front_Right, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_BrigDeck_Pillar_Front_Left, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_BrigDeck_Pillar_Back_Right, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Creak_BrigDeck_Pillar_Back_Left, UShipAudioEmitterComponent);
	READ_PTR_FULL(ShipAudio_Ambience_BelowDeck, UShipAudioEmitterComponent);
	READ_PTR_FULL(LargeBoat_AudioPortal_BrigDeckDoor, UAudioPortalComponent);
	READ_PTR_FULL(LargeBoat_AudioPortal_MapDeckStairs, UAudioPortalComponent);
	READ_PTR_FULL(LargeBoat_AudioPortal_MapDeckGrille, UAudioPortalComponent);
	READ_PTR_FULL(LargeBoat_AudioPortal_CaptCab_DeckDoor, UAudioPortalComponent);
	READ_PTR_FULL(LargeBoat_AudioPortal_CaptCab_SideDoor, UAudioPortalComponent);
}

void ABP_AudioBoatLargeHullAmbi_C::BeforeDelete()
{
	AShipHullAudio::BeforeDelete();

	DELE_PTR_FULL(Triton);
	DELE_PTR_FULL(ShipAudio_StrainEmitter);
	DELE_PTR_FULL(ShipAudio_Wake_Bow);
	DELE_PTR_FULL(ShipAudio_Water_Wash_Front_Right);
	DELE_PTR_FULL(ShipAudio_Water_Wash_Front_Left);
	DELE_PTR_FULL(ShipAudio_Water_Wash_Bow);
	DELE_PTR_FULL(ShipAudio_Water_Wash_Back_Right);
	DELE_PTR_FULL(ShipAudio_Water_Wash_Back_Left);
	DELE_PTR_FULL(ShipAudio_Wake_Stern);
	DELE_PTR_FULL(ShipAudio_Creak_TopDeck_Side_Right);
	DELE_PTR_FULL(ShipAudio_Creak_TopDeck_Side_Left);
	DELE_PTR_FULL(ShipAudio_Creak_TopDeck_PitchRoll);
	DELE_PTR_FULL(ShipAudio_Creak_TopDeck_Front_Top);
	DELE_PTR_FULL(ShipAudio_Creak_TopDeck_Front_Right);
	DELE_PTR_FULL(ShipAudio_Creak_TopDeck_Back_Left);
	DELE_PTR_FULL(ShipAudio_Creak_TopDeck_Bow_Rope);
	DELE_PTR_FULL(ShipAudio_Creak_TopDeck_Bow_Bottom);
	DELE_PTR_FULL(ShipAudio_Creak_TopDeck_Back_Rope);
	DELE_PTR_FULL(ShipAudio_Creak_TopDeck_Back_Right);
	DELE_PTR_FULL(ShipAudio_Creak_TopDeck_Front_Left);
	DELE_PTR_FULL(ShipAudio_Creak_Mast_Mizzen_Base);
	DELE_PTR_FULL(ShipAudio_Creak_Mast_Mizzen_Sail2);
	DELE_PTR_FULL(ShipAudio_Creak_Mast_Mizzen_Sail1);
	DELE_PTR_FULL(ShipAudio_Creak_Mast_Main_Sail1);
	DELE_PTR_FULL(ShipAudio_Creak_Mast_Main_Sail3);
	DELE_PTR_FULL(ShipAudio_Creak_Mast_Main_Sail2);
	DELE_PTR_FULL(ShipAudio_Creak_Mast_Main_Base);
	DELE_PTR_FULL(ShipAudio_Creak_Mast_Fore_Base);
	DELE_PTR_FULL(ShipAudio_Creak_Mast_Fore_Sail2);
	DELE_PTR_FULL(ShipAudio_Creak_Mast_Fore_Sail1);
	DELE_PTR_FULL(ShipAudio_Creak_MapDeck_Pillar_Mid_Right);
	DELE_PTR_FULL(ShipAudio_Creak_MapDeck_Pillar_Front_Right);
	DELE_PTR_FULL(ShipAudio_Creak_MapDeck_Pillar_Front_Left);
	DELE_PTR_FULL(ShipAudio_Creak_MapDeck_Pillar_Back_Right);
	DELE_PTR_FULL(ShipAudio_Creak_MapDeck_Pillar_Mid_Left);
	DELE_PTR_FULL(ShipAudio_Creak_MapDeck_Mast_Mizzen);
	DELE_PTR_FULL(ShipAudio_Creak_MapDeck_Mast_Main);
	DELE_PTR_FULL(ShipAudio_Creak_MapDeck_Mast_Fore);
	DELE_PTR_FULL(ShipAudio_Creak_MapDeck_Pillar_Back_Left);
	DELE_PTR_FULL(ShipAudio_Creak_Captain_Back_Left);
	DELE_PTR_FULL(ShipAudio_Creak_Captain_Lamp);
	DELE_PTR_FULL(ShipAudio_Creak_Captain_Front_Right);
	DELE_PTR_FULL(ShipAudio_Creak_Captain_Front_Left);
	DELE_PTR_FULL(ShipAudio_Creak_Captain_Cage);
	DELE_PTR_FULL(ShipAudio_Creak_Captain_Back_Right);
	DELE_PTR_FULL(ShipAudio_Creak_BrigDeck_Centre);
	DELE_PTR_FULL(ShipAudio_Creak_BrigDeck_Pillar_Front_Right);
	DELE_PTR_FULL(ShipAudio_Creak_BrigDeck_Pillar_Front_Left);
	DELE_PTR_FULL(ShipAudio_Creak_BrigDeck_Pillar_Back_Right);
	DELE_PTR_FULL(ShipAudio_Creak_BrigDeck_Pillar_Back_Left);
	DELE_PTR_FULL(ShipAudio_Ambience_BelowDeck);
	DELE_PTR_FULL(LargeBoat_AudioPortal_BrigDeckDoor);
	DELE_PTR_FULL(LargeBoat_AudioPortal_MapDeckStairs);
	DELE_PTR_FULL(LargeBoat_AudioPortal_MapDeckGrille);
	DELE_PTR_FULL(LargeBoat_AudioPortal_CaptCab_DeckDoor);
	DELE_PTR_FULL(LargeBoat_AudioPortal_CaptCab_SideDoor);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
