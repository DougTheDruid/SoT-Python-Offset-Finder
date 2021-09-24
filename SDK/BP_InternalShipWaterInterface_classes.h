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

// BlueprintGeneratedClass BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBP_InternalShipWaterInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C");
		return ptr;
	}



	void GetLineIntersectionFromPlane(const struct FVector& LineStart, const struct FVector& LineEnd, bool* Intersect, struct FVector* IntersectionPoint);
	void GetDistanceFromPlane(const struct FVector& Location, float* Distance);
	void GetWaterLevel(float* WaterLevel);
	void AddWater(float Water_Amount);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
