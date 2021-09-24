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

// BlueprintGeneratedClass BP_TT_SL3_Rank_COTD.BP_TT_SL3_Rank_COTD_C
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UBP_TT_SL3_Rank_COTD_C : public UTaleRankDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_TT_SL3_Rank_COTD.BP_TT_SL3_Rank_COTD_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
