#pragma once

// Name: SoT, Version: 2.4.0


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

// Class EnchantedCompass.EnchantedCompassProximityAnnouncementComponent
// 0x0128 (FullSize[0x01F0] - InheritedSize[0x00C8])
class UEnchantedCompassProximityAnnouncementComponent : public UActorComponent
{
public:
	class UWwiseEvent*                                 StartAnnouncingEvent;                                      // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 StopAnnouncingEvent;                                       // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxFrequencyDistanceSquared;                               // 0x00D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_06CK[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      WielderOrientation[0x10];                                  // 0x00DC(0x0010) UNKNOWN PROPERTY: InterfaceProperty EnchantedCompass.EnchantedCompassProximityAnnouncementComponent.WielderOrientation
	unsigned char                                      WielderWwiseEmitterInterface[0x10];                        // 0x00F0(0x0010) UNKNOWN PROPERTY: InterfaceProperty EnchantedCompass.EnchantedCompassProximityAnnouncementComponent.WielderWwiseEmitterInterface
	unsigned char                                      OwnerWieldableInterface[0x10];                             // 0x0100(0x0010) UNKNOWN PROPERTY: InterfaceProperty EnchantedCompass.EnchantedCompassProximityAnnouncementComponent.OwnerWieldableInterface
	unsigned char                                      ObjectMessagingDispatcher[0x10];                           // 0x0110(0x0010) UNKNOWN PROPERTY: InterfaceProperty EnchantedCompass.EnchantedCompassProximityAnnouncementComponent.ObjectMessagingDispatcher
	bool                                               IsSettingEnabled;                                          // 0x0120(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5WWM[0xCF];                                    // 0x0121(0x00CF) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EnchantedCompass.EnchantedCompassProximityAnnouncementComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EnchantedCompass.MultiTargetEnchantedCompass
// 0x0030 (FullSize[0x08A0] - InheritedSize[0x0870])
class AMultiTargetEnchantedCompass : public ACompass
{
public:
	TArray<struct FVector>                             Locations;                                                 // 0x0870(0x0010) (Edit, Net, ZeroConstructor, Transient, EditConst)
	TArray<struct FGuid>                               LocationIds;                                               // 0x0880(0x0010) (ZeroConstructor, Transient)
	class UInventoryItemComponent*                     InventoryItem;                                             // 0x0890(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEnchantedCompassProximityAnnouncementComponent* ProximityAnnouncementComponent;                            // 0x0898(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EnchantedCompass.MultiTargetEnchantedCompass");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EnchantedCompass.PrototypeMultiTargetEnchantedCompass
// 0x0000 (FullSize[0x08A0] - InheritedSize[0x08A0])
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
	unsigned char                                      UnknownData_6MYV[0x10];                                    // 0x0090(0x0010) MISSED OFFSET (PADDING)


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
	unsigned char                                      UnknownData_3DR8[0x20];                                    // 0x0120(0x0020) MISSED OFFSET (PADDING)


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
	unsigned char                                      UnknownData_SGKQ[0x20];                                    // 0x0090(0x0020) MISSED OFFSET (PADDING)


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
	unsigned char                                      UnknownData_77T7[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (PADDING)


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
