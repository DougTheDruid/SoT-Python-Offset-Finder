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

// Class AthenaAI.AthenaAIFormComponent
// 0x0070 (FullSize[0x0138] - InheritedSize[0x00C8])
class UAthenaAIFormComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_WMND[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAthenaAIFormComponentVfxCustomisation> VfxCustomisations;                                         // 0x00D0(0x0010) (Edit, ZeroConstructor)
	class UAthenaAIFormDataAsset*                      FormData;                                                  // 0x00E0(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class UCharacterHitReactionDamagerTypeToAnimTypeLayer* HitReactionsLayer;                                         // 0x00E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YB5J[0x48];                                    // 0x00F0(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIFormComponent");
		return ptr;
	}



	void OnRep_FormData();
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaAIAbilityType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAthenaAIAbilityType : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIAbilityType");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIStrategyId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIStrategyId : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIStrategyId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AISpawner
// 0x0400 (FullSize[0x0428] - InheritedSize[0x0028])
class UAISpawner : public UDataAsset
{
public:
	unsigned char                                      UnknownData_6M4E[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               HasSpawnerLevelEncounters;                                 // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CHH4[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAISpawnTypeParamsCollection                SpawnTypeParamsCollection;                                 // 0x0040(0x0048) (Edit)
	class UAIEncounterSettings*                        DefaultEncounterSettings;                                  // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAISpawnWaveSequenceRankProgression*         DefaultSpawnWaveProgression;                               // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAISpawnContextIdEncounterSettingsPair> SpawnContextSpecificEncounterSettings;                     // 0x0098(0x0010) (Edit, ZeroConstructor)
	bool                                               ShouldSpawnFacingRegionCentre;                             // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<AthenaAI_EAthenaAISpawnType>           DefaultSpawnType;                                          // 0x00A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NRFW[0x6];                                     // 0x00AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEnvQuery*                                   FindSpawnPosQuery;                                         // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIModule_EEnvQueryRunMode>             FindSpawnPosQueryRunMode;                                  // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_B9Y0[0x3];                                     // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SpawnLocationType;                                         // 0x00BC(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxNumOfSpawnedPawns;                                      // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PriorityForSpawnedPawns;                                   // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XOF9[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FConditionalAISpawnOverride>         SpawnOverrides;                                            // 0x00D0(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference)
	TArray<struct FAdditionalSpawnerBehaviour>         AdditionalBehaviours;                                      // 0x00E0(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference)
	unsigned char                                      UnknownData_PI1I[0x270];                                   // 0x00F0(0x0270) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAthenaAISettings*                           AthenaAISettings;                                          // 0x0360(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CH95[0xC0];                                    // 0x0368(0x00C0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawner");
		return ptr;
	}



