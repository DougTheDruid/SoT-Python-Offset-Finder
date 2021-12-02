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

// Class Watercrafts.ControllableOarsInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UControllableOarsInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Watercrafts.ControllableOarsInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Watercrafts.FakeShip
// 0x0100 (FullSize[0x04D0] - InheritedSize[0x03D0])
class AFakeShip : public AActor
{
public:
	unsigned char                                      UnknownData_XS3D[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AItemProxy*>                          AttachedItems;                                             // 0x03D8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_D76L[0xE8];                                    // 0x03E8(0x00E8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Watercrafts.FakeShip");
		return ptr;
	}



	void OnAttachedItemEndPlay(class AActor* Actor);
	void AfterRead();
	void BeforeDelete();

};

// Class Watercrafts.WatercraftTrackerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWatercraftTrackerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Watercrafts.WatercraftTrackerInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Watercrafts.ItemProxyWatercraftTrackerComponent
// 0x0088 (FullSize[0x0150] - InheritedSize[0x00C8])
class UItemProxyWatercraftTrackerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_33Y6[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UItemProxyWatercraftTrackerComponentDataAsset* WatercraftTrackingData;                                    // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class AActor*                                      CurrentWatercraft;                                         // 0x00D8(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XULB[0x70];                                    // 0x00E0(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Watercrafts.ItemProxyWatercraftTrackerComponent");
		return ptr;
	}



	void OnRep_CurrentWatercraft(class AActor* PreviousWatercraft);
	void OnCurrentWatercraftDestroyed(class AActor* DestroyedWatercraft);
	void AfterRead();
	void BeforeDelete();

};

