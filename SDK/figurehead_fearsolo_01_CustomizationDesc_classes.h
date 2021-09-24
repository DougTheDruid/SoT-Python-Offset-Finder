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

// BlueprintGeneratedClass figurehead_fearsolo_01_CustomizationDesc.figurehead_fearsolo_01_CustomizationDesc_C
// 0x0000 (FullSize[0x0108] - InheritedSize[0x0108])
class Ufigurehead_fearsolo_01_CustomizationDesc_C : public UShipCustomizationDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass figurehead_fearsolo_01_CustomizationDesc.figurehead_fearsolo_01_CustomizationDesc_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
