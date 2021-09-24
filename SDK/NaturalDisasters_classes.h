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

// Class NaturalDisasters.AshenLordAshCloudSetupDataAsset
// 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
class UAshenLordAshCloudSetupDataAsset : public UDataAsset
{
public:
	struct FWeightedProbabilityRangeOfRanges           AshCloudRadiusInMetres;                                    // 0x0028(0x0030) (Edit)
	float                                              AshCloudHeightCoefficient;                                 // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WE53[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeightedProbabilityRangeOfRanges           AshCloudLifetime;                                          // 0x0060(0x0030) (Edit)
	class UCurveFloat*                                 ScaleUpSpeedCurve;                                         // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 DissipationCurve;                                          // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NaturalDisasters.AshenLordAshCloudSetupDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class NaturalDisasters.AshenLordAshCloud
// 0x0088 (FullSize[0x0458] - InheritedSize[0x03D0])
class AAshenLordAshCloud : public AActor
{
public:
	class UStaticMeshComponent*                        CloudMesh;                                                 // 0x03D0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAshenLordAshCloudSetupDataAsset*            SetupData;                                                 // 0x03D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InnerRangeStartOffset;                                     // 0x03E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OuterRangeStart;                                           // 0x03E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       NormalisedEngulfedRTPC;                                    // 0x03E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RTPCSecondsBetweenUpdates;                                 // 0x03F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8YJG[0x4];                                     // 0x03F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LifeTime;                                                  // 0x03F8(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              StartTime;                                                 // 0x03FC(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              TimeOffset;                                                // 0x0400(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	TEnumAsByte<NaturalDisasters_EAshCloudState>       CloudState;                                                // 0x0404(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ED9U[0x37];                                    // 0x0405(0x0037) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxRadiusMultiplier;                                       // 0x043C(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RN3S[0x18];                                    // 0x0440(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NaturalDisasters.AshenLordAshCloud");
		return ptr;
	}



	void UpdatePostSettingsBP();
	void SetDissipationDensityBP(float CloudDensity);
	void OnRep_StateChanged();
	void AfterRead();
	void BeforeDelete();

};

// Class NaturalDisasters.AshenLordVolcano
// 0x0070 (FullSize[0x0440] - InheritedSize[0x03D0])
class AAshenLordVolcano : public AActor
{
public:
	class UAshenLordVolcanoSetupDataAsset*             VolcanoSetupData;                                          // 0x03D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4616[0x68];                                    // 0x03D8(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NaturalDisasters.AshenLordVolcano");
		return ptr;
	}



	void Multicast_FireProjectile(int WeightedVolcanoProjectileIndex, const struct FVector& AuthoritySpawnLocation, const struct FVector& LaunchVelocity, const struct FVector& RotationRate);
	void AfterRead();
	void BeforeDelete();

};

