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

// BlueprintGeneratedClass Liv_Hair_ColorClothingCategory.Liv_Hair_ColorClothingCategory_C
// 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
class ULiv_Hair_ColorClothingCategory_C : public UClothingCategory
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Liv_Hair_ColorClothingCategory.Liv_Hair_ColorClothingCategory_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
