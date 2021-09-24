#pragma once

// Name: SoT, Version: 2.3.0.Brig


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

// BlueprintGeneratedClass BP_SirenTrident_ItemInfo.BP_SirenTrident_ItemInfo_C
// 0x0008 (FullSize[0x0518] - InheritedSize[0x0510])
class ABP_SirenTrident_ItemInfo_C : public ANonStorableItemInfo
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_SirenTrident_ItemInfo.BP_SirenTrident_ItemInfo_C");
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
