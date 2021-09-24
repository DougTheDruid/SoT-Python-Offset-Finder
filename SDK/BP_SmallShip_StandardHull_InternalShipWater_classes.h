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

// BlueprintGeneratedClass BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C
// 0x0018 (FullSize[0x0638] - InheritedSize[0x0620])
class ABP_SmallShip_StandardHull_InternalShipWater_C : public AShipInternalWater
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0620(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDynamicFlowComponent*                       DynamicFlow;                                               // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UCurveFloat*                                 Foaminess;                                                 // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C");
		return ptr;
	}



	void GetLineIntersectionFromPlane(const struct FVector& LineStart, const struct FVector& LineEnd, bool* Intersect, struct FVector* IntersectionPoint);
	void GetWaterLevel(float* WaterLevel);
	void GetDistanceFromPlane(const struct FVector& Location, float* Distance);
	void UserConstructionScript();
	void AddWater(float Water_Amount);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SmallShip_StandardHull_InternalShipWater(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