// Class NaturalDisasters.VolcanoSetupDataAsset
// 0x0418 (FullSize[0x0440] - InheritedSize[0x0028])
class UVolcanoSetupDataAsset : public UDataAsset
{
public:
	struct FWeightedProbabilityRangeOfRanges           WarmUpDuration;                                            // 0x0028(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           EruptionDuration;                                          // 0x0058(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           DormantDuration;                                           // 0x0088(0x0030) (Edit, DisableEditOnInstance)
	float                                              MinimumDurationForTheEffects;                              // 0x00B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Y12U[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeightedProbabilityRangeOfRanges           GroundAndWaterStayHotDurationAfterVolcanoFinishesDuration; // 0x00C0(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           ProjectileTriggerFrequency;                                // 0x00F0(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           PercentageOfMaxTargetingRange;                             // 0x0120(0x0030) (Edit, DisableEditOnInstance)
	int                                                MinNumProjectilesToTrigger;                                // 0x0150(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxNumProjectilesToTrigger;                                // 0x0154(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ExtraProjectilePoolNumProjectiles;                         // 0x0158(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QW08[0x4];                                     // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVolcanoTargetChances                       ChanceToTargetPlayers;                                     // 0x0160(0x0058) (Edit, DisableEditOnInstance)
	struct FVolcanoTargetChances                       ChanceToTargetShips;                                       // 0x01B8(0x0058) (Edit, DisableEditOnInstance)
	struct FVolcanoTargetChances                       ChanceToTargetWatercraft;                                  // 0x0210(0x0058) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           PlayerNearMissDistanceInMetres;                            // 0x0268(0x0030) (Edit, DisableEditOnInstance)
	float                                              InnerShipNearMissRadiusInMetres;                           // 0x0298(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OuterShipNearMissRadiusInMetres;                           // 0x029C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InnerWatercraftNearMissRadiusInMetres;                     // 0x02A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OuterWatercraftNearMissRadiusInMetres;                     // 0x02A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FWeightedVolcanoProjectile>          Projectiles;                                               // 0x02A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLandmarkReactionEventPlayForceFeedbackEntry> ForceFeedbackIgnitionEffect;                               // 0x02B8(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      LocalMiniProjectilesClass;                                 // 0x02C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FWeightedProbabilityRangeOfRanges           LocalMiniProjectilesSpawnHeightAbovePlayerInMetres;        // 0x02D0(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           LocalMiniProjectilesSpawnDistanceFromPlayerInMetres;       // 0x0300(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           LocalMiniProjectilesTimeBetweenSpawns;                     // 0x0330(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRange                   NumLocalMiniProjectilesToTrigger;                          // 0x0360(0x0020) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           LocalMiniProjectilesSpeed;                                 // 0x0380(0x0030) (Edit, DisableEditOnInstance)
	float                                              LocalMiniProjectilesGravityScale;                          // 0x03B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_60UQ[0x4];                                     // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeightedProbabilityRangeOfRanges           LocalMiniProjectilesSpawnAngleRange;                       // 0x03B8(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           LocalMiniProjectilesSpawnStartPositionOffsetInMetres;      // 0x03E8(0x0030) (Edit, DisableEditOnInstance)
	float                                              LocalMiniProjectilesSpawnDistanceSpeedScalar;              // 0x0418(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LocalMiniProjectilesSpawnDistanceMaxPlayerSpeed;           // 0x041C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeBetweenLocalEmbers;                                    // 0x0420(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RVTF[0x4];                                     // 0x0424(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVolcanoSetupDataEmbersEntry>        LocalEmbers;                                               // 0x0428(0x0010) (Edit, ZeroConstructor)
	float                                              EmbersSpawnOffsetInMetres;                                 // 0x0438(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ServerMigrationDistanceAsMultipleOfOuterTargetRadius;      // 0x043C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NaturalDisasters.VolcanoSetupDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class NaturalDisasters.AshenLordVolcanoSetupDataAsset
// 0x0150 (FullSize[0x0178] - InheritedSize[0x0028])
class UAshenLordVolcanoSetupDataAsset : public UDataAsset
{
public:
	struct FWeightedProbabilityRangeOfRanges           ProjectileTriggerFrequency;                                // 0x0028(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRange                   NumProjectilesToTrigger;                                   // 0x0058(0x0020) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           SpawnHeightInMetres;                                       // 0x0078(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TargetDistanceFromCenterInMetres;                          // 0x00A8(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TimeBetweenSpawns;                                         // 0x00D8(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           StartPositionOffsetInMetres;                               // 0x0108(0x0030) (Edit, DisableEditOnInstance)
	TArray<struct FWeightedAshenLordVolcanoProjectile> Projectiles;                                               // 0x0138(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FPoolableCollectionMapConfiguration         PoolableProjectilesConfig;                                 // 0x0148(0x0018) (Edit, DisableEditOnInstance)
	struct FVolcanoSetupDataEmbersEntry                Embers;                                                    // 0x0160(0x0010) (Edit)
	float                                              EmberSpawnHeightInMeters;                                  // 0x0170(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeBetweenEmbers;                                         // 0x0174(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NaturalDisasters.AshenLordVolcanoSetupDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class NaturalDisasters.AshenLordWorldEndCloud
// 0x0018 (FullSize[0x03E8] - InheritedSize[0x03D0])
class AAshenLordWorldEndCloud : public AActor
{
public:
	float                                              SelfDestructDelayOnComplete;                               // 0x03D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<NaturalDisasters_EAshenLordWorldEndCloudState> CloudState;                                                // 0x03D4(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_482X[0x3];                                     // 0x03D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAshenLordWorldEndCloudAnimation            CurrentCloudAnimation;                                     // 0x03D8(0x0008) (Net)
	unsigned char                                      UnknownData_6USH[0x8];                                     // 0x03E0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NaturalDisasters.AshenLordWorldEndCloud");
		return ptr;
	}



