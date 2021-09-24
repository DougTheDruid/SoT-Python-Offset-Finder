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

// BlueprintGeneratedClass BP_Shipwreck_01_a_NetProxy.BP_Shipwreck_01_a_NetProxy_C
// 0x0000 (FullSize[0x0400] - InheritedSize[0x0400])
class ABP_Shipwreck_01_a_NetProxy_C : public ANetProxy
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Shipwreck_01_a_NetProxy.BP_Shipwreck_01_a_NetProxy_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
