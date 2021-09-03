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

// BlueprintGeneratedClass BP_ForceSpot_Rowboat_Launch.BP_ForceSpot_Rowboat_Launch_C
// 0x0010 (FullSize[0x0570] - InheritedSize[0x0560])
class ABP_ForceSpot_Rowboat_Launch_C : public AForceSpot
{
public:
	TArray<struct FVector>                             InteractionSplinePoints;                                   // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ForceSpot_Rowboat_Launch.BP_ForceSpot_Rowboat_Launch_C");
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