	void OnRep_CloudStateChange();
	void AnimateCloud(float AdjustedLifetime);
	void AfterRead();
	void BeforeDelete();

};

// Class NaturalDisasters.Geyser
// 0x0068 (FullSize[0x0438] - InheritedSize[0x03D0])
class AGeyser : public AActor
{
public:
	unsigned char                                      UnknownData_80EU[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGeyserSetupDataAsset*                       SetupData;                                                 // 0x03D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	TEnumAsByte<NaturalDisasters_EGeyserState>         GeyserState;                                               // 0x03E0(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VQ1T[0x7];                                     // 0x03E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWwiseEvent*                                 StartActiveAudioLoopEvent;                                 // 0x03E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 StopActiveAudioLoopEvent;                                  // 0x03F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayEruptingAudioEvent;                                    // 0x03F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEmitterComponent*                      AudioEmitterComponent;                                     // 0x0400(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UExplosionComponent*                         ExplosionComponent;                                        // 0x0408(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    ActiveParticlesComponent;                                  // 0x0410(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    EruptingParticlesComponent;                                // 0x0418(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionChannel>              HitTestTraceChannel;                                       // 0x0420(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TUAG[0x7];                                     // 0x0421(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      GeyserHoleClass;                                           // 0x0428(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AHole*                                       GeyserHole;                                                // 0x0430(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NaturalDisasters.Geyser");
		return ptr;
	}



	void OnRep_GeyserState();
	void Multicast_TriggerExplosion();
	void AfterRead();
	void BeforeDelete();

};

// Class NaturalDisasters.DisableGeyserMechanismAction
// 0x0018 (FullSize[0x03E8] - InheritedSize[0x03D0])
class ADisableGeyserMechanismAction : public AActor
{
public:
	class UMechanismActionComponent*                   MechanismActionComponent;                                  // 0x03D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AGeyser*>                             GeysersToDisable;                                          // 0x03D8(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NaturalDisasters.DisableGeyserMechanismAction");
		return ptr;
	}



	void OnActionStateChanged(TEnumAsByte<Athena_EMechanismActionState> PreviousState, TEnumAsByte<Athena_EMechanismActionState> NewState, class AActor* InInstigator);
	void OnActionReset();
	void AfterRead();
	void BeforeDelete();

};

// Class NaturalDisasters.EarthquakeSetupDataAsset
// 0x02F8 (FullSize[0x0320] - InheritedSize[0x0028])
class UEarthquakeSetupDataAsset : public UDataAsset
{
public:
	struct FWeightedProbabilityRangeOfRanges           WarmUpDuration;                                            // 0x0028(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           EarthquakeDuration;                                        // 0x0058(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           CoolDownDuration;                                          // 0x0088(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           DormantDuration;                                           // 0x00B8(0x0030) (Edit, DisableEditOnInstance)
	float                                              ChanceOfTriggeringAVolcano;                                // 0x00E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatRange                                 PercentageThroughEarthquakeToStartVolcano;                 // 0x00EC(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UVFF[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPlayerFeedback                             WarmupPlayerFeedback;                                      // 0x0100(0x0080) (Edit, DisableEditOnInstance)
	struct FPlayerFeedback                             ActivePlayerFeedback;                                      // 0x0180(0x0080) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           StaggerStrengthDuration;                                   // 0x0200(0x0030) (Edit, DisableEditOnInstance)
	float                                              StaggerStrengthModifierWhenOnAShip;                        // 0x0230(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatRange                                 PercentageThroughCameraShakeToStartNextOne;                // 0x0234(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FFloatRange                                 TimeToShipPush;                                            // 0x0244(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3Z2P[0x4];                                     // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeightedProbabilityRangeOfRanges           ForceToApplyToShip;                                        // 0x0258(0x0030) (Edit, DisableEditOnInstance)
	float                                              MaximumShipSpeedToBePushed;                                // 0x0288(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChanceEarthquakeTriggersGeysers;                           // 0x028C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeightedProbabilityRangeOfRanges           TimeBetweenLocalEffects;                                   // 0x0290(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRange                   NumberOfLocalEffectsToTrigger;                             // 0x02C0(0x0020) (Edit, DisableEditOnInstance)
	float                                              EffectConeAngle;                                           // 0x02E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EffectRaycastDistanceInMetres;                             // 0x02E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDistanceThrottledRandomParticleSystemPicker EarthquakeEffects;                                         // 0x02E8(0x0010) (Edit, DisableEditOnInstance)
	float                                              WarmupWindTurbulence;                                      // 0x02F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatRange                                 WarmupGustPower;                                           // 0x02FC(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ActiveWindTurbulence;                                      // 0x030C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatRange                                 ActiveGustPower;                                           // 0x0310(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NaturalDisasters.EarthquakeSetupDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class NaturalDisasters.Earthquake
// 0x01D0 (FullSize[0x05A0] - InheritedSize[0x03D0])
class AEarthquake : public AActor
{
public:
	unsigned char                                      UnknownData_WZ6G[0x10];                                    // 0x03D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEarthquakeSetupDataAsset*                   EarthquakeSetupData;                                       // 0x03E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AVolcano*                                    AssociatedVolcano;                                         // 0x03E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGeyserManager*                              AssociatedGeyserManager;                                   // 0x03F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EarthquakeEffectInnerRadiusOffsetInMetres;                 // 0x03F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_C2LI[0x4];                                     // 0x03FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWwiseObjectPoolWrapper*                     AudioPool;                                                 // 0x0400(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayEarthquakeLarge;                                       // 0x0408(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 StopEarthquakeLarge;                                       // 0x0410(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayEarthquakeSmall;                                       // 0x0418(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 StopEarthquakeSmall;                                       // 0x0420(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       EarthquakeRtpcName;                                        // 0x0428(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EarthquakeRtpcMin;                                         // 0x0430(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EarthquakeRtpcMax;                                         // 0x0434(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EarthquakeSizeToUseLargeAttenuation;                       // 0x0438(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZOVY[0x4];                                     // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCapsuleComponent*                           HitDetectionVolume;                                        // 0x0440(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWindZoneComponent*                          WindZone;                                                  // 0x0448(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<NaturalDisasters_EEarthquakeState>     EarthquakeState;                                           // 0x0450(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7EJ8[0x14F];                                   // 0x0451(0x014F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NaturalDisasters.Earthquake");
		return ptr;
	}



