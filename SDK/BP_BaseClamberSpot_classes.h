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

// BlueprintGeneratedClass BP_BaseClamberSpot.BP_BaseClamberSpot_C
// 0x0010 (FullSize[0x0600] - InheritedSize[0x05F0])
class ABP_BaseClamberSpot_C : public AClamberSpot
{
public:
	TArray<struct FVector>                             ClamberSplinePoints;                                       // 0x05F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_BaseClamberSpot.BP_BaseClamberSpot_C");
		return ptr;
	}



	void SetupClamberSpline();
	void UserConstructionScript();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
