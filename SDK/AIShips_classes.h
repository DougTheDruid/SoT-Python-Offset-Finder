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

// Class AIShips.AIShipBattlesDataAsset
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UAIShipBattlesDataAsset : public UDataAsset
{
public:
	TArray<struct FAIShipBattleParams>                 Battles;                                                   // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               SkellyCrewNames;                                           // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       EncounterCompleteText;                                     // 0x0048(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_401A[0x20];                                    // 0x0048(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIShips.AIShipBattlesDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIShips.AIShipObstacleServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIShipObstacleServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIShips.AIShipObstacleServiceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIShips.BTTask_SailShipBesideTarget
// 0x0050 (FullSize[0x00D8] - InheritedSize[0x0088])
class UBTTask_SailShipBesideTarget : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData_UAX7[0x20];                                    // 0x0088(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTrackingNoiseGenerator                     TrackingNoiseGenerator;                                    // 0x00A8(0x0018)
	unsigned char                                      UnknownData_HVF0[0x18];                                    // 0x00C0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIShips.BTTask_SailShipBesideTarget");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIShips.AthenaAIShipControllerParamsDataAsset
// 0x0350 (FullSize[0x0450] - InheritedSize[0x0100])
class UAthenaAIShipControllerParamsDataAsset : public UAthenaAIControllerParamsDataAsset
{
public:
	struct FShipMovementParams                         TrackingMovementParams;                                    // 0x0100(0x0034) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_0C2E[0x4];                                     // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeightedProbabilityRangeOfRanges           TimesToSailBesideTarget;                                   // 0x0138(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           PerpendicularDistanceOffsets;                              // 0x0168(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TimesBeforeDistanceChange;                                 // 0x0198(0x0030) (Edit, DisableEditOnInstance)
	float                                              MaxParallelDistanceOffset;                                 // 0x01C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AlignDistanceThreshold;                                    // 0x01CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeToProjectIntoFutureForTracking;                        // 0x01D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetSpeedThresholdToTrackShip;                           // 0x01D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTrackingNoiseGenerator                     TrackingNoiseGenerator;                                    // 0x01D8(0x0018) (Edit, DisableEditOnInstance)
	float                                              WheelAngleMonitorDuration;                                 // 0x01F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WheelAngleChangeThresholdToBreakTracking;                  // 0x01F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpeedMonitorDuration;                                      // 0x01F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpeedChangeThresholdToBreakTrackingInMPS;                  // 0x01FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetSpeedToConsiderAnchorLoweredInMPS;                   // 0x0200(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OAIR[0x4];                                     // 0x0204(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeightedProbabilityRangeOfRanges           TrackingLatencyTimes;                                      // 0x0208(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TrackingLatencyTimesWhenAnchorLowered;                     // 0x0238(0x0030) (Edit, DisableEditOnInstance)
	class UCurveFloat*                                 DistToTargetShipVSTrackingLatencyCurve;                    // 0x0268(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FShipMovementParams                         CirclingMovementParams;                                    // 0x0270(0x0034) (Edit, DisableEditOnInstance)
	float                                              TargetSpeedThresholdInKnots;                               // 0x02A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SecondsInFutureToProjectTargetLocation;                    // 0x02A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HED5[0x4];                                     // 0x02AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeightedProbabilityRangeOfRanges           CircleRadiuses;                                            // 0x02B0(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           CirclingSpeedsInDegreesPerSecond;                          // 0x02E0(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TimesToCircleBeforeChangingRadius;                         // 0x0310(0x0030) (Edit, DisableEditOnInstance)
	float                                              MinDistanceFromTargetToStartRam;                           // 0x0340(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDistanceFromTargetToStartRam;                           // 0x0344(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxSpeedToRamTarget;                                       // 0x0348(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RammingMaxTurnSpeed;                                       // 0x034C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RammingTimeDampingScalar;                                  // 0x0350(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinAngleToTargetToAttemptRam;                              // 0x0354(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeightedProbabilityRangeOfRanges           RammingLocationOffsets;                                    // 0x0358(0x0030) (Edit, DisableEditOnInstance)
	struct FShipMovementParams                         SailingForwardMovementParams;                              // 0x0388(0x0034) (Edit, DisableEditOnInstance)
	float                                              MinAllowedDistanceToObstacle;                              // 0x03BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxPathAvoidanceDistance;                                  // 0x03C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FShipMovementParams                         PassiveSailingMovementParams;                              // 0x03C4(0x0034) (Edit, DisableEditOnInstance)
	float                                              ChanceToAnchor;                                            // 0x03F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0B2O[0x4];                                     // 0x03FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeightedProbabilityRangeOfRanges           TimesToStayAnchored;                                       // 0x0400(0x0030) (Edit, DisableEditOnInstance)
	int                                                NumIslandsToVisitBeforeReturning;                          // 0x0430(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceFromIslandsToSailTo;                               // 0x0434(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceToTargetToDropAnchor;                              // 0x0438(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_23U3[0x4];                                     // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              AggressionOverrideImpactIDs;                               // 0x0440(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIShips.AthenaAIShipControllerParamsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIShips.AIShipContextDescDataAsset
// 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
class UAIShipContextDescDataAsset : public UDataAsset
{
public:
	TEnumAsByte<AIShips_EAIShipType>                   ShipType;                                                  // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIShips_EAIShipEncounterType>          EncounterType;                                             // 0x0029(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VIZY[0x6];                                     // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UShipDescAsset*                              ShipDesc;                                                  // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaAIShipControllerParamsDataAsset*      ControllerParams;                                          // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAIShipEncounterParamsSpawnerData>   Spawners;                                                  // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FAIShipContextDescDamageParams              DamageParams;                                              // 0x0050(0x0014) (Edit, DisableEditOnInstance)
	struct FAIShipSailData                             SailsCustomisation;                                        // 0x0064(0x0010) (Edit, DisableEditOnInstance)
	struct FColor                                      SailColour;                                                // 0x0074(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	struct FAIShipCrewFormType                         FormType;                                                  // 0x0078(0x0020) (Transient)
	struct FAIShipCrewAmmoType                         AmmoType;                                                  // 0x0098(0x0018) (Transient)
	class UShortRangeMarkerDataAsset*                  RewardMarkerParams;                                        // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIShips.AIShipContextDescDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIShips.AIShipContextParamsDataAsset
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UAIShipContextParamsDataAsset : public UDataAsset
{
public:
	float                                              TopDeckPlayerTrackerRadius;                                // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeSpentEmotingOnInitialSpawn;                            // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ForceAIToAlwaysSpawn;                                      // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PP52[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IntervalBetweenRepairDamageAssignments;                    // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IntervalBetweenUseCannonAssignments;                       // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistForMinXYAIInteractableUtility;                         // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistForMaxXYAIInteractableUtility;                         // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinXYAIInteractableUtility;                                // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxXYAIInteractableUtility;                                // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistForMinZAIInteractableUtility;                          // 0x004C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistForMaxZAIInteractableUtility;                          // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinZAIInteractableUtility;                                 // 0x0054(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxZAIInteractableUtility;                                 // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinInactiveRepairSpawnDelay;                               // 0x005C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxInactiveRepairSpawnDelay;                               // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpawnSfxDistance;                                          // 0x0064(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SinkSfxDistance;                                           // 0x0068(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MinCannonAttackersWhenBoarded;                             // 0x006C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StuckCheckInterval;                                        // 0x0070(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StuckCheckDistance;                                        // 0x0074(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDistanceFromEncounter;                                  // 0x0078(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ShipFlippedAngle;                                          // 0x007C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SecondsUntilKillAIAfterShipDefeated;                       // 0x0080(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SecondsDelayForAIShipDefeatedNotification;                 // 0x0084(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               EnableShipSurfacingMusic;                                  // 0x0088(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5LAG[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIShips.AIShipContextParamsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIShips.AIShipEncounterSpawnParamsDataAsset
// 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
class UAIShipEncounterSpawnParamsDataAsset : public UDataAsset
{
public:
	float                                              SpawnDepth;                                                // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinSafeSpawnDistanceFromOtherShips;                        // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeDelayBetweenWaves;                                     // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRelativeSpawnLocationGeneratorParams       RelativeSpawnLocationParams;                               // 0x0038(0x00A0) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIShips.AIShipEncounterSpawnParamsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIShips.ShipProxyPawn
// 0x0038 (FullSize[0x0480] - InheritedSize[0x0448])
class AShipProxyPawn : public APawn
{
public:
	class AShip*                                       Ship;                                                      // 0x0448(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AShip*                                       SpawnTargetShip;                                           // 0x0450(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S3VW[0x28];                                    // 0x0458(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIShips.ShipProxyPawn");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIShips.AIShipEncounterParamsDataAsset
// 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
class UAIShipEncounterParamsDataAsset : public UDataAsset
{
public:
	class UAIShipEncounterSpawnParamsDataAsset*        SpawnParams;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIShipContextParamsDataAsset*               ContextParams;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIShipContextDescDataAsset*                 DefaultContextDesc;                                        // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ShipPawnClass;                                             // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBuoyantObjectSpawnProfileDataAsset*         BuoyantObjectSpawnProfileAsset;                            // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      EventSignalAssetClass;                                     // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              EventSignalHeight;                                         // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_T5XP[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       EncounterCompleteText;                                     // 0x0060(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_A14N[0x20];                                    // 0x005C(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              OuterRadiusMultiplier;                                     // 0x0098(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MigrationRadiusMultiplier;                                 // 0x009C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InitialEncounterEntryDelay;                                // 0x00A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinEngagedDistanceFromPlayers;                             // 0x00A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               EnableMusicWhenShipsHaveNoTarget;                          // 0x00A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BIQH[0x3];                                     // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SecondsUntilEncounterEndsAfterLastCrewLeft;                // 0x00AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaximumEncounterDuration;                                  // 0x00B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AQYP[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIShips.AIShipEncounterParamsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIShips.AIShipServiceDataAsset
// 0x01B8 (FullSize[0x01E0] - InheritedSize[0x0028])
class UAIShipServiceDataAsset : public UDataAsset
{
public:
	class UAIShipEncounterParamsDataAsset*             BattleEncounterParams;                                     // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIShipEncounterParams                      AggressiveEncounterParams;                                 // 0x0030(0x0018) (Edit, DisableEditOnInstance)
	struct FAIShipEncounterParams                      PassiveEncounterParams;                                    // 0x0048(0x0018) (Edit, DisableEditOnInstance)
	struct FIntPoint                                   ObstacleBucketDimensions;                                  // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ShipwreckObstacleRadius;                                   // 0x0068(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EYSL[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIShipContextDescGenerationParams          ContextDescGenerationParams;                               // 0x0070(0x0080) (Edit, DisableEditOnInstance)
	struct FAIShipBattleEncounterDescGenerationParams  EncounterGenerationParams;                                 // 0x00F0(0x0028) (Edit, DisableEditOnInstance)
	struct FAIShipSingleWaveEncounterDescGenerationParams AggressiveEncounterGenerationParams;                       // 0x0118(0x0010) (Edit, DisableEditOnInstance)
	struct FAIShipSingleWaveEncounterDescGenerationParams PassiveEncounterGenerationParams;                          // 0x0128(0x0010) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TimerBattleFirstRegenInterval;                             // 0x0138(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TimerBattleRegenInterval;                                  // 0x0168(0x0030) (Edit, DisableEditOnInstance)
	float                                              TimerBattleFinderThrottle;                                 // 0x0198(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ROKO[0x4];                                     // 0x019C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeightedProbabilityRangeOfRanges           TimerBattleRetryRegenInterval;                             // 0x01A0(0x0030) (Edit, DisableEditOnInstance)
	float                                              TimerBattleMinActivationDistanceFromPlayers;               // 0x01D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KJD2[0x4];                                     // 0x01D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UShortRangeMarkerDataAsset*                  RewardMarkerParams;                                        // 0x01D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIShips.AIShipServiceDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIShips.AIShipDebugFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIShipDebugFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIShips.AIShipDebugFunctionLibrary");
		return ptr;
	}



	void STATIC_RequestAIShipForCrew(class UObject* WorldContextObject, const struct FGuid& CrewId);
	struct FAIShipEncounterBattleDesc STATIC_GenerateAIShipBattleDesc(class UObject* WorldContextObject, class UAIShipServiceDataAsset* ServiceParams);
	void AfterRead();
	void BeforeDelete();

};

// Class AIShips.AIShipEncounterDesc
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UAIShipEncounterDesc : public UDataAsset
{
public:
	struct FVector2D                                   Location;                                                  // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Moveable;                                                  // 0x0034(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShowRevealBanner;                                          // 0x0035(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShowCompleteBanner;                                        // 0x0036(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShouldSpawnShipCloud;                                      // 0x0037(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               RequirePlayerShipInZoneToSpawnShips;                       // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               EnableSecondsUntilEncounterEndsAfterLastCrewLeft;          // 0x0039(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S51Z[0x2];                                     // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SecondsUntilEncounterEndsAfterLastCrewLeft;                // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               EnableMaximumEncounterDuration;                            // 0x0040(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QCRZ[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaximumEncounterDuration;                                  // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIShips_EAIShipEncounterType>          EncounterType;                                             // 0x0048(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_K4K4[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAIShipEncounterWave>                Waves;                                                     // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIShips.AIShipEncounterDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIShips.AIShipObstacleService
// 0x0070 (FullSize[0x0440] - InheritedSize[0x03D0])
class AAIShipObstacleService : public AActor
{
public:
	unsigned char                                      UnknownData_C4MY[0x70];                                    // 0x03D0(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIShips.AIShipObstacleService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIShips.AIShipServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIShipServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIShips.AIShipServiceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIShips.AIShipService
// 0x0368 (FullSize[0x0738] - InheritedSize[0x03D0])
class AAIShipService : public AActor
{
public:
	unsigned char                                      UnknownData_KGFO[0x20];                                    // 0x03D0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAIShipServiceDataAsset*                     Params;                                                    // 0x03F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_G92W[0x330];                                   // 0x03F8(0x0330) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UAIShipEncounterDesc*>                BattleEncounters;                                          // 0x0728(0x0010) (ZeroConstructor, Transient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIShips.AIShipService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIShips.AIShipTelemetryComponent
// 0x0040 (FullSize[0x0108] - InheritedSize[0x00C8])
class UAIShipTelemetryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_XPVZ[0x40];                                    // 0x00C8(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIShips.AIShipTelemetryComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIShips.AthenaAIShipController
// 0x00E0 (FullSize[0x06F8] - InheritedSize[0x0618])
class AAthenaAIShipController : public AAthenaAIControllerBase
{
public:
	class UBehaviorTree*                               BTAsset;                                                   // 0x0618(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3ZIJ[0x18];                                    // 0x0620(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAthenaAIShipControllerParamsDataAsset*      ShipParamsDataAsset;                                       // 0x0638(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStatusEffectManagerComponent*               StatusEffectManagerComponent;                              // 0x0640(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStandardAnchorDynamicsParameters           AnchorDynamicsParams;                                      // 0x0648(0x0028) (Edit)
	unsigned char                                      UnknownData_SW5M[0x88];                                    // 0x0670(0x0088) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIShips.AthenaAIShipController");
		return ptr;
	}



	void ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* ParamsAsset, class APawn* InPawn);
	void AfterRead();
	void BeforeDelete();

};

// Class AIShips.BTService_UpdateIfShipShouldBreakTracking
// 0x00E0 (FullSize[0x0150] - InheritedSize[0x0070])
class UBTService_UpdateIfShipShouldBreakTracking : public UBTService
{
public:
	struct FBlackboardKeySelector                      TargetActorKey;                                            // 0x0070(0x0028) (Edit, Protected)
	struct FBlackboardKeySelector                      DisableTrackingKey;                                        // 0x0098(0x0028) (Edit, Protected)
	struct FBlackboardKeySelector                      ShouldSailForwardKey;                                      // 0x00C0(0x0028) (Edit, Protected)
	struct FBlackboardKeySelector                      TimeToSailForwardKey;                                      // 0x00E8(0x0028) (Edit, Protected)
	struct FBlackboardKeySelector                      CaptainIsPresentKey;                                       // 0x0110(0x0028) (Edit, Protected)
	unsigned char                                      UnknownData_DAIX[0x18];                                    // 0x0138(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIShips.BTService_UpdateIfShipShouldBreakTracking");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIShips.BTService_UpdateLocationWithActorLocation
// 0x0050 (FullSize[0x00C0] - InheritedSize[0x0070])
class UBTService_UpdateLocationWithActorLocation : public UBTService
{
public:
	struct FBlackboardKeySelector                      LocationKey;                                               // 0x0070(0x0028) (Edit, Protected)
	struct FBlackboardKeySelector                      ActorKey;                                                  // 0x0098(0x0028) (Edit, Protected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIShips.BTService_UpdateLocationWithActorLocation");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIShips.BTService_UpdateTargetLocationForPassiveShip
// 0x0058 (FullSize[0x00C8] - InheritedSize[0x0070])
class UBTService_UpdateTargetLocationForPassiveShip : public UBTService
{
public:
	struct FBlackboardKeySelector                      TargetLocationKey;                                         // 0x0070(0x0028) (Edit, Protected)
	unsigned char                                      UnknownData_CFVJ[0x30];                                    // 0x0098(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIShips.BTService_UpdateTargetLocationForPassiveShip");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIShips.BTTask_AIShipSurface
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UBTTask_AIShipSurface : public UBTTask_BlackboardBase
{
public:
	float                                              MaxSpeed;                                                  // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PreSurfaceDelay;                                           // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EJMV[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIShips.BTTask_AIShipSurface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIShips.BTTask_RamTargetShip
// 0x00C0 (FullSize[0x0148] - InheritedSize[0x0088])
class UBTTask_RamTargetShip : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData_6L6N[0xC0];                                    // 0x0088(0x00C0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIShips.BTTask_RamTargetShip");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIShips.BTTask_SailShipCircleTarget
// 0x0038 (FullSize[0x00C0] - InheritedSize[0x0088])
class UBTTask_SailShipCircleTarget : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData_XSTO[0x38];                                    // 0x0088(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIShips.BTTask_SailShipCircleTarget");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIShips.BTTask_SailShipForward
// 0x00A8 (FullSize[0x0130] - InheritedSize[0x0088])
class UBTTask_SailShipForward : public UBTTask_BlackboardBase
{
public:
	struct FBlackboardKeySelector                      ShouldSailForwardKey;                                      // 0x0088(0x0028) (Edit)
	struct FBlackboardKeySelector                      TimeToSailForwardKey;                                      // 0x00B0(0x0028) (Edit)
	struct FBlackboardKeySelector                      IsCaptainPresentKey;                                       // 0x00D8(0x0028) (Edit)
	unsigned char                                      UnknownData_JIYI[0x30];                                    // 0x0100(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIShips.BTTask_SailShipForward");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIShips.BTTask_SailShipToLocation
// 0x0048 (FullSize[0x00D0] - InheritedSize[0x0088])
class UBTTask_SailShipToLocation : public UBTTask_BlackboardBase
{
public:
	struct FBlackboardKeySelector                      TargetLocationKey;                                         // 0x0088(0x0028) (Edit)
	float                                              DistanceThresholdToConsiderTargetReached;                  // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CIV0[0x1C];                                    // 0x00B4(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIShips.BTTask_SailShipToLocation");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIShips.CursedCrewCustomisationInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCursedCrewCustomisationInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIShips.CursedCrewCustomisationInterface");
		return ptr;
	}



	void SetCursedCrewCustomisationProperties(const struct FAIShipSailData& SailData);
	void AfterRead();
	void BeforeDelete();

};

// Class AIShips.CursedSailsCampaignDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UCursedSailsCampaignDataAsset : public UDataAsset
{
public:
	TArray<struct FCursedSailsBattleParams>            Battles;                                                   // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIShips.CursedSailsCampaignDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIShips.DefeatAIShipEncounterConditionalStatTrigger
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UDefeatAIShipEncounterConditionalStatTrigger : public UConditionalStatsTriggerType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIShips.DefeatAIShipEncounterConditionalStatTrigger");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIShips.IsAIShipEncounterTypeStatCondition
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UIsAIShipEncounterTypeStatCondition : public UStatCondition
{
public:
	TEnumAsByte<AIShips_EAIShipEncounterType>          EncounterType;                                             // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BPHY[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIShips.IsAIShipEncounterTypeStatCondition");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
