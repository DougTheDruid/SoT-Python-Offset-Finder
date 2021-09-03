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

// Class SpireFramework.HeightTriggerableAudioComponentParams
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UHeightTriggerableAudioComponentParams : public UDataAsset
{
public:
	class UWwiseObjectPoolWrapper*                     Pool;                                                      // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 RisingOneShot;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 RisingStart;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 RisingStop;                                                // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 LoweringStart;                                             // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 LoweringStop;                                              // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpireFramework.HeightTriggerableAudioComponentParams");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SpireFramework.HeightTriggerableEffectsComponent
// 0x0090 (FullSize[0x0158] - InheritedSize[0x00C8])
class UHeightTriggerableEffectsComponent : public UActorComponent
{
public:
	class UHeightTriggerableAudioComponentParams*      AudioParams;                                               // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActorComponentSelector                     EmitterOwner;                                              // 0x00D0(0x0010) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FVector                                     EmitterOffset;                                             // 0x00E0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UseParentEmitter;                                          // 0x00EC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5ZZ2[0x3];                                     // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RisingAudioTriggerValue;                                   // 0x00F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MJ61[0x4];                                     // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CameraShake;                                               // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              ShakeInnerRadius;                                          // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ShakeOuterRadius;                                          // 0x0104(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_D551[0x50];                                    // 0x0108(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpireFramework.HeightTriggerableEffectsComponent");
		return ptr;
	}



	void SetMovementDirection(TEnumAsByte<SpireFramework_EDirectionOfMovement> InMovement);
	void AfterRead();
	void BeforeDelete();

};

// Class SpireFramework.SpireResource
// 0x0008 (FullSize[0x03D8] - InheritedSize[0x03D0])
class ASpireResource : public AActor
{
public:
	unsigned char                                      UnknownData_RCSA[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpireFramework.SpireResource");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SpireFramework.SpireServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USpireServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpireFramework.SpireServiceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SpireFramework.SpireServiceParams
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class USpireServiceParams : public UDataAsset
{
public:
	class UActorSpawnData*                             LowerFakeSpire;                                            // 0x0028(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpireFramework.SpireServiceParams");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SpireFramework.SpireService
// 0x0098 (FullSize[0x0468] - InheritedSize[0x03D0])
class ASpireService : public AActor
{
public:
	unsigned char                                      UnknownData_XU97[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USpireServiceParams*                         Params;                                                    // 0x03D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FServerSpireInfo>                    ServerOnlySpireInfo;                                       // 0x03E0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FSpireInfo>                          SpireLevels;                                               // 0x03F0(0x0010) (Net, ZeroConstructor, RepNotify)
	unsigned char                                      UnknownData_60QL[0x68];                                    // 0x0400(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpireFramework.SpireService");
		return ptr;
	}



	void OnRep_SpireLevels(TArray<struct FSpireInfo> InPreviousSpireLevels);
	void AfterRead();
	void BeforeDelete();

};

// Class SpireFramework.SpireStreamedLevelDataAsset
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class USpireStreamedLevelDataAsset : public UDataAsset
{
public:
	class UAthenaStreamedLevelDataAsset*               StreamedLevel;                                             // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSpireEntry>                         Entries;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       FeatureToggle;                                             // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpireFramework.SpireStreamedLevelDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SpireFramework.SpireSettingsInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USpireSettingsInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpireFramework.SpireSettingsInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SpireFramework.SpireShippingDrawDebugActorSphereCollection
// 0x0010 (FullSize[0x03F0] - InheritedSize[0x03E0])
class ASpireShippingDrawDebugActorSphereCollection : public AShippingDebugActorSphereCollection
{
public:
	TArray<TWeakObjectPtr<class ASpireResource>>       SpireList;                                                 // 0x03E0(0x0010) (ZeroConstructor, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpireFramework.SpireShippingDrawDebugActorSphereCollection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SpireFramework.TaleLoadSpireStep
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UTaleLoadSpireStep : public UTaleQuestStep
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpireFramework.TaleLoadSpireStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SpireFramework.TaleSpireService
// 0x0038 (FullSize[0x0098] - InheritedSize[0x0060])
class UTaleSpireService : public UTaleQuestService
{
public:
	unsigned char                                      UnknownData_K5CP[0x38];                                    // 0x0060(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpireFramework.TaleSpireService");
		return ptr;
	}



	void RegisterResetMechanismInterface(class AActor* InMechanismResetInterface);
	void AfterRead();
	void BeforeDelete();

};

// Class SpireFramework.TaleSpireServiceDesc
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTaleSpireServiceDesc : public UTaleQuestServiceDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpireFramework.TaleSpireServiceDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SpireFramework.TaleLoadSpireStepDesc
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTaleLoadSpireStepDesc : public UTaleQuestStepDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpireFramework.TaleLoadSpireStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SpireFramework.TaleMakeSpireVisibleStep
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UTaleMakeSpireVisibleStep : public UTaleQuestStep
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpireFramework.TaleMakeSpireVisibleStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SpireFramework.TaleMakeSpireVisibleStepDesc
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTaleMakeSpireVisibleStepDesc : public UTaleQuestStepDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpireFramework.TaleMakeSpireVisibleStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SpireFramework.TaleRegisterSpireStep
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UTaleRegisterSpireStep : public UTaleQuestStep
{
public:
	class UTaleRegisterSpireStepDesc*                  StepDesc;                                                  // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LJ6J[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpireFramework.TaleRegisterSpireStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SpireFramework.TaleRegisterSpireStepDesc
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UTaleRegisterSpireStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableVector                        SelectionOriginPoint;                                      // 0x0030(0x0010) (Edit)
	struct FQuestVariableFloat                         PlayerExclusionSelectionRadius;                            // 0x0040(0x0010) (Edit)
	struct FQuestVariableTaleResourceHandle            AllocatedSpireHandle;                                      // 0x0050(0x0010) (Edit)
	struct FQuestVariableVector                        AllocatedSpireLocation;                                    // 0x0060(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpireFramework.TaleRegisterSpireStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SpireFramework.TaleReleaseSpireStep
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UTaleReleaseSpireStep : public UTaleQuestStep
{
public:
	class UTaleReleaseSpireStepDesc*                   StepDesc;                                                  // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ICK1[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpireFramework.TaleReleaseSpireStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SpireFramework.TaleReleaseSpireStepDesc
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UTaleReleaseSpireStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableTaleResourceHandle            SpireHandle;                                               // 0x0030(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpireFramework.TaleReleaseSpireStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SpireFramework.TaleUnloadSpireStep
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UTaleUnloadSpireStep : public UTaleQuestStep
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpireFramework.TaleUnloadSpireStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SpireFramework.TaleUnloadSpireStepDesc
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTaleUnloadSpireStepDesc : public UTaleQuestStepDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpireFramework.TaleUnloadSpireStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SpireFramework.TaleWaitForSpireToLoadStep
// 0x0050 (FullSize[0x00D8] - InheritedSize[0x0088])
class UTaleWaitForSpireToLoadStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData_I0HT[0x50];                                    // 0x0088(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpireFramework.TaleWaitForSpireToLoadStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SpireFramework.TaleWaitForSpireToLoadStepDesc
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTaleWaitForSpireToLoadStepDesc : public UTaleQuestStepDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpireFramework.TaleWaitForSpireToLoadStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
