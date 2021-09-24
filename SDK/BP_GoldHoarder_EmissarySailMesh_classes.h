#pragma once

// Name: SoT, Version: 2.3.0.Brig


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

// BlueprintGeneratedClass BP_GoldHoarder_EmissarySailMesh.BP_GoldHoarder_EmissarySailMesh_C
// 0x0000 (FullSize[0x05F0] - InheritedSize[0x05F0])
class UBP_GoldHoarder_EmissarySailMesh_C : public UEmissaryRepresentationMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_GoldHoarder_EmissarySailMesh.BP_GoldHoarder_EmissarySailMesh_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
