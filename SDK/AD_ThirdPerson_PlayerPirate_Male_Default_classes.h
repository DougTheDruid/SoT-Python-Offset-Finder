#pragma once

// Name: SoT, Version: 2.4.0


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

// BlueprintGeneratedClass AD_ThirdPerson_PlayerPirate_Male_Default.AD_ThirdPerson_PlayerPirate_Male_Default_C
// 0x0708 (FullSize[0x0780] - InheritedSize[0x0078])
class UAD_ThirdPerson_PlayerPirate_Male_Default_C : public UAthenaAnimationThirdPersonAnimationData
{
public:
	struct FADS_IdlesNative                            Idles;                                                     // 0x0078(0x0010) (Edit, BlueprintVisible)
	struct FADS_LocomotionNative                       Locomotion;                                                // 0x0088(0x0050) (Edit, BlueprintVisible)
	struct FADS_LocomotionAlternateNative              LocomotionAlternate;                                       // 0x00D8(0x0140) (Edit, BlueprintVisible)
	struct FADS_JumpingNative                          Jumping;                                                   // 0x0218(0x0078) (Edit, BlueprintVisible)
	struct FADS_SwimmingNative                         Swimming;                                                  // 0x0290(0x0068) (Edit, BlueprintVisible)
	struct FADS_WheelNative                            Wheel;                                                     // 0x02F8(0x0088) (Edit, BlueprintVisible)
	struct FADS_CapstanNative                          Capstan;                                                   // 0x0380(0x0068) (Edit, BlueprintVisible)
	struct FADS_LadderNative                           Ladder;                                                    // 0x03E8(0x0068) (Edit, BlueprintVisible)
	struct FADS_ObjectsNative                          Items;                                                     // 0x0450(0x0010) (Edit, BlueprintVisible)
	struct FADS_CannonNative                           Cannon;                                                    // 0x0460(0x0038) (Edit, BlueprintVisible)
	struct FADS_HarpoonLauncherNative                  HarpoonLauncher;                                           // 0x0498(0x0028) (Edit, BlueprintVisible)
	struct FADS_Sockets                                Sockets;                                                   // 0x04C0(0x0002) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData_BWL7[0x6];                                     // 0x04C2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FADS_FacialNative                           Facial;                                                    // 0x04C8(0x0090) (Edit, BlueprintVisible)
	struct FADS_IKFootPlantingNative                   IkFootPlanting;                                            // 0x0558(0x0028) (Edit, BlueprintVisible)
	struct FADS_HitReactsNative                        HitReacts;                                                 // 0x0580(0x0040) (Edit, BlueprintVisible)
	struct FADS_MapTableNative                         MapTable;                                                  // 0x05C0(0x0030) (Edit, BlueprintVisible)
	struct FADS_SpawnNative2                           Spawning;                                                  // 0x05F0(0x0010) (Edit, BlueprintVisible)
	struct FADS_CharacterSelectNative                  CharacterSelect;                                           // 0x0600(0x0010) (Edit, BlueprintVisible)
	struct FADS_SkeletonFleeNative                     SkeletonFlee;                                              // 0x0610(0x0010) (Edit, BlueprintVisible)
	struct FADS_InteractionNative                      ShopInteraction;                                           // 0x0620(0x0010) (Edit, BlueprintVisible)
	struct FADS_SkeletonSensing                        SkeletonSensing;                                           // 0x0630(0x0010) (Edit, BlueprintVisible)
	struct FADS_SkeletonEmoteActions                   SkeletonActionEmotes;                                      // 0x0640(0x0010) (Edit, BlueprintVisible)
	struct FADS_RowingBoatNative                       Rowboat;                                                   // 0x0650(0x0098) (Edit, BlueprintVisible)
	struct FADS_SkeletonCaptainNative                  SkeletonShipCaptain;                                       // 0x06E8(0x0048) (Edit, BlueprintVisible)
	struct FADS_SkeletonCurseNative                    SkeletonCurse;                                             // 0x0730(0x0028) (Edit, BlueprintVisible)
	struct FADS_WaterPumpNative                        WaterPump;                                                 // 0x0758(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AD_ThirdPerson_PlayerPirate_Male_Default.AD_ThirdPerson_PlayerPirate_Male_Default_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
