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

// Class EnchantedCompass.MultiTargetEnchantedCompass
// 0x0030 (FullSize[0x0880] - InheritedSize[0x0850])
class AMultiTargetEnchantedCompass : public ACompass
{
public:
	TArray<struct FVector>                             Locations;                                                 // 0x0850(0x0010) (Edit, Net, ZeroConstructor, Transient, EditConst)
	TArray<struct FGuid>                               LocationIds;                                               // 0x0860(0x0010) (ZeroConstructor, Transient)
	class UInventoryItemComponent*                     InventoryItem;                                             // 0x0870(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ERLY[0x8];                                     // 0x0878(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EnchantedCompass.MultiTargetEnchantedCompass");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EnchantedCompass.PrototypeMultiTargetEnchantedCompass
// 0x0000 (FullSize[0x0880] - InheritedSize[0x0880])
class APrototypeMultiTargetEnchantedCompass : public AMultiTargetEnchantedCompass
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EnchantedCompass.PrototypeMultiTargetEnchantedCompass");
		return ptr;
	}



	float GetFloatMax();
	float CalculateDesiredYaw(const struct FRotator& CompassRotation);
	TArray<struct FVector> BP_GetTargetLocations();
	void AfterRead();
	void BeforeDelete();

};

// Class EnchantedCompass.TaleQuestMultiTargetCompassAddTrackedLocationStep
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UTaleQuestMultiTargetCompassAddTrackedLocationStep : public UTaleQuestStep
{
public:
	class UTaleQuestMultiTargetCompassAddTrackedLocationStepDesc* Desc;                                                      // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EnchantedCompass.TaleQuestMultiTargetCompassAddTrackedLocationStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EnchantedCompass.TaleQuestMultiTargetCompassAddTrackedLocationStepDesc
// 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
class UTaleQuestMultiTargetCompassAddTrackedLocationStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableVector                        Location;                                                  // 0x0080(0x0010)
	struct FQuestVariableGuid                          TargetID;                                                  // 0x0090(0x0010)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EnchantedCompass.TaleQuestMultiTargetCompassAddTrackedLocationStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EnchantedCompass.TaleQuestMultiTargetCompassRemoveTrackedLocationStep
// 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
class UTaleQuestMultiTargetCompassRemoveTrackedLocationStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData_IMHR[0x10];                                    // 0x0090(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EnchantedCompass.TaleQuestMultiTargetCompassRemoveTrackedLocationStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EnchantedCompass.TaleQuestMultiTargetCompassRemoveTrackedLocationStepDesc
// 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
class UTaleQuestMultiTargetCompassRemoveTrackedLocationStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableGuid                          TargetID;                                                  // 0x0080(0x0010) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EnchantedCompass.TaleQuestMultiTargetCompassRemoveTrackedLocationStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EnchantedCompass.TaleQuestMultiTargetCompassService
// 0x0020 (FullSize[0x0140] - InheritedSize[0x0120])
class UTaleQuestMultiTargetCompassService : public UTaleQuestToolService
{
public:
	unsigned char                                      UnknownData_0MJK[0x20];                                    // 0x0120(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EnchantedCompass.TaleQuestMultiTargetCompassService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EnchantedCompass.TaleQuestMultiTargetCompassServiceDesc
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UTaleQuestMultiTargetCompassServiceDesc : public UTaleQuestToolServiceDesc
{
public:
	class UClass*                                      CompassDesc;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EnchantedCompass.TaleQuestMultiTargetCompassServiceDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EnchantedCompass.TaleQuestSetCompassTargetToTargetStep
// 0x0020 (FullSize[0x00B0] - InheritedSize[0x0090])
class UTaleQuestSetCompassTargetToTargetStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData_WVY9[0x20];                                    // 0x0090(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EnchantedCompass.TaleQuestSetCompassTargetToTargetStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EnchantedCompass.TaleQuestSetCompassTargetBaseStepDesc
// 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
class UTaleQuestSetCompassTargetBaseStepDesc : public UTaleQuestStepDesc
{
public:
	TEnumAsByte<EnchantedCompass_ETargetUpdateReason>  TargetUpdateReason;                                        // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6F2P[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EnchantedCompass.TaleQuestSetCompassTargetBaseStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EnchantedCompass.TaleQuestSetCompassTargetToActorStepDesc
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UTaleQuestSetCompassTargetToActorStepDesc : public UTaleQuestSetCompassTargetBaseStepDesc
{
public:
	struct FQuestVariableActor                         TargetActor;                                               // 0x0088(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EnchantedCompass.TaleQuestSetCompassTargetToActorStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EnchantedCompass.TaleQuestSetCompassTargetToPointStepDesc
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UTaleQuestSetCompassTargetToPointStepDesc : public UTaleQuestSetCompassTargetBaseStepDesc
{
public:
	struct FQuestVariableOrientedPoint                 TargetPoint;                                               // 0x0088(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EnchantedCompass.TaleQuestSetCompassTargetToPointStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