	void OnRep_EarthquakeState(TEnumAsByte<NaturalDisasters_EEarthquakeState> OldEarthquakeState);
	void AfterRead();
	void BeforeDelete();

};

// Class NaturalDisasters.MechanismGeyser
// 0x0010 (FullSize[0x0448] - InheritedSize[0x0438])
class AMechanismGeyser : public AGeyser
{
public:
	TEnumAsByte<NaturalDisasters_EGeyserState>         GeyserStateWhenMechanismIsInactive;                        // 0x0438(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L7FM[0x7];                                     // 0x0439(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMechanismActionComponent*                   MechanismActionComponent;                                  // 0x0440(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NaturalDisasters.MechanismGeyser");
		return ptr;
	}



	void OnMechanismActionStateChanged(TEnumAsByte<Athena_EMechanismActionState> PreviousState, TEnumAsByte<Athena_EMechanismActionState> NewState, class AActor* InInstigator);
	void OnMechanismActionReset();
	void AfterRead();
	void BeforeDelete();

};

// Class NaturalDisasters.GeyserManagerSetupDataAsset
// 0x0190 (FullSize[0x01B8] - InheritedSize[0x0028])
class UGeyserManagerSetupDataAsset : public UDataAsset
{
public:
	struct FWeightedProbabilityRangeOfRanges           DormantDuration;                                           // 0x0028(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           ActiveDuration;                                            // 0x0058(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           DelayBetweenGeyserGroupsDuringGeyserEvent;                 // 0x0088(0x0030) (Edit, DisableEditOnInstance)
	bool                                               StartInactive;                                             // 0x00B8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               NoRestartAfterGeyserSpurtComplete;                         // 0x00B9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UseUniqueLocationsForEachGeyser;                           // 0x00BA(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9U2C[0x1];                                     // 0x00BB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinDistanceFromPlayerInMetres;                             // 0x00BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinGeyserSequenceSpacing;                                  // 0x00C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3VMT[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      GeyserToSpawn;                                             // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FWeightedProbabilityRange                   NumGeyserGroupsToSpawn;                                    // 0x00D0(0x0020) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRange                   NumGeysersToSpawnPerGroup;                                 // 0x00F0(0x0020) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           SpawnDistanceFromPlayerInMetres;                           // 0x0110(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           SpawnRadiusInMetres;                                       // 0x0140(0x0030) (Edit, DisableEditOnInstance)
	TArray<struct FGeyserSpawnAngleOption>             SpawnAngleRelativeToPlayerDirection;                       // 0x0170(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           DelayBetweenEachGeyserSpawningInAGroup;                    // 0x0180(0x0030) (Edit, DisableEditOnInstance)
	float                                              MaximumDensityRadiusInMetres;                              // 0x01B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaximumDensityMaxNumGeysersWithinRadius;                   // 0x01B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NaturalDisasters.GeyserManagerSetupDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class NaturalDisasters.NaturalDisasterRegistryInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNaturalDisasterRegistryInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NaturalDisasters.NaturalDisasterRegistryInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class NaturalDisasters.GeyserManager
// 0x0060 (FullSize[0x0430] - InheritedSize[0x03D0])
class AGeyserManager : public AActor
{
public:
	class UGeyserManagerSetupDataAsset*                GeyserManagerSetupData;                                    // 0x03D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Root;                                                      // 0x03D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<NaturalDisasters_EGeyserManagerState>  State;                                                     // 0x03E0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5P6G[0x4F];                                    // 0x03E1(0x004F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NaturalDisasters.GeyserManager");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class NaturalDisasters.GeyserItemSpawnComponent
// 0x0018 (FullSize[0x0480] - InheritedSize[0x0468])
class UGeyserItemSpawnComponent : public UItemSpawnComponent
{
public:
	unsigned char                                      UnknownData_CNHI[0x8];                                     // 0x0468(0x0008) Fix Super Size
	unsigned char                                      UnknownData_ZEOJ[0x10];                                    // 0x0470(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NaturalDisasters.GeyserItemSpawnComponent");
		return ptr;
	}



