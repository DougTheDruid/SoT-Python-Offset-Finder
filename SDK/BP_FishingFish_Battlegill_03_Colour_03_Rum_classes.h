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

// BlueprintGeneratedClass BP_FishingFish_Battlegill_03_Colour_03_Rum.BP_FishingFish_Battlegill_03_Colour_03_Rum_C
// 0x0000 (FullSize[0x0920] - InheritedSize[0x0920])
class ABP_FishingFish_Battlegill_03_Colour_03_Rum_C : public ABP_FishingFish_Battlegill_03_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_FishingFish_Battlegill_03_Colour_03_Rum.BP_FishingFish_Battlegill_03_Colour_03_Rum_C");
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
