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

// BlueprintGeneratedClass ClusterDesc_5Items_3Wood2FruitSpecial.ClusterDesc_5Items_3Wood2FruitSpecial_C
// 0x0000 (FullSize[0x0150] - InheritedSize[0x0150])
class UClusterDesc_5Items_3Wood2FruitSpecial_C : public UClusterDescription
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ClusterDesc_5Items_3Wood2FruitSpecial.ClusterDesc_5Items_3Wood2FruitSpecial_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
