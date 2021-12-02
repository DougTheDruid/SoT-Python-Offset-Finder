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

// Class Fire.FlammableComponent
// 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
class UFlammableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_2TAW[0x10];                                    // 0x00C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               OnFire;                                                    // 0x00D8(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_TBOF[0x7];                                     // 0x00D9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Fire.FlammableComponent");
		return ptr;
	}



	void OnRep_OnFire();
	void Multicast_NotifyExtinguished_RPC(const struct FVector& InExtinguishLocationWS);
	bool IsOnFire();
	void IncrementFireSource();
	void DecrementFireSource();
	void AfterRead();
	void BeforeDelete();

};

// Class Fire.ActorFlammableComponent
// 0x0030 (FullSize[0x0110] - InheritedSize[0x00E0])
class UActorFlammableComponent : public UFlammableComponent
{
public:
	unsigned char                                      UnknownData_A7RN[0x18];                                    // 0x00E0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             FireVFX;                                                   // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UParticleSystem*                             SteamVFX;                                                  // 0x0100(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              FireVFXIntensity;                                          // 0x0108(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QQ3N[0x4];                                     // 0x010C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Fire.ActorFlammableComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Fire.ExtinguishableInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UExtinguishableInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Fire.ExtinguishableInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Fire.FireDamagerType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFireDamagerType : public UDamagerType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Fire.FireDamagerType");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Fire.FireExplosionDamagerType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFireExplosionDamagerType : public UDamagerType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Fire.FireExplosionDamagerType");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Fire.FireStatus
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UFireStatus : public UStatusBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Fire.FireStatus");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Fire.FlammableInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFlammableInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Fire.FlammableInterface");
		return ptr;
	}



	void IncrementFireSource();
	void DecrementFireSource();
	void AfterRead();
	void BeforeDelete();

};

// Class Fire.FlammableWieldableComponent
// 0x0018 (FullSize[0x00F8] - InheritedSize[0x00E0])
class UFlammableWieldableComponent : public UFlammableComponent
{
public:
	struct FStatus                                     IgnitedStatus;                                             // 0x00E0(0x0018) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Fire.FlammableWieldableComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Fire.TimedFlammableComponent
// 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
class UTimedFlammableComponent : public UFlammableComponent
{
public:
	bool                                               UseExtinguishTimer;                                        // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AllowFireToBeReplenishedBeforeExtinguishTimerExpired;      // 0x00E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2RZV[0x2];                                     // 0x00E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeInSecondsUntilFireExtinguished;                        // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Fire.TimedFlammableComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Fire.IgniteStatus
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UIgniteStatus : public UStatusBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Fire.IgniteStatus");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Fire.StatusResponseExtinguish
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UStatusResponseExtinguish : public UStatusResponse
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Fire.StatusResponseExtinguish");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Fire.StatusResponseIgnite
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UStatusResponseIgnite : public UStatusResponse
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Fire.StatusResponseIgnite");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Fire.FireGridCellSelectionParamsDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UFireGridCellSelectionParamsDataAsset : public UDataAsset
{
public:
	TArray<struct FFireGridCellSelectionParams>        FireGridCellSelectionParams;                               // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Fire.FireGridCellSelectionParamsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Fire.FirePropagationInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFirePropagationInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Fire.FirePropagationInterface");
		return ptr;
	}



