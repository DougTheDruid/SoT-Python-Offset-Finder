#pragma once

// Name: SoT, Version: 2.3.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AudioBoatSmallHullAmbi.BP_AudioBoatSmallHullAmbi_C
// 0x00C8 (FullSize[0x0618] - InheritedSize[0x0550])
class ABP_AudioBoatSmallHullAmbi_C : public AShipHullAudio
{
public:
	class UTritonComponent*                            Triton;                                                    // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_wake_stern;                                          // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_wake_bow;                                            // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_wake_side_L;                                         // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_wake_side_R;                                         // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_nest;                                          // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_mast;                                          // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_FL;                                            // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_FR;                                            // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_rope_front;                                    // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_brig_03;                                       // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_brig_02;                                       // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_rope_back;                                     // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_brig_01;                                       // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_cabin_04;                                      // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_cabin_03;                                      // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_cabin_02;                                      // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_cabin_01;                                      // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_smallship_global;                              // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioPortalComponent*                       DeckGrille;                                                // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioPortalComponent*                       BrigDeck;                                                  // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioPortalComponent*                       CaptainsCabin_Left;                                        // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioPortalComponent*                       CaptainsCabin_Right;                                       // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioPortalComponent*                       CaptainsCabin_Back;                                        // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioPortalComponent*                       TopToCaptainsCabin;                                        // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_AudioBoatSmallHullAmbi.BP_AudioBoatSmallHullAmbi_C");
		return ptr;
	}



	void UserConstructionScript();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
