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

// Class Kraken.KrakenTentacle
// 0x0138 (FullSize[0x0508] - InheritedSize[0x03D0])
class AKrakenTentacle : public AActor
{
public:
	unsigned char                                      UnknownData_S7FB[0x20];                                    // 0x03D0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UHealthComponent*                            HealthComponent;                                           // 0x03F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorDamageableComponent*                   DamageableComponent;                                       // 0x03F8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVenomComponent*                             VenomComponent;                                            // 0x0400(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VenomChance;                                               // 0x0408(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_T49C[0xFC];                                    // 0x040C(0x00FC) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.KrakenTentacle");
		return ptr;
	}



	void OnDamageToTentacle(const struct FImpactDamageEvent& ImpactDamageEvent);
	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.CoordinatedKrakenInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCoordinatedKrakenInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.CoordinatedKrakenInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.CoordinatedKrakenPhaseActionsDataAsset
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UCoordinatedKrakenPhaseActionsDataAsset : public UDataAsset
{
public:
	TArray<int>                                        TentaclesUsed;                                             // 0x0028(0x0010) (Edit, ZeroConstructor)
	bool                                               KrakenHeadUsed;                                            // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KWIK[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCoordinatedKrakenAction>            Actions;                                                   // 0x0040(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.CoordinatedKrakenPhaseActionsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.EnvQueryContext_AllKrakenOccupiedLocations
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_AllKrakenOccupiedLocations : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.EnvQueryContext_AllKrakenOccupiedLocations");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.EnvQueryContext_AllocatedShip
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_AllocatedShip : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.EnvQueryContext_AllocatedShip");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.EnvQueryContext_AllShipsInWorld
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_AllShipsInWorld : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.EnvQueryContext_AllShipsInWorld");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.EnvQueryContext_AllWatercraftsInWorld
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_AllWatercraftsInWorld : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.EnvQueryContext_AllWatercraftsInWorld");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.EnvQueryContext_PreviousLocation
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_PreviousLocation : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.EnvQueryContext_PreviousLocation");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.EnvQueryGenerator_KrakenSpawnLocations
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UEnvQueryGenerator_KrakenSpawnLocations : public UEnvQueryGenerator
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.EnvQueryGenerator_KrakenSpawnLocations");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.EnvQueryGenerator_KrakenTentacleSpawnLocations
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UEnvQueryGenerator_KrakenTentacleSpawnLocations : public UEnvQueryGenerator
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.EnvQueryGenerator_KrakenTentacleSpawnLocations");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.Murk
// 0x00A0 (FullSize[0x0470] - InheritedSize[0x03D0])
class AMurk : public AActor
{
public:
	class UMurkWaterModifierZoneComponent*             WaterModifierZone;                                         // 0x03D0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             SceneRootComponent;                                        // 0x03D8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        InnerSheet;                                                // 0x03E0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        OuterSheet;                                                // 0x03E8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UnderwaterSheetHeightScale;                                // 0x03F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PEVF[0x4];                                     // 0x03F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    InnerSheetMaterialInstance;                                // 0x03F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    OuterSheetMaterialInstance;                                // 0x0400(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NDXO[0x68];                                    // 0x0408(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.Murk");
		return ptr;
	}



	void DeactivateMurkBP();
	void ActivateMurkBP();
	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.KrakenShipWrappingTentacle
// 0x01F0 (FullSize[0x06F8] - InheritedSize[0x0508])
class AKrakenShipWrappingTentacle : public AKrakenTentacle
{
public:
	class USceneComponent*                             SceneRoot;                                                 // 0x0508(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        TentacleCollisions;                                        // 0x0510(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        TentacleMesh;                                              // 0x0518(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               DamageZone;                                                // 0x0520(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             InteractableBlockingRegions;                               // 0x0528(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             KnockbackRegions;                                          // 0x0530(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               TentacleHeadCollisions;                                    // 0x0538(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             TentacleHeadKnockbackRegions;                              // 0x0540(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKrakenShipWrappingTentacleAIAudioComponent* AudioComponent;                                            // 0x0548(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 LowDetailTentacleMesh;                                     // 0x0550(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStringAssetReference                       HighDetailTentacleMeshAsset;                               // 0x0558(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleParams           Params;                                                    // 0x0568(0x00F0) (Edit, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    TentacleDynamicMaterialInstance;                           // 0x0658(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 HighDetailTentacleMesh;                                    // 0x0660(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKrakenShipWrappingTentacleAnimationState   CurrentServerAnimationState;                               // 0x0668(0x0010) (Net, Transient, RepNotify)
	struct FKrakenShipWrappingTentacleAnimationState   PendingServerAnimationState;                               // 0x0678(0x0010) (Net, Transient)
	unsigned char                                      UnknownData_U7YY[0x70];                                    // 0x0688(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.KrakenShipWrappingTentacle");
		return ptr;
	}



	void OnRep_CurrentServerAnimationState();
	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.KrakenTelemetryComponent
// 0x0108 (FullSize[0x01D0] - InheritedSize[0x00C8])
class UKrakenTelemetryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_RT0E[0x108];                                   // 0x00C8(0x0108) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.KrakenTelemetryComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.Kraken
// 0x0540 (FullSize[0x0910] - InheritedSize[0x03D0])
class AKraken : public AActor
{
public:
	unsigned char                                      UnknownData_V4WB[0x18];                                    // 0x03D0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RelevancyDistance;                                         // 0x03E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NANB[0x14];                                    // 0x03EC(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InnerRadius;                                               // 0x0400(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OuterRadius;                                               // 0x0404(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Kraken_EKrakenState>                   CurrentState;                                              // 0x0408(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8YT7[0x1A7];                                   // 0x0409(0x01A7) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMurk*                                       MurkActor;                                                 // 0x05B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HG20[0xA0];                                    // 0x05B8(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKrakenAICharacterAudioComponent*            KrakenAudioComponent;                                      // 0x0658(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UKrakenTelemetryComponent*                   KrakenTelemetryComponent;                                  // 0x0660(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FEncounterParams                            SightingEncounterParams;                                   // 0x0668(0x000C) (Edit, DisableEditOnInstance, Protected)
	struct FEncounterParams                            CloseEncounterParams;                                      // 0x0674(0x000C) (Edit, DisableEditOnInstance, Protected)
	unsigned char                                      UnknownData_K18M[0x10];                                    // 0x0680(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKrakenParams                               Params;                                                    // 0x0690(0x0160) (Transient)
	int                                                NumTentaclesRemaining;                                     // 0x07F0(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4VSA[0x11C];                                   // 0x07F4(0x011C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.Kraken");
		return ptr;
	}



	void Multicast_OnTentacleTakenDamage();
	void AddActorToKnownTargets(class AActor* Target);
	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.KrakenAnimatedTentacleAnimationDataAsset
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UKrakenAnimatedTentacleAnimationDataAsset : public UDataAsset
{
public:
	class UKrakenAnimatedTentacleAnimationSpecDataAsset* AnimationSpec;                                             // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FrameTimeDelta;                                            // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AnimationLength;                                           // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumFrames;                                                 // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AllowLookAround;                                           // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               RequiresWaterHeightQuery;                                  // 0x003D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SPOR[0x2];                                     // 0x003E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AnimationPlayRateScale;                                    // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NNRC[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKrakenAnimatedTentacleAnimationBoneTrack> Bones;                                                     // 0x0048(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.KrakenAnimatedTentacleAnimationDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.KrakenAnimatedTentacleAnimationMappingDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UKrakenAnimatedTentacleAnimationMappingDataAsset : public UDataAsset
{
public:
	TArray<struct FKrakenAnimatedTentacleMappedAnimation> Animations;                                                // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.KrakenAnimatedTentacleAnimationMappingDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.KrakenAnimatedTentacleAnimationSpecDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UKrakenAnimatedTentacleAnimationSpecDataAsset : public UDataAsset
{
public:
	TArray<struct FKrakenAnimatedTentacleAnimationSpecBone> Bones;                                                     // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.KrakenAnimatedTentacleAnimationSpecDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.KrakenAnimatedTentacleStateAnimationsDataAsset
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UKrakenAnimatedTentacleStateAnimationsDataAsset : public UDataAsset
{
public:
	TAssetPtr<class UKrakenAnimatedTentacleAnimationMappingDataAsset> MappingAssetReference;                                     // 0x0028(0x001C) ELEMENT_SIZE_MISMATCH (Edit, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MVLR[0x4];                                     // 0x0028(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FKrakenAnimatedTentacleStateAnimationMapping> States;                                                    // 0x0048(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.KrakenAnimatedTentacleStateAnimationsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.KrakenHeadStateAnimationsDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UKrakenHeadStateAnimationsDataAsset : public UDataAsset
{
public:
	TArray<struct FKrakenHeadStateAnimationMapping>    States;                                                    // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.KrakenHeadStateAnimationsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.KrakenHead
// 0x0218 (FullSize[0x05E8] - InheritedSize[0x03D0])
class AKrakenHead : public AActor
{
public:
	unsigned char                                      UnknownData_GDVO[0x10];                                    // 0x03D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x03E0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHealthComponent*                            HealthComponent;                                           // 0x03E8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorDamageableComponent*                   ActorDamageableComponent;                                  // 0x03F0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            SphereComponent;                                           // 0x03F8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UExplosionComponent*                         ExplosionComponent;                                        // 0x0400(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             BiteAttackVFX;                                             // 0x0408(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FStatus>                             BreathingInContinuousStatusesToApply;                      // 0x0410(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              BreatheInStatusDuration;                                   // 0x0420(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_F8UE[0x4];                                     // 0x0424(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FStatus>                             RoarContinuousStatusesToApply;                             // 0x0428(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              RoarStatusDuration;                                        // 0x0438(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YLFU[0x4];                                     // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEnvQuery*                                   RoarEQSQuery;                                              // 0x0440(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      RoarVenomSource;                                           // 0x0448(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              RoarVenomInitialDamage;                                    // 0x0450(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RoarVenomDamageOverTime;                                   // 0x0454(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RoarVenomDamageOverTimeDuration;                           // 0x0458(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OCKN[0x4];                                     // 0x045C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      KnockbackDamagerType;                                      // 0x0460(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FKnockBackInfo                              RoarKnockbackInfo;                                         // 0x0468(0x0050) (Edit)
	class UKrakenHeadAnimationInstance*                HeadAnimInstance;                                          // 0x04B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     EQSQuerierLocation;                                        // 0x04C0(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GAYF[0x4];                                     // 0x04CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKrakenHeadHealthParamsDataAsset*            KrakenHeadHealthParams;                                    // 0x04D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHeadStateChangeRequest                     HeadStateRequest;                                          // 0x04D8(0x0018) (Net, RepNotify, Protected)
	bool                                               IsDamageEnabled;                                           // 0x04F0(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected)
	unsigned char                                      UnknownData_0CL9[0x7];                                     // 0x04F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             Root;                                                      // 0x04F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RUZT[0xC0];                                    // 0x0500(0x00C0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       BiteAttackImpactNamedPointsGroupName;                      // 0x05C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_98FS[0x20];                                    // 0x05C8(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.KrakenHead");
		return ptr;
	}



	void RequestState(class UClass* NewState);
	void OnRep_IsDamageEnabled();
	void OnRep_HeadStateRequest();
	void OnCoordinatedKrakenSpecialEvent(TEnumAsByte<Kraken_ECoordinatedKrakenSpecialEventTypes> InEventType);
	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.KrakenHeadAnimationInstance
// 0x0060 (FullSize[0x04A0] - InheritedSize[0x0440])
class UKrakenHeadAnimationInstance : public UAnimInstance
{
public:
	class UClass*                                      CurrentState;                                              // 0x0440(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      PreviousState;                                             // 0x0448(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UKrakenHeadStateAnimationsDataAsset*         MappingAsset;                                              // 0x0450(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpawnBlendTime;                                            // 0x0458(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultBlendTime;                                          // 0x045C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsInIntro;                                                 // 0x0460(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZU9Y[0x7];                                     // 0x0461(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                PlayingMontage;                                            // 0x0468(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4NXD[0x10];                                    // 0x0470(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKrakenHeadHitReactAnimationsDataAsset*      KrakenHeadHitReactionAsset;                                // 0x0480(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VWUQ[0x18];                                    // 0x0488(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.KrakenHeadAnimationInstance");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.KrakenHeadBreathingInStatus
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UKrakenHeadBreathingInStatus : public UStatusBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.KrakenHeadBreathingInStatus");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.KrakenHeadHealthParamsDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UKrakenHeadHealthParamsDataAsset : public UDataAsset
{
public:
	TArray<struct FKrakenHeadHealthPair>               KrakenHeadHealthPairs;                                     // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.KrakenHeadHealthParamsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.KrakenHeadHitReactAnimationsDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UKrakenHeadHitReactAnimationsDataAsset : public UDataAsset
{
public:
	TArray<struct FKrakenHeadHitReactAnimations>       HitReactionAnimations;                                     // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.KrakenHeadHitReactAnimationsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.KrakenHeadRoaringStatus
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UKrakenHeadRoaringStatus : public UStatusBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.KrakenHeadRoaringStatus");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.KrakenIdleBehaviourParamsDataAsset
// 0x00C0 (FullSize[0x00E8] - InheritedSize[0x0028])
class UKrakenIdleBehaviourParamsDataAsset : public UDataAsset
{
public:
	struct FKrakenIdleBehaviourParams                  Params;                                                    // 0x0028(0x00C0) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.KrakenIdleBehaviourParamsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.KrakenParamsDataAsset
// 0x0160 (FullSize[0x0188] - InheritedSize[0x0028])
class UKrakenParamsDataAsset : public UDataAsset
{
public:
	struct FKrakenParams                               Params;                                                    // 0x0028(0x0160) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.KrakenParamsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.KrakenPlayerGrabbingBehaviourParamsDataAsset
// 0x00E8 (FullSize[0x0110] - InheritedSize[0x0028])
class UKrakenPlayerGrabbingBehaviourParamsDataAsset : public UDataAsset
{
public:
	struct FKrakenPlayerGrabbingBehaviourParams        Params;                                                    // 0x0028(0x00E8) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.KrakenPlayerGrabbingBehaviourParamsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.KrakenServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UKrakenServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.KrakenServiceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.KrakenService
// 0x0220 (FullSize[0x05F0] - InheritedSize[0x03D0])
class AKrakenService : public AActor
{
public:
	unsigned char                                      UnknownData_DUAI[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKrakenServiceParams                        KrakenServiceParams;                                       // 0x03D8(0x00A0) (Transient, Protected)
	unsigned char                                      UnknownData_OW99[0xA0];                                    // 0x0478(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AKraken*                                     Kraken;                                                    // 0x0518(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EYHC[0xD0];                                    // 0x0520(0x00D0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.KrakenService");
		return ptr;
	}



	void RequestKrakenWithLocation(const struct FVector& SpawnLocation, class AActor* SpawnedForActor);
	bool IsServiceInitialized();
	bool IsKrakenActive();
	void DismissKraken();
	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.KrakenServiceParamsDataAsset
// 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
class UKrakenServiceParamsDataAsset : public UDataAsset
{
public:
	struct FKrakenServiceParams                        Params;                                                    // 0x0028(0x00A0) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.KrakenServiceParamsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.KrakenShipHittingBehaviourParamsDataAsset
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UKrakenShipHittingBehaviourParamsDataAsset : public UDataAsset
{
public:
	struct FKrakenShipHittingBehaviourParams           Params;                                                    // 0x0028(0x0060) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.KrakenShipHittingBehaviourParamsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.KrakenShipWrappingBehaviourParamsDataAsset
// 0x0428 (FullSize[0x0450] - InheritedSize[0x0028])
class UKrakenShipWrappingBehaviourParamsDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData_IX2N[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKrakenShipWrappingBehaviourParams          Params;                                                    // 0x0030(0x0420) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.KrakenShipWrappingBehaviourParamsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Kraken.KrakenShipWrappingKnockbackRegionComponent
// 0x00A0 (FullSize[0x0350] - InheritedSize[0x02B0])
class UKrakenShipWrappingKnockbackRegionComponent : public USceneComponent
{
public:
	class UBoxComponent*                               KnockbackRegion;                                           // 0x02B0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     KnockbackDirection;                                        // 0x02B8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              KnockbackTime;                                             // 0x02C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKnockBackInfo                              KnockbackParams;                                           // 0x02C8(0x0050) (Edit)
	unsigned char                                      UnknownData_HZ9C[0x38];                                    // 0x0318(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Kraken.KrakenShipWrappingKnockbackRegionComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
