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

// Class Foliage.FoliageInstancedStaticMeshComponent
// 0x0028 (FullSize[0x0790] - InheritedSize[0x0768])
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:
	struct FScriptMulticastDelegate                    OnInstanceTakePointDamage;                                 // 0x0768(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInstanceTakeRadialDamage;                                // 0x0778(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_L1F8[0x8];                                     // 0x0788(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Foliage.FoliageInstancedStaticMeshComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Foliage.FoliageStatistics
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFoliageStatistics : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Foliage.FoliageStatistics");
		return ptr;
	}



	int STATIC_FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius);
	int STATIC_FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FBox& Box);
	void AfterRead();
	void BeforeDelete();

};

// Class Foliage.FoliageType
// 0x0338 (FullSize[0x0360] - InheritedSize[0x0028])
class UFoliageType : public UObject
{
public:
	struct FGuid                                       UpdateGuid;                                                // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Density;                                                   // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DensityAdjustmentFactor;                                   // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Foliage_EFoliageScaling>               Scaling;                                                   // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CORP[0x3];                                     // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFloatInterval                              ScaleX;                                                    // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFloatInterval                              ScaleY;                                                    // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFloatInterval                              ScaleZ;                                                    // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Foliage_EFoliageVertexColorMask>       VertexColorMask;                                           // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9LHQ[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              VertexColorMaskThreshold;                                  // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      VertexColorMaskInvert : 1;                                 // 0x0068(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_00F3[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFloatInterval                              ZOffset;                                                   // 0x006C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      AlignToNormal : 1;                                         // 0x0074(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_SCP3[0x3];                                     // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AlignMaxAngle;                                             // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      RandomYaw : 1;                                             // 0x007C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_MAD0[0x3];                                     // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RandomPitchAngle;                                          // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatInterval                              GroundSlopeAngle;                                          // 0x0084(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFloatInterval                              Height;                                                    // 0x008C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YQSD[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               LandscapeLayers;                                           // 0x0098(0x0010) (Edit, ZeroConstructor, AdvancedDisplay)
	struct FName                                       LandscapeLayer;                                            // 0x00A8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      CollisionWithWorld : 1;                                    // 0x00B0(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_EU7I[0x3];                                     // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     CollisionScale;                                            // 0x00B4(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	float                                              MinimumLayerWeight;                                        // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FBoxSphereBounds                            MeshBounds;                                                // 0x00C4(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     LowBoundOriginRadius;                                      // 0x00E0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EComponentMobility>             Mobility;                                                  // 0x00EC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8DKM[0x3];                                     // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInt32Interval                              CullDistance;                                              // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bEnableStaticLighting : 1;                                 // 0x00F8(0x0001) BIT_FIELD (Deprecated, NoDestructor)
	unsigned char                                      CastShadow : 1;                                            // 0x00F8(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bAffectDynamicIndirectLighting : 1;                        // 0x00F8(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bAffectDistanceFieldLighting : 1;                          // 0x00F8(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bCastDynamicShadow : 1;                                    // 0x00F8(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bCastStaticShadow : 1;                                     // 0x00F8(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                 // 0x00F8(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay)
	unsigned char                                      bReceivesDecals : 1;                                       // 0x00F8(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay)
	unsigned char                                      bOverrideLightMapRes : 1;                                  // 0x00F9(0x0001) BIT_FIELD (BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      UnknownData_RKKH[0x2];                                     // 0x00FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                OverriddenLightMapRes;                                     // 0x00FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bUseAsOccluder : 1;                                        // 0x0100(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_WV4U[0x7];                                     // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBodyInstance                               BodyInstance;                                              // 0x0108(0x0180) (Edit)
	TEnumAsByte<Engine_EHasCustomNavigableGeometry>    CustomNavigableGeometry;                                   // 0x0288(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_A45T[0x7];                                     // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint64_t                                           HiddenEditorViews;                                         // 0x0290(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      IsSelected : 1;                                            // 0x0298(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_89A5[0x3];                                     // 0x0299(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CollisionRadius;                                           // 0x029C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ShadeRadius;                                               // 0x02A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumSteps;                                                  // 0x02A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InitialSeedDensity;                                        // 0x02A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AverageSpreadDistance;                                     // 0x02AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpreadVariance;                                            // 0x02B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SeedsPerStep;                                              // 0x02B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DistributionSeed;                                          // 0x02B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxInitialSeedOffset;                                      // 0x02BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bCanGrowInShade;                                           // 0x02C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bSpawnsInShade;                                            // 0x02C1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CRQF[0x2];                                     // 0x02C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxInitialAge;                                             // 0x02C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxAge;                                                    // 0x02C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OverlapPriority;                                           // 0x02CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatInterval                              ProceduralScale;                                           // 0x02D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRuntimeFloatCurve                          ScaleCurve;                                                // 0x02D8(0x0080) (Edit)
	int                                                ChangeCount;                                               // 0x0358(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ReapplyDensity : 1;                                        // 0x035C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      ReapplyRadius : 1;                                         // 0x035C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      ReapplyAlignToNormal : 1;                                  // 0x035C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      ReapplyRandomYaw : 1;                                      // 0x035C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      ReapplyScaling : 1;                                        // 0x035C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      ReapplyScaleX : 1;                                         // 0x035C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      ReapplyScaleY : 1;                                         // 0x035C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      ReapplyScaleZ : 1;                                         // 0x035C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      ReapplyRandomPitchAngle : 1;                               // 0x035D(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      ReapplyGroundSlope : 1;                                    // 0x035D(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      ReapplyHeight : 1;                                         // 0x035D(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      ReapplyLandscapeLayers : 1;                                // 0x035D(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      ReapplyZOffset : 1;                                        // 0x035D(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      ReapplyCollisionWithWorld : 1;                             // 0x035D(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      ReapplyVertexColorMask : 1;                                // 0x035D(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      UnknownData_ZDPQ[0x2];                                     // 0x035E(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Foliage.FoliageType");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Foliage.FoliageType_InstancedStaticMesh
// 0x0020 (FullSize[0x0380] - InheritedSize[0x0360])
class UFoliageType_InstancedStaticMesh : public UFoliageType
{
public:
	class UStaticMesh*                                 Mesh;                                                      // 0x0360(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                         // 0x0368(0x0010) (Edit, ZeroConstructor, AdvancedDisplay)
	class UClass*                                      ComponentClass;                                            // 0x0378(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Foliage.FoliageType_InstancedStaticMesh");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Foliage.InstancedFoliageActor
// 0x0050 (FullSize[0x0420] - InheritedSize[0x03D0])
class AInstancedFoliageActor : public AActor
{
public:
	unsigned char                                      UnknownData_GQ1R[0x50];                                    // 0x03D0(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Foliage.InstancedFoliageActor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Foliage.InteractiveFoliageActor
// 0x0060 (FullSize[0x0440] - InheritedSize[0x03E0])
class AInteractiveFoliageActor : public AStaticMeshActor
{
public:
	class UCapsuleComponent*                           CapsuleComponent;                                          // 0x03E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TouchingActorEntryPosition;                                // 0x03E8(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	struct FVector                                     FoliageVelocity;                                           // 0x03F4(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	struct FVector                                     FoliageForce;                                              // 0x0400(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	struct FVector                                     FoliagePosition;                                           // 0x040C(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	float                                              FoliageDamageImpulseScale;                                 // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FoliageTouchImpulseScale;                                  // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FoliageStiffness;                                          // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FoliageStiffnessQuadratic;                                 // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FoliageDamping;                                            // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDamageImpulse;                                          // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxTouchImpulse;                                           // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxForce;                                                  // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Mass;                                                      // 0x0438(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GDEJ[0x4];                                     // 0x043C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Foliage.InteractiveFoliageActor");
		return ptr;
	}



