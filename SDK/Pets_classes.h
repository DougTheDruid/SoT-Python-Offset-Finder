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

// Class Pets.AIPetsOnDemandSpawner
// 0x0000 (FullSize[0x0400] - InheritedSize[0x0400])
class UAIPetsOnDemandSpawner : public UAISpawner
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.AIPetsOnDemandSpawner");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.BTDecorator_IsForcingHangout
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UBTDecorator_IsForcingHangout : public UBTDecorator_BaseConditional
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.BTDecorator_IsForcingHangout");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.BTDecorator_IsOccupiedHangoutSpotStillAvailable
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UBTDecorator_IsOccupiedHangoutSpotStillAvailable : public UBTDecorator_BaseConditional
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.BTDecorator_IsOccupiedHangoutSpotStillAvailable");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.BTDecorator_IsOccupyingHangoutSpotWithGivenId
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
class UBTDecorator_IsOccupyingHangoutSpotWithGivenId : public UBTDecorator_BaseConditional
{
public:
	TArray<struct FHangoutSpotId>                      SuccessIds;                                                // 0x0068(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.BTDecorator_IsOccupyingHangoutSpotWithGivenId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.BTDecorator_IsPerchedInHangout
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UBTDecorator_IsPerchedInHangout : public UBTDecorator_BaseConditional
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.BTDecorator_IsPerchedInHangout");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.BTDecorator_PetFoodSourceAvailable
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UBTDecorator_PetFoodSourceAvailable : public UBTDecorator_BaseConditional
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.BTDecorator_PetFoodSourceAvailable");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.BTDecorator_PetRoamingAnimationStateActive
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
class UBTDecorator_PetRoamingAnimationStateActive : public UBTDecorator_BaseConditional
{
public:
	TArray<TEnumAsByte<Athena_EAthenaAnimationPetRoamingState>> MatchingStates;                                            // 0x0068(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.BTDecorator_PetRoamingAnimationStateActive");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.BTTask_AttachToHangout
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UBTTask_AttachToHangout : public UBTTask_BlackboardBase
{
public:
	float                                              TaskDuration;                                              // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GB25[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.BTTask_AttachToHangout");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.BTTask_ChangeHangoutAnimation
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UBTTask_ChangeHangoutAnimation : public UBTTask_BlackboardBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.BTTask_ChangeHangoutAnimation");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.BTTask_DetachFromHangout
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UBTTask_DetachFromHangout : public UBTTask_BlackboardBase
{
public:
	float                                              TaskDuration;                                              // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RXRC[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.BTTask_DetachFromHangout");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.BTTask_EatFood
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTTask_EatFood : public UBTTaskNode
{
public:
	class UPetFeedingDataAsset*                        FeedingDataAsset;                                          // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.BTTask_EatFood");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.BTTask_GetTotalHangoutTime
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UBTTask_GetTotalHangoutTime : public UBTTask_BlackboardBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.BTTask_GetTotalHangoutTime");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.BTTask_NotifyForcedHangoutComplete
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UBTTask_NotifyForcedHangoutComplete : public UBTTask_BlackboardBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.BTTask_NotifyForcedHangoutComplete");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.BTTask_PetWaitForAnimationRoamingState
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UBTTask_PetWaitForAnimationRoamingState : public UBTTaskNode
{
public:
	TArray<TEnumAsByte<Athena_EAthenaAnimationPetRoamingState>> SuccessRoamingStates;                                      // 0x0060(0x0010) (Edit, ZeroConstructor)
	TArray<TEnumAsByte<Athena_EAthenaAnimationPetRoamingState>> FailRoamingStates;                                         // 0x0070(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.BTTask_PetWaitForAnimationRoamingState");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.BTTask_ReactToOwner
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTTask_ReactToOwner : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData_CEYY[0x8];                                     // 0x0060(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.BTTask_ReactToOwner");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.BTTask_ReactToThreat
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UBTTask_ReactToThreat : public UBTTaskNode
{
public:
	TEnumAsByte<Athena_EAthenaAnimationPetRoamingState> ReactAnimState;                                            // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ChangeAnimationAfterWaitTime;                              // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IXZN[0x2];                                     // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ReactAnimTime;                                             // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_EAthenaAnimationPetRoamingState> AfterReactAnimState;                                       // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Y1JC[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.BTTask_ReactToThreat");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.BTTask_RotatePetToFaceBBEntryWithTime
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UBTTask_RotatePetToFaceBBEntryWithTime : public UBTTask_RotateToFaceBBEntry
{
public:
	float                                              Delay;                                                     // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RotationTime;                                              // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.BTTask_RotatePetToFaceBBEntryWithTime");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.BTTask_SelectFoodSource
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UBTTask_SelectFoodSource : public UBTTask_BlackboardBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.BTTask_SelectFoodSource");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.BTTask_SelectPetHangoutSpot
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UBTTask_SelectPetHangoutSpot : public UBTTask_BlackboardBase
{
public:
	bool                                               NeedForceId;                                               // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_53I8[0x3];                                     // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FHangoutSpotId                              ForcedId;                                                  // 0x008C(0x0008) (Edit)
	unsigned char                                      UnknownData_S9IX[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.BTTask_SelectPetHangoutSpot");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.BTTask_SelectWanderFlyStrategy
// 0x0078 (FullSize[0x0100] - InheritedSize[0x0088])
class UBTTask_SelectWanderFlyStrategy : public UBTTask_BlackboardBase
{
public:
	struct FAIDataProviderFloatValue                   WanderRange;                                               // 0x0088(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   LowFlyRange;                                               // 0x00B8(0x0030) (Edit, ContainsInstancedReference)
	class UClass*                                      WanderStrategy;                                            // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      LowFlyStrategy;                                            // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      HighFlyStrategy;                                           // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.BTTask_SelectWanderFlyStrategy");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.PetHangoutInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPetHangoutInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.PetHangoutInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.PetMemoryInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPetMemoryInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.PetMemoryInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.PetLifetimeInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPetLifetimeInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.PetLifetimeInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.PlayerPetInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPlayerPetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.PlayerPetInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.PetReactInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPetReactInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.PetReactInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.BTTask_SetDebugPetStateDescriptor
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTTask_SetDebugPetStateDescriptor : public UBTTaskNode
{
public:
	TEnumAsByte<AthenaAI_EDebugPetStateDescriptor>     NewDescriptor;                                             // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_93DQ[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.BTTask_SetDebugPetStateDescriptor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.BTTask_StopOccupyingHangoutSpot
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UBTTask_StopOccupyingHangoutSpot : public UBTTask_BlackboardBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.BTTask_StopOccupyingHangoutSpot");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.CannonSquashComponent
// 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
class UCannonSquashComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_V9UD[0x18];                                    // 0x00C8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.CannonSquashComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.PetDangerComponent
// 0x00D8 (FullSize[0x01A0] - InheritedSize[0x00C8])
class UPetDangerComponent : public UActorComponent
{
public:
	class UPetDangerDataAsset*                         DangerDataAsset;                                           // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HX2Z[0xD0];                                    // 0x00D0(0x00D0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.PetDangerComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.EnvQueryContext_AverageThreatPositionFromBlackboard
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryContext_AverageThreatPositionFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.EnvQueryContext_AverageThreatPositionFromBlackboard");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.EnvQueryContext_CurrentHangoutSpot
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_CurrentHangoutSpot : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.EnvQueryContext_CurrentHangoutSpot");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.EnvQueryContext_FirstThreatPositionFromBlackboard
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryContext_FirstThreatPositionFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.EnvQueryContext_FirstThreatPositionFromBlackboard");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.EnvQueryContext_PerceivedFoodSources
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_PerceivedFoodSources : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.EnvQueryContext_PerceivedFoodSources");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.EnvQueryContext_SafePositionFromBlackboard
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryContext_SafePositionFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.EnvQueryContext_SafePositionFromBlackboard");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.PetDesc
// 0x0010 (FullSize[0x0140] - InheritedSize[0x0130])
class UPetDesc : public UItemDesc
{
public:
	class UPetSpawnParamsDataAsset*                    PetSpawnParams;                                            // 0x0130(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      PreviewPetClass;                                           // 0x0138(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.PetDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.PetHangoutSpotsDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UPetHangoutSpotsDataAsset : public UDataAsset
{
public:
	TArray<struct FHangoutSpotParams>                  HangoutSpotParams;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.PetHangoutSpotsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.PetHangoutSpotSelectorComponent
// 0x01D0 (FullSize[0x0298] - InheritedSize[0x00C8])
class UPetHangoutSpotSelectorComponent : public UActorComponent
{
public:
	class UPetHangoutSpotComponent*                    HangoutSpotPositionComponent;                              // 0x00C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPetHangoutSpotsDataAsset*                   HangoutParamsDataAsset;                                    // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TV97[0x70];                                    // 0x00D8(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PetType_Cached;                                            // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_B1AN[0x148];                                   // 0x0150(0x0148) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.PetHangoutSpotSelectorComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.HangoutSpotSelectionInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UHangoutSpotSelectionInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.HangoutSpotSelectionInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.PetIdleMovementInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPetIdleMovementInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.PetIdleMovementInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.PetAIController
// 0x00E8 (FullSize[0x09D8] - InheritedSize[0x08F0])
class APetAIController : public AAthenaAIController
{
public:
	unsigned char                                      UnknownData_0Y1F[0x20];                                    // 0x08F0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAIStategyControllerMovementMod>     StrategyControllerMovementMods;                            // 0x0910(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              DefaultControlRotationInterpSpeed;                         // 0x0920(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RSUF[0x4];                                     // 0x0924(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DefaultStrategy;                                           // 0x0928(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UReactStateMappingsDataAsset*                ReactMappings;                                             // 0x0930(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XIXI[0x8];                                     // 0x0938(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPetHangoutSpotSelectorComponent*            HangoutSpotSelectorComponent;                              // 0x0940(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPetHangoutSpotComponent*                    ForcedHangoutSpotComponent;                                // 0x0948(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlackboardData*                             DefaultBlackboardAsset;                                    // 0x0950(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBehaviorTree*                               DefaultTree;                                               // 0x0958(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBehaviorTree*                               HangoutTree;                                               // 0x0960(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBehaviorTree*                               IdleTree;                                                  // 0x0968(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaximumReactRange;                                         // 0x0970(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_H5K9[0x4];                                     // 0x0974(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPetDangerComponent*                         DangerComponent;                                           // 0x0978(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinAgentHalfHeightPctOverride;                             // 0x0980(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_C3GE[0x54];                                    // 0x0984(0x0054) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.PetAIController");
		return ptr;
	}



	void OnPerceptionUpdated(TArray<class AActor*> ChangedPerceivedActors);
	class UAthenaAICharacterPathFollowingComponent* GetAthenaAICharPathFollowingComp();
	void AfterRead();
	void BeforeDelete();

};

// Class Pets.PetCustomisationOverrideDataAsset
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UPetCustomisationOverrideDataAsset : public UDataAsset
{
public:
	class UClass*                                      AnimationOverrideId;                                       // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FString                                     DebugMenuName;                                             // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.PetCustomisationOverrideDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.PetCustomisationOverrideMappingsDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UPetCustomisationOverrideMappingsDataAsset : public UDataAsset
{
public:
	TArray<struct FPetCustomiationOverrideMappingEntry> MappingEntries;                                            // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.PetCustomisationOverrideMappingsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.PetDangerDataAsset
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UPetDangerDataAsset : public UDataAsset
{
public:
	TArray<struct FPetDangerHearingThreat>             KnownHearingDangers;                                       // 0x0028(0x0010) (Edit, ZeroConstructor)
	float                                              MinChangeAverageThreatLocationToUpdate;                    // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FleeDistance;                                              // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TEnumAsByte<Pets_EPetDangerHearingResponseType>> ResponsePriorities;                                        // 0x0040(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.PetDangerDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.PetFeedingDataAsset
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UPetFeedingDataAsset : public UDataAsset
{
public:
	struct FPetFeedingParams                           PetFeedingParams;                                          // 0x0028(0x0038) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.PetFeedingDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.PetHangoutSpotComponent
// 0x00A0 (FullSize[0x0350] - InheritedSize[0x02B0])
class UPetHangoutSpotComponent : public USceneComponent
{
public:
	TArray<struct FHangoutSpotPosition>                HangoutSpots;                                              // 0x02B0(0x0010) (Edit, ZeroConstructor)
	bool                                               HasLowerDeckFloodThreshold;                                // 0x02C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PW31[0x3];                                     // 0x02C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LowerDeckFloodThreshold;                                   // 0x02C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasMiddleDeckFloodThreshold;                               // 0x02C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JYLR[0x3];                                     // 0x02C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MiddleDeckFloodThreshold;                                  // 0x02CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PerchInteractableHeightOffset;                             // 0x02D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsWorldHangout;                                            // 0x02D4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_385M[0x23];                                    // 0x02D5(0x0023) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPetPerchComponent*>                  PetPerchComponents;                                        // 0x02F8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference)
	unsigned char                                      UnknownData_TQJW[0x10];                                    // 0x0308(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               IsTopDeckBlocked;                                          // 0x0318(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsOwnerSinking;                                            // 0x0319(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_MPQ5[0x1E];                                    // 0x031A(0x001E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPetHangoutSpotsDataAsset*                   PetHangoutSpotsDataAsset;                                  // 0x0338(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DHSQ[0x10];                                    // 0x0340(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.PetHangoutSpotComponent");
		return ptr;
	}



	void OnRep_IsOwnerSinking();
	void AfterRead();
	void BeforeDelete();

};

// Class Pets.PetItemInfo
// 0x0060 (FullSize[0x0570] - InheritedSize[0x0510])
class APetItemInfo : public ANonStorableItemInfo
{
public:
	unsigned char                                      UnknownData_ZA8W[0x18];                                    // 0x0510(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPetCustomisation                           PetCustomisation;                                          // 0x0528(0x0018) (Net)
	class AActor*                                      PetOwner;                                                  // 0x0540(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      SpawnedForShip;                                            // 0x0548(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DropTraceDistance;                                         // 0x0550(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PointSearchRadius;                                         // 0x0554(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionChannel>              DropChannel;                                               // 0x0558(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XMIV[0x17];                                    // 0x0559(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.PetItemInfo");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.PetListingDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UPetListingDataAsset : public UDataAsset
{
public:
	TArray<struct FPetListingTypeEntry>                Entries;                                                   // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.PetListingDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.PetMovementModifierSettingsInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPetMovementModifierSettingsInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.PetMovementModifierSettingsInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.PetOwnerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPetOwnerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.PetOwnerInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.PetOwnerComponent
// 0x0020 (FullSize[0x00E8] - InheritedSize[0x00C8])
class UPetOwnerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_307J[0x18];                                    // 0x00C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AItemInfo*                                   PetInfo;                                                   // 0x00E0(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.PetOwnerComponent");
		return ptr;
	}



	void Server_RequestDismissal();
	void AfterRead();
	void BeforeDelete();

};

// Class Pets.PetPartCustomisationInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPetPartCustomisationInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.PetPartCustomisationInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.PetPerchComponent
// 0x0048 (FullSize[0x0160] - InheritedSize[0x0118])
class UPetPerchComponent : public UInteractableComponent
{
public:
	unsigned char                                      UnknownData_6C7B[0x18];                                    // 0x0118(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              AllowedPetTypes;                                           // 0x0130(0x0010) (ZeroConstructor, Transient, UObjectWrapper)
	int                                                HangoutSpotIndex;                                          // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       HangoutSpotName;                                           // 0x0144(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     InteractionPointLocation;                                  // 0x014C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Enabled;                                                   // 0x0158(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               BlocksPetEmoteReactions;                                   // 0x0159(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IgnorePickupFromHangoutTooltipDisplayOffset;               // 0x015A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ICOX[0x5];                                     // 0x015B(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.PetPerchComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.PetSpawnParamsDataAsset
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UPetSpawnParamsDataAsset : public UDataAsset
{
public:
	class UClass*                                      PetClassID;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBehaviorTree*                               TreeToRun;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TAssetPtr<class UAthenaAIControllerParamsDataAsset> PetSkillset;                                               // 0x0038(0x001C) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LX29[0x4];                                     // 0x0038(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UEnvQuery*                                   SpawnQueryForLand;                                         // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEnvQuery*                                   SpawnQueryForShip;                                         // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.PetSpawnParamsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.PetsServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPetsServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.PetsServiceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.PetsServiceParamsDataAsset
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UPetsServiceParamsDataAsset : public UDataAsset
{
public:
	struct FPetsServiceParams                          Params;                                                    // 0x0028(0x0038) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.PetsServiceParamsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.PetsService
// 0x0308 (FullSize[0x0330] - InheritedSize[0x0028])
class UPetsService : public UObject
{
public:
	unsigned char                                      UnknownData_MWL2[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class AActor*, struct FPetRelationship>       PetOwnerRelationships;                                     // 0x0038(0x0050) (ZeroConstructor, Protected)
	class UAIPetsOnDemandSpawner*                      Spawner;                                                   // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GJEI[0x18];                                    // 0x0090(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPetsServiceParams                          PetsServiceParams;                                         // 0x00A8(0x0038) (Protected)
	TArray<class AActor*>                              OwnersToRemove;                                            // 0x00E0(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              OwnersToRequestDespawn;                                    // 0x00F0(0x0010) (ZeroConstructor)
	TArray<class APawn*>                               MovingPetsOnIslands;                                       // 0x0100(0x0010) (ZeroConstructor)
	TArray<class APawn*>                               MovingPetsOnShips;                                         // 0x0110(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              ScratchArray;                                              // 0x0120(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_92RP[0x1A8];                                   // 0x0130(0x01A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPetHangoutSpotsDataAsset*                   PetHangoutDataAsset;                                       // 0x02D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0RXM[0x50];                                    // 0x02E0(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.PetsService");
		return ptr;
	}



	void RemovePetFromActor(class AActor* InOwner);
	void AddPetForActorAndWield(class UClass* InPetType, const struct FPetCustomisation& InCustomisation, class AActor* InOwner, bool IsWielded);
	void AddPetForActor(class UClass* InPetType, const struct FPetCustomisation& InCustomisation, class AActor* InOwner);
	void AfterRead();
	void BeforeDelete();

};

// Class Pets.PetsSettings
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UPetsSettings : public UObject
{
public:
	struct FStringAssetReference                       PetHangoutSpotsDataAsset;                                  // 0x0028(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	struct FStringAssetReference                       PetListingDataAsset;                                       // 0x0038(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	struct FStringAssetReference                       PetsServiceParamsDataAsset;                                // 0x0048(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	struct FStringAssetReference                       PetSpawnDefinitionsDataAsset;                              // 0x0058(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	TArray<TEnumAsByte<Athena_EAthenaAnimationPetRoamingState>> ExcludedStatesForRoamingAssetGeneration;                   // 0x0068(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.PetsSettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.ReactAIStrategyId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UReactAIStrategyId : public UAIStrategyId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.ReactAIStrategyId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.ReactStateMappingsDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UReactStateMappingsDataAsset : public UDataAsset
{
public:
	TArray<struct FReactStateMapping>                  ReactMappings;                                             // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.ReactStateMappingsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.WieldablePet
// 0x0150 (FullSize[0x08C0] - InheritedSize[0x0770])
class AWieldablePet : public ASkeletalMeshWieldableItem
{
public:
	unsigned char                                      UnknownData_P7DM[0x30];                                    // 0x0770(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ThirdPersonScalingModifier;                                // 0x07A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_O9LT[0x4];                                     // 0x07A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWieldablePetComponent*                      WieldablePetComponent;                                     // 0x07A8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIPartsRetrievalComponent*                  AIPartsRetrievalComponent;                                 // 0x07B0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPetPartCustomisationComponent*              PetPartCustomisationComponent;                             // 0x07B8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitterComponent;                           // 0x07C0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWaterExposureComponent*                     WaterExposureComponent;                                    // 0x07C8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUsableWieldableComponent*                   UsableWieldableComponent;                                  // 0x07D0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPickupableComponent*                        PickupableComponent;                                       // 0x07D8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWieldableInteractableComponent*             WieldableInteractableComponent;                            // 0x07E0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCleanlinessComponent*                       CleanlinessComponent;                                      // 0x07E8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULightWeightStatusEffectManagerComponent*    LightWeightStatusEffectManagerComponent;                   // 0x07F0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPetDitherComponent*                         PetDitherComponent;                                        // 0x07F8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      PetOwner;                                                  // 0x0800(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFeedingComponent*                           FeedingComponent;                                          // 0x0808(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPetSicknessComponent*                       SicknessComponent;                                         // 0x0810(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWieldablePetHungerComponent*                HungerComponent;                                           // 0x0818(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStarvingComponent*                          StarvingComponent;                                         // 0x0820(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPetTelemetryComponent*                      TelemetryComponent;                                        // 0x0828(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimationDataStoreComponent*                AnimationDataStoreComponent;                               // 0x0830(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SubmergedStrokingEnabled;                                  // 0x0838(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FZJC[0x6F];                                    // 0x0839(0x006F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Athena_EAthenaAnimationPetHeldReactionState> HungerReactAnimationState;                                 // 0x08A8(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Pets_EWieldablePetDropRequestReason>   DropRequest;                                               // 0x08A9(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1A61[0x16];                                    // 0x08AA(0x0016) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.WieldablePet");
		return ptr;
	}



	void OnRep_HungerReactAnimationState();
	void OnRep_DropRequest(TEnumAsByte<Pets_EWieldablePetDropRequestReason> PriorDropRequest);
	void AfterRead();
	void BeforeDelete();

};

// Class Pets.WieldablePetAnimNotifyWwiseEmitterComponent
// 0x0010 (FullSize[0x02F0] - InheritedSize[0x02E0])
class UWieldablePetAnimNotifyWwiseEmitterComponent : public UAnimNotifyWwiseEmitterComponent
{
public:
	unsigned char                                      UnknownData_VO1N[0x10];                                    // 0x02E0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.WieldablePetAnimNotifyWwiseEmitterComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.WieldablePetComponent
// 0x0088 (FullSize[0x0150] - InheritedSize[0x00C8])
class UWieldablePetComponent : public UActorComponent
{
public:
	class UWieldablePetComponentDataAsset*             WieldablePetComponentData;                                 // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6E9A[0x80];                                    // 0x00D0(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.WieldablePetComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.WieldablePetComponentDataAsset
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class UWieldablePetComponentDataAsset : public UDataAsset
{
public:
	struct FFloatRange                                 FriendlyTimeUntilEscape;                                   // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FFloatRange                                 NormalTimeUntilEscape;                                     // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FFloatRange                                 SubmergedTimeUntilEscape;                                  // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DamageToOwnerDropThreshold;                                // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EAUU[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FWieldablePetDropTimeout>            DropTimeouts;                                              // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.WieldablePetComponentDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.WieldablePetHungerComponent
// 0x00B0 (FullSize[0x0178] - InheritedSize[0x00C8])
class UWieldablePetHungerComponent : public UActorComponent
{
public:
	class UWieldablePetHungerDataAsset*                HungerData;                                                // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AV1V[0x28];                                    // 0x00D0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FOverlapResult>                      CachedOverlappingActors;                                   // 0x00F8(0x0010) (ZeroConstructor, ContainsInstancedReference)
	TArray<struct FWieldablePetFoodSourceEntry>        ActiveFoodSources;                                         // 0x0108(0x0010) (ZeroConstructor)
	TArray<struct FWieldablePetFoodSourceEntry>        FoodSourcesToRemove;                                       // 0x0118(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_KJ70[0x50];                                    // 0x0128(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.WieldablePetHungerComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Pets.WieldablePetHungerDataAsset
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UWieldablePetHungerDataAsset : public UDataAsset
{
public:
	float                                              TimeToStartEating;                                         // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EdibleCheckRadius;                                         // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWieldablePetHungerAnimationData            EatingAnimData;                                            // 0x0030(0x0008) (Edit, DisableEditOnInstance)
	struct FWieldablePetHungerAnimationData            FedAnimData;                                               // 0x0038(0x0008) (Edit, DisableEditOnInstance)
	struct FWieldablePetHungerAnimationData            SickAnimData;                                              // 0x0040(0x0008) (Edit, DisableEditOnInstance)
	struct FWieldablePetHungerAnimationData            RefuseAnimData;                                            // 0x0048(0x0008) (Edit, DisableEditOnInstance)
	TEnumAsByte<Engine_ECollisionChannel>              CollisionChannel;                                          // 0x0050(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EWYH[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pets.WieldablePetHungerDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
