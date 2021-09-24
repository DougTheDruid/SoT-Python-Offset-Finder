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

// BlueprintGeneratedClass Title_OOS_08_MysticCaptain.Title_OOS_08_MysticCaptain_C
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UTitle_OOS_08_MysticCaptain_C : public UTitleDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Title_OOS_08_MysticCaptain.Title_OOS_08_MysticCaptain_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