	void OnGeyserSpawned(const struct FVector& GeyserSpawnLocation);
	void AfterRead();
	void BeforeDelete();

};

// Class NaturalDisasters.GeyserSetupDataAsset
// 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
class UGeyserSetupDataAsset : public UDataAsset
{
public:
	struct FWeightedProbabilityRangeOfRanges           DormantDuration;                                           // 0x0028(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           InitialWarningDuration;                                    // 0x0058(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRange                   NumSpurtsPerActivation;                                    // 0x0088(0x0020) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TimeBetweenSpurts;                                         // 0x00A8(0x0030) (Edit, DisableEditOnInstance)
	bool                                               ShouldDestroyOnDeactivation;                               // 0x00D8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NR6R[0x3];                                     // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DestroyAfterDeactivationDelay;                             // 0x00DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NaturalDisasters.GeyserSetupDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class NaturalDisasters.LavaStatus
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class ULavaStatus : public UStatusBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NaturalDisasters.LavaStatus");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class NaturalDisasters.LavaZone
// 0x00A0 (FullSize[0x0470] - InheritedSize[0x03D0])
class ALavaZone : public AActor
{
public:
	struct FWeightedProbabilityRangeOfRanges           TimeBetweenActivations;                                    // 0x03D0(0x0030) (Edit)
	struct FWeightedProbabilityRangeOfRanges           ActiveDuration;                                            // 0x0400(0x0030) (Edit)
	class UPhysicalMaterial*                           LavaMaterial;                                              // 0x0430(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              ActorsInZone;                                              // 0x0438(0x0010) (Net, ZeroConstructor, Transient, RepNotify)
	bool                                               Active;                                                    // 0x0448(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               InitializeFromGlobalState;                                 // 0x0449(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SelfActivating;                                            // 0x044A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AUXV[0x5];                                     // 0x044B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      MaterialZone[0x10];                                        // 0x044B(0x0010) UNKNOWN PROPERTY: InterfaceProperty NaturalDisasters.LavaZone.MaterialZone
	unsigned char                                      LocalPlayerDispatcher[0x10];                               // 0x0460(0x0010) UNKNOWN PROPERTY: InterfaceProperty NaturalDisasters.LavaZone.LocalPlayerDispatcher


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NaturalDisasters.LavaZone");
		return ptr;
	}