	void CapsuleTouched(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);
	void AfterRead();
	void BeforeDelete();

};

// Class Foliage.InteractiveFoliageComponent
// 0x0010 (FullSize[0x0600] - InheritedSize[0x05F0])
class UInteractiveFoliageComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData_E1OF[0x10];                                    // 0x05F0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Foliage.InteractiveFoliageComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Foliage.ProceduralFoliageBlockingVolume
// 0x0008 (FullSize[0x0410] - InheritedSize[0x0408])
class AProceduralFoliageBlockingVolume : public AVolume
{
public:
	class AProceduralFoliageVolume*                    ProceduralFoliageVolume;                                   // 0x0408(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Foliage.ProceduralFoliageBlockingVolume");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Foliage.ProceduralFoliageComponent
// 0x0028 (FullSize[0x00F0] - InheritedSize[0x00C8])
class UProceduralFoliageComponent : public UActorComponent
{
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                            // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TileOverlap;                                               // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0SOQ[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AVolume*                                     SpawningVolume;                                            // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       ProceduralGuid;                                            // 0x00E0(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Foliage.ProceduralFoliageComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Foliage.ProceduralFoliageSpawner
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UProceduralFoliageSpawner : public UObject
{
public:
	int                                                RandomSeed;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TileSize;                                                  // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumUniqueTiles;                                            // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PTMS[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FFoliageTypeObject>                  FoliageTypes;                                              // 0x0038(0x0010) (Edit, ZeroConstructor)
	bool                                               bNeedsSimulation;                                          // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AU32[0x1F];                                    // 0x0049(0x001F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Foliage.ProceduralFoliageSpawner");
		return ptr;
	}



	void Simulate(int NumSteps);
	void AfterRead();
	void BeforeDelete();

};

// Class Foliage.ProceduralFoliageTile
// 0x0128 (FullSize[0x0150] - InheritedSize[0x0028])
class UProceduralFoliageTile : public UObject
{
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4JLF[0xA0];                                    // 0x0030(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FProceduralFoliageInstance>          InstancesArray;                                            // 0x00D0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_V6RX[0x70];                                    // 0x00E0(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Foliage.ProceduralFoliageTile");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Foliage.ProceduralFoliageVolume
// 0x0008 (FullSize[0x0410] - InheritedSize[0x0408])
class AProceduralFoliageVolume : public AVolume
{
public:
	class UProceduralFoliageComponent*                 ProceduralComponent;                                       // 0x0408(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Foliage.ProceduralFoliageVolume");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
