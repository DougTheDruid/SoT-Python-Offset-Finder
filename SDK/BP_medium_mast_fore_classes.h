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

// BlueprintGeneratedClass BP_medium_mast_fore.BP_medium_mast_fore_C
// 0x0018 (FullSize[0x0A10] - InheritedSize[0x09F8])
class ABP_medium_mast_fore_C : public ABP_Mast_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x09F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        shp_flag_pennant_pole_01_a;                                // 0x0A00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        shp_flag_pennant_alliance_01_a;                            // 0x0A08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_medium_mast_fore.BP_medium_mast_fore_C");
		return ptr;
	}



	void UserConstructionScript();
	void OnMastDescLoaded(class UMastDescAsset* MastDesc);
	void ExecuteUbergraph_BP_medium_mast_fore(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
