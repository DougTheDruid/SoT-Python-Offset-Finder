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

// BlueprintGeneratedClass BP_TT8_Rank_RevengeOfTheMorningstar.BP_TT8_Rank_RevengeOfTheMorningstar_C
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UBP_TT8_Rank_RevengeOfTheMorningstar_C : public UTaleRankDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_TT8_Rank_RevengeOfTheMorningstar.BP_TT8_Rank_RevengeOfTheMorningstar_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
