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
// 0x00C0 (FullSize[0x00E8] - InheritedSize[0x0028])
class UFireworkDataAsset : public UDataAsset
{
public:
	struct FWeightedProbabilityRangeOfRanges           TimeUntilExplosion;                                        // 0x0028(0x0030) (Edit, DisableEditOnInstance)
	TArray<struct FWeightedFireworkVFXData>            Explosions;                                                // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FWeightedProbabilityRange                   NumExplosions;                                             // 0x0068(0x0020) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TimeBetweenExplosions;                                     // 0x0088(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           ExplosionLocationOffset;                                   // 0x00B8(0x0030) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FireworkFramework.FireworkDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class FireworkFramework.FireworkExplosion
// 0x0028 (FullSize[0x03F8] - InheritedSize[0x03D0])
class AFireworkExplosion : public AActor
{
public:
	class USceneComponent*                             RootSceneComponent;                                        // 0x03D0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeneratedFireworkData                      GeneratedFireworkData;                                     // 0x03D8(0x0018) (Transient)
	unsigned char                                      UnknownData_WGSW[0x8];                                     // 0x03F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FireworkFramework.FireworkExplosion");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class FireworkFramework.FireworkItemInfo
// 0x0020 (FullSize[0x0530] - InheritedSize[0x0510])
class AFireworkItemInfo : public AItemInfo
{
public:
	class UFireworkDataAsset*                          FireworkDataAsset;                                         // 0x0510(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeneratedFireworkData                      GeneratedFireworkData;                                     // 0x0518(0x0018) (Net)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FireworkFramework.FireworkItemInfo");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class FireworkFramework.FireworkProjectile
// 0x0040 (FullSize[0x0630] - InheritedSize[0x05F0])
class AFireworkProjectile : public ALaunchableProjectile
{
public:
	unsigned char                                      UnknownData_WJID[0x8];                                     // 0x05F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USphereComponent*                            CollisionComponent;                                        // 0x05F8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        MeshComponent;                                             // 0x0600(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UExplosionComponent*                         ExplosionComponent;                                        // 0x0608(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeneratedFireworkData                      GeneratedFireworkData;                                     // 0x0610(0x0018) (Transient)
	unsigned char                                      UnknownData_GQSO[0x8];                                     // 0x0628(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FireworkFramework.FireworkProjectile");
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

// Class FireworkFramework.PrototypeFireworkProjectile
// 0x0078 (FullSize[0x0668] - InheritedSize[0x05F0])
class APrototypeFireworkProjectile : public ALaunchableProjectile
{
public:
	class USceneComponent*                             Root;                                                      // 0x05F0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                           FireworkCollision;                                         // 0x05F8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        FireworkMesh;                                              // 0x0600(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatInterval                              FireworkLifetimeRange;                                     // 0x0608(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FRuntimeFloatCurve>                  FireworkSpeedCurves;                                       // 0x0610(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FFloatInterval                              TrajectoryAngleRange;                                      // 0x0620(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FRuntimeFloatCurve>                  FireworkTrajectoryCurves;                                  // 0x0628(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData_LVAS[0x30];                                    // 0x0638(0x0030) MISSED OFFSET (PADDING)


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
