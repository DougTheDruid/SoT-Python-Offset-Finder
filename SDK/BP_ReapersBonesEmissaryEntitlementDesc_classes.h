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

// BlueprintGeneratedClass BP_ReapersBonesEmissaryEntitlementDesc.BP_ReapersBonesEmissaryEntitlementDesc_C
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UBP_ReapersBonesEmissaryEntitlementDesc_C : public UEmissaryEntitlementDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ReapersBonesEmissaryEntitlementDesc.BP_ReapersBonesEmissaryEntitlementDesc_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
