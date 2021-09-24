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

// BlueprintGeneratedClass BP_Placement_HeightDrop.BP_Placement_HeightDrop_C
// 0x0040 (FullSize[0x0410] - InheritedSize[0x03D0])
class ABP_Placement_HeightDrop_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	bool                                               Drop_Components_to_Floor;                                  // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1D0T[0x3];                                     // 0x03D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Vertical_Displacement;                                     // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Match_Surface_Orientation;                                 // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_J9HA[0x3];                                     // 0x03E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Maximum_Deviation_Angle;                                   // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class USceneComponent*>                     ComponentsToDrop;                                          // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Check_For_Movable_Components;                              // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CreateParentBoundsVolume;                                  // 0x03F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DHBZ[0x2];                                     // 0x03FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ParentBoundsPadding;                                       // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UPhysicalMaterial*>                   Physical_Materials_To_Ignore;                              // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Placement_HeightDrop.BP_Placement_HeightDrop_C");
		return ptr;
	}



	void CreateComponentList();
	void CreateParentBounds();
	void CheckMobilityState();
	void Get_Valid_Collision(TArray<struct FHitResult>* Hit_Results, bool Hit_Success, class USceneComponent* Current_Component, bool* Return_Value, struct FVector* Impact_Position, struct FVector* Impact_Normal);
	void Drop_Components();
	void UserConstructionScript();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