	int GetNumOfSpawnRequests();
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIPerCrewSpawner
// 0x0138 (FullSize[0x0560] - InheritedSize[0x0428])
class UAIPerCrewSpawner : public UAISpawner
{
public:
	class UAIWeightedProbabilityRangeOfRangesRankProgression* DefaultRespawnTimerRanges;                                 // 0x0428(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxNumOfCrewsToSpawnFor;                                   // 0x0430(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ActivateBySettingFootOnIsland;                             // 0x0434(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseRespawnTimerForFirstSpawn;                              // 0x0435(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AssociateSpawnsWithSpecificCrews;                          // 0x0436(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               PerceiveTriggerActorOnSpawn;                               // 0x0437(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               EnforceRespawnTimeAfterCrewLeaves;                         // 0x0438(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IgnoreSpawningGracePeriodForNewCrew;                       // 0x0439(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KWMR[0x126];                                   // 0x043A(0x0126) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPerCrewSpawner");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaAIFormDataAsset
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UAthenaAIFormDataAsset : public UDataAsset
{
public:
	TArray<TEnumAsByte<Athena_EHealthChangedReason>>   PreventHealthChangedReasons;                               // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAIFormDamageResponse>               DamageResponses;                                           // 0x0038(0x0010) (Edit, ZeroConstructor)
	class UStatusRecipientResponseList*                OverrideStatusRecipientResponseList;                       // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                           SurfaceMaterial;                                           // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     KilledVfxTemplate;                                         // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      AICharacterAudioComponent;                                 // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      AnimNotifyEmitterWithObservers;                            // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               HighPriorityFootstepAudio;                                 // 0x0070(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NWU6[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MovementSpeedMultipler;                                    // 0x0074(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerStat                                 StatToFireOnDeath;                                         // 0x0078(0x0004) (Edit, DisableEditOnInstance)
	struct FName                                       FeatureName;                                               // 0x007C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4FAC[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      FormComponentClass;                                        // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIFormDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIPlayerTracker
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIPlayerTracker : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPlayerTracker");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AISpawnerPlayerTracker
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UAISpawnerPlayerTracker : public UAIPlayerTracker
{
public:
	unsigned char                                      UnknownData_DD9T[0x20];                                    // 0x0028(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnerPlayerTracker");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIInteractableType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIInteractableType : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIInteractableType");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaAIAbilityStageParams
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAthenaAIAbilityStageParams : public UObject
{
public:
	float                                              AbilityCooldownSpeedMultiplier;                            // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageRequiredForNextIntervalMultiplier;                   // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OverrideParams;                                            // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AutoActivateOnStageTransition;                             // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HYZ3[0x6];                                     // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      TypeClass;                                                 // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIAbilityStageParams");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaAIAbility
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UAthenaAIAbility : public UObject
{
public:
	class UAthenaAIAbilityParams*                      AbilityParams;                                             // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class APawn*                                       Pawn;                                                      // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class AAthenaAIController*                         Controller;                                                // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      AIPawnInterface[0x10];                                     // 0x0040(0x0010) UNKNOWN PROPERTY: InterfaceProperty AthenaAI.AthenaAIAbility.AIPawnInterface
	class UAthenaAIAbilityStageParams*                 CurrentAbilityStageParams;                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_T880[0x20];                                    // 0x0058(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIAbility");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaAIAbilityParams
// 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
class UAthenaAIAbilityParams : public UObject
{
public:
	TArray<struct FAthenaAIControllerParamValue>       NamedControllerParams;                                     // 0x0028(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<AthenaAI_EAIAbilityDamageIntervalCounterMode> DamageIntervalCountingMode;                                // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseTimeBetweenAbility;                                     // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_W1IR[0x6];                                     // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAthenaAIAbilityPlayerBasedRanges           ActivationTimerCooldown;                                   // 0x0040(0x0010) (Edit)
	struct FAthenaAIAbilityPlayerBasedRanges           TimeBetweenAbility;                                        // 0x0050(0x0010) (Edit)
	bool                                               UseDamageBetweenAbility;                                   // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_518S[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAthenaAIAbilityPlayerBasedRanges           DamageBetweenAbility;                                      // 0x0068(0x0010) (Edit)
	float                                              AbilityRadius;                                             // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseMinMaxAttackRange;                                      // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4GLG[0x3];                                     // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMinMaxAbilityRange                         MinMaxAttackRange;                                         // 0x0080(0x0008) (Edit)
	TArray<struct FAIAbilityFollowUp>                  FollowUpAbilities;                                         // 0x0088(0x0010) (Edit, ZeroConstructor)
	float                                              Weight;                                                    // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NKZG[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIAbilityContinuousCooldownParameterData   ContinuousCooldownAbilityParameters;                       // 0x00A0(0x0020) (Edit)
	class UClass*                                      AIAbilityTypeClass;                                        // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIAbilityParams");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIInteractableComponent
// 0x0038 (FullSize[0x0100] - InheritedSize[0x00C8])
class UAIInteractableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_P7N1[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Type;                                                      // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FVector                                     DetachOffsetFromOwner;                                     // 0x00D8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CanHaveTarget;                                             // 0x00E4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_D4PI[0x1B];                                    // 0x00E5(0x001B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIInteractableComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTDecorator_BaseConditional
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UBTDecorator_BaseConditional : public UBTDecorator
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_BaseConditional");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTDecorator_TargetOnShip
// 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
class UBTDecorator_TargetOnShip : public UBTDecorator_BaseConditional
{
public:
	bool                                               Invert;                                                    // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Athena_EBT_ShipOwnership>              ShipOwnership;                                             // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_P4KS[0x36];                                    // 0x006A(0x0036) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_TargetOnShip");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTService_QueryShipsForTarget
// 0x0290 (FullSize[0x0300] - InheritedSize[0x0070])
class UBTService_QueryShipsForTarget : public UBTService
{
public:
	struct FAIDataProviderFloatValue                   MaxShipDistanceFromHomePosition;                           // 0x0070(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   MinDamageToSwitchTargets;                                  // 0x00A0(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   MinSecondsBeforeSwitchTargets;                             // 0x00D0(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderBoolValue                    SwitchTargetsAfterTimerExpires;                            // 0x0100(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   SecondsBeforeSwitchTargetsAfterTimerExpires;               // 0x0130(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   TimeBetweenDiceRolls;                                      // 0x0160(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   DiceRollForAggression;                                     // 0x0190(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   MinTotalDamageToTurnDiceRollForAggression;                 // 0x01C0(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   DiceRollForDamageAggression;                               // 0x01F0(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   DiceRollForDamageDormancy;                                 // 0x0220(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   PlayerDistanceThresholdToTurnAggressive;                   // 0x0250(0x0030) (Edit, ContainsInstancedReference)
	bool                                               IgnoreAI;                                                  // 0x0280(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_V3XM[0x7F];                                    // 0x0281(0x007F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_QueryShipsForTarget");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_SwimAttackTargetActor
// 0x0058 (FullSize[0x00E0] - InheritedSize[0x0088])
class UBTTask_SwimAttackTargetActor : public UBTTask_BlackboardBase
{
public:
	float                                              DamageToApply;                                             // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxAngleToTargetToSuccessfullyAttack;                      // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAttackableTypeToAnimMapping>        AttackAnimMapping;                                         // 0x0090(0x0010) (Edit, ZeroConstructor)
	struct FName                                       LoSTraceProfileName;                                       // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIDataProviderFloatValue                   LosTraceRadius;                                            // 0x00A8(0x0030) (Edit, ContainsInstancedReference)
	float                                              MaxDistanceToTargetToApplyDamage;                          // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2ZQM[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SwimAttackTargetActor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_SwimAttackTargetShip
// 0x01B0 (FullSize[0x0238] - InheritedSize[0x0088])
class UBTTask_SwimAttackTargetShip : public UBTTask_BlackboardBase
{
public:
	float                                              BiteRadiusOffsetToBeginAttackHeadOn;                       // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BiteRadiusOffsetToBeginAttackPerpendicular;                // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxTimeToStartAttack;                                      // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_K41M[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequence*                               AttackAnim;                                                // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AttackAnimLength;                                          // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeToPerformAttack;                                       // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     AttackVFX;                                                 // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AttackVFXZOffset;                                          // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       LoSTraceProfileName;                                       // 0x00B4(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MK31[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIDataProviderFloatValue                   LosTraceRadius;                                            // 0x00C0(0x0030) (Edit, ContainsInstancedReference)
	TArray<struct FSwimAttackTargetShipImpulseData>    ImpulseData;                                               // 0x00F0(0x0010) (Edit, ZeroConstructor)
	struct FAIDataProviderIntValue                     MinDamageHolesToApply;                                     // 0x0100(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderIntValue                     MaxDamageHolesToApply;                                     // 0x0130(0x0030) (Edit, ContainsInstancedReference)
	int                                                LevelsOfHullDamage;                                        // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OM6T[0x4];                                     // 0x0164(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DamageCauserType;                                          // 0x0168(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FAIDataProviderFloatValue                   PlayerBiteRadius;                                          // 0x0170(0x0030) (Edit, ContainsInstancedReference)
	struct FKnockBackInfo                              KnockbackParams;                                           // 0x01A0(0x0050) (Edit)
	struct FAIDataProviderFloatValue                   PlayerBiteDamage;                                          // 0x01F0(0x0030) (Edit, ContainsInstancedReference)
	unsigned char                                      UnknownData_O67G[0x10];                                    // 0x0220(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AShip*                                       TargetShip;                                                // 0x0230(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SwimAttackTargetShip");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BurrowEruptBase
// 0x0000 (FullSize[0x03D0] - InheritedSize[0x03D0])
class ABurrowEruptBase : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BurrowEruptBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIAnimationStateId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIAnimationStateId : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIAnimationStateId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.SpawnerBehaviourStrategy
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class USpawnerBehaviourStrategy : public UObject
{
public:
	unsigned char                                      UnknownData_EQPZ[0x20];                                    // 0x0028(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.SpawnerBehaviourStrategy");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AICreatureCharacterMovementComponent
// 0x00C8 (FullSize[0x0620] - InheritedSize[0x0558])
class UAICreatureCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	TArray<struct FAIStrategyMovementProperties>       AIStrategyMovementProperties;                              // 0x0558(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              BlendSpeed;                                                // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bCreateDisturbance;                                        // 0x056C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FOK3[0x3];                                     // 0x056D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DisturbanceSize;                                           // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DisturbanceVelocityScale;                                  // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OrientationBlendSpeed;                                     // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OrientationMaxPitch;                                       // 0x057C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UpdateOrientationFrequency;                                // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinStairAngle;                                             // 0x0584(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinStairVelocityDampen;                                    // 0x0588(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OP2V[0x4];                                     // 0x058C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              SubscribedStairClimbStrategies;                            // 0x0590(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)
	unsigned char                                      UnknownData_VDKL[0x80];                                    // 0x05A0(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AICreatureCharacterMovementComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AICreatureCharacter
// 0x0228 (FullSize[0x0800] - InheritedSize[0x05D8])
class AAICreatureCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData_HNF2[0x8];                                     // 0x05D8(0x0008) Fix Super Size
	unsigned char                                      UnknownData_XAGV[0x48];                                    // 0x05E0(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DelayBeforeDestroying;                                     // 0x0628(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeBeforeFadingOut;                                       // 0x062C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PickupTime;                                                // 0x0630(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TooltipDisplayOffset;                                      // 0x0634(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UActionStateMachineComponent*                ActionStateMachineComponent;                               // 0x0640(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActionStatePriorityTableData*               ActionStatePriorityTableData;                              // 0x0648(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ActionStateCreatorDefinition;                              // 0x0650(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAthenaAIControllerParamsDataAsset*          AIControllerParams;                                        // 0x0658(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                      InteractableComponent;                                     // 0x0660(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWaterHeightProviderComponent*               WaterHeightProviderComponent;                              // 0x0668(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitterComponent;                           // 0x0670(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URewindComponent*                            RewindComponent;                                           // 0x0678(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActionRulesComponent*                       ActionRulesComponent;                                      // 0x0680(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S6VZ[0x100];                                   // 0x0688(0x0100) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAICreatureCharacterMovementComponent*       AICreatureCharacterMovementComponent;                      // 0x0788(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UClass*                                      CurrentAIStrategy;                                         // 0x0790(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_A48L[0x68];                                    // 0x0798(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AICreatureCharacter");
		return ptr;
	}



	void SetAIStrategy(class UClass* InStrategy);
	void OnRep_CurrentAIStrategy(class UClass* OldAIStrategy);
	void Multicast_DespawnRPC();
	class UClass* GetAIStrategy();
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaAICharacterPathFollowingComponent
// 0x0038 (FullSize[0x02F0] - InheritedSize[0x02B8])
class UAthenaAICharacterPathFollowingComponent : public UPathFollowingComponent
{
public:
	float                                              ProportionOfTurnToMove;                                    // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinAngleToTurnOnSpot;                                      // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReachedGoalMaxSpeedToSlowDistanceFactor;                   // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AbortMoveMaxSpeedToSlowDistanceFactor;                     // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SKPV[0x4];                                     // 0x02C8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinSlowDownSpeed;                                          // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_74AE[0x20];                                    // 0x02D0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAICharacterPathFollowingComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AICreatureCharacterPathFollowingComponent
// 0x0030 (FullSize[0x0320] - InheritedSize[0x02F0])
class UAICreatureCharacterPathFollowingComponent : public UAthenaAICharacterPathFollowingComponent
{
public:
	float                                              LandingAngle;                                              // 0x02F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HopDistanceScale;                                          // 0x02F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaximumLandTime;                                           // 0x02F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinStairAngle;                                             // 0x02FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinStairVelocityDampen;                                    // 0x0300(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_949O[0x4];                                     // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              SubscribedStairClimbStrategies;                            // 0x0308(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)
	unsigned char                                      UnknownData_6FGJ[0x8];                                     // 0x0318(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AICreatureCharacterPathFollowingComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AICreatureMovementModifierInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAICreatureMovementModifierInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AICreatureMovementModifierInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AICreatureMovementModifierParamsDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAICreatureMovementModifierParamsDataAsset : public UDataAsset
{
public:
	float                                              TurnRateMultiplier;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FlyingTurnRateMultiplier;                                  // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseTighterTurningCircle;                                   // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseHighResNavMesh;                                         // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2V3U[0x6];                                     // 0x0032(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AICreatureMovementModifierParamsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BehaviourTreeInterruptionInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBehaviourTreeInterruptionInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BehaviourTreeInterruptionInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.ForcedIdleBehaviourInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UForcedIdleBehaviourInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.ForcedIdleBehaviourInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIDialogueStateProviderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIDialogueStateProviderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIDialogueStateProviderInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.SimpleDialogueStateProvider
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class USimpleDialogueStateProvider : public UObject
{
public:
	unsigned char                                      UnknownData_QQ0L[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.SimpleDialogueStateProvider");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BountySpawnerAudioZonesInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBountySpawnerAudioZonesInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BountySpawnerAudioZonesInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIBountySpawner
// 0x0180 (FullSize[0x05A8] - InheritedSize[0x0428])
class UAIBountySpawner : public UAISpawner
{
public:
	float                                              MaximumDistanceToPerceiveOnSpawnsAfterFirstGroup;          // 0x0428(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1LGP[0x4];                                     // 0x042C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAIBountySpawnerWaveGroup>           WaveGroups;                                                // 0x0430(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference)
	struct FStringAssetReference                       TeamColor;                                                 // 0x0440(0x0010) (Edit, ZeroConstructor)
	struct FWeightedProbabilityRange                   WavesPerRelocate;                                          // 0x0450(0x0020) (Edit)
	struct FWeightedProbabilityRange                   WaveSplitChance;                                           // 0x0470(0x0020) (Edit)
	TArray<float>                                      WaveSuicideTime;                                           // 0x0490(0x0010) (Edit, ZeroConstructor)
	float                                              WaveSuicideMinDist;                                        // 0x04A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ImmediatelyPerceiveTargets;                                // 0x04A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_C562[0x3];                                     // 0x04A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAICombatDialogue*                           ActiveCombatDialogue;                                      // 0x04A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1UFD[0x28];                                    // 0x04B0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              CrewMembers;                                               // 0x04D8(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              NonCrewMembersInRegion;                                    // 0x04E8(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              AllParticipatingPlayers;                                   // 0x04F8(0x0010) (ZeroConstructor)
	class UOverlapTriggerComponent*                    AudioZoneTriggerComponent;                                 // 0x0508(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_N4B7[0x98];                                    // 0x0510(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIBountySpawner");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.PostBountyAIPawnSpawnedAction
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPostBountyAIPawnSpawnedAction : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.PostBountyAIPawnSpawnedAction");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.ApplyNameplateToBountyWaveSpawnedAction
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UApplyNameplateToBountyWaveSpawnedAction : public UPostBountyAIPawnSpawnedAction
{
public:
	struct FText                                       AIName;                                                    // 0x0028(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_ROWB[0x20];                                    // 0x0028(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.ApplyNameplateToBountyWaveSpawnedAction");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIFaunaSpawner
// 0x0148 (FullSize[0x0570] - InheritedSize[0x0428])
class UAIFaunaSpawner : public UAISpawner
{
public:
	struct FAIFaunaSpawnerWave                         FaunaWave;                                                 // 0x0428(0x0110) (Edit)
	unsigned char                                      UnknownData_JCVC[0x10];                                    // 0x0538(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      FaunaLeader;                                               // 0x0548(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AZQV[0x10];                                    // 0x0550(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              PlayersInSpawnArea;                                        // 0x0560(0x0010) (ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIFaunaSpawner");
		return ptr;
	}



	void SpawnFaunaGroup();
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaAIControllerBase
// 0x0158 (FullSize[0x0618] - InheritedSize[0x04C0])
class AAthenaAIControllerBase : public AAIController
{
public:
	unsigned char                                      UnknownData_FK50[0x158];                                   // 0x04C0(0x0158) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIControllerBase");
		return ptr;
	}



	void SetNamedControllerParam(const struct FName& ParamName, float Value);
	struct FWeightedProbabilityRangeOfRanges FindNamedWeightedRangesControllerParam(const struct FName& ParamName);
	float FindNamedControllerParam(const struct FName& ParamName);
	void ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* ParamsAsset, class APawn* InPawn);
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaAIController
// 0x02E0 (FullSize[0x08F8] - InheritedSize[0x0618])
class AAthenaAIController : public AAthenaAIControllerBase
{
public:
	unsigned char                                      UnknownData_WZW1[0x24];                                    // 0x0618(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurrentTargetPerceivedNotVisibleAge;                       // 0x063C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KDUZ[0x40];                                    // 0x0640(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAISenseConfig_Sight*                        SightConfig;                                               // 0x0680(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UAISenseConfig_Hearing*                      HearingConfig;                                             // 0x0688(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UAISenseConfig_Damage*                       DamageSenseConfig;                                         // 0x0690(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FCZ4[0x48];                                    // 0x0698(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAthenaAIControllerSenseSettingOverride> AIStrategySenseSettingOverrides;                           // 0x06E0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_G916[0x1D8];                                   // 0x06F0(0x01D8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      CurrentNotSeenPerceivedActor;                              // 0x08C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      PendingSpawnTriggerActor;                                  // 0x08D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UUQG[0x20];                                    // 0x08D8(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIController");
		return ptr;
	}



	void StopBehaviourLogic();
	void SetPerceptionExpirationAgeForActor(class AActor* Actor, float ExpirationAge, class UClass* Sense);
	void RegisterSpawnTriggerActorAsStimulus(class AActor* TriggerActor);
	void OnPerceptionUpdated(TArray<class AActor*> ChangedPerceivedActors);
	void OnNewlySpawned();
	void OnFinishDespawn();
	bool IsActorPerceived(class AActor* TargetActor);
	class AActor* GetTargetActor();
	class UAthenaAIPerceptionComponent* GetAthenaAIPerceptionComponent();
	void GetAllSeenActors(TArray<class AActor*>* SeenActors);
	void ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* ParamsAsset, class APawn* InPawn);
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaFaunaAIController
// 0x0198 (FullSize[0x0A90] - InheritedSize[0x08F8])
class AAthenaFaunaAIController : public AAthenaAIController
{
public:
	float                                              MaxTimeBetweenThreatDetermination;                         // 0x08F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultControlRotationInterpSpeed;                         // 0x08FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAIStategyControllerMovementMod>     StrategyControllerMovementMods;                            // 0x0900(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              MinAgentHalfHeightPctOverride;                             // 0x0910(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZJI8[0x4];                                     // 0x0914(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFaunaAIContollerParamsDataAsset*            FaunaDataAsset;                                            // 0x0918(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class AActor*                                      CarrierActor;                                              // 0x0920(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SM14[0xA8];                                    // 0x0928(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      HighestDangerActor;                                        // 0x09D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MCCW[0x88];                                    // 0x09D8(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFaunaAIPlayerTracker*                       PlayerTracker;                                             // 0x0A60(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KBL6[0x28];                                    // 0x0A68(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaFaunaAIController");
		return ptr;
	}



	void SetDormancyCheckingEnabled(bool InDormancyCheckingEnabledInAutomation);
	void LeaderDestroyed(class AActor* Actor);
	class AActor* GetLeader();
	float GetCourage();
	class UAthenaAICharacterPathFollowingComponent* GetAthenaAICharPathFollowingComp();
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.CatchFaunaConditionalStatTrigger
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UCatchFaunaConditionalStatTrigger : public UConditionalStatsTriggerType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.CatchFaunaConditionalStatTrigger");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.EnvQueryContext_LeaderFromBlackboard
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_LeaderFromBlackboard : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_LeaderFromBlackboard");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.EnvQueryContext_Threat
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_Threat : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_Threat");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.Fauna
// 0x03A0 (FullSize[0x0BA0] - InheritedSize[0x0800])
class AFauna : public AAICreatureCharacter
{
public:
	unsigned char                                      UnknownData_1DLY[0x8];                                     // 0x0800(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayName;                                               // 0x0808(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_WJOF[0x20];                                    // 0x0800(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UClass*                                      FaunaSpecies;                                              // 0x0840(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      FaunaBreed;                                                // 0x0848(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FVector                                     HeadOffset;                                                // 0x0850(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     MountedScale;                                              // 0x085C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              NearToSurfaceDistance;                                     // 0x0868(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartDrowningTimePercentage;                               // 0x086C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DrowningDeathTimeMin;                                      // 0x0870(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DrowningDeathTimeMax;                                      // 0x0874(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PercentageStarvedToChangeAnimation;                        // 0x0878(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeOutTime;                                               // 0x087C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     HitImpactParticleSystem;                                   // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     DeathParticleSystem;                                       // 0x0888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     PutInCrateParticleSystem;                                  // 0x0890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PutInCrateSoundCue;                                        // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 TookDamageSoundCue;                                        // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 AgitationStartedSoundCue;                                  // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 AgitationStoppedSoundCue;                                  // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 CalmStartedSoundCue;                                       // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 CalmStoppedSoundCue;                                       // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     BreathBubblesParticleSystem;                               // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BreathBubblesSocketName;                                   // 0x08D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       UnderwaterRTPCName;                                        // 0x08D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                        OnFeedingForceFeedbackEffect;                              // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMountableComponent*                         MountableComponent;                                        // 0x08E8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHealthComponent*                            HealthComponent;                                           // 0x08F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageableComponent*                        DamageableComponent;                                       // 0x08F8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         AttackHitVolume;                                           // 0x0900(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFaunaAnimationData*                         Animations;                                                // 0x0908(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDitherComponent*                            DitherComponent;                                           // 0x0910(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULightWeightStatusEffectManagerComponent*    StatusEffectManagerComponent;                              // 0x0918(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaAIControllerParamsDataAsset*          AIControllerParamsWhenInCrate;                             // 0x0920(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPeriodicAINoiseEventComponent*              PeriodicAINoiseEventComponent;                             // 0x0928(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    FaunaAgitationResponseDelegate;                            // 0x0930(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FaunaDirectedAgitationResponseDelegate;                    // 0x0940(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                AgitationResponseChance;                                   // 0x0950(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AgitationResponseTestFrequencyMin;                         // 0x0954(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AgitationResponseTestFrequencyMax;                         // 0x0958(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxNumFailedAgitationResponseTests;                        // 0x095C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AgitationResponseVFXDelay;                                 // 0x0960(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AgitationResponseRange;                                    // 0x0964(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     AgitationResponseParticleSystem;                           // 0x0968(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AgitationResponseRangeParticleSystemAngle;                 // 0x0970(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionChannel>              AgitationCollisionChannel;                                 // 0x0974(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StopMovementWhenAgitated;                                  // 0x0975(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_024W[0x2];                                     // 0x0976(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ApproximateSpitTravelTime;                                 // 0x0978(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StopMovementWhenCalm;                                      // 0x097C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Z41Q[0x3];                                     // 0x097D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TurningSpringAcceleration;                                 // 0x0980(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TurningSpringMaxVelocity;                                  // 0x0984(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TurnResetDelay;                                            // 0x0988(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     PivotPointOffset;                                          // 0x098C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShouldTurn;                                                // 0x0998(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_03XP[0x7];                                     // 0x0999(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFeedingComponent*                           FeedingComponent;                                          // 0x09A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UFaunaMovementComponent*                     FaunaMovementComponent;                                    // 0x09A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeUntilDrowned;                                          // 0x09B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RandomAnimationSeed;                                       // 0x09B4(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DK6A[0xC];                                     // 0x09B8(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               Drowned;                                                   // 0x09C4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8MF7[0x2];                                     // 0x09C5(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<AthenaAI_EFaunaCratedState>            CratedState;                                               // 0x09C7(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaAI_EFaunaInWaterState>           InWaterState;                                              // 0x09C8(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FH0T[0x7];                                     // 0x09C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Crate;                                                     // 0x09D0(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    BreathBubblesParticleSystemComponent;                      // 0x09D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DrowningDeathTime;                                         // 0x09E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsPlayingStarvingAnim;                                     // 0x09E4(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               IsAgitated;                                                // 0x09E5(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               IsCalm;                                                    // 0x09E6(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_Q8WK[0x1];                                     // 0x09E7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TargetTurnAngle;                                           // 0x09E8(0x0004) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LYK3[0x12C];                                   // 0x09EC(0x012C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UVenomComponent*                             VenomComponent;                                            // 0x0B18(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UKU3[0x80];                                    // 0x0B20(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.Fauna");
		return ptr;
	}



	void TestingSetWaterState(TEnumAsByte<AthenaAI_EFaunaInWaterState> NewInState);
	void OnRep_TargetTurnAngle();
	void OnRep_IsPlayingStarvingAnim();
	void OnRep_IsCalm();
	void OnRep_IsAgitated();
	void OnRep_InWaterState();
	void OnRep_CratedState(TEnumAsByte<AthenaAI_EFaunaCratedState> PreviousCratedState);
	void Multicast_PlayPutInCrateEffectsRPC(class AActor* Crate);
	void Multicast_JustBeenFedRPC(class AActor* FedBy);
	void Multicast_HightlightLeader(bool bIsLeader);
	void GenerateNewRandomAnimationSeed();
	void ActivateResponseRPC(float InTargetTurnAngle);
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.FaunaAIPlayerTracker
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UFaunaAIPlayerTracker : public UAIPlayerTracker
{
public:
	unsigned char                                      UnknownData_01P8[0x20];                                    // 0x0028(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.FaunaAIPlayerTracker");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.FaunaAnimationInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFaunaAnimationInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.FaunaAnimationInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.FaunaMovementComponent
// 0x0000 (FullSize[0x0620] - InheritedSize[0x0620])
class UFaunaMovementComponent : public UAICreatureCharacterMovementComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.FaunaMovementComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.MerchantCrateMetaGenerator
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMerchantCrateMetaGenerator : public UItemSnapshotMetaGenerator
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.MerchantCrateMetaGenerator");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaAIDebugFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAthenaAIDebugFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIDebugFunctionLibrary");
		return ptr;
	}



	void STATIC_SpawnAIWithSettings(TAssetPtr<class UClass> AIType, TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset, TAssetPtr<class ULoadoutAsset> Loadout, TAssetPtr<class UAthenaAIFormDataAsset> Form, TAssetPtr<class UClass> AIItemSpawnComponent, class UClass* ClassId, TAssetPtr<class UAthenaAIAmmoDataAsset> Ammo, const struct FVector& Pos, const struct FRotator& Rot, const struct FName& Region, class AActor* TriggerActor, const struct FName& NavMeshOverride, float Delay);
	struct FAIEncounterSpecification STATIC_SpawnAI(class UAIEncounterSettings* EncounterSettings, const struct FVector& Pos, const struct FRotator& Rot, float Delay, bool MakeAIPermanentlyNetRelevant, class AActor* InstancedNavMesh);
	void STATIC_SetEnvQueryManagerMaxAllowedSeconds(float InMaxAllowedSeconds, class UObject* QueryOwner);
	void STATIC_KillAllDebugAISpawners();
	int STATIC_GetEnvQueryManagerNumRunningQueries(class UObject* QueryOwner);
	void STATIC_EnableMaximumSightSettings(class AAthenaAIController* AIController);
	void STATIC_EnableBehaviorTreeLogging(class UObject* WorldContext);
	void STATIC_DespawnAIPawn(class APawn* Pawn);
	void STATIC_CreateAISpawnerAtPosition(class UObject* WorldContext, class UAISpawner* SpawnerAsset, const struct FVector& Pos);
	void STATIC_CreateAISpawnerAtActor(class UObject* WorldContext, class UAISpawner* SpawnerAsset, class AActor* SpawnLocationActor);
	struct FVector STATIC_CanProjectPointToNavigation(class UObject* WorldContext, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent);
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.DebugAISpawnerCreator
// 0x0058 (FullSize[0x0428] - InheritedSize[0x03D0])
class ADebugAISpawnerCreator : public AActor
{
public:
	class UAISpawner*                                  SpawnerTemplate;                                           // 0x03D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TriggerRadius;                                             // 0x03D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VMQ3[0x4];                                     // 0x03DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAISpawner*                                  Spawner;                                                   // 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UAIProximityPlayerTracker*                   ProximityPlayerTracker;                                    // 0x03E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class USimpleAIRegion*                             Region;                                                    // 0x03F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IY7E[0x30];                                    // 0x03F8(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.DebugAISpawnerCreator");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIDioramaLocationSourceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIDioramaLocationSourceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIDioramaLocationSourceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIDiorama
// 0x0228 (FullSize[0x05F8] - InheritedSize[0x03D0])
class AAIDiorama : public AActor
{
public:
	unsigned char                                      UnknownData_LMGJ[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             SceneComponent;                                            // 0x03D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASceneDialogueCoordinator*                   SpawnedDialogueCoordinator;                                // 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneDialogueData*                          DialogueData;                                              // 0x03E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAIDioramaPawn>                      LinkedActors;                                              // 0x03F0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData_L72P[0x1F8];                                   // 0x0400(0x01F8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIDiorama");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIDioramaCategory
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIDioramaCategory : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIDioramaCategory");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIDioramaController
// 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
class UAIDioramaController : public UObject
{
public:
	unsigned char                                      UnknownData_LDD2[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAIDioramaDesc*                              AIDioramaDesc;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneDialogueData*                          DialogueData;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAIDioramaPawn>                      SpawnedDioramaPawns;                                       // 0x0040(0x0010) (ZeroConstructor)
	class AAIDiorama*                                  AIDiorama;                                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAISpawner*                                  Spawner;                                                   // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_C7SH[0x48];                                    // 0x0060(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIDioramaController");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIDioramaDesc
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAIDioramaDesc : public UDataAsset
{
public:
	TArray<struct FAIDioramaRoleDesc>                  RoleList;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor)
	class USceneDialogueData*                          DialogueData;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIDioramaDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIDioramaLocationSourceComponent
// 0x0080 (FullSize[0x0330] - InheritedSize[0x02B0])
class UAIDioramaLocationSourceComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_SPFA[0x10];                                    // 0x02B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAIDioramaLocationSourceComponentData> DioramaRelativeLocations;                                  // 0x02C0(0x0010) (Edit, ZeroConstructor)
	float                                              DialogueTriggerRadius;                                     // 0x02D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DialogueSubtitleBuffer;                                    // 0x02D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AISenseRadiusForDebugDisplay;                              // 0x02D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RRLP[0x4];                                     // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              Categories;                                                // 0x02E0(0x0010) (Edit, ZeroConstructor, UObjectWrapper)
	struct FColor                                      DebugTriggerRadiusColor;                                   // 0x02F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FColor                                      DebugSubtitleRadiusColor;                                  // 0x02F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FColor                                      AISenseRadiusColor;                                        // 0x02F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QPEJ[0x4];                                     // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USphereComponent*                            DialogueTriggerRadiusSphere;                               // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            DialogueSubtitleRadiusSphere;                              // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            AISenseRadiusSphere;                                       // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QFWN[0x18];                                    // 0x0318(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIDioramaLocationSourceComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIDioramaServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIDioramaServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIDioramaServiceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIDioramaService
// 0x0068 (FullSize[0x0438] - InheritedSize[0x03D0])
class AAIDioramaService : public AActor
{
public:
	unsigned char                                      UnknownData_RKPM[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UClass*, struct FDioramaCategoryEntries> AllDioramasLocationsByCategory;                            // 0x03D8(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData_227C[0x10];                                    // 0x0428(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIDioramaService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.DebugDioramaCreator
// 0x0018 (FullSize[0x0440] - InheritedSize[0x0428])
class ADebugDioramaCreator : public ADebugAISpawnerCreator
{
public:
	class UAIDioramaDesc*                              AIDioramaDesc;                                             // 0x0428(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIDioramaLocationSourceComponent*           Location;                                                  // 0x0430(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIDioramaController*                        AIDioramaController;                                       // 0x0438(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.DebugDioramaCreator");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.InDioramaAIStrategyId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UInDioramaAIStrategyId : public UAIStrategyId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.InDioramaAIStrategyId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.Pet
// 0x0430 (FullSize[0x0C30] - InheritedSize[0x0800])
class APet : public AAICreatureCharacter
{
public:
	unsigned char                                      UnknownData_EWW9[0x98];                                    // 0x0800(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPetWieldableReactMappingsDataAsset*         WieldableReactMappingsAsset;                               // 0x0898(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxVelocityForLocomotionAnimation;                         // 0x08A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanFly;                                                    // 0x08A4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AJIO[0x3];                                     // 0x08A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPetFlyingStrategyProperties>        FlyingStrategyProperties;                                  // 0x08A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              FlyingLandTime;                                            // 0x08B8(0x0004) (Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_339I[0x4];                                     // 0x08BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 FlyingLandCurve;                                           // 0x08C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FlyingTakeOffTime;                                         // 0x08C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QZN6[0x4];                                     // 0x08CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 FlyingTakeOffCurve;                                        // 0x08D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatRange                                 MidFlightAdjustmentTimerRange;                             // 0x08D8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UCurveFloat*                                 MidFlightAdjustmentCurve;                                  // 0x08E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 MidFlightTimeToDistanceAdjustmentCurve;                    // 0x08F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FiredFromActorCollision;                                   // 0x08F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 FiredFromActorSFX;                                         // 0x0900(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPetDitherComponent*                         DitherComponent;                                           // 0x0908(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinimumDamageForHealthReact;                               // 0x0910(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDistForWaterBucketToClean;                              // 0x0914(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinimumDurationUntilPetCanDespawnConcealed;                // 0x0918(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultNamePlateHeight;                                    // 0x091C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AlternateNamePlateHeight;                                  // 0x0920(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MD5B[0x4];                                     // 0x0924(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TEnumAsByte<Athena_EAthenaAnimationPetRoamingState>> StatesToUseAlternateNamePlatePos;                          // 0x0928(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FFloatRange                                 PetTimeSpentSad;                                           // 0x0938(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<AthenaAI_EDebugPetStateDescriptor>     DebugStateDescriptor;                                      // 0x0948(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_P4YA[0x7];                                     // 0x0949(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAINameplateComponent*                       AINameplateComponent;                                      // 0x0950(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UFeedingComponent*                           FeedingComponent;                                          // 0x0958(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UStarvingComponent*                          StarvingComponent;                                         // 0x0960(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UCleanlinessComponent*                       CleanlinessComponent;                                      // 0x0968(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UCannonSquashComponent*                      CannonSquashComponent;                                     // 0x0970(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FPetMovementRequest                         ReplicatedMovementRequest;                                 // 0x0978(0x000C) (Net, RepNotify, Protected)
	float                                              TargetMeshRoll;                                            // 0x0984(0x0004) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_P3FO[0x10];                                    // 0x0988(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DefaultShipTurnRateModifier;                               // 0x0998(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GVRG[0x4];                                     // 0x099C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPetTurnRateModifier>                TurnRateModifierList;                                      // 0x09A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected)
	TArray<TEnumAsByte<Athena_EAthenaAnimationPetRoamingState>> LocomotingMovementStates;                                  // 0x09B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected)
	TArray<TEnumAsByte<Athena_EAthenaAnimationPetRoamingState>> RequestIdleOrMovementValidMovementStates;                  // 0x09C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected)
	float                                              MaxRollAngle;                                              // 0x09D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              DelayForDisablingMovementOnIdle;                           // 0x09D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              IslandDustRatePerSecond;                                   // 0x09D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FGuid                                       CrewId;                                                    // 0x09DC(0x0010) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected)
	bool                                               InHangout;                                                 // 0x09EC(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected)
	bool                                               PerchedInHangout;                                          // 0x09ED(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected)
	bool                                               ResetRollAndZOffset;                                       // 0x09EE(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected)
	bool                                               ShouldIgnoreTooltipDisplayOffset;                          // 0x09EF(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	struct FPetTurnToFaceData                          PetTurnToFaceData;                                         // 0x09F0(0x0020) (Net, RepNotify, Protected)
	unsigned char                                      UnknownData_DXHV[0x18];                                    // 0x0A10(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAIPartsRetrievalComponent*                  AIPartsRetrievalComponent;                                 // 0x0A28(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPetPartCustomisationComponent*              PetPartCustomisationComponent;                             // 0x0A30(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULightWeightStatusEffectManagerComponent*    LightWeightStatusEffectManagerComponent;                   // 0x0A38(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPetTelemetryComponent*                      TelemetryComponent;                                        // 0x0A40(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPetSicknessComponent*                       SicknessComponent;                                         // 0x0A48(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWaterExposureComponent*                     WaterExposureComponent;                                    // 0x0A50(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimationDataStoreComponent*                AnimationDataStoreComponent;                               // 0x0A58(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      SpawnedForShip;                                            // 0x0A60(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      PetOwner;                                                  // 0x0A68(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class AItemInfo*                                   PetInfo;                                                   // 0x0A70(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L2E3[0x8];                                     // 0x0A78(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDocker                                     Docker;                                                    // 0x0A80(0x0050) (Edit, DisableEditOnInstance)
	struct FStartPickupObjectActionRuleParams          StartPickupObjectActionRuleParams;                         // 0x0AD0(0x0010) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_OM4M[0x10];                                    // 0x0AE0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    CurrentlyPlayingParticleSystem;                            // 0x0AF0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      LandingStrategy;                                           // 0x0AF8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      PursuitStrategy;                                           // 0x0B00(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              DefaultRollLerpTime;                                       // 0x0B08(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LandingRollLerpTime;                                       // 0x0B0C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsBeingDismissed;                                          // 0x0B10(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_N5V2[0xEB];                                    // 0x0B11(0x00EB) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               IsInDisabledPetPerchHangout;                               // 0x0BFC(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               PetIsSad;                                                  // 0x0BFD(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_EN1T[0x32];                                    // 0x0BFE(0x0032) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.Pet");
		return ptr;
	}



	void SetExitTakeOffFlag(bool InExitTakeOffFlag);
	void OnShipDestroyed(class AActor* InShip);
	void OnRep_RollRequest();
	void OnRep_ResetRollAndZOffset();
	void OnRep_PetTurnToFaceData();
	void OnRep_PetOwner();
	void OnRep_PetIsSad();
	void OnRep_PerchedInHangout();
	void OnRep_MovementRequest();
	void OnRep_InHangout();
	void OnOwnerDestroyed(class AActor* InOwner);
	void Multicast_DitherOut();
	void Multicast_DitherIn();
	float GetFloorMeshOffsetZ();
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_SetRoamingPetAnimationState
// 0x00A8 (FullSize[0x0130] - InheritedSize[0x0088])
class UBTTask_SetRoamingPetAnimationState : public UBTTask_BlackboardBase
{
public:
	struct FWeightedPetAnimationSelector               WeightedAnimationSelection;                                // 0x0088(0x00A0) (Edit)
	unsigned char                                      UnknownData_Q7X9[0x8];                                     // 0x0128(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetRoamingPetAnimationState");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.EnvQueryContext_PositionFromBlackboard
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UEnvQueryContext_PositionFromBlackboard : public UEnvQueryContext
{
public:
	unsigned char                                      UnknownData_2SON[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_PositionFromBlackboard");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.PetDitherComponent
// 0x0070 (FullSize[0x0230] - InheritedSize[0x01C0])
class UPetDitherComponent : public UDitherComponent
{
public:
	unsigned char                                      UnknownData_5IRW[0x70];                                    // 0x01C0(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.PetDitherComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AINameplateComponent
// 0x0168 (FullSize[0x0448] - InheritedSize[0x02E0])
class UAINameplateComponent : public UNameplateComponent
{
public:
	unsigned char                                      UnknownData_S6K5[0x8];                                     // 0x02E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              VisibleFromWorldDistance;                                  // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VisibleUntilWorldDistance;                                 // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VisibleAfterDeathDuration;                                 // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L2UX[0x4];                                     // 0x02F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Title;                                                     // 0x02F8(0x0018) ELEMENT_SIZE_MISMATCH (Net, RepNotify)
	unsigned char                                      UnknownData_Q46C[0x20];                                    // 0x02F4(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       DisplayName;                                               // 0x0330(0x0018) ELEMENT_SIZE_MISMATCH (Net, RepNotify)
	unsigned char                                      UnknownData_91C0[0x20];                                    // 0x0330(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FString                                     DisplayNameAsString;                                       // 0x0368(0x0010) (Net, ZeroConstructor, RepNotify, HasGetValueTypeHash)
	struct FString                                     DebugDisplayText;                                          // 0x0378(0x0010) (Net, ZeroConstructor, RepNotify, HasGetValueTypeHash)
	bool                                               VisibilityDisabled;                                        // 0x0388(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9PEA[0xBF];                                    // 0x0389(0x00BF) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AINameplateComponent");
		return ptr;
	}



	void OnRep_Title();
	void OnRep_DisplayNameAsString();
	void OnRep_DisplayName();
	void OnRep_DebugDisplayText();
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.PetNameplateComponent
// 0x0028 (FullSize[0x0470] - InheritedSize[0x0448])
class UPetNameplateComponent : public UAINameplateComponent
{
public:
	struct FString                                     DefaultPetName;                                            // 0x0448(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EMH5[0x18];                                    // 0x0458(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.PetNameplateComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.PetPartCustomisationComponent
// 0x00B8 (FullSize[0x0180] - InheritedSize[0x00C8])
class UPetPartCustomisationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_IP2A[0x10];                                    // 0x00C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      AnimationDataStoreId;                                      // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPetPartSizeMappingsDataAsset*               SizeMappingsAsset;                                         // 0x00E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPetLoadedMaterial>                  CurrentlyLoadedMaterials;                                  // 0x00E8(0x0010) (ZeroConstructor, Transient)
	struct FStringAssetReference                       DefaultMeshRef;                                            // 0x00F8(0x0010) (ZeroConstructor, Transient)
	struct FStringAssetReference                       HighResMeshRef;                                            // 0x0108(0x0010) (ZeroConstructor, Transient)
	class USkeletalMesh*                               CurrentlyLoadedMesh;                                       // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaAI_EPetSize>                     CurrentPetSize;                                            // 0x0120(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Y5ID[0x7];                                     // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPetCustomisationOverrideDataAsset*          CurrentlyLoadedOverrideAsset;                              // 0x0128(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_W33G[0x50];                                    // 0x0130(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.PetPartCustomisationComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.PetPartSizeMappingsDataAsset
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UPetPartSizeMappingsDataAsset : public UDataAsset
{
public:
	TArray<struct FPetPartSizeMapping>                 Mappings;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FFloatRange                                 ConcealedScaleBounds;                                      // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.PetPartSizeMappingsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.PetSicknessComponent
// 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
class UPetSicknessComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_UI26[0x10];                                    // 0x00C8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.PetSicknessComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIPartsDesc
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UAIPartsDesc : public UDataAsset
{
public:
	struct FAIPartId                                   AIPartId;                                                  // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPartsDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.PetsPartsDesc
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UPetsPartsDesc : public UAIPartsDesc
{
public:
	struct FStringAssetReference                       Mesh;                                                      // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FStringAssetReference                       HighResMesh;                                               // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FPetMaterialEntry>                   PetMaterials;                                              // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<AthenaAI_EPetSize>                     PetSize;                                                   // 0x0060(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JSYO[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPetCustomisationOverrideDataAsset*          PetOverrideAsset;                                          // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.PetsPartsDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.PetTelemetryComponent
// 0x0048 (FullSize[0x0110] - InheritedSize[0x00C8])
class UPetTelemetryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_EC34[0x48];                                    // 0x00C8(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.PetTelemetryComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.PetWieldableReactMappingsDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UPetWieldableReactMappingsDataAsset : public UDataAsset
{
public:
	TArray<struct FPetWieldableReactMapping>           WieldableReactMappings;                                    // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.PetWieldableReactMappingsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.PreviewPet
// 0x00E8 (FullSize[0x04B8] - InheritedSize[0x03D0])
class APreviewPet : public AActor
{
public:
	unsigned char                                      UnknownData_DKKD[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Athena_EAthenaAnimationPetRoamingState> InitialAnimState;                                          // 0x03D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5PH1[0x3];                                     // 0x03D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIPartId                                   InitialPartIdToLoad;                                       // 0x03DC(0x0008) (Edit, Protected)
	unsigned char                                      UnknownData_SXY2[0x4];                                     // 0x03E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAIPartsCategory*                            PreviewPetPartsCategory;                                   // 0x03E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      PreviewPetMesh;                                            // 0x03F0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FPetAnimationDataPreview                    PreviewPetAnimationData;                                   // 0x03F8(0x0010) (Edit, DisableEditOnInstance, Protected)
	class UAIPartsRetrievalComponent*                  AIPartsRetrievalComponent;                                 // 0x0408(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPetPartCustomisationComponent*              PetPartCustomisationComponent;                             // 0x0410(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5B7P[0xA0];                                    // 0x0418(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.PreviewPet");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaSwimmingAIController
// 0x00E0 (FullSize[0x09D8] - InheritedSize[0x08F8])
class AAthenaSwimmingAIController : public AAthenaAIController
{
public:
	class USwimmingPathFollowingComponent*             SwimmingPathFollowingComponent;                            // 0x08F8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IgnoreTargetsOutOfWater;                                   // 0x0900(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_U409[0x7];                                     // 0x0901(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 DistOfAttackerVsChanceToPursue;                            // 0x0908(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               TimersToZeroIfStartingRevengeAttack;                       // 0x0910(0x0010) (Edit, ZeroConstructor)
	struct FName                                       DespawnRequiredBlackboardKey;                              // 0x0920(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       DespawnRequiredReasonBlackboardKey;                        // 0x0928(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PathingFailedWeight;                                       // 0x0930(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PathingFailedThresholdToDespawn;                           // 0x0934(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EER3[0xA0];                                    // 0x0938(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaSwimmingAIController");
		return ptr;
	}



	void ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* InControllerParametersAsset, class APawn* InPawn);
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTDecorator_NearSurfaceOfWater
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UBTDecorator_NearSurfaceOfWater : public UBTDecorator
{
public:
	float                                              DistanceFromSurface;                                       // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReverseLogic;                                              // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5JPA[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_NearSurfaceOfWater");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTService_SetFloatToTheSurfaceWhileInBranch
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UBTService_SetFloatToTheSurfaceWhileInBranch : public UBTService
{
public:
	bool                                               FloatToTheSurfaceWhileInBranch;                            // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_V2S9[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_SetFloatToTheSurfaceWhileInBranch");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_SetFloatToTheSurface
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTTask_SetFloatToTheSurface : public UBTTaskNode
{
public:
	bool                                               ShouldFloatToTheSurface;                                   // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WFPQ[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetFloatToTheSurface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.SwimmingCreatureMovementAnimationInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USwimmingCreatureMovementAnimationInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.SwimmingCreatureMovementAnimationInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.SwimmingPathFollowingComponent
// 0x0128 (FullSize[0x01F0] - InheritedSize[0x00C8])
class USwimmingPathFollowingComponent : public UActorComponent
{
public:
	float                                              DirectSwimmingDotToTarget;                                 // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ArcToTargetDotToTarget;                                    // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxTargetPitchFactor;                                      // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinPosDeltaSqToRepathToMovingTarget;                       // 0x00D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinPosDeltaSqToInvalidateFixedLocation;                    // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PitchBezierControlPointsLengthFactor;                      // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeMovingAwayFromTargetPosToFlagFailure;                  // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       LineOfSightCollisionProfile;                               // 0x00E4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LineOfSightSphereCastRadius;                               // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LineOfSightCheckInterval;                                  // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FirstLoSTriggerTimeInNewPath;                              // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FirstLoSTriggerTimeInRePath;                               // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DrawDebugOnServer;                                         // 0x00FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KW3A[0x3];                                     // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TEnumAsByte<Engine_ECollisionChannel>>      CollisionTypesToDoPathUpdate;                              // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USwimmingCreatureMovementComponent*          MovementComponent;                                         // 0x0110(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class AAthenaSwimmingAIController*                 SwimmingAIController;                                      // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	TEnumAsByte<AthenaAI_EArcFollowingMode>            ArcFollowingMode;                                          // 0x0120(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AE6I[0x57];                                    // 0x0121(0x0057) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      TargetActor;                                               // 0x0178(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HXGD[0x70];                                    // 0x0180(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.SwimmingPathFollowingComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_SwimTo
// 0x0078 (FullSize[0x0100] - InheritedSize[0x0088])
class UBTTask_SwimTo : public UBTTask_BlackboardBase
{
public:
	bool                                               WantsToReportPathFailure;                                  // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3CV7[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      PathFailureCounter;                                        // 0x0090(0x0028) (Edit)
	float                                              AcceptableRadius;                                          // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaAI_ESwimmingGoalCheckMode>       GoalCheckMode;                                             // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaAI_ESwimmingArcMode>             ArcMode;                                                   // 0x00BD(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaAI_EArcToTargetDirection>        ArcToTargetDirection;                                      // 0x00BE(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaAI_ETaskReaction>                Swim3DCrestingReaction;                                    // 0x00BF(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSpatialOffset                              OffsetFromTargetActor;                                     // 0x00C0(0x0008) (Edit)
	TEnumAsByte<AthenaAI_ESwimmingSyncMode>            SwimSyncMode;                                              // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TrackTargetActor;                                          // 0x00C9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HQ9Q[0x6];                                     // 0x00CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      TrackedTargetActorKey;                                     // 0x00D0(0x0028) (Edit)
	float                                              TimeToSlowDownAndStop;                                     // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaAI_ESwimmingLineOfSightTest>     LineOfSightTestMode;                                       // 0x00FC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YK9B[0x3];                                     // 0x00FD(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SwimTo");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_SwimTurnOnTheSpot
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UBTTask_SwimTurnOnTheSpot : public UBTTask_BlackboardBase
{
public:
	float                                              MaxTurnSpringAccel;                                        // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeUntilMaxTurnSpringAccel;                               // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AngleDeltaToAcceptFinalRotation;                           // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeout;                                                   // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SwimTurnOnTheSpot");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaAIControllerParamsDataAsset
// 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
class UAthenaAIControllerParamsDataAsset : public UDataAsset
{
public:
	struct FAthenaAIControllerSenseSettings            DefaultSenseSettings;                                      // 0x0028(0x0014) (Edit)
	float                                              AutoSuccessRangeFromLastSeenLocation;                      // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultPerceivedNotVisibleAge;                             // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OverrideTeamID;                                            // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Athena_EAthenaAITeam>                  TeamID;                                                    // 0x0045(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_66UT[0x2];                                     // 0x0046(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TargetSwitchScoreTolerance;                                // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VO8J[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      TargetLoadWeightingBias;                                   // 0x0050(0x0010) (Edit, ZeroConstructor)
	float                                              DistanceToStartTargetPickingDecrease;                      // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetPickingDistScoreAtMaxSightRange;                     // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VisionAngleToStartTargetPickingDecrease;                   // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetPickingFacingScoreAtMaxPeripheralVisionAngle;        // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseDamageAsFactorInTargetScore;                            // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_D004[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAthenaAIControllerDamageTargetScoreFromPerceivedTarget DamageTargetScores;                                        // 0x0074(0x0014) (Edit)
	TArray<class UAthenaAIControllerSharedParamValuesDataAsset*> SharedParamValues;                                         // 0x0088(0x0010) (Edit, ZeroConstructor)
	bool                                               IndividualOverrideMeshScale;                               // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WMDM[0x3];                                     // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IndividualMeshScale;                                       // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAthenaAIControllerHealthCustomisation      IndividualHealthCustomisationValues;                       // 0x00A0(0x000C) (Edit)
	unsigned char                                      UnknownData_DEXK[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAthenaAIControllerParamValue>       IndividualInitialBlackboardValues;                         // 0x00B0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIControllerParamValue>       IndividualNamedControllerParams;                           // 0x00C0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIControllerWeightedRangesParamValue> IndividualNamedWeightedRangesControllerParams;             // 0x00D0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIControllerSenseSettingOverride> IndividualAIStrategySenseSettingOverrides;                 // 0x00E0(0x0010) (Edit, ZeroConstructor)
	bool                                               IndividualOverrideCurrentTargetPerceivedNotVisibleAge;     // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QYEJ[0x3];                                     // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IndividualCurrentTargetPerceivedNotVisibleAge;             // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FeatureName;                                               // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIControllerParamsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.TinySharkTelemetryComponent
// 0x0110 (FullSize[0x01D8] - InheritedSize[0x00C8])
class UTinySharkTelemetryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_ZBFN[0x110];                                   // 0x00C8(0x0110) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.TinySharkTelemetryComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.TinySharkExperience
// 0x03A0 (FullSize[0x0770] - InheritedSize[0x03D0])
class ATinySharkExperience : public AActor
{
public:
	unsigned char                                      UnknownData_15C1[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RelevancyDistance;                                         // 0x03D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TrackingMovementCheckInterval;                             // 0x03DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEnvQuery*                                   TrackingMovementValidQuery;                                // 0x03E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BPN9[0xA0];                                    // 0x03E8(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAIOnDemandSpawner*                          TinySharkSpawner;                                          // 0x0488(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class ASharkPawn*                                  TinySharkPawn;                                             // 0x0490(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash)
	struct FName                                       HealthRTPC;                                                // 0x0498(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SSRH[0x8];                                     // 0x04A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTinySharkParams                            Params;                                                    // 0x04A8(0x00B8) (Transient, Protected)
	class UTinySharkTelemetryComponent*                TinySharkTelemetryComponent;                               // 0x0560(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class AShip*                                       TrackedShip;                                               // 0x0568(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XN88[0x80];                                    // 0x0570(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEncounterParams                            SightingEncounterParams;                                   // 0x05F0(0x000C) (Edit, DisableEditOnInstance, Protected)
	struct FEncounterParams                            CloseEncounterParams;                                      // 0x05FC(0x000C) (Edit, DisableEditOnInstance, Protected)
	unsigned char                                      UnknownData_880Y[0x140];                                   // 0x0608(0x0140) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TAssetPtr<class UAthenaAIControllerParamsDataAsset> CachedControllerParamsAsset;                               // 0x0748(0x001C) ELEMENT_SIZE_MISMATCH (UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_I5D1[0x4];                                     // 0x0608(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_OC2C[0x8];                                     // 0x0768(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.TinySharkExperience");
		return ptr;
	}



	void TinySharkPawnDestroyed(class AActor* InDestroyedActor);
	void OnRep_TinySharkPawn(class ASharkPawn* LastTinySharkPawn);
	class AShip* GetTrackedShip();
	TEnumAsByte<AthenaAI_ETinySharkState> GetCurrentState();
	TEnumAsByte<AthenaAI_ETinySharkActiveState> GetActiveState();
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.CoralShieldAbility
// 0x00B0 (FullSize[0x0128] - InheritedSize[0x0078])
class UCoralShieldAbility : public UAthenaAIAbility
{
public:
	TArray<TWeakObjectPtr<class APawn>>                PotentialTargets;                                          // 0x0078(0x0010) (ZeroConstructor, UObjectWrapper)
	unsigned char                                      CachedAIManager[0x10];                                     // 0x0088(0x0010) UNKNOWN PROPERTY: InterfaceProperty AthenaAI.CoralShieldAbility.CachedAIManager
	unsigned char                                      CachedBuffReceiver[0x10];                                  // 0x0098(0x0010) UNKNOWN PROPERTY: InterfaceProperty AthenaAI.CoralShieldAbility.CachedBuffReceiver
	TArray<struct FBuffedTargetData>                   BuffedTargets;                                             // 0x00A8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_WIZF[0x70];                                    // 0x00B8(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.CoralShieldAbility");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.ElectricShieldAbility
// 0x0098 (FullSize[0x0110] - InheritedSize[0x0078])
class UElectricShieldAbility : public UAthenaAIAbility
{
public:
	unsigned char                                      UnknownData_QKK9[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      SelectedTargets[0x10];                                     // 0x0078(0x0010) UNKNOWN PROPERTY: ArrayProperty AthenaAI.ElectricShieldAbility.SelectedTargets
	unsigned char                                      CachedAIManager[0x10];                                     // 0x0090(0x0010) UNKNOWN PROPERTY: InterfaceProperty AthenaAI.ElectricShieldAbility.CachedAIManager
	unsigned char                                      OwnerChainLightningSourceInterface[0x10];                  // 0x00A0(0x0010) UNKNOWN PROPERTY: InterfaceProperty AthenaAI.ElectricShieldAbility.OwnerChainLightningSourceInterface
	unsigned char                                      UnknownData_FTJZ[0x60];                                    // 0x00B0(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.ElectricShieldAbility");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.SporeBreathAIAbility
// 0x0038 (FullSize[0x00B0] - InheritedSize[0x0078])
class USporeBreathAIAbility : public UAthenaAIAbility
{
public:
	class AStatusEffectOverlapZone*                    BreathActor;                                               // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVFXSpawnerComponent*                        BreathVFX;                                                 // 0x0080(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UHCY[0x28];                                    // 0x0088(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.SporeBreathAIAbility");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaAIAbilityHandlerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAthenaAIAbilityHandlerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIAbilityHandlerInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.TinySharkParamsDataAsset
// 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
class UTinySharkParamsDataAsset : public UDataAsset
{
public:
	struct FTinySharkParams                            Params;                                                    // 0x0028(0x00B8) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.TinySharkParamsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.TinySharkServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTinySharkServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.TinySharkServiceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.TinySharkService
// 0x01B8 (FullSize[0x0588] - InheritedSize[0x03D0])
class ATinySharkService : public AActor
{
public:
	unsigned char                                      UnknownData_J9GQ[0x10];                                    // 0x03D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTinySharkServiceParamsDataAsset*            TinySharkServiceParams;                                    // 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HDIW[0x170];                                   // 0x03E8(0x0170) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ATinySharkExperience*>                TinySharkExperiences;                                      // 0x0558(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData_23F6[0x20];                                    // 0x0568(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.TinySharkService");
		return ptr;
	}



	bool RequestTinySharkWithShip(class AShip* InTrackedShip, int OverrideControllerParamIndex, int PartIndex);
	bool RequestTinySharkWithLocation(const struct FVector& SpawnLocation, int PartIndex);
	void DismissAllTinySharks();
	bool CanSpawnTinySharkExperience();
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.TinySharkServiceParamsDataAsset
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UTinySharkServiceParamsDataAsset : public UDataAsset
{
public:
	struct FTinySharkServiceParams                     Params;                                                    // 0x0028(0x0028) (Edit, DisableEditOnInstance)
	int                                                MaxNumTinySharkExperiences;                                // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WL6V[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.TinySharkServiceParamsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.MeshMemoryConstraintsAIPartsDesc
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UMeshMemoryConstraintsAIPartsDesc : public UAIPartsDesc
{
public:
	unsigned char                                      UnknownData_WTVQ[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FStringAssetReference                       Mesh;                                                      // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int64_t                                            CachedMeshResourceSize;                                    // 0x0048(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      MeshFallbackCategory;                                      // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      BudgetToCountMemoryAgainstIfNoFallback;                    // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                         // 0x0060(0x0010) (ZeroConstructor)
	TArray<struct FStringAssetReference>               FallbackOverrideMaterials;                                 // 0x0070(0x0010) (ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.MeshMemoryConstraintsAIPartsDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.TeleportAIAbility
// 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
class UTeleportAIAbility : public UAthenaAIAbility
{
public:
	unsigned char                                      UnknownData_ZPY5[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.TeleportAIAbility");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIItemParameterInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIItemParameterInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIItemParameterInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaAIControllerSharedParamValuesDataAsset
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UAthenaAIControllerSharedParamValuesDataAsset : public UDataAsset
{
public:
	bool                                               OverrideMeshScale;                                         // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5M59[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MeshScale;                                                 // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OverrideCurrentTargetPerceivedNotVisibleAge;               // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YJG2[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurrentTargetPerceivedNotVisibleAge;                       // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAthenaAIControllerSenseSettingOverride> AIStrategySenseSettingOverrides;                           // 0x0038(0x0010) (Edit, ZeroConstructor)
	struct FAthenaAIControllerHealthCustomisation      HealthCustomisationValues;                                 // 0x0048(0x000C) (Edit)
	unsigned char                                      UnknownData_A218[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAthenaAIControllerParamValue>       InitialBlackboardValues;                                   // 0x0058(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIControllerParamValue>       NamedControllerParams;                                     // 0x0068(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIControllerWeightedRangesParamValue> NamedWeightedRangesControllerParams;                       // 0x0078(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIControllerSharedParamValuesDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaAICharacterControllerSharedParamValuesDataAsset
// 0x00D0 (FullSize[0x0158] - InheritedSize[0x0088])
class UAthenaAICharacterControllerSharedParamValuesDataAsset : public UAthenaAIControllerSharedParamValuesDataAsset
{
public:
	bool                                               OverrideUseRVOAvoidance;                                   // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseRVOAvoidance;                                           // 0x0089(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OverridePrioritiseInteractablesBeforeEnemies;              // 0x008A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               PrioritiseInteractablesBeforeEnemies;                      // 0x008B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_X7WI[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 DistanceInMToCannonShotHitChanceCurve;                     // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAIStrategyMovementProperties>       AIStrategyMovementProperties;                              // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FItemCategoryAIStrategyMovementPropertiesOverride> ItemCategoryAIStrategyMovementPropertiesOverrides;         // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FAthenaAICharacterCannonTargetingParams     CannonTargetingParams;                                     // 0x00B8(0x0010) (Edit)
	TArray<struct FAthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties> WieldedItemProjectileEffectivenessProperties;              // 0x00C8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAICharacterControllerItemCategoryNamedParams> WieldedItemOverrideNamedControllerParams;                  // 0x00D8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIItemParamValue>             NamedItemParams;                                           // 0x00E8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAICharacterControllerSpawnItemDescForItemCategory> SpawnItemDescForItemCategories;                            // 0x00F8(0x0010) (Edit, ZeroConstructor)
	TArray<class UAthenaAIAbilityParams*>              AIAbilityParams;                                           // 0x0108(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference)
	TArray<struct FAthenaAIEngageEnemyData>            NonItemEngageOptions;                                      // 0x0118(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       AnimationDataOverrideAsset;                                // 0x0128(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       CustomAnimationAsset;                                      // 0x0138(0x0010) (Edit, ZeroConstructor)
	bool                                               OverrideNoInitialItem;                                     // 0x0148(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NoInitialItem;                                             // 0x0149(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OverrideBeginFleeing;                                      // 0x014A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               BeginFleeing;                                              // 0x014B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_V1BF[0x4];                                     // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEnvQuery*                                   FleeingEQS;                                                // 0x0150(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAICharacterControllerSharedParamValuesDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaAICharacterControllerParamsDataAsset
// 0x00F8 (FullSize[0x01F8] - InheritedSize[0x0100])
class UAthenaAICharacterControllerParamsDataAsset : public UAthenaAIControllerParamsDataAsset
{
public:
	bool                                               IndividualOverrideUseRVOAvoidance;                         // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IndividualUseRVOAvoidance;                                 // 0x0101(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IndividualOverridePrioritiseInteractablesBeforeEnemies;    // 0x0102(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IndividualPrioritiseInteractablesBeforeEnemies;            // 0x0103(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_D1V4[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 IndividualDistanceInMToCannonShotHitChanceCurve;           // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAIStrategyMovementProperties>       IndividualAIStrategyMovementProperties;                    // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FItemCategoryAIStrategyMovementPropertiesOverride> IndividualItemCategoryAIStrategyMovementPropertiesOverrides; // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FAthenaAICharacterCannonTargetingParams     IndividualCannonTargetingParams;                           // 0x0130(0x0010) (Edit)
	TArray<struct FAthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties> IndividualWieldedItemProjectileEffectivenessProperties;    // 0x0140(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAICharacterControllerItemCategoryNamedParams> IndividualWieldedItemOverrideNamedControllerParams;        // 0x0150(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIItemParamValue>             IndividualNamedItemParams;                                 // 0x0160(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAICharacterControllerSpawnItemDescForItemCategory> IndividualSpawnItemDescForItemCategories;                  // 0x0170(0x0010) (Edit, ZeroConstructor)
	bool                                               UseDamageBasedAbilityStages;                               // 0x0180(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XTF1[0x7];                                     // 0x0181(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      HealthStages;                                              // 0x0188(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIAbilityDamageStage>         IndividualDamageBasedAIAbilityStages;                      // 0x0198(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference)
	TArray<class UAthenaAIAbilityParams*>              IndividualAIAbilityParams;                                 // 0x01A8(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference)
	TArray<struct FAthenaAIEngageEnemyData>            IndividualNonItemEngageOptions;                            // 0x01B8(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       IndividualAnimationDataOverrideAsset;                      // 0x01C8(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       IndividualCustomAnimationAsset;                            // 0x01D8(0x0010) (Edit, ZeroConstructor)
	bool                                               IndividualOverrideNoInitialItem;                           // 0x01E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IndividualNoInitialItem;                                   // 0x01E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IndividualOverrideBeginFleeing;                            // 0x01EA(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IndividualBeginFleeing;                                    // 0x01EB(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RQJP[0x4];                                     // 0x01EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEnvQuery*                                   IndividualFleeingEQS;                                      // 0x01F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAICharacterControllerParamsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaAIAmmoDataAsset
// 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
class UAthenaAIAmmoDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData_GL1I[0x90];                                    // 0x0028(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAthenaAICharacterControllerWeightedAmmoType> AmmoWeights;                                               // 0x00B8(0x0010) (Edit, ZeroConstructor)
	struct FName                                       FeatureName;                                               // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIAmmoDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIAmmoRankProgression
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAIAmmoRankProgression : public UDataAsset
{
public:
	TArray<struct FAIAmmoRankMapping>                  RankMappings;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_67ZM[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIAmmoRankProgression");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIAmmoProgressionTypeList
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAIAmmoProgressionTypeList : public UDataAsset
{
public:
	TArray<class UAIAmmoRankProgression*>              AllProgressions;                                           // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIAmmoProgressionTypeList");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIAmmoTypeList
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAIAmmoTypeList : public UDataAsset
{
public:
	TArray<class UAthenaAIAmmoDataAsset*>              AllAmmo;                                                   // 0x0028(0x0010) (Edit, ZeroConstructor)
	class UAthenaAIAmmoDataAsset*                      DefaultAmmo;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIAmmoTypeList");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIAnimationStateInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIAnimationStateInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIAnimationStateInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIChargeUpInterruptedStatus
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAIChargeUpInterruptedStatus : public UStatusBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIChargeUpInterruptedStatus");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIClassId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIClassId : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIClassId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIPartsCategory
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UAIPartsCategory : public UDataAsset
{
public:
	TArray<class UAIPartsDesc*>                        Parts;                                                     // 0x0028(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, ContainsInstancedReference)
	int                                                NextPartsIndex;                                            // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseWeightedArray;                                          // 0x003C(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MUJV[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       UseWeightedArrayFeatureName;                               // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeightedProbabilityRange                   WeightedArray;                                             // 0x0048(0x0020) (Edit, DisableEditOnTemplate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPartsCategory");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIPartsServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIPartsServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPartsServiceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIEncounterServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIEncounterServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIEncounterServiceInterface");
		return ptr;
	}



	void RegisterLoadedSkillsetProgression(TAssetPtr<class UAISkillsetRankProgression> Progression);
	void RegisterLoadedSkillset(TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset);
	void RegisterLoadedLoadout(TAssetPtr<class ULoadoutAsset> Loadout);
	void RegisterLoadedForm(TAssetPtr<class UAthenaAIFormDataAsset> Form);
	void RegisterLoadedEncounter(TAssetPtr<class UAIEncounterSettings> Encounter);
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIClassIdTypeList
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAIClassIdTypeList : public UDataAsset
{
public:
	TArray<class UClass*>                              AllClassIds;                                               // 0x0028(0x0010) (Edit, ZeroConstructor, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIClassIdTypeList");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIColorVariantPool
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAIColorVariantPool : public UDataAsset
{
public:
	TArray<struct FStringAssetReference>               AvailableColors;                                           // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIColorVariantPool");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AICombatEncounterInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAICombatEncounterInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AICombatEncounterInterface");
		return ptr;
	}



	void OnVulnerabilityStateEntered();
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIDebugVisualisationComponent
// 0x0050 (FullSize[0x0118] - InheritedSize[0x00C8])
class UAIDebugVisualisationComponent : public UActorComponent
{
public:
	TArray<struct FAIDebugVisualisationLine>           Lines;                                                     // 0x00C8(0x0010) (Edit, Net, ZeroConstructor)
	TArray<struct FAIDebugVisualisationBox>            Boxes;                                                     // 0x00D8(0x0010) (Edit, Net, ZeroConstructor)
	TArray<struct FAIDebugVisualisationCylinder>       Cylinders;                                                 // 0x00E8(0x0010) (Edit, Net, ZeroConstructor)
	TArray<struct FAIDebugVisualisationSphere>         Spheres;                                                   // 0x00F8(0x0010) (Edit, Net, ZeroConstructor)
	TArray<struct FAIDebugVisualisationCone>           Cones;                                                     // 0x0108(0x0010) (Edit, Net, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIDebugVisualisationComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIElectricProjectileInterruptedStatus
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAIElectricProjectileInterruptedStatus : public UStatusBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIElectricProjectileInterruptedStatus");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIEncounterGenerationRecipe
// 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
class UAIEncounterGenerationRecipe : public UDataAsset
{
public:
	TArray<struct FAIFormVarietyEntry>                 Forms;                                                     // 0x0028(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       SkillsetProgression;                                       // 0x0038(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       ItemDropProgression;                                       // 0x0048(0x0010) (Edit, ZeroConstructor)
	struct FTargetSkillsetProgressionPair              TargetSkillsetOverrides;                                   // 0x0058(0x0020) (Edit)
	struct FTargetItemDropProgressionPair              TargetItemDropOverrides;                                   // 0x0078(0x0020) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIEncounterGenerationRecipe");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIEncounterGenerationRecipeRankOrderList
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UAIEncounterGenerationRecipeRankOrderList : public UDataAsset
{
public:
	TArray<class UAIEncounterGenerationRecipe*>        Recipes;                                                   // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAIEncounterGenerationRecipeFeatureBasedRankOrderList> FeatureBasedRecipeLists;                                   // 0x0038(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIEncounterGenerationRecipeRankOrderList");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIEncounterGenerationRecipeTypeList
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAIEncounterGenerationRecipeTypeList : public UDataAsset
{
public:
	TArray<class UAIEncounterGenerationRecipe*>        AllRecipes;                                                // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIEncounterGenerationRecipeTypeList");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIEncounterGenerationServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIEncounterGenerationServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIEncounterGenerationServiceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIEncounterGenerationService
// 0x0088 (FullSize[0x0458] - InheritedSize[0x03D0])
class AAIEncounterGenerationService : public AActor
{
public:
	unsigned char                                      UnknownData_95HA[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAIEncounterGenerationRecipeTypeList*        GenerationRecipes;                                         // 0x03D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      EncounterService[0x10];                                    // 0x03E0(0x0010) UNKNOWN PROPERTY: InterfaceProperty AthenaAI.AIEncounterGenerationService.EncounterService
	unsigned char                                      UnknownData_4S33[0x68];                                    // 0x03F0(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIEncounterGenerationService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIFormRankProgression
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAIFormRankProgression : public UDataAsset
{
public:
	TArray<struct FAIFormRankMapping>                  RankMappings;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DMOA[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIFormRankProgression");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIFormProgressionTypeList
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAIFormProgressionTypeList : public UDataAsset
{
public:
	TArray<class UAIFormRankProgression*>              AllProgressions;                                           // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIFormProgressionTypeList");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIFormTypeList
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAIFormTypeList : public UDataAsset
{
public:
	TArray<class UAthenaAIFormDataAsset*>              AllForms;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor)
	class UAthenaAIFormDataAsset*                      DefaultForm;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIFormTypeList");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AILoadoutProgressionTypeList
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAILoadoutProgressionTypeList : public UDataAsset
{
public:
	TArray<class UAILoadoutRankProgression*>           AllProgressions;                                           // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AILoadoutProgressionTypeList");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AILoadoutTypeList
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAILoadoutTypeList : public UDataAsset
{
public:
	TArray<class ULoadoutAsset*>                       AllLoadouts;                                               // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AILoadoutTypeList");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AISkillsetProgressionTypeList
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAISkillsetProgressionTypeList : public UDataAsset
{
public:
	TArray<class UAISkillsetRankProgression*>          AllProgressions;                                           // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISkillsetProgressionTypeList");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AISkillsetTypeList
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAISkillsetTypeList : public UDataAsset
{
public:
	TArray<class UAthenaAIControllerParamsDataAsset*>  AllSkillsets;                                              // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISkillsetTypeList");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIPartsCategoryTypeList
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAIPartsCategoryTypeList : public UDataAsset
{
public:
	TArray<class UAIPartsCategory*>                    AllPartsCategories;                                        // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPartsCategoryTypeList");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIEncounterService
// 0x03D0 (FullSize[0x07A0] - InheritedSize[0x03D0])
class AAIEncounterService : public AActor
{
public:
	unsigned char                                      UnknownData_QXB7[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAIPartsCategoryMapping>             DefaultPartsCategories;                                    // 0x03D8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAIPartsCategoryFormMapping>         FormPartsCategories;                                       // 0x03E8(0x0010) (Edit, ZeroConstructor)
	class UAIAmmoTypeList*                             Ammo;                                                      // 0x03F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIAmmoProgressionTypeList*                  AmmoProgressions;                                          // 0x0400(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIFormTypeList*                             Forms;                                                     // 0x0408(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIFormProgressionTypeList*                  FormProgressions;                                          // 0x0410(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAILoadoutTypeList*                          Loadouts;                                                  // 0x0418(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAILoadoutProgressionTypeList*               LoadoutProgressions;                                       // 0x0420(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAISkillsetTypeList*                         Skillsets;                                                 // 0x0428(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAISkillsetProgressionTypeList*              SkillsetProgressions;                                      // 0x0430(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIClassIdTypeList*                          ClassIds;                                                  // 0x0438(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIPartsCategoryTypeList*                    PartsCategories;                                           // 0x0440(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIColorVariantPool*                         TeamColors;                                                // 0x0448(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIItemDropComponentList*                    AIItemDropSpawners;                                        // 0x0450(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIItemDropComponentRankProgressionList*     AIItemDropSpawnerProgressions;                             // 0x0458(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAIEncounterSettings*>                DebugSpawnableEncounterSettings;                           // 0x0460(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData_GDN4[0x330];                                   // 0x0470(0x0330) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIEncounterService");
		return ptr;
	}



	void RegisterLoadedSkillsetProgression(TAssetPtr<class UAISkillsetRankProgression> Progression);
	void RegisterLoadedSkillset(TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset);
	void RegisterLoadedLoadout(TAssetPtr<class ULoadoutAsset> Loadout);
	void RegisterLoadedForm(TAssetPtr<class UAthenaAIFormDataAsset> Form);
	void RegisterLoadedEncounter(TAssetPtr<class UAIEncounterSettings> Encounter);
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AISkillsetRankProgression
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAISkillsetRankProgression : public UDataAsset
{
public:
	TArray<struct FAISkillsetRankMapping>              RankMappings;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FR0F[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISkillsetRankProgression");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIEncounterSettings
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UAIEncounterSettings : public UDataAsset
{
public:
	TAssetPtr<class UClass>                            PawnClass;                                                 // 0x0028(0x001C) ELEMENT_SIZE_MISMATCH (Edit, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LVCJ[0x4];                                     // 0x0028(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UClass*                                      AIClass;                                                   // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FStringAssetReference                       TeamColor;                                                 // 0x0050(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIEncounterSettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIEncounterSettingsFixed
// 0x00B0 (FullSize[0x0110] - InheritedSize[0x0060])
class UAIEncounterSettingsFixed : public UAIEncounterSettings
{
public:
	struct FStringAssetReference                       SpecificSkillset;                                          // 0x0060(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       Loadout;                                                   // 0x0070(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       Form;                                                      // 0x0080(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       Ammo;                                                      // 0x0090(0x0010) (Edit, ZeroConstructor)
	struct FName                                       DioramaRole;                                               // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       LocalisableName;                                           // 0x00A8(0x0018) ELEMENT_SIZE_MISMATCH (Edit)
	unsigned char                                      UnknownData_BJHQ[0x20];                                    // 0x00A8(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FEncounterParams                            EncounterTrackingParams;                                   // 0x00E0(0x000C) (Edit)
	unsigned char                                      UnknownData_0UX8[0x4];                                     // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TAssetPtr<class UClass>                            ItemDropComponentClass;                                    // 0x00F0(0x001C) ELEMENT_SIZE_MISMATCH (Edit, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LGQT[0x4];                                     // 0x00EC(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIEncounterSettingsFixed");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIEncounterSettingsRankProgression
// 0x0060 (FullSize[0x00C0] - InheritedSize[0x0060])
class UAIEncounterSettingsRankProgression : public UAIEncounterSettings
{
public:
	struct FStringAssetReference                       SkillsetProgression;                                       // 0x0060(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       LoadoutProgression;                                        // 0x0070(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       FormProgression;                                           // 0x0080(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       AmmoProgression;                                           // 0x0090(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       ItemDropComponentProgression;                              // 0x00A0(0x0010) (Edit, ZeroConstructor)
	struct FEncounterParams                            EncounterTrackingParams;                                   // 0x00B0(0x000C) (Edit)
	unsigned char                                      UnknownData_ALD9[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIEncounterSettingsRankProgression");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIFormItemSpawnRequirement
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class UAIFormItemSpawnRequirement : public USpawnRequirement
{
public:
	TArray<class UAthenaAIFormDataAsset*>              AllowedForms;                                              // 0x0050(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIFormItemSpawnRequirement");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIIdentifierOwnerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIIdentifierOwnerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIIdentifierOwnerInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIInteractableInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIInteractableInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIInteractableInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIInteractableOperatorInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIInteractableOperatorInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIInteractableOperatorInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIItemDropComponentList
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAIItemDropComponentList : public UDataAsset
{
public:
	TArray<TAssetPtr<class UClass>>                    AllSpawners;                                               // 0x0028(0x0010) (Edit, ZeroConstructor, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIItemDropComponentList");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIItemDropComponentRankProgressionList
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAIItemDropComponentRankProgressionList : public UDataAsset
{
public:
	TArray<class UAIItemSpawnRankProgression*>         AllProgressions;                                           // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIItemDropComponentRankProgressionList");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIItemSpawnDataSourceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIItemSpawnDataSourceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIItemSpawnDataSourceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIItemSpawnDataSourceComponent
// 0x0010 (FullSize[0x02C0] - InheritedSize[0x02B0])
class UAIItemSpawnDataSourceComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_FD56[0x8];                                     // 0x02B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UItemSpawnTransformWithRandomQuantityDataAssset* ItemSpawnDataAsset;                                        // 0x02B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIItemSpawnDataSourceComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIItemSpawnRankProgression
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAIItemSpawnRankProgression : public UDataAsset
{
public:
	TArray<struct FAIDropSpawnerRankMapping>           RankMappings;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7D8Z[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIItemSpawnRankProgression");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AILoadoutInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAILoadoutInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AILoadoutInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AILoadoutItemSpawnRequirement
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class UAILoadoutItemSpawnRequirement : public USpawnRequirement
{
public:
	TArray<class ULoadoutAsset*>                       AllowedLoadouts;                                           // 0x0050(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AILoadoutItemSpawnRequirement");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AILoadoutRankProgression
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAILoadoutRankProgression : public UDataAsset
{
public:
	TArray<struct FAILoadoutRankMapping>               RankMappings;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L9XI[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AILoadoutRankProgression");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AILoadoutWithNonStorableInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAILoadoutWithNonStorableInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AILoadoutWithNonStorableInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIManagerBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIManagerBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIManagerBlueprintFunctionLibrary");
		return ptr;
	}



	class AItemInfo* STATIC_SpawnItemFromAI(class APawn* Pawn, class UClass* ItemDesc);
	int STATIC_GetFrameCounter();
	void STATIC_AddNameplateToAIWithLocalisedName(class AActor* Actor, const struct FText& DisplayName);
	void STATIC_AddNameplateToAI(class AActor* Actor, const struct FString& DisplayName);
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIManagerServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIManagerServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIManagerServiceInterface");
		return ptr;
	}



	void StartDespawnAI(class APawn* AIActor, TEnumAsByte<Athena_ECharacterDeathType> DeathType);
	int GetNumOfSpawnedPawns();
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaAIAbilityComponent
// 0x0108 (FullSize[0x01D0] - InheritedSize[0x00C8])
class UAthenaAIAbilityComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_W894[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UAthenaAIAbility*>                    AIAbilities;                                               // 0x00D0(0x0010) (ZeroConstructor, Transient)
	TArray<class UAthenaAIAbility*>                    ActivatableAbilitiesInCurrentStage;                        // 0x00E0(0x0010) (ZeroConstructor, Transient)
	class UAthenaAIAbility*                            CurrentAIAbility;                                          // 0x00F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      QueuedAbilityType;                                         // 0x00F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      DebugAlwaysOnAbility;                                      // 0x0100(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FAthenaAIAbilityDamageStage>         AbilityDamageStages;                                       // 0x0108(0x0010) (ZeroConstructor, Transient, ContainsInstancedReference)
	unsigned char                                      UnknownData_6BXV[0xB8];                                    // 0x0118(0x00B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIAbilityComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaAIAbilityHandlerComponent
// 0x0118 (FullSize[0x01E0] - InheritedSize[0x00C8])
class UAthenaAIAbilityHandlerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_0GXG[0xB0];                                    // 0x00C8(0x00B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAthenaAIAbilityDamageStage>         AbilityStages;                                             // 0x0178(0x0010) (ZeroConstructor, ContainsInstancedReference, Protected)
	TArray<class UAthenaAIAbility*>                    AIAbilities;                                               // 0x0188(0x0010) (ZeroConstructor)
	TArray<class UClass*>                              ReadyAbilitiesPool;                                        // 0x0198(0x0010) (ZeroConstructor, UObjectWrapper)
	unsigned char                                      UnknownData_8C7E[0x20];                                    // 0x01A8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DebugAlwaysOnAbility;                                      // 0x01C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      RequiresActivation;                                        // 0x01D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_R97D[0x8];                                     // 0x01D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIAbilityHandlerComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.CoralShieldAbilityParams
// 0x0038 (FullSize[0x0100] - InheritedSize[0x00C8])
class UCoralShieldAbilityParams : public UAthenaAIAbilityParams
{
public:
	float                                              ShieldEffectRadius;                                        // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageNeededToBreakShield;                                 // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ShieldLifeTime;                                            // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DLQF[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FStatus                                     CoralShieldStatusEffect;                                   // 0x00D8(0x0018) (Edit)
	class UDamageableVulnerabilityLayer*               VulnerabilityToApplyToSelf;                                // 0x00F0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                              DelayBeforeSFXPlays;                                       // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SFTR[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.CoralShieldAbilityParams");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaAITypeListDataAsset
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UAthenaAITypeListDataAsset : public UDataAsset
{
public:
	TArray<struct FAITypeData>                         AITypes;                                                   // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FStringClassReference>               AdditionalAIActors;                                        // 0x0038(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAITypeListDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AISpawnWaveSequence
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAISpawnWaveSequence : public UDataAsset
{
public:
	TArray<struct FAISpawnerWave>                      Waves;                                                     // 0x0028(0x0010) (Edit, ZeroConstructor)
	struct FName                                       FeatureName;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnWaveSequence");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AISpawnWaveSequenceRankProgression
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAISpawnWaveSequenceRankProgression : public UDataAsset
{
public:
	TArray<struct FAISpawnWaveSequenceRankMapping>     RankMappings;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DI05[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnWaveSequenceRankProgression");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIWeightedProbabilityRangeOfRangesAsset
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UAIWeightedProbabilityRangeOfRangesAsset : public UDataAsset
{
public:
	float                                              RespawnChance;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YE8J[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeightedProbabilityRangeOfRanges           RespawnTimerRanges;                                        // 0x0030(0x0030) (Edit)
	struct FName                                       FeatureName;                                               // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIWeightedProbabilityRangeOfRangesAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIWeightedProbabilityRangeOfRangesRankProgression
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAIWeightedProbabilityRangeOfRangesRankProgression : public UDataAsset
{
public:
	TArray<struct FAIWeightedProbabilityRangeOfRangesRankMapping> RankMappings;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_G7ME[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIWeightedProbabilityRangeOfRangesRankProgression");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIPlayerTrackerObservedInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIPlayerTrackerObservedInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPlayerTrackerObservedInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIPlayerTrackerObserverInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIPlayerTrackerObserverInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPlayerTrackerObserverInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AISpawnRequestResultLoggerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAISpawnRequestResultLoggerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnRequestResultLoggerInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaAISettings
// 0x00A0 (FullSize[0x00D8] - InheritedSize[0x0038])
class UAthenaAISettings : public UDeveloperSettings
{
public:
	struct FStringAssetReference                       AITypesAsset;                                              // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       AISpawnContextListAsset;                                   // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	int                                                FallbackAIDifficultyRank;                                  // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxNumOfSpawnedActors;                                     // 0x005C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxPlayerEquivalentAIsPerRegion;                           // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxWorldAICostUnitsForWorld;                               // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AIRegionCostUnitsForPlayer;                                // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CharacterNetRelevancy;                                     // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CharacterRegionDensityCheckTimer;                          // 0x0070(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CharacterWorldDensityCheckTimer;                           // 0x0074(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceToPlayerToRaiseSpawnPriority;                      // 0x0078(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinRetryingCanSpawnRequestTime;                            // 0x007C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxRetryingCanSpawnRequestTime;                            // 0x0080(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinRetryingLocationCheckTime;                              // 0x0084(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxRetryingLocationCheckTime;                              // 0x0088(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CharacterAINoiseTickInterval;                              // 0x008C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PeriodicAINoiseComponentTickInterval;                      // 0x0090(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FaunaPlayerProximityDormancyRange;                         // 0x0094(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FaunaPlayerProximityTickTime;                              // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FaunaTimeOutOfPlayerProximityForDormancy;                  // 0x009C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultNavAgentCapsuleRadius;                              // 0x00A0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultNavAgentCapsuleHalfHeight;                          // 0x00A4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinDelayBeforeRetryingUnsuccessfulWave;                    // 0x00A8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDelayBeforeRetryingUnsuccessfulWave;                    // 0x00AC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStringAssetReference                       AIEncounterServiceAssetClassFileLocation;                  // 0x00B0(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       AIEncounterGenerationServiceAssetClassFileLocation;        // 0x00C0(0x0010) (Edit, ZeroConstructor, Config)
	struct FName                                       AICharacterWaterInteractionCollisionProfileName;           // 0x00D0(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAISettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AISpawnContextId
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UAISpawnContextId : public UObject
{
public:
	int                                                Weighting;                                                 // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NV98[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnContextId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.CustomizableAIManagerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCustomizableAIManagerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.CustomizableAIManagerInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIManagerService
// 0x0680 (FullSize[0x0A50] - InheritedSize[0x03D0])
class AAIManagerService : public AActor
{
public:
	unsigned char                                      UnknownData_R2NW[0x108];                                   // 0x03D0(0x0108) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              LoadedAIPawnClasses;                                       // 0x04D8(0x0010) (ZeroConstructor, Protected)
	TArray<class UClass*>                              LoadedAIItemDropComponentClasses;                          // 0x04E8(0x0010) (ZeroConstructor, Protected)
	unsigned char                                      UnknownData_T0G4[0x8];                                     // 0x04F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AAmbientWaterSpawnerManager*                 AmbientWaterSpawnerManager;                                // 0x0500(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4DDO[0x330];                                   // 0x0508(0x0330) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UAIPlayerTracker*>                    PlayerTrackers;                                            // 0x0838(0x0010) (ZeroConstructor)
	TArray<struct FCustomPlayersAITrackerData>         CustomPlayersTrackerDatas;                                 // 0x0848(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_ODPK[0x100];                                   // 0x0858(0x0100) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UAISpawner*>                          SpawnersPendingShutdown;                                   // 0x0958(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_EUL5[0xA8];                                    // 0x0968(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAthenaAITypeListDataAsset*                  AITypeList;                                                // 0x0A10(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAISpawnContextList*                         AISpawnContextList;                                        // 0x0A18(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HVSA[0x30];                                    // 0x0A20(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIManagerService");
		return ptr;
	}



	void TickService(float DeltaSeconds);
	void StartDespawnAI(class APawn* AIActor, TEnumAsByte<Athena_ECharacterDeathType> DeathType);
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.DebugAIManagerServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDebugAIManagerServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.DebugAIManagerServiceInterface");
		return ptr;
	}



	void SetMaxNumOfSpawnedActors(int InMaxNumOfSpawnedActors);
	void SetMaxAICostUnitsPerRegion(int InMaxAICostUnitsPerRegion);
	void SetMaxAICostUnitsForWorld(int InMaxAICostUnitsForWorld);
	void SetIgnoreCharacterLimits(bool Ignore);
	void SetDistanceToPlayerToRaiseSpawnPriority(float InDistanceToPlayerToRaiseSpawnPriority);
	void SetCharacterWorldDensityCheckTimer(float InCharacterWorldDensityCheckTimer);
	void SetCharacterRegionDensityCheckTimer(float InCharacterRegionDensityCheckTimer);
	void SetCharacterNetRelevancy(float InCloseByCharactersRadius);
	bool BlockAIAbility(class UClass* InExclusive, bool InBlockState);
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.DebugAIManagerService
// 0x0100 (FullSize[0x0B50] - InheritedSize[0x0A50])
class ADebugAIManagerService : public AAIManagerService
{
public:
	unsigned char                                      UnknownData_HFX0[0xF0];                                    // 0x0A50(0x00F0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              BlockedAIAbilities;                                        // 0x0B40(0x0010) (ZeroConstructor, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.DebugAIManagerService");
		return ptr;
	}



	void SetMaxNumOfSpawnedActors(int InMaxNumOfSpawnedActors);
	void SetMaxAICostUnitsPerRegion(int InMaxAICostUnitsPerRegion);
	void SetMaxAICostUnitsForWorld(int InMaxAICostUnitsForWorld);
	void SetIgnoreCharacterLimits(bool Ignore);
	void SetDistanceToPlayerToRaiseSpawnPriority(float InDistanceToPlayerToRaiseSpawnPriority);
	void SetCharacterWorldDensityCheckTimer(float InCharacterWorldDensityCheckTimer);
	void SetCharacterRegionDensityCheckTimer(float InCharacterRegionDensityCheckTimer);
	void SetCharacterNetRelevancy(float InCloseByCharactersRadius);
	bool BlockAIAbility(class UClass* InExclusive, bool InBlockState);
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AINoiseFireInstigator
// 0x0008 (FullSize[0x03D8] - InheritedSize[0x03D0])
class AAINoiseFireInstigator : public AActor
{
public:
	unsigned char                                      UnknownData_5SJR[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AINoiseFireInstigator");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIPartsService
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAIPartsService : public UObject
{
public:
	unsigned char                                      UnknownData_QBDY[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAIPartsCategoryTypeList*                    PartsCategoriesList;                                       // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UAIColorVariantPool*                         TeamColors;                                                // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPartsService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIPartCustomizationInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIPartCustomizationInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPartCustomizationInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIPartIdListingAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAIPartIdListingAsset : public UDataAsset
{
public:
	TArray<struct FAIPartIdNumVariantInfo>             AIPartIdsVariantInfo;                                      // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPartIdListingAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIPartsRetrievalInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIPartsRetrievalInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPartsRetrievalInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIPartsRetrievalComponent
// 0x00A8 (FullSize[0x0170] - InheritedSize[0x00C8])
class UAIPartsRetrievalComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_Y8L6[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAIPartsCategory*                            PartsCategory;                                             // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FReplicatedAIPartsData                      ReplicatedAIPartsData;                                     // 0x00D8(0x0018) (Net, RepNotify)
	unsigned char                                      UnknownData_6PJ7[0x80];                                    // 0x00F0(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPartsRetrievalComponent");
		return ptr;
	}



	void RequestNewAIParts(class UAIPartsCategory* AssignedPartsCategory, int PartsIndexToUse, int TeamColorIndex);
	void OnRep_ReplicatedAIPartsData();
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIPawnInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIPawnInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPawnInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIPawnTurnActiveInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIPawnTurnActiveInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPawnTurnActiveInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIProximityPlayerTracker
// 0x01E0 (FullSize[0x0228] - InheritedSize[0x0048])
class UAIProximityPlayerTracker : public UAISpawnerPlayerTracker
{
public:
	unsigned char                                      UnknownData_OFUZ[0x1E0];                                   // 0x0048(0x01E0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIProximityPlayerTracker");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.FilterFirstPlayerEnterPlayerTrackerDecorator
// 0x0038 (FullSize[0x0080] - InheritedSize[0x0048])
class UFilterFirstPlayerEnterPlayerTrackerDecorator : public UAISpawnerPlayerTracker
{
public:
	unsigned char                                      UnknownData_94P6[0x38];                                    // 0x0048(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.FilterFirstPlayerEnterPlayerTrackerDecorator");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIProjectileInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIProjectileInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIProjectileInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIRegionInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIRegionInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIRegionInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIRegionComponent
// 0x0070 (FullSize[0x0320] - InheritedSize[0x02B0])
class UAIRegionComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_4EC4[0x8];                                     // 0x02B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               UpdateRegionPosition;                                      // 0x02B8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XT16[0x3];                                     // 0x02B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       NavMeshAgentType;                                          // 0x02BC(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RegionRadius;                                              // 0x02C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSpawnLocationGroup>                 SpawnLocationGroups;                                       // 0x02C8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData_PUHL[0x48];                                    // 0x02D8(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIRegionComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIShipInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIShipInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIShipInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AISkillsetItemSpawnRequirement
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class UAISkillsetItemSpawnRequirement : public USpawnRequirement
{
public:
	TArray<class UAthenaAIControllerParamsDataAsset*>  DisallowedSkillsets;                                       // 0x0050(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISkillsetItemSpawnRequirement");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AISpawnContextContainerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAISpawnContextContainerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnContextContainerInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AISpawnContextContainerComponent
// 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
class UAISpawnContextContainerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_GWR7[0x18];                                    // 0x00C8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnContextContainerComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AISpawnContextList
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAISpawnContextList : public UDataAsset
{
public:
	TArray<struct FAISpawnContextData>                 SpawnContextList;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnContextList");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AISpawnContextProviderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAISpawnContextProviderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnContextProviderInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIFixedWavesSpawner
// 0x0028 (FullSize[0x0450] - InheritedSize[0x0428])
class UAIFixedWavesSpawner : public UAISpawner
{
public:
	TArray<struct FAIPersistentSpawnerWave>            SpawnedWaves;                                              // 0x0428(0x0010) (Edit, ZeroConstructor)
	int                                                NumWavesToSpawnOnSpottedNewTarget;                         // 0x0438(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PIIQ[0x14];                                    // 0x043C(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIFixedWavesSpawner");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIIncrementalWaveSpawner
// 0x0118 (FullSize[0x0540] - InheritedSize[0x0428])
class UAIIncrementalWaveSpawner : public UAISpawner
{
public:
	struct FAISpawnerWave                              SpawnedWave;                                               // 0x0428(0x0100) (Edit)
	unsigned char                                      UnknownData_1X8P[0x18];                                    // 0x0528(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIIncrementalWaveSpawner");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIInteractableSpawner
// 0x0100 (FullSize[0x0528] - InheritedSize[0x0428])
class UAIInteractableSpawner : public UAISpawner
{
public:
	class UClass*                                      AIInteractableType;                                        // 0x0428(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              InhabitedChance;                                           // 0x0430(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FB8X[0x4];                                     // 0x0434(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeightedProbabilityRangeOfRanges           DelayAfterSuccessfulInhabitedCheck;                        // 0x0438(0x0030) (Edit)
	struct FWeightedProbabilityRangeOfRanges           DelayAfterFailedInhabitedCheck;                            // 0x0468(0x0030) (Edit)
	float                                              SpawnForInteractableChance;                                // 0x0498(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_18CB[0x4];                                     // 0x049C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeightedProbabilityRangeOfRanges           DelayAfterSuccessfulSpawnOnInteractableCheck;              // 0x04A0(0x0030) (Edit)
	struct FWeightedProbabilityRangeOfRanges           DelayAfterFailedSpawnOnInteractableCheck;                  // 0x04D0(0x0030) (Edit)
	bool                                               RunInhabitedSimulation;                                    // 0x0500(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               RunSpawnForInteractableSimulation;                         // 0x0501(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LWXD[0x2];                                     // 0x0502(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumIterations;                                             // 0x0504(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JMPM[0x18];                                    // 0x0508(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<AthenaEngine_EPlayMode>                CachedPlaymode;                                            // 0x0520(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QCO5[0x7];                                     // 0x0521(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIInteractableSpawner");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIOnDemandSpawner
// 0x0000 (FullSize[0x0428] - InheritedSize[0x0428])
class UAIOnDemandSpawner : public UAISpawner
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIOnDemandSpawner");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIPerPlayerSpawner
// 0x01E8 (FullSize[0x0610] - InheritedSize[0x0428])
class UAIPerPlayerSpawner : public UAISpawner
{
public:
	bool                                               CheckSpawnedActorsInRadiusBeforeSpawning;                  // 0x0428(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XDJJ[0x3];                                     // 0x0429(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RadiusToCheckForExistingPopulation;                        // 0x042C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxExistingPopulationInRadius;                             // 0x0430(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DespawnAllPawnsWhenAllPlayersLeave;                        // 0x0434(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6QEM[0x3];                                     // 0x0435(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxActorsTotalPerPlayer;                                   // 0x0438(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RunSimulation;                                             // 0x043C(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UPV9[0x3];                                     // 0x043D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RankForSimulation;                                         // 0x0440(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumIterations;                                             // 0x0444(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WantsToTemporarilyRememberPlayers;                         // 0x0448(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4JRZ[0x7];                                     // 0x0449(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeightedProbabilityRangeOfRanges           TemporaryPlayerMemoryTimeRange;                            // 0x0450(0x0030) (Edit)
	unsigned char                                      UnknownData_1H1A[0xE8];                                    // 0x0480(0x00E8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class AActor*, struct FAIPerPlayerSpawnerPlayerDetailsUnit> PlayerDetails;                                             // 0x0568(0x0050) (ZeroConstructor, Transient)
	TMap<class AController*, struct FTemporaryPlayerDetailsUnitEntry> TemporaryPlayerDetails;                                    // 0x05B8(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData_D7OZ[0x8];                                     // 0x0608(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPerPlayerSpawner");
		return ptr;
	}



	void PlayerDeath(class AActor* Player);
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.NamedAIDataAsset
// 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
class UNamedAIDataAsset : public UDataAsset
{
public:
	TArray<struct FText>                               MaleCaptainNames;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FText>                               FemaleCaptainNames;                                        // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<struct FText>                               MaleCrewNames;                                             // 0x0048(0x0010) (Edit, ZeroConstructor)
	TArray<struct FText>                               FemaleCrewNames;                                           // 0x0058(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAICustomNameTitleMapping>           CustomNameTitles;                                          // 0x0068(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAICustomClassIdNameOverrides>       CustomNameOverrides;                                       // 0x0078(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      DefaultClassId;                                            // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      FemaleCaptainClassId;                                      // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      MaleCaptainClassId;                                        // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      FemaleCrewClassId;                                         // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      MaleCrewClassId;                                           // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.NamedAIDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIBoobyTrapSpawner
// 0x00D0 (FullSize[0x06E0] - InheritedSize[0x0610])
class UAIBoobyTrapSpawner : public UAIPerPlayerSpawner
{
public:
	int                                                NumberOfWavesToSpawn;                                      // 0x0610(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KKLE[0x4];                                     // 0x0614(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWwiseEvent*                                 NewWaveSpawnSfx;                                           // 0x0618(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NewWaveSpawnSfxTriggerRadius;                              // 0x0620(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LW6B[0x4];                                     // 0x0624(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              ShowNameplatesFor;                                         // 0x0628(0x0010) (Edit, ZeroConstructor, UObjectWrapper)
	class UNamedAIDataAsset*                           NamedAIDataAsset;                                          // 0x0638(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      ActorToTrack;                                              // 0x0640(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DJ8L[0x98];                                    // 0x0648(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIBoobyTrapSpawner");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIProgressiveWavesSpawner
// 0x0038 (FullSize[0x0460] - InheritedSize[0x0428])
class UAIProgressiveWavesSpawner : public UAISpawner
{
public:
	bool                                               ApplyLocalisableNamesToNameplates;                         // 0x0428(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XRXB[0x7];                                     // 0x0429(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAIPersistentSpawnerWave>            Waves;                                                     // 0x0430(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData_4980[0x18];                                    // 0x0440(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      TriggerActor;                                              // 0x0458(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIProgressiveWavesSpawner");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AISpawnerSpawnInteractableAssignmentInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAISpawnerSpawnInteractableAssignmentInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnerSpawnInteractableAssignmentInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIWaveSpawner
// 0x0138 (FullSize[0x0560] - InheritedSize[0x0428])
class UAIWaveSpawner : public UAISpawner
{
public:
	unsigned char                                      UnknownData_ZT9X[0x8];                                     // 0x0428(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAISpawnerWave                              SpawnedWave;                                               // 0x0430(0x0100) (Edit)
	float                                              MinRespawnTime;                                            // 0x0530(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxRespawnTime;                                            // 0x0534(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QM76[0x28];                                    // 0x0538(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIWaveSpawner");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AISpawnerList
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAISpawnerList : public UDataAsset
{
public:
	TArray<class UAISpawner*>                          Spawners;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnerList");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AISpawnOverrideCondition
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UAISpawnOverrideCondition : public UObject
{
public:
	bool                                               InvertResult;                                              // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YVXF[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnOverrideCondition");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AISpawnCampaignCondition
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UAISpawnCampaignCondition : public UAISpawnOverrideCondition
{
public:
	struct FName                                       CampaignName;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_T8PQ[0x18];                                    // 0x0038(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnCampaignCondition");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AISpawnComplexCondition
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UAISpawnComplexCondition : public UAISpawnOverrideCondition
{
public:
	TArray<class UAISpawnOverrideCondition*>           Conditions;                                                // 0x0030(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnComplexCondition");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AISpawnAndCondition
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UAISpawnAndCondition : public UAISpawnComplexCondition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnAndCondition");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AISpawnOrCondition
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UAISpawnOrCondition : public UAISpawnComplexCondition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnOrCondition");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AISpawnMatchesAllContextsCondition
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UAISpawnMatchesAllContextsCondition : public UAISpawnOverrideCondition
{
public:
	TArray<class UClass*>                              Contexts;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnMatchesAllContextsCondition");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AISpawnMatchesAnyContextCondition
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UAISpawnMatchesAnyContextCondition : public UAISpawnOverrideCondition
{
public:
	TArray<class UClass*>                              Contexts;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnMatchesAnyContextCondition");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.StaticAISpawnCondition
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UStaticAISpawnCondition : public UAISpawnOverrideCondition
{
public:
	bool                                               ShouldApplyOverride;                                       // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BNWA[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.StaticAISpawnCondition");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AISpawnPointSeedComponent
// 0x0000 (FullSize[0x02B0] - InheritedSize[0x02B0])
class UAISpawnPointSeedComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnPointSeedComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AISpawnRegionInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAISpawnRegionInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnRegionInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AITargetServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAITargetServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AITargetServiceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AITargetInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAITargetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AITargetInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AITargetActor
// 0x0018 (FullSize[0x03E8] - InheritedSize[0x03D0])
class AAITargetActor : public AActor
{
public:
	unsigned char                                      UnknownData_JYE7[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             Root;                                                      // 0x03D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_EAthenaAITeam>                  Team;                                                      // 0x03E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AZGN[0x7];                                     // 0x03E1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AITargetActor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AITargetService
// 0x0018 (FullSize[0x03E8] - InheritedSize[0x03D0])
class AAITargetService : public AActor
{
public:
	unsigned char                                      UnknownData_0930[0x18];                                    // 0x03D0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AITargetService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AITargetWeaponInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAITargetWeaponInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AITargetWeaponInterface");
		return ptr;
	}



	bool FindAimConfigToHitTarget(const struct FVector& Target, bool CheckYaw, struct FRotator* OutAimConfig);
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AIWithFormInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIWithFormInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIWithFormInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AmbientWaterSpawnerManager
// 0x0250 (FullSize[0x0620] - InheritedSize[0x03D0])
class AAmbientWaterSpawnerManager : public AActor
{
public:
	unsigned char                                      UnknownData_546R[0x10];                                    // 0x03D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             Root;                                                      // 0x03E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaAISettings*                           AthenaAISettings;                                          // 0x03E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               AISpawnBlockingContextNames;                               // 0x03F0(0x0010) (Edit, ZeroConstructor)
	class UAIPerPlayerSpawner*                         SharkPerPlayerSpawnerTemplate;                             // 0x0400(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIPerPlayerSpawner*                         SirenPerPlayerSpawnerTemplate;                             // 0x0408(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SirenEncounterRegionRadius;                                // 0x0410(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SirenEncounterShutdownTime;                                // 0x0414(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeightedProbabilityRangeOfRanges           InitialSirenSpawningWeightedTimeRange;                     // 0x0418(0x0030) (Edit, Config)
	struct FWeightedProbabilityRangeOfRanges           UnsuccessfulSirenSpawningWeightedTimeRange;                // 0x0448(0x0030) (Edit, Config)
	struct FWeightedProbabilityRangeOfRanges           SuccessfulSirenSpawningWeightedTimeRange;                  // 0x0478(0x0030) (Edit, Config)
	struct FChanceForSharksToBlockSirenEncounterData   SharkEncounterSpawnBlockingData;                           // 0x04A8(0x000C) (Edit)
	unsigned char                                      UnknownData_NKQ3[0x4];                                     // 0x04B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPerDepthSpawnChance>                PerDepthSpawnChances;                                      // 0x04B8(0x0010) (Edit, ZeroConstructor)
	class UAIPerPlayerSpawner*                         SharkPerPlayerSpawner;                                     // 0x04C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BC5I[0x130];                                   // 0x04D0(0x0130) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPlayerInWaterData>                  PlayersInWater;                                            // 0x0600(0x0010) (ZeroConstructor, Transient)
	TArray<struct FSirenEncounterData>                 SirenEncounters;                                           // 0x0610(0x0010) (ZeroConstructor, Transient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AmbientWaterSpawnerManager");
		return ptr;
	}



	void OnPlayerDeath(class AActor* InActorDying);
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AmmunitionItemClassProviderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAmmunitionItemClassProviderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AmmunitionItemClassProviderInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AppliedStatusToMultipleAIWithFormsStatCondition
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class UAppliedStatusToMultipleAIWithFormsStatCondition : public UStatCondition
{
public:
	TArray<class UClass*>                              Status;                                                    // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)
	int                                                AICountMinimum;                                            // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AllowAllForms;                                             // 0x003C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8RTN[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TAssetPtr<class UClass>>                    AllowedAIForms;                                            // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)
	TArray<class UClass*>                              AIClassesToIgnore;                                         // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)
	TArray<TAssetPtr<class UClass>>                    AllowedSources;                                            // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AppliedStatusToMultipleAIWithFormsStatCondition");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AquaticAITargetInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAquaticAITargetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AquaticAITargetInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BurrowAIAbility
// 0x00C8 (FullSize[0x0140] - InheritedSize[0x0078])
class UBurrowAIAbility : public UAthenaAIAbility
{
public:
	TArray<struct FVector>                             LocationsToSpawnCrack;                                     // 0x0078(0x0010) (ZeroConstructor)
	struct FTimerHandle                                TimerHandleStartNextSpawnWave;                             // 0x0088(0x0004)
	unsigned char                                      UnknownData_DGWA[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      CachedTarget;                                              // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_R7UX[0x8C];                                    // 0x0098(0x008C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bExecuting;                                                // 0x0124(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bProcessingSpawnLocations;                                 // 0x0125(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G633[0x1A];                                    // 0x0126(0x001A) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BurrowAIAbility");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BurrowCrack
// 0x0040 (FullSize[0x0410] - InheritedSize[0x03D0])
class ABurrowCrack : public AActor
{
public:
	class USceneComponent*                             DefaultSceneComponent;                                     // 0x03D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                             DecalComponent;                                            // 0x03D8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeOutTimeSeconds;                                        // 0x03E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasFadeStarted;                                            // 0x03E4(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_Y8PZ[0x2B];                                    // 0x03E5(0x002B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BurrowCrack");
		return ptr;
	}



	void OnRep_StartFadeAndLifeSpan();
	void OnLifeSpanPercentLeft(float PercentLeft);
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BurrowAIAbilityParams
// 0x0078 (FullSize[0x0140] - InheritedSize[0x00C8])
class UBurrowAIAbilityParams : public UAthenaAIAbilityParams
{
public:
	TArray<TEnumAsByte<Engine_EPhysicalSurface>>       ValidBurrowSurfaceTypes;                                   // 0x00C8(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      BurrowCrackToSpawn;                                        // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      BurrowEruptArea;                                           // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UEnvQuery*                                   EnvQueryLinesToTarget;                                     // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEnvQuery*                                   EnvQueryAroundTarget;                                      // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     OffsetPositionForStartTrace;                               // 0x00F8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SurfaceDetectRaycastLength;                                // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BurrowAroundTargetRange;                                   // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxSurfaceAngleForBurrow;                                  // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEruptFromClosestSpawn;                                    // 0x0110(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XQMD[0x3];                                     // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMinMaxBurrowAbility                        EruptionDelayRndBetweenMinMaxSeconds;                      // 0x0114(0x0008) (Edit)
	struct FMinMaxBurrowAbility                        NumberOfCrackWavesMinMax;                                  // 0x011C(0x0008) (Edit)
	struct FMinMaxBurrowAbility                        RndSecondsBetweenCrackWaves;                               // 0x0124(0x0008) (Edit)
	struct FMinMaxBurrowAbility                        NumberOfCracksPerWaveMinMax;                               // 0x012C(0x0008) (Edit)
	struct FMinMaxBurrowAbility                        RndSecondsBetweenEachCrackSpawn;                           // 0x0134(0x0008) (Edit)
	unsigned char                                      UnknownData_RICC[0x4];                                     // 0x013C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BurrowAIAbilityParams");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BurrowHealAIAbilityParams
// 0x0030 (FullSize[0x0170] - InheritedSize[0x0140])
class UBurrowHealAIAbilityParams : public UBurrowAIAbilityParams
{
public:
	class UClass*                                      AllyTypeToHeal;                                            // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              HealDuration;                                              // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RadiusForValidTargets;                                     // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumberOfTargetsToHeal;                                     // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KSKZ[0x4];                                     // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FStatus                                     StatusToApplyOnHeal;                                       // 0x0158(0x0018) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BurrowHealAIAbilityParams");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BurrowHealAIAbility
// 0x0010 (FullSize[0x0150] - InheritedSize[0x0140])
class UBurrowHealAIAbility : public UBurrowAIAbility
{
public:
	unsigned char                                      UnknownData_W8A1[0x10];                                    // 0x0140(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BurrowHealAIAbility");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaAIBuffAbilityInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAthenaAIBuffAbilityInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIBuffAbilityInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTDecorator_CompareBlackboardValues
// 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
class UBTDecorator_CompareBlackboardValues : public UBTDecorator
{
public:
	TArray<struct FBlackboardValueCondition>           FloatConditions;                                           // 0x0068(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<AthenaAI_EBlackboardValueCompositeType> FloatConditionComposite;                                   // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3CEY[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareBlackboardValues");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTDecorator_TargetInRange
// 0x0088 (FullSize[0x0108] - InheritedSize[0x0080])
class UBTDecorator_TargetInRange : public UBTDecorator_CompareBlackboardValues
{
public:
	struct FAIDataProviderFloatValue                   EnterRange;                                                // 0x0080(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   ExitRange;                                                 // 0x00B0(0x0030) (Edit, ContainsInstancedReference)
	struct FBlackboardKeySelector                      TargetKey;                                                 // 0x00E0(0x0028) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_TargetInRange");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTDecorator_TargetInRangeOfPoint
// 0x0028 (FullSize[0x0130] - InheritedSize[0x0108])
class UBTDecorator_TargetInRangeOfPoint : public UBTDecorator_TargetInRange
{
public:
	struct FBlackboardKeySelector                      ReferencePointKey;                                         // 0x0108(0x0028) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_TargetInRangeOfPoint");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTDecorator_TestRange
// 0x0068 (FullSize[0x00E8] - InheritedSize[0x0080])
class UBTDecorator_TestRange : public UBTDecorator_CompareBlackboardValues
{
public:
	struct FAIDataProviderFloatValue                   EnterRange;                                                // 0x0080(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   ExitRange;                                                 // 0x00B0(0x0030) (Edit, ContainsInstancedReference)
	bool                                               TestForOutsideRange;                                       // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZOGP[0x7];                                     // 0x00E1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_TestRange");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTDecorator_TestRangeOfSeenActors
// 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
class UBTDecorator_TestRangeOfSeenActors : public UBTDecorator_TestRange
{
public:
	unsigned char                                      UnknownData_T34M[0x10];                                    // 0x00E8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_TestRangeOfSeenActors");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTDecorator_ConeCheck3D
// 0x0058 (FullSize[0x00C0] - InheritedSize[0x0068])
class UBTDecorator_ConeCheck3D : public UBTDecorator
{
public:
	float                                              ConeHalfAngle;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YBGU[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      ConeOrigin;                                                // 0x0070(0x0028) (Edit)
	struct FBlackboardKeySelector                      Observed;                                                  // 0x0098(0x0028) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_ConeCheck3D");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTDecorator_DockedToInteractable
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UBTDecorator_DockedToInteractable : public UBTDecorator_BlackboardBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_DockedToInteractable");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTDecorator_FeatureToggle
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UBTDecorator_FeatureToggle : public UBTDecorator
{
public:
	struct FName                                       FeatureName;                                               // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_FeatureToggle");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTDecorator_IsAbilityAvailable
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UBTDecorator_IsAbilityAvailable : public UBTDecorator
{
public:
	class UClass*                                      AIAbilityType;                                             // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_IsAbilityAvailable");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTDecorator_IsLocationInWater
// 0x0058 (FullSize[0x00E8] - InheritedSize[0x0090])
class UBTDecorator_IsLocationInWater : public UBTDecorator_BlackboardBase
{
public:
	struct FBlackboardKeySelector                      WaterVolumeActor;                                          // 0x0090(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetLocation;                                            // 0x00B8(0x0028) (Edit)
	bool                                               OnlyConsidersSwimmableWater;                               // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4NHO[0x7];                                     // 0x00E1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_IsLocationInWater");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTDecorator_MultipleRandomDiceRolls
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
class UBTDecorator_MultipleRandomDiceRolls : public UBTDecorator
{
public:
	TArray<struct FChanceAndBlackboardKeyPair>         ChanceKeyPairs;                                            // 0x0068(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_MultipleRandomDiceRolls");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTDecorator_RandomDiceRoll
// 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
class UBTDecorator_RandomDiceRoll : public UBTDecorator
{
public:
	struct FAIDataProviderFloatValue                   Chance;                                                    // 0x0068(0x0030) (Edit, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_RandomDiceRoll");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTDecorator_RandomLoop
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
class UBTDecorator_RandomLoop : public UBTDecorator
{
public:
	int                                                MinNumLoops;                                               // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxNumLoops;                                               // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 RandomNumLoopCurve;                                        // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_RandomLoop");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTDecorator_RollAgainstPatrolChance
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UBTDecorator_RollAgainstPatrolChance : public UBTDecorator
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_RollAgainstPatrolChance");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTDecorator_TestAIInteractableType
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UBTDecorator_TestAIInteractableType : public UBTDecorator_BlackboardBase
{
public:
	class UClass*                                      Type;                                                      // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_TestAIInteractableType");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTService_AimAIInteractable
// 0x0078 (FullSize[0x00E8] - InheritedSize[0x0070])
class UBTService_AimAIInteractable : public UBTService
{
public:
	struct FBlackboardKeySelector                      Interactable;                                              // 0x0070(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetForInteractable;                                     // 0x0098(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetRelativeAimVector;                                   // 0x00C0(0x0028) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_AimAIInteractable");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTService_DefaultFocusToPosAtRelativeAngleToObject
// 0x0008 (FullSize[0x00A8] - InheritedSize[0x00A0])
class UBTService_DefaultFocusToPosAtRelativeAngleToObject : public UBTService_DefaultFocus
{
public:
	float                                              RelativeYawAngleOffset;                                    // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RelativeDistance;                                          // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_DefaultFocusToPosAtRelativeAngleToObject");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTService_DetermineAIAbility
// 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
class UBTService_DetermineAIAbility : public UBTService
{
public:
	struct FBlackboardKeySelector                      BlockChangeAIAbilitiesKey;                                 // 0x0070(0x0028) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_DetermineAIAbility");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTService_DisableCollisions
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UBTService_DisableCollisions : public UBTService
{
public:
	TArray<TEnumAsByte<Engine_ECollisionChannel>>      ChannelsToLeaveUnaffected;                                 // 0x0070(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_DisableCollisions");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTService_DisableDamageResponses
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UBTService_DisableDamageResponses : public UBTService
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_DisableDamageResponses");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTService_DisableStun
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UBTService_DisableStun : public UBTService
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_DisableStun");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTService_EnableFaceFocusActor
// 0x0040 (FullSize[0x00D8] - InheritedSize[0x0098])
class UBTService_EnableFaceFocusActor : public UBTService_BlackboardBase
{
public:
	bool                                               DisableUpdateMoveFocusForCurrentPathOnExit;                // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2HY7[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FConditionalBasedOnBlackboardKey            Conditional;                                               // 0x00A0(0x0038) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_EnableFaceFocusActor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTService_IncrementFloatValueWithTimeSpentInBranch
// 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
class UBTService_IncrementFloatValueWithTimeSpentInBranch : public UBTService_BlackboardBase
{
public:
	float                                              TimeMultiplier;                                            // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OJSI[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_IncrementFloatValueWithTimeSpentInBranch");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTService_OverrideTurnSpeed
// 0x0030 (FullSize[0x00A0] - InheritedSize[0x0070])
class UBTService_OverrideTurnSpeed : public UBTService
{
public:
	struct FAIDataProviderFloatValue                   TurnSpeed;                                                 // 0x0070(0x0030) (Edit, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_OverrideTurnSpeed");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTService_PlayCustomMontageId
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UBTService_PlayCustomMontageId : public UBTService
{
public:
	struct FCustomAnimationMontageId                   CustomAnimationMontageId;                                  // 0x0070(0x0008) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_PlayCustomMontageId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTService_QueryPerceptionForTarget
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UBTService_QueryPerceptionForTarget : public UBTService
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_QueryPerceptionForTarget");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTService_RunEQSQuery
// 0x0050 (FullSize[0x00E8] - InheritedSize[0x0098])
class UBTService_RunEQSQuery : public UBTService_BlackboardBase
{
public:
	bool                                               OverrideQueryTemplateWithBlackboardValue;                  // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_HHZ4[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      OverrideEQSKey;                                            // 0x00A0(0x0028) (Edit, Protected)
	class UEnvQuery*                                   QueryTemplate;                                             // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FEnvNamedValue>                      QueryParams;                                               // 0x00D0(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<AIModule_EEnvQueryRunMode>             RunMode;                                                   // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ThrottleQueryTimePerFrame;                                 // 0x00E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_10W2[0x2];                                     // 0x00E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxSecondsToSpendOnQueryPerFrame;                          // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_RunEQSQuery");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTService_DoesEQSQuerySucceed
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class UBTService_DoesEQSQuerySucceed : public UBTService_RunEQSQuery
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_DoesEQSQuerySucceed");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTService_RunEQSQueryOnActorMovement
// 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
class UBTService_RunEQSQueryOnActorMovement : public UBTService_RunEQSQuery
{
public:
	struct FBlackboardKeySelector                      MovingActorKey;                                            // 0x00E8(0x0028) (Edit, Protected)
	float                                              MinimumActorMovementToRunEQS;                              // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              MinimumActorVelocityChangeToRunEQS;                        // 0x0114(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	bool                                               RunEQSForYawChanges;                                       // 0x0118(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_QIK3[0x3];                                     // 0x0119(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinimumActorYawChangeToRunEQS;                             // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NUXU[0x8];                                     // 0x0120(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_RunEQSQueryOnActorMovement");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTService_SetAIAnimationState
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UBTService_SetAIAnimationState : public UBTService_BlackboardBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_SetAIAnimationState");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTService_SetAIStrategy
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UBTService_SetAIStrategy : public UBTService
{
public:
	class UClass*                                      NewStrategy;                                               // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_SetAIStrategy");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTService_SetBoolBlackboardValueToTrueOnCeaseRelevant
// 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
class UBTService_SetBoolBlackboardValueToTrueOnCeaseRelevant : public UBTService
{
public:
	struct FBlackboardKeySelector                      BoolValueKey;                                              // 0x0070(0x0028) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_SetBoolBlackboardValueToTrueOnCeaseRelevant");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTService_SetBoolBlackboardValueTrueWhileRelevant
// 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
class UBTService_SetBoolBlackboardValueTrueWhileRelevant : public UBTService
{
public:
	struct FBlackboardKeySelector                      BoolValueKey;                                              // 0x0070(0x0028) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_SetBoolBlackboardValueTrueWhileRelevant");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTService_SetNameBlackboardValueWhileRelevant
// 0x0030 (FullSize[0x00A0] - InheritedSize[0x0070])
class UBTService_SetNameBlackboardValueWhileRelevant : public UBTService
{
public:
	struct FBlackboardKeySelector                      NameValueKey;                                              // 0x0070(0x0028) (Edit)
	struct FName                                       Value;                                                     // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_SetNameBlackboardValueWhileRelevant");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTService_TriggerNotifications
// 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
class UBTService_TriggerNotifications : public UBTService
{
public:
	class UClass*                                      EnterBranchNotificationId;                                 // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      LeaveBranchNotificationId;                                 // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_85YE[0x18];                                    // 0x0080(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_TriggerNotifications");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.ElectricShieldAbilityParams
// 0x0038 (FullSize[0x0100] - InheritedSize[0x00C8])
class UElectricShieldAbilityParams : public UAthenaAIAbilityParams
{
public:
	float                                              ChargeUpTime;                                              // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LQDD[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FStatus                                     BuffInterruptedStatusEffect;                               // 0x00D0(0x0018) (Edit)
	struct FStatus                                     ElectricShieldStatusEffect;                                // 0x00E8(0x0018) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.ElectricShieldAbilityParams");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.SporeBreathAIAbilityParams
// 0x0080 (FullSize[0x0148] - InheritedSize[0x00C8])
class USporeBreathAIAbilityParams : public UAthenaAIAbilityParams
{
public:
	struct FAthenaAIAbilityPlayerBasedRanges           BreathMaxDuration;                                         // 0x00C8(0x0010) (Edit)
	float                                              BreathContinueThresholdDistance;                           // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WW80[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      BreathActor;                                               // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FVFXHandlerComponentParams                  BreathVFXParams;                                           // 0x00E8(0x0040) (Edit)
	struct FVector                                     BreathCollisionVolumeSize;                                 // 0x0128(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BreathCollisionForwardOffset;                              // 0x0134(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BreathStartDelay;                                          // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IX0I[0x4];                                     // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      VfxSpawner;                                                // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.SporeBreathAIAbilityParams");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BurrowAIAbilityType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBurrowAIAbilityType : public UAthenaAIAbilityType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BurrowAIAbilityType");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BurrowHealAIAbilityType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBurrowHealAIAbilityType : public UAthenaAIAbilityType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BurrowHealAIAbilityType");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.CoralShieldAbilityType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCoralShieldAbilityType : public UAthenaAIAbilityType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.CoralShieldAbilityType");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.ElectricShieldAbilityType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UElectricShieldAbilityType : public UAthenaAIAbilityType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.ElectricShieldAbilityType");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.SporeBreathAIAbilityType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USporeBreathAIAbilityType : public UAthenaAIAbilityType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.SporeBreathAIAbilityType");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaAIRangeBasedAmmoDataAsset
// 0x0010 (FullSize[0x00E0] - InheritedSize[0x00D0])
class UAthenaAIRangeBasedAmmoDataAsset : public UAthenaAIAmmoDataAsset
{
public:
	TArray<struct FWeightedAmmoTypeRange>              AmmoTypeRanges;                                            // 0x00D0(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIRangeBasedAmmoDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaAICharacterStatsInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAthenaAICharacterStatsInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAICharacterStatsInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.SpawnItemDescProviderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USpawnItemDescProviderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.SpawnItemDescProviderInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaAICharacterController
// 0x0220 (FullSize[0x0B18] - InheritedSize[0x08F8])
class AAthenaAICharacterController : public AAthenaAIController
{
public:
	unsigned char                                      UnknownData_FF2G[0x8];                                     // 0x08F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAthenaAIItemParamsDataAsset*                ItemParamsDataAsset;                                       // 0x0900(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULoadoutAsset*                               FallbackLoadoutIfAllEngageItemsDropped;                    // 0x0908(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ControlRotationInterpSpeed;                                // 0x0910(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ControlRotationUseConstantInterp;                          // 0x0914(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               FaceTargetDisabled;                                        // 0x0915(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0NCD[0x2];                                     // 0x0916(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinTurnAngleToPlayTurnAnim;                                // 0x0918(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2IJ0[0x14];                                    // 0x091C(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAthenaAICharacterControllerParamsDataAsset* CharacterParamsDataAsset;                                  // 0x0930(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NIOB[0x90];                                    // 0x0938(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAthenaAICharacterControllerSpawnItemDescForItemCategory> SpawnItemDescForItemCategories;                            // 0x09C8(0x0010) (ZeroConstructor)
	TArray<class UAthenaAIAbilityParams*>              AIAbilityParams;                                           // 0x09D8(0x0010) (ZeroConstructor)
	TArray<struct FAthenaAIEngageEnemyData>            NonItemEngageOptions;                                      // 0x09E8(0x0010) (ZeroConstructor)
	class UCurveFloat*                                 DistanceInMToCannonShotHitChanceCurve;                     // 0x09F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PUXF[0x118];                                   // 0x0A00(0x0118) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAICharacterController");
		return ptr;
	}



	void SetOverridePrioritiseInteractablesBeforeEnemies(bool InPrioritiseInteractablesBeforeEnemies);
	void SetItemSpecificNamedControllerParam(class UClass* InItemCategory, const struct FName& ParamName, float Value);
	void SetDisableTurningForTest(bool InDisableTurningForTest);
	void ClearOverridePrioritiseInteractablesBeforeEnemies();
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaAIControllerNavMeshTogglesInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAthenaAIControllerNavMeshTogglesInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIControllerNavMeshTogglesInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.FaunaAIContollerParamsDataAsset
// 0x0088 (FullSize[0x0188] - InheritedSize[0x0100])
class UFaunaAIContollerParamsDataAsset : public UAthenaAIControllerParamsDataAsset
{
public:
	struct FWeightedProbabilityRange                   Courage;                                                   // 0x0100(0x0020) (Edit)
	TArray<struct FCarriedItemThreatOverride>          CarriedItemThreatOverrides;                                // 0x0120(0x0010) (Edit, ZeroConstructor)
	bool                                               ThreatenedBySightOfCarrier;                                // 0x0130(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F3N1[0x7];                                     // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FHearingThreat>                      KnownHearingDangers;                                       // 0x0138(0x0010) (Edit, ZeroConstructor)
	float                                              CarrierHearingThreatSpeedThreshold;                        // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageThreat;                                              // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 CharacterDistanceToDangerRatingCurve;                      // 0x0150(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 DangerRatingToAgitationDurationCurve;                      // 0x0158(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeToBecomeAgitatedMin;                                   // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeToBecomeAgitatedMax;                                   // 0x0164(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AgitationDurationVariance;                                 // 0x0168(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AlertThreshold;                                            // 0x016C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FleeThreshold;                                             // 0x0170(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeToBecomeCalm;                                          // 0x0174(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CalmCooldownTime;                                          // 0x0178(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDistanceFromLeaderForIdle;                              // 0x017C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 DistanceToLeaderPatrolChanceCurve;                         // 0x0180(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.FaunaAIContollerParamsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaAIControllerParamsDataProvider
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAthenaAIControllerParamsDataProvider : public UAIDataProvider
{
public:
	struct FName                                       ParamName;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FloatValue;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                IntValue;                                                  // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BoolValue;                                                 // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4LON[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIControllerParamsDataProvider");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaAIControllerParamsTargetInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAthenaAIControllerParamsTargetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIControllerParamsTargetInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaAIFormComponentContainerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAthenaAIFormComponentContainerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIFormComponentContainerInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaAIPerceptionComponent
// 0x0000 (FullSize[0x01C8] - InheritedSize[0x01C8])
class UAthenaAIPerceptionComponent : public UAIPerceptionComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIPerceptionComponent");
		return ptr;
	}



	bool IsPerceptionSenseEnabled(class UClass* Sense);
	bool IsAnyPerceptionEnabled();
	void EnablePerceptionSense(class UClass* Sense, bool Enable);
	void EnableAllPerception(bool Enable);
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaAISightTargetInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAthenaAISightTargetInterface : public UAISightTargetInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAISightTargetInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.AthenaAIWeightedRangesDataProvider
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UAthenaAIWeightedRangesDataProvider : public UAIDataProvider
{
public:
	struct FName                                       ParamName;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeightedProbabilityRangeOfRanges           WeightedRangesValue;                                       // 0x0030(0x0030)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIWeightedRangesDataProvider");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BlackboardAIDataProvider
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UBlackboardAIDataProvider : public UAIDataProvider
{
public:
	struct FName                                       ParamName;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FloatValue;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                IntValue;                                                  // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BoolValue;                                                 // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_O7BI[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BlackboardAIDataProvider");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTDecorator_ActionState
// 0x0020 (FullSize[0x0088] - InheritedSize[0x0068])
class UBTDecorator_ActionState : public UBTDecorator
{
public:
	TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId;                                                   // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VT6O[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      StateId;                                                   // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6MPY[0x10];                                    // 0x0078(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_ActionState");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTDecorator_ActorInWater
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UBTDecorator_ActorInWater : public UBTDecorator_BlackboardBase
{
public:
	bool                                               ReverseLogic;                                              // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BKT4[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_ActorInWater");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTDecorator_CurrentAIStrategy
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
class UBTDecorator_CurrentAIStrategy : public UBTDecorator_BaseConditional
{
public:
	TArray<class UClass*>                              Strategies;                                                // 0x0068(0x0010) (Edit, ZeroConstructor, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CurrentAIStrategy");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTDecorator_IsActorInExpectedActionState
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
class UBTDecorator_IsActorInExpectedActionState : public UBTDecorator_BaseConditional
{
public:
	class UClass*                                      ExpectedActionState;                                       // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> ExpectedTrackId;                                           // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CNJG[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_IsActorInExpectedActionState");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTDecorator_ItemReadyToUse
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UBTDecorator_ItemReadyToUse : public UBTDecorator_BaseConditional
{
public:
	class UClass*                                      NotificationId;                                            // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_ItemReadyToUse");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTDecorator_LeftOfAIPawn
// 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
class UBTDecorator_LeftOfAIPawn : public UBTDecorator_BaseConditional
{
public:
	struct FBlackboardKeySelector                      TargetKey;                                                 // 0x0068(0x0028) (Edit)
	bool                                               ReverseLogic;                                              // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_V5B0[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_LeftOfAIPawn");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTDecorator_LineOfSightToTarget
// 0x0088 (FullSize[0x00F0] - InheritedSize[0x0068])
class UBTDecorator_LineOfSightToTarget : public UBTDecorator_BaseConditional
{
public:
	float                                              Interval;                                                  // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TX0R[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      TargetActorKey;                                            // 0x0070(0x0028) (Edit)
	bool                                               UseTargetPosition;                                         // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3OMG[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      TargetPositionKey;                                         // 0x00A0(0x0028) (Edit)
	struct FVector                                     OffsetToApplyToTargetPosition;                             // 0x00C8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DD85[0x1C];                                    // 0x00D4(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_LineOfSightToTarget");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTDecorator_CompareBlackboardClassValue
// 0x0028 (FullSize[0x00B8] - InheritedSize[0x0090])
class UBTDecorator_CompareBlackboardClassValue : public UBTDecorator_BlackboardBase
{
public:
	class UClass*                                      Class;                                                     // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Invert;                                                    // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BTUA[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CachedDescription;                                         // 0x00A0(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash)
	TEnumAsByte<AIModule_EBTBlackboardRestart>         NotifyObserver;                                            // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PPIE[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareBlackboardClassValue");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTDecorator_CompareBlackboardIntValue
// 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
class UBTDecorator_CompareBlackboardIntValue : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                             // 0x0068(0x0028) (Edit)
	int                                                Value;                                                     // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaAI_EBlackboardIntValueComparisonType> ComparisonType;                                            // 0x0094(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MX2T[0x3];                                     // 0x0095(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareBlackboardIntValue");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTDecorator_CompareFloatValueBase
// 0x0038 (FullSize[0x00B8] - InheritedSize[0x0080])
class UBTDecorator_CompareFloatValueBase : public UBTDecorator_CompareBlackboardValues
{
public:
	TEnumAsByte<AthenaAI_EFloatValueComparisonType>    Comparison;                                                // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_54IF[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIDataProviderFloatValue                   Value;                                                     // 0x0088(0x0030) (Edit, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareFloatValueBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTDecorator_CompareBlackboardActorSpeed
// 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
class UBTDecorator_CompareBlackboardActorSpeed : public UBTDecorator_CompareFloatValueBase
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                             // 0x00B8(0x0028) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareBlackboardActorSpeed");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTDecorator_CompareBlackboardFloatValue
// 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
class UBTDecorator_CompareBlackboardFloatValue : public UBTDecorator_CompareFloatValueBase
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                             // 0x00B8(0x0028) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareBlackboardFloatValue");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTDecorator_CompareCurrentHealth
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UBTDecorator_CompareCurrentHealth : public UBTDecorator_CompareFloatValueBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareCurrentHealth");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTService_UpdateFocusOnBBChange
// 0x0040 (FullSize[0x00E0] - InheritedSize[0x00A0])
class UBTService_UpdateFocusOnBBChange : public UBTService_DefaultFocus
{
public:
	bool                                               DisableUpdateMoveFocusForCurrentPathOnExit;                // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZBJI[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FConditionalBasedOnBlackboardKey            Conditional;                                               // 0x00A8(0x0038) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_UpdateFocusOnBBChange");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTService_UpdateFocusOnBBChangeWithOffsetFromWieldedProjectile
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UBTService_UpdateFocusOnBBChangeWithOffsetFromWieldedProjectile : public UBTService_UpdateFocusOnBBChange
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_UpdateFocusOnBBChangeWithOffsetFromWieldedProjectile");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTService_UpdateTargetForInteractable
// 0x0050 (FullSize[0x00C0] - InheritedSize[0x0070])
class UBTService_UpdateTargetForInteractable : public UBTService
{
public:
	struct FBlackboardKeySelector                      Interactable;                                              // 0x0070(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetForInteractable;                                     // 0x0098(0x0028) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_UpdateTargetForInteractable");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTService_UpdateViewPitchForWieldedProjectileToHitTarget
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UBTService_UpdateViewPitchForWieldedProjectileToHitTarget : public UBTService_BlackboardBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_UpdateViewPitchForWieldedProjectileToHitTarget");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_ApplyStatusComposite
// 0x0050 (FullSize[0x00B0] - InheritedSize[0x0060])
class UBTTask_ApplyStatusComposite : public UBTTaskNode
{
public:
	bool                                               bOneShot;                                                  // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GLWX[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIDataProviderFloatValue                   ContinuousStatusDuration;                                  // 0x0068(0x0030) (Edit, ContainsInstancedReference)
	struct FStatus                                     StatusToApply;                                             // 0x0098(0x0018) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_ApplyStatusComposite");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_AthenaMoveTo
// 0x0018 (FullSize[0x00B8] - InheritedSize[0x00A0])
class UBTTask_AthenaMoveTo : public UBTTask_MoveTo
{
public:
	bool                                               ShouldFailBeforeSlowDown;                                  // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AHXZ[0x3];                                     // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ExitBeforeSlowDownDistanceTolerance;                       // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldOverrideMaxSpeedToSlow;                              // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NI4E[0x3];                                     // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              OverrideMaxSpeedToSlowDistanceFactor;                      // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               MaintainFacingBeforeMove;                                  // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_R21G[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_AthenaMoveTo");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_MoveToFailOnDistanceChange
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UBTTask_MoveToFailOnDistanceChange : public UBTTask_AthenaMoveTo
{
public:
	bool                                               FailOnDistanceBeingLess;                                   // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LNSI[0x3];                                     // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FailDistance;                                              // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_MoveToFailOnDistanceChange");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_MoveToFailOnDistanceToSeenActors
// 0x0010 (FullSize[0x00D0] - InheritedSize[0x00C0])
class UBTTask_MoveToFailOnDistanceToSeenActors : public UBTTask_MoveToFailOnDistanceChange
{
public:
	unsigned char                                      UnknownData_VNSG[0x10];                                    // 0x00C0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_MoveToFailOnDistanceToSeenActors");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_MoveToFailOnDistanceToTargetChanged
// 0x0028 (FullSize[0x00E8] - InheritedSize[0x00C0])
class UBTTask_MoveToFailOnDistanceToTargetChanged : public UBTTask_MoveToFailOnDistanceChange
{
public:
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                       // 0x00C0(0x0028) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_MoveToFailOnDistanceToTargetChanged");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_MoveToMovingLocation
// 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
class UBTTask_MoveToMovingLocation : public UBTTask_AthenaMoveTo
{
public:
	float                                              MinimumLocationMovementForRePath;                          // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinimumTimeBeforeRePath;                                   // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsContinuous;                                              // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VUPE[0x7];                                     // 0x00C1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_MoveToMovingLocation");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_AthenaWait
// 0x0098 (FullSize[0x00F8] - InheritedSize[0x0060])
class UBTTask_AthenaWait : public UBTTaskNode
{
public:
	bool                                               UseMinMax;                                                 // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZSCF[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIDataProviderFloatValue                   Min;                                                       // 0x0068(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   Max;                                                       // 0x0098(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   FixedWaitTime;                                             // 0x00C8(0x0030) (Edit, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_AthenaWait");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_AthenaWaitWithFloor
// 0x0030 (FullSize[0x0128] - InheritedSize[0x00F8])
class UBTTask_AthenaWaitWithFloor : public UBTTask_AthenaWait
{
public:
	struct FAIDataProviderFloatValue                   Floor;                                                     // 0x00F8(0x0030) (Edit, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_AthenaWaitWithFloor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_BurrowAbilityTriggerEruptAreaFromBlackboard
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UBTTask_BurrowAbilityTriggerEruptAreaFromBlackboard : public UBTTaskNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_BurrowAbilityTriggerEruptAreaFromBlackboard");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_BurrowIntoGround
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UBTTask_BurrowIntoGround : public UBTTaskNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_BurrowIntoGround");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_ClearBlackboardValue
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UBTTask_ClearBlackboardValue : public UBTTask_BlackboardBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_ClearBlackboardValue");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_ClearPerceptualData
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UBTTask_ClearPerceptualData : public UBTTaskNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_ClearPerceptualData");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_CopyAIInteractionPointAndFocusToBlackboard
// 0x0078 (FullSize[0x00D8] - InheritedSize[0x0060])
class UBTTask_CopyAIInteractionPointAndFocusToBlackboard : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      SourceInteractable;                                        // 0x0060(0x0028) (Edit)
	struct FBlackboardKeySelector                      InteractionPosition;                                       // 0x0088(0x0028) (Edit)
	struct FBlackboardKeySelector                      InteractionFocusPosition;                                  // 0x00B0(0x0028) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_CopyAIInteractionPointAndFocusToBlackboard");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_CopyBlackboardActor
// 0x0050 (FullSize[0x00B0] - InheritedSize[0x0060])
class UBTTask_CopyBlackboardActor : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      SrcBlackboardKey;                                          // 0x0060(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                       // 0x0088(0x0028) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_CopyBlackboardActor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_CopyBlackboardVector
// 0x0050 (FullSize[0x00B0] - InheritedSize[0x0060])
class UBTTask_CopyBlackboardVector : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      SrcBlackboardKey;                                          // 0x0060(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                       // 0x0088(0x0028) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_CopyBlackboardVector");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_DetermineFollowUpAIAbility
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTTask_DetermineFollowUpAIAbility : public UBTTaskNode
{
public:
	class UClass*                                      AIAbilityTypeToFollowUp;                                   // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_DetermineFollowUpAIAbility");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_ExecuteAIAbility
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTTask_ExecuteAIAbility : public UBTTaskNode
{
public:
	class UClass*                                      AIAbilityType;                                             // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_ExecuteAIAbility");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_GetCurrentHealth
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UBTTask_GetCurrentHealth : public UBTTask_BlackboardBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_GetCurrentHealth");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_IgnoreActorTemporarily
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UBTTask_IgnoreActorTemporarily : public UBTTask_BlackboardBase
{
public:
	float                                              TimeToForget;                                              // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IEEA[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_IgnoreActorTemporarily");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_IncrementBlackboardFloatValue
// 0x0030 (FullSize[0x00B8] - InheritedSize[0x0088])
class UBTTask_IncrementBlackboardFloatValue : public UBTTask_BlackboardBase
{
public:
	struct FAIDataProviderFloatValue                   FloatValueDelta;                                           // 0x0088(0x0030) (Edit, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_IncrementBlackboardFloatValue");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_IncrementBlackboardIntValue
// 0x0030 (FullSize[0x00B8] - InheritedSize[0x0088])
class UBTTask_IncrementBlackboardIntValue : public UBTTask_BlackboardBase
{
public:
	struct FAIDataProviderIntValue                     IntegerValueDelta;                                         // 0x0088(0x0030) (Edit, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_IncrementBlackboardIntValue");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_InteractWith
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UBTTask_InteractWith : public UBTTask_BlackboardBase
{
public:
	class UClass*                                      NotificationId;                                            // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_InteractWith");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_MoveToTarget
// 0x0030 (FullSize[0x00D0] - InheritedSize[0x00A0])
class UBTTask_MoveToTarget : public UBTTask_MoveTo
{
public:
	float                                              MaxDistFromDestinationPosToTargetPos;                      // 0x00A0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OverrideMaxSpeedToSlowDistanceFactor;                      // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                       // 0x00A8(0x0028) (Edit, Protected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_MoveToTarget");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_NetworkTriggerAnim
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UBTTask_NetworkTriggerAnim : public UBTTaskNode
{
public:
	class UAnimSequence*                               Anim;                                                      // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AnimLength;                                                // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AnimPlayRate;                                              // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_NetworkTriggerAnim");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_NOP
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTTask_NOP : public UBTTaskNode
{
public:
	int                                                Id;                                                        // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZXH9[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_NOP");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_PlayCustomMontageId
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UBTTask_PlayCustomMontageId : public UBTTaskNode
{
public:
	struct FCustomAnimationMontageId                   CustomAnimationMontageId;                                  // 0x0060(0x0008) (Edit)
	float                                              TimeToWaitOnServer;                                        // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ELCE[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_PlayCustomMontageId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_PlayMontage
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UBTTask_PlayMontage : public UBTTaskNode
{
public:
	class UObject*                                     MontageToPlay;                                             // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PlayAsDynamicMontage;                                      // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GD50[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_PlayMontage");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_RequestDespawn
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UBTTask_RequestDespawn : public UBTTaskNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_RequestDespawn");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_SetAIStrategy
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTTask_SetAIStrategy : public UBTTaskNode
{
public:
	class UClass*                                      NewStrategy;                                               // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetAIStrategy");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_SetAIStrategyFromWeightedArray
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UBTTask_SetAIStrategyFromWeightedArray : public UBTTaskNode
{
public:
	TArray<struct FWeightedAIStrategyChance>           WeightedStrategies;                                        // 0x0060(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetAIStrategyFromWeightedArray");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_SetBlackboardActor
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UBTTask_SetBlackboardActor : public UBTTask_BlackboardBase
{
public:
	class AActor*                                      Actor;                                                     // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardActor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_SetBlackboardBoolValue
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UBTTask_SetBlackboardBoolValue : public UBTTask_BlackboardBase
{
public:
	bool                                               NewValue;                                                  // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_45AR[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardBoolValue");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_SetBlackboardClassValue
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UBTTask_SetBlackboardClassValue : public UBTTask_BlackboardBase
{
public:
	class UClass*                                      ClassValue;                                                // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardClassValue");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_SetBlackboardEQSValue
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UBTTask_SetBlackboardEQSValue : public UBTTask_BlackboardBase
{
public:
	class UEnvQuery*                                   EQS;                                                       // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardEQSValue");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_SetBlackboardFloatValue
// 0x0030 (FullSize[0x00B8] - InheritedSize[0x0088])
class UBTTask_SetBlackboardFloatValue : public UBTTask_BlackboardBase
{
public:
	struct FAIDataProviderFloatValue                   FloatValue;                                                // 0x0088(0x0030) (Edit, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardFloatValue");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_SetBlackboardFloatValueFromWeightedArray
// 0x0030 (FullSize[0x00B8] - InheritedSize[0x0088])
class UBTTask_SetBlackboardFloatValueFromWeightedArray : public UBTTask_BlackboardBase
{
public:
	struct FAIDataProviderStructValue                  WeightedArrayFromParams;                                   // 0x0088(0x0030) (Edit, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardFloatValueFromWeightedArray");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_SetBlackboardIntValue
// 0x0030 (FullSize[0x00B8] - InheritedSize[0x0088])
class UBTTask_SetBlackboardIntValue : public UBTTask_BlackboardBase
{
public:
	struct FAIDataProviderIntValue                     IntValue;                                                  // 0x0088(0x0030) (Edit, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardIntValue");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_SetBlackboardVectorValue
// 0x0038 (FullSize[0x00C0] - InheritedSize[0x0088])
class UBTTask_SetBlackboardVectorValue : public UBTTask_BlackboardBase
{
public:
	bool                                               UseVectorFromBlackboard;                                   // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BI31[0x3];                                     // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     StaticValue;                                               // 0x008C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FBlackboardKeySelector                      BlackboardKeyToUseForVector;                               // 0x0098(0x0028) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardVectorValue");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_SetFollowUpAbility
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTTask_SetFollowUpAbility : public UBTTaskNode
{
public:
	class UClass*                                      AIAbilityType;                                             // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetFollowUpAbility");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_SetInHiddenActionState
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTTask_SetInHiddenActionState : public UBTTaskNode
{
public:
	bool                                               EnableHiddenActionState;                                   // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4LOP[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetInHiddenActionState");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_SetIsHeadingOffNavMeshCheck
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTTask_SetIsHeadingOffNavMeshCheck : public UBTTaskNode
{
public:
	bool                                               DisableIsHeadingOffNavMeshCheck;                           // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_N5VE[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetIsHeadingOffNavMeshCheck");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_SetupAITargetWeaponForNextShot
// 0x0078 (FullSize[0x00D8] - InheritedSize[0x0060])
class UBTTask_SetupAITargetWeaponForNextShot : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      Interactable;                                              // 0x0060(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetForInteractable;                                     // 0x0088(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetRelativeAimVector;                                   // 0x00B0(0x0028) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetupAITargetWeaponForNextShot");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_SetVelocity
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UBTTask_SetVelocity : public UBTTask_BlackboardBase
{
public:
	bool                                               UseBlackboardKey;                                          // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RVY5[0x3];                                     // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     NewVelocity;                                               // 0x008C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetVelocity");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_SpawnActorAndStore
// 0x0040 (FullSize[0x00A0] - InheritedSize[0x0060])
class UBTTask_SpawnActorAndStore : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BlackBoardKeyNameToStoreActor;                             // 0x0060(0x0028) (Edit)
	class UClass*                                      ActorToSpawn;                                              // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FVector                                     SpawnOffset;                                               // 0x0090(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_O1V0[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SpawnActorAndStore");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_StopMovementImmediately
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UBTTask_StopMovementImmediately : public UBTTaskNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_StopMovementImmediately");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_StorePawnLocationInBlackboard
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UBTTask_StorePawnLocationInBlackboard : public UBTTask_BlackboardBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_StorePawnLocationInBlackboard");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_TeleportTo
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UBTTask_TeleportTo : public UBTTask_BlackboardBase
{
public:
	bool                                               UseNavMesh;                                                // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3NNF[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_TeleportTo");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_TriggerNotification
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UBTTask_TriggerNotification : public UBTTaskNode
{
public:
	class UClass*                                      NotificationId;                                            // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9WCO[0x8];                                     // 0x0068(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_TriggerNotification");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_UnwieldCurrentWeapon
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTTask_UnwieldCurrentWeapon : public UBTTaskNode
{
public:
	bool                                               WaitForSuccessfulUnwield;                                  // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShouldUnwieldFast;                                         // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S458[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_UnwieldCurrentWeapon");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BurrowInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBurrowInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BurrowInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BurrowComponent
// 0x0040 (FullSize[0x0108] - InheritedSize[0x00C8])
class UBurrowComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_X76A[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      BurrowCrackClass;                                          // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      BurrowEruptClass;                                          // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              BurrowFadeoutTime;                                         // 0x00E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NQWG[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ABurrowCrack*>                        BurrowCracks;                                              // 0x00E8(0x0010) (ZeroConstructor, Transient)
	class ABurrowEruptBase*                            BurrowErupt;                                               // 0x00F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DESB[0x8];                                     // 0x0100(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BurrowComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.CoralShieldVFXComponent
// 0x00E0 (FullSize[0x01A8] - InheritedSize[0x00C8])
class UCoralShieldVFXComponent : public UActorComponent
{
public:
	class UParticleSystem*                             VFXAsset;                                                  // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       VfxSocketName;                                             // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    SpawnedVFXSystem;                                          // 0x00D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaAI_ECoralShieldVFXRole>          CurrentCoralShieldRole;                                    // 0x00E0(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DQ4O[0x7];                                     // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 OffToOnCurve;                                              // 0x00E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OffToOnDuration;                                           // 0x00F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7UH9[0x4];                                     // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 OnToOffCurve;                                              // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OnToOffDuration;                                           // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       OffToOnParamOverrideName;                                  // 0x0104(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       OnToOffParamOverrideName;                                  // 0x010C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ReceiverMeshComponentName;                                 // 0x0114(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       CasterMeshComponentName;                                   // 0x011C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SPSO[0x4];                                     // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInstanceDynamic*>            OverriddenMaterialsForReceive;                             // 0x0128(0x0010) (ZeroConstructor, Transient)
	TArray<class UMaterialInstanceDynamic*>            OverriddenMaterialsForCast;                                // 0x0138(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData_9L00[0x60];                                    // 0x0148(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.CoralShieldVFXComponent");
		return ptr;
	}



	void OnRep_CurrentCoralShieldRole();
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.CustomSkeletonAnimationDataList
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UCustomSkeletonAnimationDataList : public UDataAsset
{
public:
	TArray<struct FStringAssetReference>               CustomAnimationAssets;                                     // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.CustomSkeletonAnimationDataList");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.EnvQueryContext_ContextLocationFromBlackboard
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryContext_ContextLocationFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_ContextLocationFromBlackboard");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.EnvQueryContext_HomePositionFromBlackboard
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryContext_HomePositionFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_HomePositionFromBlackboard");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.EnvQueryContext_KnockbackPosFromBlackboard
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryContext_KnockbackPosFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_KnockbackPosFromBlackboard");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.EnvQueryContext_ThrowableTargetPositionFromBlackboard
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryContext_ThrowableTargetPositionFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_ThrowableTargetPositionFromBlackboard");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.EnvQueryContext_SeenActors
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UEnvQueryContext_SeenActors : public UEnvQueryContext
{
public:
	unsigned char                                      UnknownData_ZRME[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_SeenActors");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.EnvQueryContext_SeenActorsProjectedToGround
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UEnvQueryContext_SeenActorsProjectedToGround : public UEnvQueryContext
{
public:
	TArray<class AActor*>                              SeenActors;                                                // 0x0028(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_AMD6[0x20];                                    // 0x0038(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_SeenActorsProjectedToGround");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.EnvQueryContext_SpawnedForActorFromBlackboard
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_SpawnedForActorFromBlackboard : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_SpawnedForActorFromBlackboard");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.EnvQueryContext_TargetActorFromBlackboard
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_TargetActorFromBlackboard : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_TargetActorFromBlackboard");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.EnvQueryContext_TargetActorFromBlackboardPredictedLocation
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_TargetActorFromBlackboardPredictedLocation : public UEnvQueryContext_TargetActorFromBlackboard
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_TargetActorFromBlackboardPredictedLocation");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.EnvQueryContext_TargetActorFromParams
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_TargetActorFromParams : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_TargetActorFromParams");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.EnvQueryGenerator_AIRegionLocations
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class UEnvQueryGenerator_AIRegionLocations : public UEnvQueryGenerator
{
public:
	bool                                               UseOverrideSpawnType;                                      // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_R2IE[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       OverrideSpawnType;                                         // 0x0054(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_75BD[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_AIRegionLocations");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.EnvQueryGenerator_FromContext
// 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
class UEnvQueryGenerator_FromContext : public UEnvQueryGenerator
{
public:
	class UClass*                                      Context;                                                   // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_FromContext");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.EnvQueryGenerator_Line
// 0x00A8 (FullSize[0x0138] - InheritedSize[0x0090])
class UEnvQueryGenerator_Line : public UEnvQueryGenerator_ProjectedPoints
{
public:
	class UClass*                                      FromContext;                                               // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      ToContext;                                                 // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FAIDataProviderFloatValue                   PointSpacing;                                              // 0x00A0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderIntValue                     NumExtraPairsOfParallelLines;                              // 0x00D0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   ParallelLineSpacing;                                       // 0x0100(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	float                                              MaxValidLineLength;                                        // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ForceIncludeEndPoint;                                      // 0x0134(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ProjectPointsToWaterSurface;                               // 0x0135(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G3XG[0x2];                                     // 0x0136(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_Line");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.EnvQueryGenerator_PointsAtContext
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UEnvQueryGenerator_PointsAtContext : public UEnvQueryGenerator_ProjectedPoints
{
public:
	class UClass*                                      Context;                                                   // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_PointsAtContext");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.EnvQueryGenerator_Sphere
// 0x00D0 (FullSize[0x0160] - InheritedSize[0x0090])
class UEnvQueryGenerator_Sphere : public UEnvQueryGenerator_ProjectedPoints
{
public:
	TArray<struct FAIDataProviderFloatValue>           Radiuses;                                                  // 0x0090(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderIntValue                     NumberOfVerticalCircles;                                   // 0x00A0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderIntValue                     NumberOfHorizontalCircles;                                 // 0x00D0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	unsigned char                                      DefineFirstPointDirection : 1;                             // 0x0100(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      UnknownData_JXXY[0x7];                                     // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEnvDirection                               FirstPointDirection;                                       // 0x0108(0x0020) (Edit, DisableEditOnInstance)
	class UClass*                                      Centre;                                                    // 0x0128(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FAIDataProviderFloatValue                   ZOffsetFromCentre;                                         // 0x0130(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_Sphere");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.EnvQueryGenerator_WaterArc
// 0x0180 (FullSize[0x0210] - InheritedSize[0x0090])
class UEnvQueryGenerator_WaterArc : public UEnvQueryGenerator_ProjectedPoints
{
public:
	class UClass*                                      Origin;                                                    // 0x0090(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FAIDataProviderIntValue                     NumberOfArcsToGenerate;                                    // 0x0098(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   MinArcRadius;                                              // 0x00C8(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   MaxArcRadius;                                              // 0x00F8(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   MinArcTiltDegrees;                                         // 0x0128(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   MaxArcTiltDegrees;                                         // 0x0158(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   MinArcPercentage;                                          // 0x0188(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   MaxArcPercentage;                                          // 0x01B8(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	bool                                               IncludeDirectArcToTarget;                                  // 0x01E8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XHKO[0x7];                                     // 0x01E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DirectArcTarget;                                           // 0x01F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GK21[0x18];                                    // 0x01F8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_WaterArc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.EnvQueryGenerator_WaterDonut
// 0x0160 (FullSize[0x01F0] - InheritedSize[0x0090])
class UEnvQueryGenerator_WaterDonut : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   InnerRadius;                                               // 0x0090(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   OuterRadius;                                               // 0x00C0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderIntValue                     NumberOfRings;                                             // 0x00F0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderIntValue                     PointsPerRing;                                             // 0x0120(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FEnvDirection                               ArcDirection;                                              // 0x0150(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                  // 0x0170(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   ZOffsetFromCentre;                                         // 0x01A0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	class UClass*                                      Center;                                                    // 0x01D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      bDefineArc : 1;                                            // 0x01D8(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      ProjectPointsToWaterSurface : 1;                           // 0x01D8(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_N77F[0x7];                                     // 0x01D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      WaterPlaneSourceContext;                                   // 0x01E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      ApplyZOffsetToProjectPoints : 1;                           // 0x01E8(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      UnknownData_MDBX[0x7];                                     // 0x01E9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_WaterDonut");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.EnvQueryGenerator_WaterMultiDeckerRing
// 0x0078 (FullSize[0x0108] - InheritedSize[0x0090])
class UEnvQueryGenerator_WaterMultiDeckerRing : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   Radius;                                                    // 0x0090(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FAIDataProviderFloatValue>           ZOffsetOfRingsFromContext;                                 // 0x00C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderIntValue                     PointsPerRing;                                             // 0x00D0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	class UClass*                                      Center;                                                    // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_WaterMultiDeckerRing");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.EnvQueryTest_HasLineOfSight
// 0x0010 (FullSize[0x0180] - InheritedSize[0x0170])
class UEnvQueryTest_HasLineOfSight : public UEnvQueryTest
{
public:
	TEnumAsByte<AthenaAI_ETraceDirection>              TraceDirection;                                            // 0x0170(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YPLM[0x7];                                     // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Context;                                                   // 0x0178(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryTest_HasLineOfSight");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.EnvQueryTest_InGameEventExclusionZone
// 0x0008 (FullSize[0x0178] - InheritedSize[0x0170])
class UEnvQueryTest_InGameEventExclusionZone : public UEnvQueryTest
{
public:
	float                                              Radius;                                                    // 0x0170(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_12Q0[0x4];                                     // 0x0174(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryTest_InGameEventExclusionZone");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.EnvQueryTest_IsAngleInRange2D
// 0x00A0 (FullSize[0x0210] - InheritedSize[0x0170])
class UEnvQueryTest_IsAngleInRange2D : public UEnvQueryTest
{
public:
	struct FEnvDirection                               LineA;                                                     // 0x0170(0x0020) (Edit, DisableEditOnInstance)
	struct FEnvDirection                               LineB;                                                     // 0x0190(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   MinAngleDegrees;                                           // 0x01B0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   MaxAngleDegrees;                                           // 0x01E0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryTest_IsAngleInRange2D");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.EnvQueryTest_WaterHeight
// 0x0010 (FullSize[0x0180] - InheritedSize[0x0170])
class UEnvQueryTest_WaterHeight : public UEnvQueryTest
{
public:
	float                                              WaterHeightCheckOffset;                                    // 0x0170(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UX65[0x4];                                     // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ActorWithWaterPlaneContext;                                // 0x0178(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryTest_WaterHeight");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.HealthGemComponent
// 0x0138 (FullSize[0x0200] - InheritedSize[0x00C8])
class UHealthGemComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_A53E[0x118];                                   // 0x00C8(0x0118) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInstanceDynamic*>            OverridenMaterials;                                        // 0x01E0(0x0010) (ZeroConstructor)
	struct FName                                       EmissiveMaterialParameterName;                             // 0x01F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BuildMaterialMapOnBeginPlay;                               // 0x01F8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_T7PF[0x7];                                     // 0x01F9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.HealthGemComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.IsAIOfClassStatCondition
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UIsAIOfClassStatCondition : public UTargetedStatCondition
{
public:
	TArray<class UClass*>                              AIClasses;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.IsAIOfClassStatCondition");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.IsAIOfFormStatCondition
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UIsAIOfFormStatCondition : public UTargetedStatCondition
{
public:
	TArray<TAssetPtr<class UClass>>                    AllowedAIForms;                                            // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.IsAIOfFormStatCondition");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.IsAIOfSkillsetStatCondition
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UIsAIOfSkillsetStatCondition : public UTargetedStatCondition
{
public:
	TArray<class UAthenaAIControllerParamsDataAsset*>  AISkillsets;                                               // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.IsAIOfSkillsetStatCondition");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.PeriodicAINoiseEventComponent
// 0x0048 (FullSize[0x0110] - InheritedSize[0x00C8])
class UPeriodicAINoiseEventComponent : public UActorComponent
{
public:
	struct FName                                       NoiseTag;                                                  // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NoiseRangeBasedOnMovementSpeed;                            // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WALF[0x3];                                     // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ConstantNoiseRange;                                        // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 MovementSpeedToNoiseRange;                                 // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OwnerActor;                                                // 0x00E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TD9W[0x28];                                    // 0x00E8(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.PeriodicAINoiseEventComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.PlayerProximityObservedSpawnContextProvider
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UPlayerProximityObservedSpawnContextProvider : public UObject
{
public:
	unsigned char                                      UnknownData_PPC7[0x20];                                    // 0x0028(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.PlayerProximityObservedSpawnContextProvider");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.SimpleAIRegion
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class USimpleAIRegion : public UObject
{
public:
	unsigned char                                      UnknownData_WVOU[0x38];                                    // 0x0028(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.SimpleAIRegion");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.SpawnContextProviderZone
// 0x0018 (FullSize[0x03E8] - InheritedSize[0x03D0])
class ASpawnContextProviderZone : public AActor
{
public:
	TArray<struct FName>                               SpawnContextIDs;                                           // 0x03D0(0x0010) (Edit, ZeroConstructor)
	class UBoxComponent*                               BoundingBox;                                               // 0x03E0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.SpawnContextProviderZone");
		return ptr;
	}



	void RemoveContextsFromTarget(class AActor* InActor, class UPrimitiveComponent* InComponent, int InOtherBodyIndex);
	void AddContextsToTarget(class AActor* InActor, class UPrimitiveComponent* InComponent, int InOtherBodyIndex, bool InFromSweep, const struct FHitResult& InSweepResult);
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BaseSpawnBlockingBehaviourStrategy
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UBaseSpawnBlockingBehaviourStrategy : public USpawnerBehaviourStrategy
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BaseSpawnBlockingBehaviourStrategy");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.SirenEncounterSpawnBlockingBehaviourStrategy
// 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
class USirenEncounterSpawnBlockingBehaviourStrategy : public UBaseSpawnBlockingBehaviourStrategy
{
public:
	float                                              ChanceToSpawn;                                             // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TMG2[0xC];                                     // 0x004C(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.SirenEncounterSpawnBlockingBehaviourStrategy");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.StatusResponseSetBlackboardBoolKey
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UStatusResponseSetBlackboardBoolKey : public UStatusResponse
{
public:
	struct FName                                       BlackboardBoolKeyName;                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bValueWhenActive;                                          // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShouldClearKeyOnEnd;                                       // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0SXS[0x6];                                     // 0x003A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.StatusResponseSetBlackboardBoolKey");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.StatusResponseSetBlackboardClassKey
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UStatusResponseSetBlackboardClassKey : public UStatusResponse
{
public:
	struct FName                                       BlackboardClassKeyName;                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ValueWhenActive;                                           // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               SetValueOnDeactivate;                                      // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EZ1X[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ValueWhenDeactivated;                                      // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.StatusResponseSetBlackboardClassKey");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.StatusResponseSetBlackboardFloatKey
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UStatusResponseSetBlackboardFloatKey : public UStatusResponse
{
public:
	struct FName                                       BlackboardFloatKeyName;                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ValueWhenActive;                                           // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldClearKeyOnEnd;                                       // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EGP6[0xB];                                     // 0x003D(0x000B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.StatusResponseSetBlackboardFloatKey");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.VulnerabilityDuringAIStrategyComponent
// 0x0088 (FullSize[0x0150] - InheritedSize[0x00C8])
class UVulnerabilityDuringAIStrategyComponent : public UActorComponent
{
public:
	TArray<struct FAIStrategyVulnerabilityData>        StrategyVulnerabilities;                                   // 0x00C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UHealthComponent*                            HealthComponent;                                           // 0x00D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_206O[0x70];                                    // 0x00E0(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.VulnerabilityDuringAIStrategyComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.WaterbasedAISupplier
// 0x0008 (FullSize[0x03D8] - InheritedSize[0x03D0])
class AWaterbasedAISupplier : public AActor
{
public:
	class UAISpawnerList*                              Spawners;                                                  // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.WaterbasedAISupplier");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaAI.BTTask_SetBlackboardFloatValueFromMinMax
// 0x0060 (FullSize[0x00E8] - InheritedSize[0x0088])
class UBTTask_SetBlackboardFloatValueFromMinMax : public UBTTask_BlackboardBase
{
public:
	struct FAIDataProviderFloatValue                   MinValue;                                                  // 0x0088(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   MaxValue;                                                  // 0x00B8(0x0030) (Edit, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardFloatValueFromMinMax");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