// Class Watercrafts.ItemProxyWatercraftTrackerComponentDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UItemProxyWatercraftTrackerComponentDataAsset : public UDataAsset
{
public:
	TArray<class UClass*>                              WatercraftTypes;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Watercrafts.ItemProxyWatercraftTrackerComponentDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Watercrafts.RowboatAudioComponent
// 0x01B0 (FullSize[0x0460] - InheritedSize[0x02B0])
class URowboatAudioComponent : public USceneComponent
{
public:
	class URowboatAudioComponentParams*                Params;                                                    // 0x02B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARowboat*                                    ParentRowboat;                                             // 0x02B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FPKL[0x1A0];                                   // 0x02C0(0x01A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Watercrafts.RowboatAudioComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Watercrafts.RowboatAudioComponentParams
// 0x00C0 (FullSize[0x00E8] - InheritedSize[0x0028])
class URowboatAudioComponentParams : public UDataAsset
{
public:
	class UWwiseObjectPoolWrapper*                     RowboatObjectPool;                                         // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 RowboatWakeStart;                                          // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 RowboatWakeStop;                                           // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       RowboatSpeedRtpcName;                                      // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RowboatMaxSpeedRtpc;                                       // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_O8IO[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWwiseEvent*                                 RowboatLaunch;                                             // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 RowboatImpactAndScrapeStart;                               // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 RowboatImpactAndScrapeStop;                                // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 RowboatStrainStart;                                        // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 RowboatStrainStop;                                         // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       RowboatStrainRtpcName;                                     // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RowboatMaxStrainRtpc;                                      // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_08ZI[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWwiseEvent*                                 RowboatTakenDamage;                                        // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageAmountRequiredForNoiseToPlay;                        // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4BV8[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWwiseEvent*                                 RowboatAttach;                                             // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 RowboatDetach;                                             // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseObjectPoolWrapper*                     WwiseOarEmitterPool;                                       // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayOarInOarLayer;                                         // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayOarInWaterLayer;                                       // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayOarOutOarLayer;                                        // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayOarOutWaterLayer;                                      // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayOarBrakingLoop;                                        // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 StopOarBrakingLoop;                                        // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayOarPullFinished;                                       // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Watercrafts.RowboatAudioComponentParams");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Watercrafts.RowboatDescDataAsset
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class URowboatDescDataAsset : public UDataAsset
{
public:
	struct FPartDesc                                   PartDesc;                                                  // 0x0028(0x0020) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Watercrafts.RowboatDescDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Watercrafts.RowboatOarsLeftForwardNotificationInputId
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class URowboatOarsLeftForwardNotificationInputId : public UNotificationInputId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Watercrafts.RowboatOarsLeftForwardNotificationInputId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Watercrafts.RowboatOarsLeftForwardDeactivatedNotificationInputId
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class URowboatOarsLeftForwardDeactivatedNotificationInputId : public UNotificationInputId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Watercrafts.RowboatOarsLeftForwardDeactivatedNotificationInputId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Watercrafts.RowboatOarsRightForwardNotificationInputId
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class URowboatOarsRightForwardNotificationInputId : public UNotificationInputId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Watercrafts.RowboatOarsRightForwardNotificationInputId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Watercrafts.RowboatOarsRightForwardDeactivatedNotificationInputId
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class URowboatOarsRightForwardDeactivatedNotificationInputId : public UNotificationInputId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Watercrafts.RowboatOarsRightForwardDeactivatedNotificationInputId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Watercrafts.RowboatOarsLeftBrakingActivatedNotificationInputId
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class URowboatOarsLeftBrakingActivatedNotificationInputId : public UNotificationInputId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Watercrafts.RowboatOarsLeftBrakingActivatedNotificationInputId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Watercrafts.RowboatOarsLeftBrakingDeactivatedNotificationInputId
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class URowboatOarsLeftBrakingDeactivatedNotificationInputId : public UNotificationInputId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Watercrafts.RowboatOarsLeftBrakingDeactivatedNotificationInputId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Watercrafts.RowboatOarsRightBrakingActivatedNotificationInputId
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class URowboatOarsRightBrakingActivatedNotificationInputId : public UNotificationInputId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Watercrafts.RowboatOarsRightBrakingActivatedNotificationInputId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Watercrafts.RowboatOarsRightBrakingDeactivatedNotificationInputId
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class URowboatOarsRightBrakingDeactivatedNotificationInputId : public UNotificationInputId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Watercrafts.RowboatOarsRightBrakingDeactivatedNotificationInputId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Watercrafts.ScrapeableDamageDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UScrapeableDamageDataAsset : public UDataAsset
{
public:
	TArray<struct FScrapeableDamageSpeedEntry>         DamageSpeedParams;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Watercrafts.ScrapeableDamageDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Watercrafts.ScrapeableInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UScrapeableInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Watercrafts.ScrapeableInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Watercrafts.ScrapeableComponent
// 0x0030 (FullSize[0x00F8] - InheritedSize[0x00C8])
class UScrapeableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_ITV8[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinIntervalBetweenScrapeDamage;                            // 0x00D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_A2LQ[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UScrapeableDamageDataAsset*                  ScrapeDamageSettings;                                      // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     SafeZoneCenterDirection;                                   // 0x00E0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              SafeZoneMaximumAngle;                                      // 0x00EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ScrapeDamagerType;                                         // 0x00F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Watercrafts.ScrapeableComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Watercrafts.Watercraft
// 0x0348 (FullSize[0x0718] - InheritedSize[0x03D0])
class AWatercraft : public AActor
{
public:
	unsigned char                                      UnknownData_F3B0[0x28];                                    // 0x03D0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBuoyancyComponent*                          BuoyancyComponent;                                         // 0x03F8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FWatercraftRolloverCorrector                RolloverCorrector;                                         // 0x0400(0x000C) (Edit, DisableEditOnInstance, Protected)
	unsigned char                                      UnknownData_PRBH[0x4];                                     // 0x040C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UShipNosediveBrake*                          NosediveBrake;                                             // 0x0410(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UBowSplashContainer*                         BowSplashContainer;                                        // 0x0418(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UStaticMeshComponent*                        CollisionMesh;                                             // 0x0420(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UStaticMeshComponent*                        CraftMesh;                                                 // 0x0428(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UBoxComponent*                               OverlapHits;                                               // 0x0430(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        WaterOcclusionVolume;                                      // 0x0438(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWaterInteractionComponent*                  WaterInteractionComponent;                                 // 0x0440(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ClientConvexHullCollisionProfile;                          // 0x0448(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNetTimeStampCalculator                     MovementTimeStamp;                                         // 0x0450(0x0070) (Net)
	struct FRigidBodyErrorCorrection                   PhysicsErrorCorrection;                                    // 0x04C0(0x001C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_M162[0x34];                                    // 0x04DC(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBuoyancySampleMovement                     BuoyancySampleMovement;                                    // 0x0510(0x0068) (Edit, DisableEditOnInstance)
	class UCurveFloat*                                 SpeedToChoppinessScalarCurve;                              // 0x0578(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeepWaterSubmersionThreshold;                              // 0x0580(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BuoyancyChoppinessWhileSinking;                            // 0x0584(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RigidBodyAwake;                                            // 0x0588(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               InContactWithLand;                                         // 0x0589(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               InDeepWater;                                               // 0x058A(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5EL3[0x5];                                     // 0x058B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      Scrapeable[0x10];                                          // 0x058B(0x0010) UNKNOWN PROPERTY: InterfaceProperty Watercrafts.Watercraft.Scrapeable
	unsigned char                                      UnknownData_M1DX[0x178];                                   // 0x05A0(0x0178) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Watercrafts.Watercraft");
		return ptr;
	}



	void OnRigidBodyWake(const struct FName& InBoneName);
	void OnRigidBodySleep(const struct FName& InBoneName);
	void AfterRead();
	void BeforeDelete();

};

// Class Watercrafts.Rowboat
// 0x02F0 (FullSize[0x0A08] - InheritedSize[0x0718])
class ARowboat : public AWatercraft
{
public:
	unsigned char                                      UnknownData_GQ5R[0x40];                                    // 0x0718(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UChildActorComponent*                        LeftSideClamberSpot;                                       // 0x0758(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                        RightSideClamberSpot;                                      // 0x0760(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                        ForceSpot;                                                 // 0x0768(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                        Lantern;                                                   // 0x0770(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                        RowingSeat;                                                // 0x0778(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                        StorageSeat;                                               // 0x0780(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShipLiveryComponent*                        LiveryComponent;                                           // 0x0788(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UReplicatedShipPartCustomizationComponent*   CustomizationComponent;                                    // 0x0790(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     WaterExclusionOffset;                                      // 0x0798(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_9PLE[0x4];                                     // 0x07A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTetherCustomisationComponent*               TetherCustomisationComponent;                              // 0x07A8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHealthComponent*                            HealthComponent;                                           // 0x07B0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorDamageableComponent*                   ActorDamageableComponent;                                  // 0x07B8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URammableComponent*                          RammableComponent;                                         // 0x07C0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScrapeableComponent*                        ScrapeableComponent;                                       // 0x07C8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URowboatAudioComponent*                      RowboatAudio;                                              // 0x07D0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBaseHullDragDynamicsDesc*                   HullDragDynamicsDesc;                                      // 0x07D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBowSplashContainer*                         OarSplashContainer;                                        // 0x07E0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMountableComponent*                         MountableComponent;                                        // 0x07E8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 LinearDampingOverTimeWhileBeachedScalarCurve;              // 0x07F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 AngularDampingOverTimeWhileBeachedScalarCurve;             // 0x07F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRowboatDamageEffectData                    DamageEffectData;                                          // 0x0800(0x0018) (Edit, DisableEditOnInstance)
	struct FRowboatStrainDamageData                    StrainDamageData;                                          // 0x0818(0x0020) (Edit, DisableEditOnInstance)
	TArray<class UChildActorComponent*>                AlwaysEnabledInteractables;                                // 0x0838(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference)
	class UShroudBreakerTrackerComponent*              ShroudBreakerTrackerComponent;                             // 0x0848(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsBeingLaunched;                                           // 0x0850(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsSinking;                                                 // 0x0851(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_K2LU[0x2];                                     // 0x0852(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxPushingAngle;                                           // 0x0854(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentStrainAmount;                                       // 0x0858(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsDocked;                                                  // 0x085C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1IWJ[0x1];                                     // 0x085D(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_ECollisionChannel>              CoverCollisionChannel;                                     // 0x085E(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9MEH[0x1];                                     // 0x085F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              UnderCoverCheckInterval;                                   // 0x0860(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UnderCoverHeight;                                          // 0x0864(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                             RelativeUnderCoverProbeRoots;                              // 0x0868(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<Athena_ETrackedActorType>              TrackedActorType;                                          // 0x0878(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_12XP[0x18F];                                   // 0x0879(0x018F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Watercrafts.Rowboat");
		return ptr;
	}



	void SetAlwaysEnabledInteractables(TArray<class UChildActorComponent*> InAlwaysEnabledInteractables);
	void OnRep_IsSinking();
	void AfterRead();
	void BeforeDelete();

};

// Class Watercrafts.RowboatPartInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URowboatPartInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Watercrafts.RowboatPartInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Watercrafts.RowboatSpawnParamsDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class URowboatSpawnParamsDataAsset : public UDataAsset
{
public:
	TArray<class UClass*>                              RowboatTypes;                                              // 0x0028(0x0010) (Edit, ZeroConstructor, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Watercrafts.RowboatSpawnParamsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Watercrafts.RowingActionStateId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URowingActionStateId : public UActionStateId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Watercrafts.RowingActionStateId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Watercrafts.RowingInputComponent
// 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
class URowingInputComponent : public ULookAtOffsetInputComponent
{
public:
	class ARowingSeat*                                 TargetOars;                                                // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Watercrafts.RowingInputComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Watercrafts.StorageSeat
// 0x0030 (FullSize[0x06A8] - InheritedSize[0x0678])
class AStorageSeat : public ASeat
{
public:
	class UClass*                                      StorageInteractionInput;                                   // 0x0678(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStorageContainerComponent*                  StorageContainerComponent;                                 // 0x0680(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BMOO[0x20];                                    // 0x0688(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Watercrafts.StorageSeat");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Watercrafts.WatercraftBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWatercraftBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Watercrafts.WatercraftBlueprintFunctionLibrary");
		return ptr;
	}



	class AWatercraft* STATIC_SpawnWatercraft(class UObject* WorldContextObject, class UClass* WatercraftClass, const struct FVector& Location, const struct FRotator& Rotation);
	void AfterRead();
	void BeforeDelete();

};

// Class Watercrafts.WatercraftServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWatercraftServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Watercrafts.WatercraftServiceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Watercrafts.WatercraftService
// 0x0008 (FullSize[0x03D8] - InheritedSize[0x03D0])
class AWatercraftService : public AActor
{
public:
	unsigned char                                      UnknownData_MSXX[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Watercrafts.WatercraftService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Watercrafts.WatercraftSpawnData
// 0x0028 (FullSize[0x0080] - InheritedSize[0x0058])
class UWatercraftSpawnData : public UItemSpawnData
{
public:
	TAssetPtr<class UClass>                            WatercraftClass;                                           // 0x0058(0x001C) ELEMENT_SIZE_MISMATCH (Edit, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_E85K[0x4];                                     // 0x0058(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              MinDistanceToNearestWatercraftInMetres;                    // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_99XL[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Watercrafts.WatercraftSpawnData");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Watercrafts.WatercraftTrackerComponent
// 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
class UWatercraftTrackerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_WHM3[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              CurrentWatercrafts;                                        // 0x00D0(0x0010) (Net, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Watercrafts.WatercraftTrackerComponent");
		return ptr;
	}



	void OnWatercraftDestroyed(class AActor* WatercraftActor);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
