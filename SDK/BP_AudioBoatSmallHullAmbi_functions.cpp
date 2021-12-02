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
//		Name   -> Function BP_AudioBoatSmallHullAmbi.BP_AudioBoatSmallHullAmbi_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_AudioBoatSmallHullAmbi_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioBoatSmallHullAmbi.BP_AudioBoatSmallHullAmbi_C.UserConstructionScript");

	ABP_AudioBoatSmallHullAmbi_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_AudioBoatSmallHullAmbi_C::AfterRead()
{
	AShipHullAudio::AfterRead();

	READ_PTR_FULL(Triton, UTritonComponent);
	READ_PTR_FULL(audio_wake_stern, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_wake_bow, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_wake_side_L, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_wake_side_R, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_nest, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_mast, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_FL, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_FR, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_rope_front, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_brig_03, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_brig_02, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_rope_back, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_brig_01, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_cabin_04, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_cabin_03, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_cabin_02, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_cabin_01, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_smallship_global, UShipAudioEmitterComponent);
	READ_PTR_FULL(DeckGrille, UAudioPortalComponent);
	READ_PTR_FULL(BrigDeck, UAudioPortalComponent);
	READ_PTR_FULL(CaptainsCabin_Left, UAudioPortalComponent);
	READ_PTR_FULL(CaptainsCabin_Right, UAudioPortalComponent);
	READ_PTR_FULL(CaptainsCabin_Back, UAudioPortalComponent);
	READ_PTR_FULL(TopToCaptainsCabin, UAudioPortalComponent);
}

void ABP_AudioBoatSmallHullAmbi_C::BeforeDelete()
{
	AShipHullAudio::BeforeDelete();

	DELE_PTR_FULL(Triton);
	DELE_PTR_FULL(audio_wake_stern);
	DELE_PTR_FULL(audio_wake_bow);
	DELE_PTR_FULL(audio_wake_side_L);
	DELE_PTR_FULL(audio_wake_side_R);
	DELE_PTR_FULL(audio_creak_nest);
	DELE_PTR_FULL(audio_creak_mast);
	DELE_PTR_FULL(audio_creak_FL);
	DELE_PTR_FULL(audio_creak_FR);
	DELE_PTR_FULL(audio_creak_rope_front);
	DELE_PTR_FULL(audio_creak_brig_03);
	DELE_PTR_FULL(audio_creak_brig_02);
	DELE_PTR_FULL(audio_creak_rope_back);
	DELE_PTR_FULL(audio_creak_brig_01);
	DELE_PTR_FULL(audio_creak_cabin_04);
	DELE_PTR_FULL(audio_creak_cabin_03);
	DELE_PTR_FULL(audio_creak_cabin_02);
	DELE_PTR_FULL(audio_creak_cabin_01);
	DELE_PTR_FULL(audio_creak_smallship_global);
	DELE_PTR_FULL(DeckGrille);
	DELE_PTR_FULL(BrigDeck);
	DELE_PTR_FULL(CaptainsCabin_Left);
	DELE_PTR_FULL(CaptainsCabin_Right);
	DELE_PTR_FULL(CaptainsCabin_Back);
	DELE_PTR_FULL(TopToCaptainsCabin);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
