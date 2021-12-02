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

// BlueprintGeneratedClass CapuchinMonkeyCustomizationCategory.CapuchinMonkeyCustomizationCategory_C
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UCapuchinMonkeyCustomizationCategory_C : public UMonkeyCustomizationCategory_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CapuchinMonkeyCustomizationCategory.CapuchinMonkeyCustomizationCategory_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
