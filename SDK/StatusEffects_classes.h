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

// Class StatusEffects.StatusBase
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UStatusBase : public UObject
{
public:
	unsigned char                                      UnknownData_J2CI[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.StatusBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusResponse
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UStatusResponse : public UObject
{
public:
	unsigned char                                      UnknownData_YLQZ[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.StatusResponse");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.ActivateableSurfaceMaterialStatusZoneInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UActivateableSurfaceMaterialStatusZoneInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.ActivateableSurfaceMaterialStatusZoneInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.AppliedStatusToSelfStatCondition
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UAppliedStatusToSelfStatCondition : public UTargetedStatCondition
{
public:
	TArray<class UClass*>                              Status;                                                    // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)
	TEnumAsByte<StatusEffects_EStatusComparisonMode>   ComparisonMode;                                            // 0x0040(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PZAB[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.AppliedStatusToSelfStatCondition");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.BuffReceiverInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBuffReceiverInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.BuffReceiverInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.BuffReceiverComponent
// 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
class UBuffReceiverComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_DT0J[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               CanReceiveBuff;                                            // 0x00D0(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_X133[0x7];                                     // 0x00D1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.BuffReceiverComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.DebugMenuStatusDataAsset
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UDebugMenuStatusDataAsset : public UDataAsset
{
public:
	TArray<struct FDebugMenuStatusDefinition>          StatusDefinitions;                                         // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      Durations;                                                 // 0x0038(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.DebugMenuStatusDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusEffectOverlapZone
// 0x00C8 (FullSize[0x0498] - InheritedSize[0x03D0])
class AStatusEffectOverlapZone : public AActor
{
public:
	unsigned char                                      UnknownData_PBZ8[0xA8];                                    // 0x03D0(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBoxComponent*                               CollisionMesh;                                             // 0x0478(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDelayedStatusEffect>                StatusesToApplyOnOverlap;                                  // 0x0480(0x0010) (Edit, ZeroConstructor)
	bool                                               StartActive;                                               // 0x0490(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_W3O7[0x7];                                     // 0x0491(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.StatusEffectOverlapZone");
		return ptr;
	}



	void OnStatusDelayEnd(int InStatusIndex, class AActor* ActorRef);
	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent
// 0x0020 (FullSize[0x00E8] - InheritedSize[0x00C8])
class UDebugStatusEffectOverlapZoneVisualizerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_Q2DH[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     BoxCollisionDimensions;                                    // 0x00D0(0x000C) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	struct FColor                                      DebugColour;                                               // 0x00DC(0x0004) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               VisibleState;                                              // 0x00E0(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MP92[0x7];                                     // 0x00E1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent");
		return ptr;
	}



	void OnRep_SetDebugDrawColour();
	void OnRep_DebugBoxDimensions();
	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.DebugStatusTicketHolder
// 0x0008 (FullSize[0x03D8] - InheritedSize[0x03D0])
class ADebugStatusTicketHolder : public AActor
{
public:
	class AActor*                                      StatusRecipient;                                           // 0x03D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.DebugStatusTicketHolder");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusEffectCancellationInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStatusEffectCancellationInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.StatusEffectCancellationInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusEffectRecipientInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStatusEffectRecipientInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.StatusEffectRecipientInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusEffectResponseConfigurationInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStatusEffectResponseConfigurationInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.StatusEffectResponseConfigurationInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusEffectSuspensionInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStatusEffectSuspensionInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.StatusEffectSuspensionInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusResponseAsset
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UStatusResponseAsset : public UDataAsset
{
public:
	struct FText                                       HighFrequencyTriggerStatusHelper;                          // 0x0028(0x0018) ELEMENT_SIZE_MISMATCH (Edit, EditConst)
	unsigned char                                      UnknownData_Z1MN[0x20];                                    // 0x0028(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<class UClass*>                              TriggerStatus;                                             // 0x0060(0x0010) (Edit, ZeroConstructor, UObjectWrapper)
	TArray<class UStatusResponse*>                     Responses;                                                 // 0x0070(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.StatusResponseAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusRecipientResponseList
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UStatusRecipientResponseList : public UDataAsset
{
public:
	TArray<class UStatusResponseAsset*>                ResponseAssets;                                            // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FFeatureToggledStatusResponseList>   FeatureToggledResponseLists;                               // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<class UStatusResponseAsset*>                FinalResponseAssets;                                       // 0x0048(0x0010) (ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.StatusRecipientResponseList");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.LightWeightStatusEffectManagerComponent
// 0x0038 (FullSize[0x0100] - InheritedSize[0x00C8])
class ULightWeightStatusEffectManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_LF2Y[0x20];                                    // 0x00C8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStatusRecipientResponseList*                RecipientResponseList;                                     // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FActiveStatusEffect>                 ActiveEffects;                                             // 0x00F0(0x0010) (Net, ZeroConstructor, RepNotify)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.LightWeightStatusEffectManagerComponent");
		return ptr;
	}



	void OnRep_ActiveEffects(TArray<struct FActiveStatusEffect> OldEffects);
	void MultiCast_ApplyOneShotStatus(TArray<struct FActiveStatusEffect> AddedEffects, TArray<struct FActiveStatusEffect> RemovedEffects);
	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.MaterialStatusSusceptibilityInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMaterialStatusSusceptibilityInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.MaterialStatusSusceptibilityInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.SurfaceMaterialStatusZoneInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USurfaceMaterialStatusZoneInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.SurfaceMaterialStatusZoneInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.MaterialStatusSusceptibilityComponent
// 0x0030 (FullSize[0x00F8] - InheritedSize[0x00C8])
class UMaterialStatusSusceptibilityComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_CBSQ[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPhysicalMaterial*                           CurrentSurfaceMaterial;                                    // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      CurrentMaterialStatusZone[0x10];                           // 0x00D8(0x0010) UNKNOWN PROPERTY: InterfaceProperty StatusEffects.MaterialStatusSusceptibilityComponent.CurrentMaterialStatusZone
	unsigned char                                      UnknownData_FMRG[0x10];                                    // 0x00E8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.MaterialStatusSusceptibilityComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.SphericalStatusEffectZone
// 0x00C0 (FullSize[0x0490] - InheritedSize[0x03D0])
class ASphericalStatusEffectZone : public AActor
{
public:
	unsigned char                                      UnknownData_MYJJ[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UActorActivationComponent*                   ActorActivationComponent;                                  // 0x03D8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            SphereComponent;                                           // 0x03E0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStatusEffectVolumeComponent*                StatusEffectVolumeComponent;                               // 0x03E8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Q9TP[0xA0];                                    // 0x03F0(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.SphericalStatusEffectZone");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusApplicationDesc
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UStatusApplicationDesc : public UObject
{
public:
	struct FEventAppliedStatusToTargets                ApplicationEvent;                                          // 0x0028(0x0020)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.StatusApplicationDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusApplicationMonitorComponent
// 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
class UStatusApplicationMonitorComponent : public UActorComponent
{
public:
	class UClass*                                      StatusApplicationTrigger;                                  // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.StatusApplicationMonitorComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusEffectHelperFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStatusEffectHelperFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.StatusEffectHelperFunctionLibrary");
		return ptr;
	}



	void STATIC_ApplyOneShotStatus(class AActor* Recipient, const struct FStatus& Status);
	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusEffectTicketDispenserInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStatusEffectTicketDispenserInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.StatusEffectTicketDispenserInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusEffectManagerComponent
// 0x0040 (FullSize[0x0108] - InheritedSize[0x00C8])
class UStatusEffectManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_D1JS[0x28];                                    // 0x00C8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStatusRecipientResponseList*                RecipientResponseList;                                     // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FActiveStatusEffect>                 ActiveEffects;                                             // 0x00F8(0x0010) (Net, ZeroConstructor, RepNotify)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.StatusEffectManagerComponent");
		return ptr;
	}



	void OnRep_ActiveEffects(TArray<struct FActiveStatusEffect> OldEffects);
	void MultiCast_ApplyOneShotStatus(TArray<struct FActiveStatusEffect> AddedEffects, TArray<struct FActiveStatusEffect> RemovedEffects);
	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusEffectPersistenceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStatusEffectPersistenceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.StatusEffectPersistenceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusEffectPersistenceComponent
// 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
class UStatusEffectPersistenceComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_HYV0[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.StatusEffectPersistenceComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusEffectsSettings
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UStatusEffectsSettings : public UDeveloperSettings
{
public:
	struct FStringAssetReference                       DebugMenuStatusDefinitionsDataAsset;                       // 0x0038(0x0010) (Edit, ZeroConstructor, Config)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.StatusEffectsSettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusEffectVolumeComponent
// 0x0020 (FullSize[0x02D0] - InheritedSize[0x02B0])
class UStatusEffectVolumeComponent : public USceneComponent
{
public:
	bool                                               UseOverlapEventsFromParentComponent;                       // 0x02B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1P7E[0x7];                                     // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FStatus>                             StatusEffectsToMaintain;                                   // 0x02B8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData_2MSW[0x8];                                     // 0x02C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.StatusEffectVolumeComponent");
		return ptr;
	}



	void UnaffectActor(class AActor* Actor);
	void OnParentComponentEndOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnParentComponentBeginOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void AffectActor(class AActor* Actor);
	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.SetCanReceiveBuffStatusResponse
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class USetCanReceiveBuffStatusResponse : public UStatusResponse
{
public:
	bool                                               LockBuffReceiver;                                          // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               RevertOnDeactivate;                                        // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_54YM[0x6];                                     // 0x0032(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.SetCanReceiveBuffStatusResponse");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusResponseNull
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UStatusResponseNull : public UStatusResponse
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StatusEffects.StatusResponseNull");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
