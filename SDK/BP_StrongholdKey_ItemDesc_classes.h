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

// BlueprintGeneratedClass BP_StrongholdKey_ItemDesc.BP_StrongholdKey_ItemDesc_C
// 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
class UBP_StrongholdKey_ItemDesc_C : public UItemWithoutIconsDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_StrongholdKey_ItemDesc.BP_StrongholdKey_ItemDesc_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
