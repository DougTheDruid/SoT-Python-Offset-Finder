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

// BlueprintGeneratedClass Emote_MainHandScaredWeaponPose_Desc.Emote_MainHandScaredWeaponPose_Desc_C
// 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
class UEmote_MainHandScaredWeaponPose_Desc_C : public UEmoteFlourishDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Emote_MainHandScaredWeaponPose_Desc.Emote_MainHandScaredWeaponPose_Desc_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
