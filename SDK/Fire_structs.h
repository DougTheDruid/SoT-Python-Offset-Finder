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
// Enums
//---------------------------------------------------------------------------

// Enum Fire.EFireCellState
enum class Fire_EFireCellState : uint8_t
{
	EFireCellState__Deactivated    = 0,
	EFireCellState__Flooded        = 1,
	EFireCellState__Wet            = 2,
	EFireCellState__Kindled        = 3,
	EFireCellState__Smouldering    = 4,
	EFireCellState__Steaming       = 5,
	EFireCellState__Burning        = 6,
	EFireCellState__MAX            = 7,
	EFireCellState__EFireCellState_MAX = 8,

};

// Enum Fire.ELastIgnitionState
enum class Fire_ELastIgnitionState : uint8_t
{
	ELastIgnitionState__None       = 0,
	ELastIgnitionState__Success    = 1,
	ELastIgnitionState__Failure    = 2,
	ELastIgnitionState__ELastIgnitionState_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Fire.FireGridCellSelection
// 0x0044
struct FFireGridCellSelection
{
	int                                                NumberOfAffectedCells;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AdjacencyRadius;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChanceToAffectCellsAbove;                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChanceToAffectCellsBelow;                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TreatDiagonalsAsAdjacent;                                  // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OverrideFirePropagationTimesForAffectedCells;              // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QC96[0x2];                                     // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFloatRange                                 SidewaysPropagationTimeOverride;                           // 0x0014(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFloatRange                                 UpwardPropagationTimeOverride;                             // 0x0024(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFloatRange                                 DownwardPropagationTimeOverride;                           // 0x0034(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Fire.FireGridCellSelectionParams
// 0x0050
struct FFireGridCellSelectionParams
{
	class UClass*                                      ActorClassFilter;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              ChanceToAffectTheActor;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFireGridCellSelection                      FireGridCellSelectionParams;                               // 0x000C(0x0044) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Fire.CookerIgnitionParams
// 0x0078
struct FCookerIgnitionParams
{
	struct FFloatRange                                 InitialIgnitionTime;                                       // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFloatRange                                 SuccessIgnitionTime;                                       // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFloatRange                                 FailureIgnitionTime;                                       // 0x0020(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ChanceToIgnite;                                            // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFireGridCellSelection                      IgnitionSelection;                                         // 0x0034(0x0044) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Fire.FireCellStateTimingParams
// 0x0094
struct FFireCellStateTimingParams
{
	struct FFloatRange                                 KindleTime;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFloatRange                                 BurningTime;                                               // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFloatRange                                 RainExposureTime;                                          // 0x0020(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              CharringTime;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatRange                                 SmoulderingTime;                                           // 0x0034(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFloatRange                                 SteamingTime;                                              // 0x0044(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFloatRange                                 WetTime;                                                   // 0x0054(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFloatRange                                 SidewaysPropagationTime;                                   // 0x0064(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFloatRange                                 UpwardPropagationTime;                                     // 0x0074(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFloatRange                                 DownwardPropagationTime;                                   // 0x0084(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Fire.FireCellAudioParams
// 0x0040
struct FFireCellAudioParams
{
	class UWwiseObjectPoolWrapper*                     EmitterPool;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseObjectPoolWrapper*                     DousePool;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 FirePlay;                                                  // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 FireStop;                                                  // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 FireDouse;                                                 // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FireSwitchGroup;                                           // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FireSwitchBurning;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FireSwitchKindled;                                         // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Fire.FireCellStateParticleTemplate
// 0x0038
struct FFireCellStateParticleTemplate
{
	class UParticleSystem*                             Template;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TranslucencySortPriority;                                  // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JV04[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 Mesh;                                                      // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MeshSpawnTime;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MeshDespawnTime;                                           // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     MeshScale;                                                 // 0x0020(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<Fire_EFireCellState>                   State;                                                     // 0x002C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OverrideMaxLODToSpawnFor;                                  // 0x002D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8VEK[0x2];                                     // 0x002E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxLODToSpawnFor;                                          // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SpawnWithLowFrequencySettings;                             // 0x0034(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               VisibleInLowDetailMode;                                    // 0x0035(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Q2AW[0x2];                                     // 0x0036(0x0002) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Fire.FireGridVFXParams
// 0x0040
struct FFireGridVFXParams
{
	TArray<struct FFireCellStateParticleTemplate>      DefaultParticleTemplates;                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	class UParticleSystem*                             ExteriorLowDetailParticleSystem;                           // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             ExteriorSmokeParticleSystem;                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             InteriorSmokeParticleSystem;                               // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InteriorSmokeTranslucencySortPriority;                     // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumInterleaveSpawnSteps;                                   // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TickIntervalForAllCells;                                   // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              KillSphereRadiusForDousingFire;                            // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ExteriorLowDetailTransitionWarmupTime;                     // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxDefaultVFXToSpawnPerFrame;                              // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Fire.FireMesh
// 0x0010
struct FFireMesh
{
	class UStaticMeshComponent*                        Mesh;                                                      // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WY0B[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Fire.FireGridRelativeSpawnDesc
// 0x0030
struct FFireGridRelativeSpawnDesc
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FIntVector                                  GridLocation;                                              // 0x000C(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	int                                                NumCellRowsToSpawnFor;                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MinNumCellsToActivate;                                     // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int>                                        CellIndicesToSpawnFor;                                     // 0x0020(0x0010) (Edit, ZeroConstructor, EditConst)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Fire.FireGridLowDetailRelativeSpawnDesc
// 0x0008 (0x0038 - 0x0030)
struct FFireGridLowDetailRelativeSpawnDesc : public FFireGridRelativeSpawnDesc
{
	struct FName                                       EmitterName;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Fire.FireParticleSpawnData
// 0x0010
struct FFireParticleSpawnData
{
	float                                              MaximumLODDistance;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpawnInterval;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1ZNI[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Fire.FireParticleSpawnList
// 0x0020
struct FFireParticleSpawnList
{
	TArray<struct FFireParticleSpawnData>              ParticleSpawnLODs;                                         // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_WADZ[0x10];                                    // 0x0010(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Fire.FireCellDesc
// 0x0100
struct FFireCellDesc
{
	struct FVector                                     Position;                                                  // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	struct FBox                                        BoundingBox;                                               // 0x000C(0x001C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	struct FIntVector                                  GridPosition;                                              // 0x0028(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	bool                                               CanBurn;                                                   // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsExposedToWeather;                                        // 0x0035(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Athena_EShipDeck>                      Deck;                                                      // 0x0036(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TEJ9[0x1];                                     // 0x0037(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CellIndex;                                                 // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MasterCellFlatIndex;                                       // 0x003C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldSpawnDefaultParticleEffect;                          // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IK7H[0xF];                                     // 0x0041(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  DefaultParticleEffectSpawnTransform;                       // 0x0050(0x0030) (Edit, IsPlainOldData, NoDestructor)
	struct FPlane                                      DefaultParticleEffectPlane;                                // 0x0080(0x0010) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	TArray<struct FFireCellStateParticleTemplate>      CustomParticleEffectTemplates;                             // 0x0090(0x0010) (Edit, ZeroConstructor)
	struct FTransform                                  CustomParticleEffectSpawnTransform;                        // 0x00A0(0x0030) (Edit, IsPlainOldData, NoDestructor)
	TArray<int>                                        NeighbourCellIndices;                                      // 0x00D0(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FIntVector>                          CustomAddedDiagonalNeighbourOffsets;                       // 0x00E0(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FIntVector>                          CustomRemovedDefaultNeighbourOffsets;                      // 0x00F0(0x0010) (Edit, ZeroConstructor, EditConst)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Fire.FireDefaultVFXSpawnData
// 0x0140
struct FFireDefaultVFXSpawnData
{
	struct FFireCellStateParticleTemplate              Template;                                                  // 0x0000(0x0038)
	unsigned char                                      UnknownData_FDOF[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFireCellDesc                               CellDesc;                                                  // 0x0040(0x0100)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Fire.FireParticleSystem
// 0x0048
struct FFireParticleSystem
{
	class UParticleSystemComponent*                    SpawnedParticleSystem;                                     // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QXIX[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFireCellStateParticleTemplate              ParticleTemplate;                                          // 0x0010(0x0038)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Fire.ActorFireDamageParams
// 0x0038
struct FActorFireDamageParams
{
	TAssetPtr<class UClass>                            ActorClass;                                                // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH (Edit, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WV7Z[0x4];                                     // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FFloatRange                                 TimeInFireBeforeDamage;                                    // 0x0020(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                LevelsOfDamage;                                            // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WOQK[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Fire.ShipFireDamageParams
// 0x0018
struct FShipFireDamageParams
{
	class UClass*                                      DamagerType;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FActorFireDamageParams>              ShipFireDamageParams;                                      // 0x0008(0x0010) (Edit, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Fire.ShipFireLightParams
// 0x0014
struct FShipFireLightParams
{
	float                                              FadeOutTime;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FirePostprocessComponentName;                              // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceToFireToActivatePostProcessSq;                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PostProcessSpringAcceleration;                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Fire.ReplicatedFireCellData
// 0x0001
struct FReplicatedFireCellData
{
	TEnumAsByte<Fire_EFireCellState>                   State;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Fire.ReplicatedFireCellCharringData
// 0x0018
struct FReplicatedFireCellCharringData
{
	float                                              MaxCharringTime;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7DGA[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      TimeSpentCharring;                                         // 0x0008(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Fire.FireGridCharringManager
// 0x00C8
struct FFireGridCharringManager
{
	TArray<class UMaterialInterface*>                  OwnerMaterials;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     AdditionalGridOffsetForCharring;                           // 0x0010(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_L7OL[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2DDynamic*                           FireGridTexture;                                           // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HJGV[0xA0];                                    // 0x0028(0x00A0) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Fire.ShipFireLightRelativeSpawnDesc
// 0x0028 (0x0058 - 0x0030)
struct FShipFireLightRelativeSpawnDesc : public FFireGridRelativeSpawnDesc
{
	struct FVector                                     LightPositionOffset;                                       // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7EM8[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TEnumAsByte<Athena_EShipRegion>>            DormantShipRegions;                                        // 0x0040(0x0010) (Edit, ZeroConstructor)
	float                                              DormantFadeDistance;                                       // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AreaLightScaleWhenNotOnShip;                               // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Fire.ShipFireLight
// 0x0090
struct FShipFireLight
{
	struct FShipFireLightRelativeSpawnDesc             Desc;                                                      // 0x0000(0x0058)
	class UPointLightComponent*                        PointLight;                                                // 0x0058(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        AreaLight;                                                 // 0x0060(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    AreaLightMaterial;                                         // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3TYS[0x20];                                    // 0x0070(0x0020) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Fire.ShipFireLightManager
// 0x0150
struct FShipFireLightManager
{
	TArray<struct FShipFireLightRelativeSpawnDesc>     LightSpawnDescs;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FGenericLightTemplate                       LightTemplate;                                             // 0x0010(0x00D0) (Edit, DisableEditOnInstance)
	TArray<struct FShipFireLight>                      Lights;                                                    // 0x00E0(0x0010) (ZeroConstructor, Transient, ContainsInstancedReference)
	class UFirePropagator*                             Propagator;                                                // 0x00F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 AreaLightMesh;                                             // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AreaLightZScale;                                           // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinLightRadius;                                            // 0x0104(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxLightRadius;                                            // 0x0108(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinFlickerScale;                                           // 0x010C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LightMovementSpeedCmPerSecond;                             // 0x0110(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JJV4[0x4];                                     // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UShipFireLightParamsDataAsset*               LightParams;                                               // 0x0118(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                       ShipPostProcessComponent;                                  // 0x0120(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_68T5[0x28];                                    // 0x0128(0x0028) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Fire.FireGridVfxSpawnSettings
// 0x0058
struct FFireGridVfxSpawnSettings
{
	TArray<struct FFireGridRelativeSpawnDesc>          InteriorSmokeSpawnDescs;                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FFireGridLowDetailRelativeSpawnDesc> LowDetailVFXSpawnDescs;                                    // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FFireParticleSpawnData>              ParticleSpawnLODSettings;                                  // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FFireParticleSpawnData                      LowFrequencyParticleSpawnSettings;                         // 0x0030(0x0010) (Edit, DisableEditOnInstance)
	TArray<struct FFireGridLowDetailRelativeSpawnDesc> ExteriorSmokeVFXSpawnDescs;                                // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UFireGridVFXParamsDataAsset*                 VFXParams;                                                 // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Fire.PlayerNearBurningFireGridUpdatedEvent
// 0x0008
struct FPlayerNearBurningFireGridUpdatedEvent
{
	unsigned char                                      UnknownData_183A[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Fire.ShipOnFireEndEvent
// 0x0001
struct FShipOnFireEndEvent
{
	unsigned char                                      UnknownData_4ZD3[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Fire.ShipOnFireBeginEvent
// 0x0001
struct FShipOnFireBeginEvent
{
	unsigned char                                      UnknownData_FMF3[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Fire.FireExtinguishedEvent
// 0x000C
struct FFireExtinguishedEvent
{
	struct FVector                                     ExtinguishLocation;                                        // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Fire.OnFireChangedEvent
// 0x0001
struct FOnFireChangedEvent
{
	bool                                               OnFire;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Fire.FireCellStateData
// 0x0030
struct FFireCellStateData
{
	unsigned char                                      UnknownData_7PNH[0x30];                                    // 0x0000(0x0030) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Fire.PlayerFireGridTickParams
// 0x0048
struct FPlayerFireGridTickParams
{
	unsigned char                                      UnknownData_8RDZ[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      FireGridActorPlayerIsInsideOf;                             // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      PlayerShipSize;                                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S63I[0x10];                                    // 0x0038(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