	void OnRep_ActorsInZone(TArray<class AActor*> PreviousActors);
	void OnRep_Active();
	void AfterRead();
	void BeforeDelete();

};

// Class NaturalDisasters.SuperheatedWaterSetupDataAsset
// 0x00C0 (FullSize[0x00E8] - InheritedSize[0x0028])
class USuperheatedWaterSetupDataAsset : public UDataAsset
{
public:
	float                                              TimeBetweenHealthReduction;                                // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinimumWaterDepthToCauseDamage;                            // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeightedProbabilityRangeOfRanges           TimeBetweenLargeSurfaceEffects;                            // 0x0030(0x0030) (Edit, DisableEditOnInstance)
	float                                              LargeSurfaceEffectMinimumDistanceInMetres;                 // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GEK6[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRandomParticleSystemPicker                 LargeSurfaceEffects;                                       // 0x0068(0x0010) (Edit, DisableEditOnInstance)
	float                                              EffectSpawnHeight;                                         // 0x0078(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MurkStrengthToStartEffects;                                // 0x007C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeightedProbabilityRangeOfRanges           TimeBetweenSmallSurfaceEffects;                            // 0x0080(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRange                   NumSmallSurfaceEffects;                                    // 0x00B0(0x0020) (Edit, DisableEditOnInstance)
	struct FDistanceThrottledRandomParticleSystemPicker SmallSurfaceEffects;                                       // 0x00D0(0x0010) (Edit, DisableEditOnInstance)
	float                                              SmallSurfaceEffectNearbyPlayerRadiusInMetres;              // 0x00E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SmallSurfaceEffectOffsetRadiusInMetres;                    // 0x00E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NaturalDisasters.SuperheatedWaterSetupDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class NaturalDisasters.SuperheatedWater
// 0x0108 (FullSize[0x0578] - InheritedSize[0x0470])
class ASuperheatedWater : public AMurk
{
public:
	unsigned char                                      UnknownData_EAZ2[0x10];                                    // 0x0470(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USuperheatedWaterSetupDataAsset*             SetupData;                                                 // 0x0480(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                           HitDetectionVolume;                                        // 0x0488(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FakeUnderwaterLocationsMinDistanceInMetres;                // 0x0490(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FakeUnderwaterLocationsDistanceBetweenPointsInMetres;      // 0x0494(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TWeakObjectPtr<class AAthenaPlayerCharacter>> PlayersInZone;                                             // 0x0498(0x0010) (Net, ZeroConstructor, RepNotify, UObjectWrapper)
	unsigned char                                      UnknownData_ABV0[0xD0];                                    // 0x04A8(0x00D0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NaturalDisasters.SuperheatedWater");
		return ptr;
	}



	void OnRep_PlayersInZone();
	void AfterRead();
	void BeforeDelete();

};

// Class NaturalDisasters.Volcano
// 0x01C8 (FullSize[0x0598] - InheritedSize[0x03D0])
class AVolcano : public AActor
{
public:
	unsigned char                                      UnknownData_GLSK[0x10];                                    // 0x03D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCapsuleComponent*                           HitDetectionVolume;                                        // 0x03E0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseDormantDuration;                                        // 0x03E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1XAN[0x7];                                     // 0x03E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UVolcanoSetupDataAsset*                      VolcanoSetupData;                                          // 0x03F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMurk*                                       AssociatedSuperheatedWater;                                // 0x03F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALavaZone*                                   AssociatedLavaZone;                                        // 0x0400(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InnerTargetRadiusInMetres;                                 // 0x0408(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OuterTargetRadiusInMetres;                                 // 0x040C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NearbyPlayerRangeToFireProjectilesInMetres;                // 0x0410(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RandomShipPositionScale;                                   // 0x0414(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    WarmingUpEmitter;                                          // 0x0418(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    EruptingEmitter;                                           // 0x0420(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendedLightingZoneComponent*               BlendedLightingZoneComponent;                              // 0x0428(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendedAtmosphericPressureZoneComponent*    BlendedAtmosphericPressureZoneComponent;                   // 0x0430(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendedPostProcessingRainZoneComponent*     BlendedPostProcessingRainZoneComponent;                    // 0x0438(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ProjectileLaunchOffset;                                    // 0x0440(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZX8H[0x4];                                     // 0x044C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWwiseObjectPoolWrapper*                     AudioPool;                                                 // 0x0450(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 WarmupAudioPlayEvent;                                      // 0x0458(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 WarmupAudioStopEvent;                                      // 0x0460(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 EruptingAudioPlayEvent;                                    // 0x0468(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 EruptingAudioStopEvent;                                    // 0x0470(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                           InstantKillZone;                                           // 0x0478(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InstantKillZoneTestInterval;                               // 0x0480(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVolcanoStateData                           StateData;                                                 // 0x0484(0x000C) (Net, RepNotify)
	unsigned char                                      UnknownData_VSUX[0x108];                                   // 0x0490(0x0108) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NaturalDisasters.Volcano");
		return ptr;
	}



	void OnRep_VolcanoState(const struct FVolcanoStateData& OldVolcanoState);
	void Multicast_FireProjectile(const struct FVector& AuthoritySpawnLocation, TArray<struct FVolcanoProjectileData> VolcanoProjectileDataArray);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
