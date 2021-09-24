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

// BlueprintGeneratedClass AD_ThirdPerson_PlayerPirate_Male_Default.AD_ThirdPerson_PlayerPirate_Male_Default_C
// 0x0700 (FullSize[0x0750] - InheritedSize[0x0050])
class UAD_ThirdPerson_PlayerPirate_Male_Default_C : public UAthenaAnimationThirdPersonAnimationData
{
public:
	struct FADS_IdlesNative                            Idles;                                                     // 0x0050(0x0010) (Edit, BlueprintVisible)
	struct FADS_LocomotionNative                       Locomotion;                                                // 0x0060(0x0050) (Edit, BlueprintVisible)
	struct FADS_LocomotionAlternateNative              LocomotionAlternate;                                       // 0x00B0(0x0140) (Edit, BlueprintVisible)
	struct FADS_JumpingNative                          Jumping;                                                   // 0x01F0(0x0078) (Edit, BlueprintVisible)
	struct FADS_SwimmingNative                         Swimming;                                                  // 0x0268(0x0068) (Edit, BlueprintVisible)
	struct FADS_WheelNative                            Wheel;                                                     // 0x02D0(0x0088) (Edit, BlueprintVisible)
	struct FADS_CapstanNative                          Capstan;                                                   // 0x0358(0x0068) (Edit, BlueprintVisible)
	struct FADS_LadderNative                           Ladder;                                                    // 0x03C0(0x0068) (Edit, BlueprintVisible)
	struct FADS_ObjectsNative                          Items;                                                     // 0x0428(0x0010) (Edit, BlueprintVisible)
	struct FADS_CannonNative                           Cannon;                                                    // 0x0438(0x0038) (Edit, BlueprintVisible)
	struct FADS_HarpoonLauncherNative                  HarpoonLauncher;                                           // 0x0470(0x0028) (Edit, BlueprintVisible)
	struct FADS_Sockets                                Sockets;                                                   // 0x0498(0x0002) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData_JRY4[0x6];                                     // 0x049A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FADS_FacialNative                           Facial;                                                    // 0x04A0(0x0088) (Edit, BlueprintVisible)
	struct FADS_IKFootPlantingNative                   IkFootPlanting;                                            // 0x0528(0x0028) (Edit, BlueprintVisible)
	struct FADS_HitReactsNative                        HitReacts;                                                 // 0x0550(0x0040) (Edit, BlueprintVisible)
	struct FADS_MapTableNative                         MapTable;                                                  // 0x0590(0x0030) (Edit, BlueprintVisible)
	struct FADS_SpawnNative2                           Spawning;                                                  // 0x05C0(0x0010) (Edit, BlueprintVisible)
	struct FADS_CharacterSelectNative                  CharacterSelect;                                           // 0x05D0(0x0010) (Edit, BlueprintVisible)
	struct FADS_SkeletonFleeNative                     SkeletonFlee;                                              // 0x05E0(0x0010) (Edit, BlueprintVisible)
	struct FADS_InteractionNative                      ShopInteraction;                                           // 0x05F0(0x0010) (Edit, BlueprintVisible)
	struct FADS_SkeletonSensing                        SkeletonSensing;                                           // 0x0600(0x0010) (Edit, BlueprintVisible)
	struct FADS_SkeletonEmoteActions                   SkeletonActionEmotes;                                      // 0x0610(0x0010) (Edit, BlueprintVisible)
	struct FADS_RowingBoatNative                       Rowboat;                                                   // 0x0620(0x0098) (Edit, BlueprintVisible)
	struct FADS_SkeletonCaptainNative                  SkeletonShipCaptain;                                       // 0x06B8(0x0048) (Edit, BlueprintVisible)
	struct FADS_SkeletonCurseNative                    SkeletonCurse;                                             // 0x0700(0x0028) (Edit, BlueprintVisible)
	struct FADS_WaterPumpNative                        WaterPump;                                                 // 0x0728(0x0028) (Edit, BlueprintVisible)


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
