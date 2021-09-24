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

// BlueprintGeneratedClass TallTale2_2HeartOfFire_IslandEventType.TallTale2-2HeartOfFire_IslandEventType_C
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UTallTale2_2HeartOfFire_IslandEventType_C : public UTallTaleIslandEventType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TallTale2_2HeartOfFire_IslandEventType.TallTale2-2HeartOfFire_IslandEventType_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
