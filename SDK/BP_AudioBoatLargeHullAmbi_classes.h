#pragma once

// Name: SoT, Version: 2.2.1.1


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

// BlueprintGeneratedClass BP_AudioBoatLargeHullAmbi.BP_AudioBoatLargeHullAmbi_C
// 0x01C0 (FullSize[0x0710] - InheritedSize[0x0550])
class ABP_AudioBoatLargeHullAmbi_C : public AShipHullAudio
{
public:
	class UTritonComponent*                            Triton;                                                    // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_StrainEmitter;                                   // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Wake_Bow;                                        // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Water_Wash_Front_Right;                          // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Water_Wash_Front_Left;                           // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Water_Wash_Bow;                                  // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Water_Wash_Back_Right;                           // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Water_Wash_Back_Left;                            // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Wake_Stern;                                      // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_TopDeck_Side_Right;                        // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_TopDeck_Side_Left;                         // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_TopDeck_PitchRoll;                         // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_TopDeck_Front_Top;                         // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_TopDeck_Front_Right;                       // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_TopDeck_Back_Left;                         // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_TopDeck_Bow_Rope;                          // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_TopDeck_Bow_Bottom;                        // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_TopDeck_Back_Rope;                         // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_TopDeck_Back_Right;                        // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_TopDeck_Front_Left;                        // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_Mast_Mizzen_Base;                          // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_Mast_Mizzen_Sail2;                         // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_Mast_Mizzen_Sail1;                         // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_Mast_Main_Sail1;                           // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_Mast_Main_Sail3;                           // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_Mast_Main_Sail2;                           // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_Mast_Main_Base;                            // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_Mast_Fore_Base;                            // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_Mast_Fore_Sail2;                           // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_Mast_Fore_Sail1;                           // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_MapDeck_Pillar_Mid_Right;                  // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_MapDeck_Pillar_Front_Right;                // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_MapDeck_Pillar_Front_Left;                 // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_MapDeck_Pillar_Back_Right;                 // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_MapDeck_Pillar_Mid_Left;                   // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_MapDeck_Mast_Mizzen;                       // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_MapDeck_Mast_Main;                         // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_MapDeck_Mast_Fore;                         // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_MapDeck_Pillar_Back_Left;                  // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_Captain_Back_Left;                         // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_Captain_Lamp;                              // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_Captain_Front_Right;                       // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_Captain_Front_Left;                        // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_Captain_Cage;                              // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_Captain_Back_Right;                        // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_BrigDeck_Centre;                           // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_BrigDeck_Pillar_Front_Right;               // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_BrigDeck_Pillar_Front_Left;                // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_BrigDeck_Pillar_Back_Right;                // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Creak_BrigDeck_Pillar_Back_Left;                 // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  ShipAudio_Ambience_BelowDeck;                              // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioPortalComponent*                       LargeBoat_AudioPortal_BrigDeckDoor;                        // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioPortalComponent*                       LargeBoat_AudioPortal_MapDeckStairs;                       // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioPortalComponent*                       LargeBoat_AudioPortal_MapDeckGrille;                       // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioPortalComponent*                       LargeBoat_AudioPortal_CaptCab_DeckDoor;                    // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioPortalComponent*                       LargeBoat_AudioPortal_CaptCab_SideDoor;                    // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_AudioBoatLargeHullAmbi.BP_AudioBoatLargeHullAmbi_C");
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
