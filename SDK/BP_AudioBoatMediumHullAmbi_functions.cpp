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
//		Name   -> Function BP_AudioBoatMediumHullAmbi.BP_AudioBoatMediumHullAmbi_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_AudioBoatMediumHullAmbi_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioBoatMediumHullAmbi.BP_AudioBoatMediumHullAmbi_C.UserConstructionScript");

	ABP_AudioBoatMediumHullAmbi_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_AudioBoatMediumHullAmbi_C::AfterRead()
{
	AShipHullAudio::AfterRead();

	READ_PTR_FULL(Triton, UTritonComponent);
	READ_PTR_FULL(audio_water_laps_FL, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_water_laps_FR, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_metal2, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_metal, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_window, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_cabin_04, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_cabin_03, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_cabin_02, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_cabin_01, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_map_01, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_map_continuous, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_map_02, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_deck_back, UShipAudioEmitterComponent);
	READ_PTR_FULL(DeckGrille, UAudioPortalComponent);
	READ_PTR_FULL(DeckGrille2, UAudioPortalComponent);
	READ_PTR_FULL(audio_creak_mast_rear, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_wake_stern, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_wake_bow, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_wake_side_L, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_wake_side_R, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_mast_front_nest, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_mast_front, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_FL, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_FR, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_rope_front, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_smallship_global, UShipAudioEmitterComponent);
	READ_PTR_FULL(Deckgrille3, UAudioPortalComponent);
}

void ABP_AudioBoatMediumHullAmbi_C::BeforeDelete()
{
	AShipHullAudio::BeforeDelete();

	DELE_PTR_FULL(Triton);
	DELE_PTR_FULL(audio_water_laps_FL);
	DELE_PTR_FULL(audio_water_laps_FR);
	DELE_PTR_FULL(audio_creak_metal2);
	DELE_PTR_FULL(audio_creak_metal);
	DELE_PTR_FULL(audio_creak_window);
	DELE_PTR_FULL(audio_creak_cabin_04);
	DELE_PTR_FULL(audio_creak_cabin_03);
	DELE_PTR_FULL(audio_creak_cabin_02);
	DELE_PTR_FULL(audio_creak_cabin_01);
	DELE_PTR_FULL(audio_creak_map_01);
	DELE_PTR_FULL(audio_creak_map_continuous);
	DELE_PTR_FULL(audio_creak_map_02);
	DELE_PTR_FULL(audio_creak_deck_back);
	DELE_PTR_FULL(DeckGrille);
	DELE_PTR_FULL(DeckGrille2);
	DELE_PTR_FULL(audio_creak_mast_rear);
	DELE_PTR_FULL(audio_wake_stern);
	DELE_PTR_FULL(audio_wake_bow);
	DELE_PTR_FULL(audio_wake_side_L);
	DELE_PTR_FULL(audio_wake_side_R);
	DELE_PTR_FULL(audio_creak_mast_front_nest);
	DELE_PTR_FULL(audio_creak_mast_front);
	DELE_PTR_FULL(audio_creak_FL);
	DELE_PTR_FULL(audio_creak_FR);
	DELE_PTR_FULL(audio_creak_rope_front);
	DELE_PTR_FULL(audio_creak_smallship_global);
	DELE_PTR_FULL(Deckgrille3);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
