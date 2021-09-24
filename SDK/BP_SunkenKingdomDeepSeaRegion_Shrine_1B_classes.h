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

// BlueprintGeneratedClass BP_SunkenKingdomDeepSeaRegion_Shrine_1B.BP_SunkenKingdomDeepSeaRegion_Shrine_1B_C
// 0x0008 (FullSize[0x0428] - InheritedSize[0x0420])
class ABP_SunkenKingdomDeepSeaRegion_Shrine_1B_C : public ADeepSeaRegion
{
public:
	class UCapsuleComponent*                           Capsule;                                                   // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_SunkenKingdomDeepSeaRegion_Shrine_1B.BP_SunkenKingdomDeepSeaRegion_Shrine_1B_C");
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
