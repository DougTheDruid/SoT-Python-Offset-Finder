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

// Class LiquidContainer.LiquidContainerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULiquidContainerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiquidContainer.LiquidContainerInterface");
		return ptr;
	}



	void SetLiquidLevel(float Level);
	float GetWantedLiquidLevel();
	float GetMaxLiquidCollectionAmount();
	float GetLiquidLevel();
	float CollectLiquidAmount(float DesiredAmount);
	void AfterRead();
	void BeforeDelete();

};

// Class LiquidContainer.LiquidContainerComponent
// 0x0060 (FullSize[0x0128] - InheritedSize[0x00C8])
class ULiquidContainerComponent : public UActorComponent
{
public:
	struct FName                                       LiquidMaterialName;                                        // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       LiquidMaterialParameterName;                               // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLiquidTypeParams>                   LiquidTypeParams;                                          // 0x00D8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              StartingLiquidLevelNormalised;                             // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SJKR[0x4];                                     // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 TransitionCurve;                                           // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TransitionSpeedDecrease;                                   // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TransitionSpeedIncrease;                                   // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>            LiquidMaterials;                                           // 0x0100(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_QPO5[0x18];                                    // 0x0110(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiquidContainer.LiquidContainerComponent");
		return ptr;
	}



	void SetLiquidType(TEnumAsByte<LiquidContainer_ELiquidType> LiquidType);
	void SetLiquidLevel(float Level);
	float GetLiquidLevel();
	void CollectLiquidMaterials(class UMeshComponent* MeshComponent);
	void AfterRead();
	void BeforeDelete();

};

// Class LiquidContainer.LiquidContainerServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULiquidContainerServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiquidContainer.LiquidContainerServiceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LiquidContainer.LiquidContainerService
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class ULiquidContainerService : public UInteractableService
{
public:
	unsigned char                                      UnknownData_BFR7[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiquidContainer.LiquidContainerService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