	void SetAllCellsState(TEnumAsByte<Fire_EFireCellState> State);
	void AfterRead();
	void BeforeDelete();

};

// Class Fire.CookerIgnitionComponent
// 0x0078 (FullSize[0x0140] - InheritedSize[0x00C8])
class UCookerIgnitionComponent : public UActorComponent
{
public:
	struct FCookerIgnitionParams                       CookerIgnitionParams;                                      // 0x00C8(0x0078) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Fire.CookerIgnitionComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Fire.FireCellStateTimingParamsDataAsset
// 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
class UFireCellStateTimingParamsDataAsset : public UDataAsset
{
public:
	struct FFireCellStateTimingParams                  TimingParams;                                              // 0x0028(0x0094) (Edit)
	unsigned char                                      UnknownData_5RY5[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Fire.FireCellStateTimingParamsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Fire.FireGridAudioManager
// 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
class UFireGridAudioManager : public UObject
{
public:
	struct FFireCellAudioParams                        FireAudioParams;                                           // 0x0028(0x0040) (Transient, Protected)
	class AActor*                                      OwningActor;                                               // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFirePropagator*                             FirePropagator;                                            // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_23B7[0x58];                                    // 0x0078(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Fire.FireGridAudioManager");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Fire.FireGridLocationInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFireGridLocationInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Fire.FireGridLocationInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Fire.FireGridProxyInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFireGridProxyInterface : public UFireGridLocationInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Fire.FireGridProxyInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Fire.FireGridVFXParamsDataAsset
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UFireGridVFXParamsDataAsset : public UDataAsset
{
public:
	struct FFireGridVFXParams                          Params;                                                    // 0x0028(0x0040) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Fire.FireGridVFXParamsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Fire.FireGridVFXManager
// 0x01E8 (FullSize[0x0210] - InheritedSize[0x0028])
class UFireGridVFXManager : public UObject
{
public:
	class UFireGridVFXParamsDataAsset*                 VFXParams;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	TMap<struct FName, class UParticleSystemComponent*> SpawnedParticleSystemsForTemplates;                        // 0x0030(0x0050) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected)
	TArray<struct FFireParticleSystem>                 SpawnedCustomParticleSystemsForCells;                      // 0x0080(0x0010) (ZeroConstructor, Transient, ContainsInstancedReference, Protected)
	TMap<int, struct FFireMesh>                        SpawnedMeshesForCells;                                     // 0x0090(0x0050) (ZeroConstructor, Transient, ContainsInstancedReference, Protected)
	TMap<int, class UParticleSystemComponent*>         SpawnedParticleSystemsForSmokeDescs;                       // 0x00E0(0x0050) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected)
	class UParticleSystemComponent*                    SpawnedExteriorSmokeParticleSystem;                        // 0x0130(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UParticleSystemComponent*                    SpawnedLowDetailParticleSystem;                            // 0x0138(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	TArray<struct FFireMesh>                           DespawningMeshes;                                          // 0x0140(0x0010) (ZeroConstructor, Transient, ContainsInstancedReference, Protected)
	TArray<struct FFireGridRelativeSpawnDesc>          InteriorSmokeSpawnDescs;                                   // 0x0150(0x0010) (ZeroConstructor, Protected)
	TArray<struct FFireGridLowDetailRelativeSpawnDesc> LowDetailVFXSpawnDescs;                                    // 0x0160(0x0010) (ZeroConstructor, Protected)
	TArray<struct FFireParticleSpawnData>              ParticleSpawnLODSettings;                                  // 0x0170(0x0010) (ZeroConstructor, Protected)
	TArray<struct FFireGridLowDetailRelativeSpawnDesc> ExteriorSmokeVFXSpawnDescs;                                // 0x0180(0x0010) (ZeroConstructor, Protected)
	TArray<struct FFireDefaultVFXSpawnData>            VFXToSpawn;                                                // 0x0190(0x0010) (ZeroConstructor, Transient, Protected)
	unsigned char                                      UnknownData_PM75[0x8];                                     // 0x01A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FFireParticleSpawnList>              InterleavedSpawnLists;                                     // 0x01A8(0x0010) (ZeroConstructor)
	class UFirePropagator*                             Propagator;                                                // 0x01B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6QFX[0x50];                                    // 0x01C0(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Fire.FireGridVFXManager");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Fire.FirePropagator
// 0x00F8 (FullSize[0x0120] - InheritedSize[0x0028])
class UFirePropagator : public UObject
{
public:
	unsigned char                                      UnknownData_BB30[0x90];                                    // 0x0028(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFireCellStateTimingParamsDataAsset*         CellStateTimingParams;                                     // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_M1WY[0x4];                                     // 0x00C0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WaterHeightOffsetToFloodCells;                             // 0x00C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XVJ4[0x58];                                    // 0x00C8(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Fire.FirePropagator");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Fire.MastFlammableComponent
// 0x0028 (FullSize[0x0138] - InheritedSize[0x0110])
class UMastFlammableComponent : public UActorFlammableComponent
{
public:
	unsigned char                                      UnknownData_LH29[0x8];                                     // 0x0110(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     FireGridLocation;                                          // 0x0118(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UN4B[0x14];                                    // 0x0124(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Fire.MastFlammableComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Fire.ShipFireDamageParamsDataAsset
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UShipFireDamageParamsDataAsset : public UDataAsset
{
public:
	struct FShipFireDamageParams                       FireDamageParams;                                          // 0x0028(0x0018) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Fire.ShipFireDamageParamsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Fire.ShipFireLightParamsDataAsset
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UShipFireLightParamsDataAsset : public UDataAsset
{
public:
	struct FShipFireLightParams                        Params;                                                    // 0x0028(0x0014) (Edit)
	unsigned char                                      UnknownData_L6P5[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Fire.ShipFireLightParamsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Fire.ShipFirePropagationComponent
// 0x03C0 (FullSize[0x0488] - InheritedSize[0x00C8])
class UShipFirePropagationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_AC0S[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       FeatureToggleName;                                         // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ShipSize;                                                  // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              CellSize;                                                  // 0x00E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntVector                                  GridDimensions;                                            // 0x00E4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     GridOffset;                                                // 0x00F0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_W96S[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFirePropagator*                             Propagator;                                                // 0x0100(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShipFireDamageParamsDataAsset*              FireDamageDataAsset;                                       // 0x0108(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFireCellDesc>                       FireCellDescs;                                             // 0x0110(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData_JEVU[0x10];                                    // 0x0120(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FStatus                                     BurnStatus;                                                // 0x0130(0x0018) (Edit, DisableEditOnInstance)
	class UFireGridVFXManager*                         VFXManager;                                                // 0x0148(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFireGridVfxSpawnSettings                   VfxSpawnSettings;                                          // 0x0150(0x0058) (Edit, DisableEditOnInstance)
	struct FShipFireLightManager                       FireLightManager;                                          // 0x01A8(0x0150) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FFireGridCharringManager                    FireCharringManager;                                       // 0x02F8(0x00C8) (Edit, DisableEditOnInstance)
	TArray<struct FReplicatedFireCellData>             ReplicatedCellData;                                        // 0x03C0(0x0010) (Net, ZeroConstructor, Transient, RepNotify)
	struct FReplicatedFireCellCharringData             ReplicatedCellCharringData;                                // 0x03D0(0x0018) (Net, Transient, RepNotify)
	class UFireGridAudioManager*                       FireAudioManager;                                          // 0x03E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFireCellAudioParams                        FireAudioParams;                                           // 0x03F0(0x0040) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_UT6D[0x58];                                    // 0x0430(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Fire.ShipFirePropagationComponent");
		return ptr;
	}



	void OnRep_CellData();
	void OnRep_CellCharringData();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
