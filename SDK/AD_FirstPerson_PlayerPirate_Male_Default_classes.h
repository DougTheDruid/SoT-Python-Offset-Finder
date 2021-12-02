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

// BlueprintGeneratedClass AD_FirstPerson_PlayerPirate_Male_Default.AD_FirstPerson_PlayerPirate_Male_Default_C
// 0x0420 (FullSize[0x0488] - InheritedSize[0x0068])
class UAD_FirstPerson_PlayerPirate_Male_Default_C : public UFirstPersonAnimationData
{
public:
	struct FADS_IdlesNative                            Idles;                                                     // 0x0068(0x0010) (Edit, BlueprintVisible)
	struct FADS_LocomotionNative                       Locomotion;                                                // 0x0078(0x0050) (Edit, BlueprintVisible)
	struct FADS_JumpingNative                          Jumping;                                                   // 0x00C8(0x0078) (Edit, BlueprintVisible)
	struct FADS_SwimmingNative                         Swimming;                                                  // 0x0140(0x0068) (Edit, BlueprintVisible)
	struct FADS_WheelNative                            Wheel;                                                     // 0x01A8(0x0088) (Edit, BlueprintVisible)
	struct FADS_CapstanNative                          Capstan;                                                   // 0x0230(0x0068) (Edit, BlueprintVisible)
	struct FADS_CameraAdditiveNative                   CameraAdditive;                                            // 0x0298(0x0050) (Edit, BlueprintVisible)
	struct FADS_ObjectsNative                          Items;                                                     // 0x02E8(0x0010) (Edit, BlueprintVisible)
	struct FADS_Sockets                                Sockets;                                                   // 0x02F8(0x0002) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData_2SGQ[0x6];                                     // 0x02FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FADS_CannonNative                           Cannon;                                                    // 0x0300(0x0038) (Edit, BlueprintVisible)
	struct FADS_RowingBoatNative                       Rowboat;                                                   // 0x0338(0x0098) (Edit, BlueprintVisible)
	struct FADS_WaterPumpNative                        WaterPump;                                                 // 0x03D0(0x0028) (Edit, BlueprintVisible)
	struct FADS_FacialNative                           Facial;                                                    // 0x03F8(0x0090) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AD_FirstPerson_PlayerPirate_Male_Default.AD_FirstPerson_PlayerPirate_Male_Default_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
