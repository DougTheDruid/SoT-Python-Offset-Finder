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

// BlueprintGeneratedClass BP_tls_bucket_bdg_01_a_Wieldable.BP_tls_bucket_bdg_01_a_Wieldable_C
// 0x0000 (FullSize[0x08E0] - InheritedSize[0x08E0])
class ABP_tls_bucket_bdg_01_a_Wieldable_C : public ABP_Bucket_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_tls_bucket_bdg_01_a_Wieldable.BP_tls_bucket_bdg_01_a_Wieldable_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
