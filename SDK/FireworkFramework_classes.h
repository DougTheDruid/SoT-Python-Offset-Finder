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

// Class FireworkFramework.FireworkAmbientLightComponent
// 0x0050 (FullSize[0x04C0] - InheritedSize[0x0470])
class UFireworkAmbientLightComponent : public UAmbientLightSourceComponent
{
public:
	unsigned char                                      UnknownData_JPEH[0x50];                                    // 0x0470(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FireworkFramework.FireworkAmbientLightComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class FireworkFramework.FireworkDamagerType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFireworkDamagerType : public UDamagerType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FireworkFramework.FireworkDamagerType");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class FireworkFramework.FireworkDataAsset
// 0x0130 (FullSize[0x0158] - InheritedSize[0x0028])
class UFireworkDataAsset : public UDataAsset
{
public:
	struct FWeightedProbabilityRangeOfRanges           PercentageTimeUntilTrailDisappears;                        // 0x0028(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TimeUntilExplosion;                                        // 0x0058(0x0030) (Edit, DisableEditOnInstance)
	bool                                               IsFlare;                                                   // 0x0088(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShouldCastAmbientLight;                                    // 0x0089(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3SB1[0x2];                                     // 0x008A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFireworkAmbientLightData                   FireworkAmbientLightData;                                  // 0x008C(0x0014) (Edit, DisableEditOnInstance)
	TArray<struct FWeightedFireworkVFXData>            Explosions;                                                // 0x00A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FWeightedProbabilityRange                   NumExplosions;                                             // 0x00B0(0x0020) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TimeBetweenExplosions;                                     // 0x00D0(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           ExplosionLocationOffset;                                   // 0x0100(0x0030) (Edit, DisableEditOnInstance)
	class UWwiseObjectPoolWrapper*                     ExplosionSfxPool;                                          // 0x0130(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 LaunchSfx;                                                 // 0x0138(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      CameraShake;                                               // 0x0140(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              CameraShakeInnerRadiusMultiplier;                          // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxExplosionRadius;                                        // 0x014C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                        ExplosionRumble;                                           // 0x0150(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FireworkFramework.FireworkDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class FireworkFramework.FireworkExplosion
// 0x00C8 (FullSize[0x0498] - InheritedSize[0x03D0])
class AFireworkExplosion : public AActor
{
public:
	unsigned char                                      UnknownData_3HT4[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGeneratedFireworkData                      GeneratedFireworkData;                                     // 0x03D8(0x0060) (Transient, Protected)
	class USceneComponent*                             RootSceneComponent;                                        // 0x0438(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFireworkAmbientLightComponent*              FireworkAmbientLightComponent;                             // 0x0440(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    SpawnedExplosionParticles;                                 // 0x0448(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWwiseEmitter                               AudioEmitter;                                              // 0x0450(0x0020) (Transient)
	unsigned char                                      UnknownData_UD50[0x28];                                    // 0x0470(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FireworkFramework.FireworkExplosion");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class FireworkFramework.FireworkItemInfo
// 0x0020 (FullSize[0x0520] - InheritedSize[0x0500])
class AFireworkItemInfo : public AItemInfo
{
public:
	class ULoadableFireworkComponent*                  LoadableProjectileComponent;                               // 0x0500(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStringAssetReference                       FireworkDataAsset;                                         // 0x0508(0x0010) (Edit, ZeroConstructor)
	int                                                GeneratedDataRNGSeed;                                      // 0x0518(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5V45[0x4];                                     // 0x051C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FireworkFramework.FireworkItemInfo");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class FireworkFramework.FireworkServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFireworkServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FireworkFramework.FireworkServiceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class FireworkFramework.FireworkProjectile
// 0x0110 (FullSize[0x0718] - InheritedSize[0x0608])
class AFireworkProjectile : public ALaunchableProjectile
{
public:
	unsigned char                                      UnknownData_9W9J[0x10];                                    // 0x0608(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USphereComponent*                            CollisionComponent;                                        // 0x0618(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        MeshComponent;                                             // 0x0620(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UExplosionComponent*                         ExplosionComponent;                                        // 0x0628(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFireworkStatsComponent*                     FireworkStatsComponent;                                    // 0x0630(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             MeshDirectionComponent;                                    // 0x0638(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProjectileAnimationComponent*               AnimationComponent;                                        // 0x0640(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeneratedFireworkData                      GeneratedFireworkData;                                     // 0x0648(0x0060) (Transient)
	unsigned char                                      UnknownData_F9WN[0x70];                                    // 0x06A8(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FireworkFramework.FireworkProjectile");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class FireworkFramework.FireworkService
// 0x0090 (FullSize[0x0460] - InheritedSize[0x03D0])
class AFireworkService : public AActor
{
public:
	unsigned char                                      UnknownData_UUMR[0x90];                                    // 0x03D0(0x0090) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FireworkFramework.FireworkService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class FireworkFramework.FireworksSettings
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UFireworksSettings : public UDeveloperSettings
{
public:
	float                                              FlashbangRadius;                                           // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FlashbangFlashTimer;                                       // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FlashbangFadeOutTimer;                                     // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FlashbangCooldown;                                         // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LoadedFuseTimer;                                           // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NB0N[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FireworkFramework.FireworksSettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class FireworkFramework.FireworksSettingsDataAsset
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UFireworksSettingsDataAsset : public UDataAsset
{
public:
	float                                              LoadedFuseTimer;                                           // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BZMZ[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWwiseObjectPoolWrapper*                     FuseSoundWisePool;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 FuseActivateSoundPlayEvent;                                // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 FuseSoundPlayEvent;                                        // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 FuseSoundStopEvent;                                        // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     FuseParticleSystem;                                        // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStringAssetReference                       FuseMeshAssetReference;                                    // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FireworkFramework.FireworksSettingsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class FireworkFramework.FireworkStatsComponent
// 0x00C0 (FullSize[0x0188] - InheritedSize[0x00C8])
class UFireworkStatsComponent : public UActorComponent
{
public:
	float                                              FlareRadius;                                               // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UGMJ[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumberOfFireworksFiredAtNight;                             // 0x00D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FireworksFiredAtNightRadius;                               // 0x00D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FiredFireworksAtNightTimer;                                // 0x00D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NJ68[0xAC];                                    // 0x00DC(0x00AC) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FireworkFramework.FireworkStatsComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class FireworkFramework.ImpactProjectileIdFirework
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UImpactProjectileIdFirework : public UImpactProjectileId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FireworkFramework.ImpactProjectileIdFirework");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class FireworkFramework.LoadableFireworkComponent
// 0x0010 (FullSize[0x0138] - InheritedSize[0x0128])
class ULoadableFireworkComponent : public ULoadableProjectileComponent
{
public:
	bool                                               ShouldProjectileTrailDoReflections;                        // 0x0128(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShouldUseGlobalOverrideFuseTimer;                          // 0x0129(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShouldUseGlobalOverrideFuseSfx;                            // 0x012A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShouldUseGlobalOverrideFuseVfx;                            // 0x012B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShouldUseGlobalOverrideFuseMesh;                           // 0x012C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JFK3[0x3];                                     // 0x012D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFireworksSettingsDataAsset*                 FireworksSettingsDataAsset;                                // 0x0130(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FireworkFramework.LoadableFireworkComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class FireworkFramework.ProjectileAnimationComponent
// 0x01C8 (FullSize[0x0290] - InheritedSize[0x00C8])
class UProjectileAnimationComponent : public UActorComponent
{
public:
	TArray<struct FWeightedProjectileMeshAnimationData> ProjectileAnimationCurves;                                 // 0x00C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UStaticMeshComponent*                        MeshComponent;                                             // 0x00D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRuntimeVectorCurve                         AnimationOffsetCurve;                                      // 0x00E0(0x0170) (Transient)
	unsigned char                                      UnknownData_6N9O[0x40];                                    // 0x0250(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FireworkFramework.ProjectileAnimationComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class FireworkFramework.PrototypeFireworkProjectile
// 0x0098 (FullSize[0x06A0] - InheritedSize[0x0608])
class APrototypeFireworkProjectile : public ALaunchableProjectile
{
public:
	class USceneComponent*                             Root;                                                      // 0x0608(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                           FireworkCollision;                                         // 0x0610(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        FireworkMesh;                                              // 0x0618(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatInterval                              FireworkTravelDistanceRangeInMeters;                       // 0x0620(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FRuntimeFloatCurve>                  FireworkSpeedCurves;                                       // 0x0628(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FFloatInterval                              TrajectoryAngleRange;                                      // 0x0638(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FRuntimeFloatCurve>                  FireworkTrajectoryCurves;                                  // 0x0640(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRuntimeVectorCurve>                 FireworkTrajectoryOffsetAnimationCurves;                   // 0x0650(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData_AQUZ[0x40];                                    // 0x0660(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FireworkFramework.PrototypeFireworkProjectile");
		return ptr;
	}



	void Explode();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
