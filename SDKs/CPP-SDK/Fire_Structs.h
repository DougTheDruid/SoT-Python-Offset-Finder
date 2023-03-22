// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
struct HullCharringPersistenceModel
{
public:
	TArray<Float TimeSpentCharring>                              TimeSpentCharring;                                 // 0x0(0x10)
	int                                                          TotalCellsOnFire;                                  // 0x10(0x4)
};


// Size 0x8
struct PlayerNearBurningFireGridUpdatedEvent
{
public:
};


// Size 0x1
struct ShipOnFireEndEvent
{
public:
};


// Size 0x1
struct ShipOnFireBeginEvent
{
public:
};


// Size 0x1
struct OnShipIgnitedEvent
{
public:
};


// Size 0xc
struct FireExtinguishedEvent
{
public:
	Struct Vector                                                ExtinguishLocation;                                // 0x0(0xc)
};


// Size 0x1
struct OnFireChangedEvent
{
public:
	bool                                                         OnFire;                                            // 0x0(0x1)
};


// Size 0x50
struct FireGridCellSelectionParams
{
public:
	class                                                        ActorClassFilter;                                  // 0x0(0x8)
	float                                                        ChanceToAffectTheActor;                            // 0x8(0x4)
	Struct FireGridCellSelection                                 FireGridCellSelectionParams;                       // 0xc(0x44)
};


// Size 0x44
struct FireGridCellSelection
{
public:
	int                                                          NumberOfAffectedCells;                             // 0x0(0x4)
	int                                                          AdjacencyRadius;                                   // 0x4(0x4)
	float                                                        ChanceToAffectCellsAbove;                          // 0x8(0x4)
	float                                                        ChanceToAffectCellsBelow;                          // 0xc(0x4)
	bool                                                         TreatDiagonalsAsAdjacent;                          // 0x10(0x1)
	bool                                                         OverrideFirePropagationTimesForAffectedCells;      // 0x11(0x1)
	char                                                         pad0x2_VC9GR[0x2];                                 // 0x12(0x2)
	Struct FloatRange                                            SidewaysPropagationTimeOverride;                   // 0x14(0x10)
	Struct FloatRange                                            UpwardPropagationTimeOverride;                     // 0x24(0x10)
	Struct FloatRange                                            DownwardPropagationTimeOverride;                   // 0x34(0x10)
};


// Size 0x30
struct FireCellStateData
{
public:
};


// Size 0x78
struct CookerIgnitionParams
{
public:
	Struct FloatRange                                            InitialIgnitionTime;                               // 0x0(0x10)
	Struct FloatRange                                            SuccessIgnitionTime;                               // 0x10(0x10)
	Struct FloatRange                                            FailureIgnitionTime;                               // 0x20(0x10)
	float                                                        ChanceToIgnite;                                    // 0x30(0x4)
	Struct FireGridCellSelection                                 IgnitionSelection;                                 // 0x34(0x44)
};


// Size 0x94
struct FireCellStateTimingParams
{
public:
	Struct FloatRange                                            KindleTime;                                        // 0x0(0x10)
	Struct FloatRange                                            BurningTime;                                       // 0x10(0x10)
	Struct FloatRange                                            RainExposureTime;                                  // 0x20(0x10)
	float                                                        CharringTime;                                      // 0x30(0x4)
	Struct FloatRange                                            SmoulderingTime;                                   // 0x34(0x10)
	Struct FloatRange                                            SteamingTime;                                      // 0x44(0x10)
	Struct FloatRange                                            WetTime;                                           // 0x54(0x10)
	Struct FloatRange                                            SidewaysPropagationTime;                           // 0x64(0x10)
	Struct FloatRange                                            UpwardPropagationTime;                             // 0x74(0x10)
	Struct FloatRange                                            DownwardPropagationTime;                           // 0x84(0x10)
};


// Size 0x40
struct FireCellAudioParams
{
public:
	Class WwiseObjectPoolWrapper*                                EmitterPool;                                       // 0x0(0x8)
	Class WwiseObjectPoolWrapper*                                DousePool;                                         // 0x8(0x8)
	Class WwiseEvent*                                            FirePlay;                                          // 0x10(0x8)
	Class WwiseEvent*                                            FireStop;                                          // 0x18(0x8)
	Class WwiseEvent*                                            FireDouse;                                         // 0x20(0x8)
	struct FName                                                 FireSwitchGroup;                                   // 0x28(0x8)
	struct FName                                                 FireSwitchBurning;                                 // 0x30(0x8)
	struct FName                                                 FireSwitchKindled;                                 // 0x38(0x8)
};


// Size 0x38
struct FireCellStateParticleTemplate
{
public:
	Class ParticleSystem*                                        Template;                                          // 0x0(0x8)
	int                                                          TranslucencySortPriority;                          // 0x8(0x4)
	char                                                         pad0x4_O0U2U[0x4];                                 // 0xc(0x4)
	Class StaticMesh*                                            Mesh;                                              // 0x10(0x8)
	float                                                        MeshSpawnTime;                                     // 0x18(0x4)
	float                                                        MeshDespawnTime;                                   // 0x1c(0x4)
	Struct Vector                                                MeshScale;                                         // 0x20(0xc)
	byte                                                         State;                                             // 0x2c(0x1)
	bool                                                         OverrideMaxLODToSpawnFor;                          // 0x2d(0x1)
	char                                                         pad0x2_O1F9G[0x2];                                 // 0x2e(0x2)
	int                                                          MaxLODToSpawnFor;                                  // 0x30(0x4)
	bool                                                         SpawnWithLowFrequencySettings;                     // 0x34(0x1)
	bool                                                         VisibleInLowDetailMode;                            // 0x35(0x1)
};


// Size 0x100
struct FireCellDesc
{
public:
	Struct Vector                                                Position;                                          // 0x0(0xc)
	Struct Box                                                   BoundingBox;                                       // 0xc(0x1c)
	Struct IntVector                                             GridPosition;                                      // 0x28(0xc)
	bool                                                         CanBurn;                                           // 0x34(0x1)
	bool                                                         IsExposedToWeather;                                // 0x35(0x1)
	byte                                                         Deck;                                              // 0x36(0x1)
	char                                                         pad0x1_LWXTN[0x1];                                 // 0x37(0x1)
	int                                                          CellIndex;                                         // 0x38(0x4)
	int                                                          MasterCellFlatIndex;                               // 0x3c(0x4)
	bool                                                         ShouldSpawnDefaultParticleEffect;                  // 0x40(0x1)
	char                                                         pad0xf_M60TX[0xf];                                 // 0x41(0xf)
	Struct Transform                                             DefaultParticleEffectSpawnTransform;               // 0x50(0x30)
	Struct Plane                                                 DefaultParticleEffectPlane;                        // 0x80(0x10)
	TArray<struct CustomParticleEffectTemplates>                 CustomParticleEffectTemplates;                     // 0x90(0x10)
	Struct Transform                                             CustomParticleEffectSpawnTransform;                // 0xa0(0x30)
	TArray<Int NeighbourCellIndices>                             NeighbourCellIndices;                              // 0xd0(0x10)
	TArray<struct CustomAddedDiagonalNeighbourOffsets>           CustomAddedDiagonalNeighbourOffsets;               // 0xe0(0x10)
	TArray<struct CustomRemovedDefaultNeighbourOffsets>          CustomRemovedDefaultNeighbourOffsets;              // 0xf0(0x10)
};


// Size 0x40
struct FireGridVFXParams
{
public:
	TArray<struct DefaultParticleTemplates>                      DefaultParticleTemplates;                          // 0x0(0x10)
	Class ParticleSystem*                                        ExteriorLowDetailParticleSystem;                   // 0x10(0x8)
	Class ParticleSystem*                                        ExteriorSmokeParticleSystem;                       // 0x18(0x8)
	Class ParticleSystem*                                        InteriorSmokeParticleSystem;                       // 0x20(0x8)
	int                                                          InteriorSmokeTranslucencySortPriority;             // 0x28(0x4)
	int                                                          NumInterleaveSpawnSteps;                           // 0x2c(0x4)
	float                                                        TickIntervalForAllCells;                           // 0x30(0x4)
	float                                                        KillSphereRadiusForDousingFire;                    // 0x34(0x4)
	float                                                        ExteriorLowDetailTransitionWarmupTime;             // 0x38(0x4)
	int                                                          MaxDefaultVFXToSpawnPerFrame;                      // 0x3c(0x4)
};


// Size 0x30
struct FireGridRelativeSpawnDesc
{
public:
	Struct Vector                                                Location;                                          // 0x0(0xc)
	Struct IntVector                                             GridLocation;                                      // 0xc(0xc)
	int                                                          NumCellRowsToSpawnFor;                             // 0x18(0x4)
	int                                                          MinNumCellsToActivate;                             // 0x1c(0x4)
	TArray<Int CellIndicesToSpawnFor>                            CellIndicesToSpawnFor;                             // 0x20(0x10)
};


// Size 0x38
struct FireGridLowDetailRelativeSpawnDesc
{
public:
	struct FName                                                 EmitterName;                                       // 0x30(0x8)
};


// Size 0x10
struct FireParticleSpawnData
{
public:
	float                                                        MaximumLODDistance;                                // 0x0(0x4)
	float                                                        SpawnInterval;                                     // 0x4(0x4)
};


// Size 0x20
struct FireParticleSpawnList
{
public:
	TArray<struct ParticleSpawnLODs>                             ParticleSpawnLODs;                                 // 0x0(0x10)
};


// Size 0x140
struct FireDefaultVFXSpawnData
{
public:
	Struct FireCellStateParticleTemplate                         Template;                                          // 0x0(0x38)
	char                                                         pad0x8_ET919[0x8];                                 // 0x38(0x8)
	Struct FireCellDesc                                          CellDesc;                                          // 0x40(0x100)
};


// Size 0x58
struct FireGridVfxSpawnSettings
{
public:
	TArray<struct InteriorSmokeSpawnDescs>                       InteriorSmokeSpawnDescs;                           // 0x0(0x10)
	TArray<struct LowDetailVFXSpawnDescs>                        LowDetailVFXSpawnDescs;                            // 0x10(0x10)
	TArray<struct ParticleSpawnLODSettings>                      ParticleSpawnLODSettings;                          // 0x20(0x10)
	Struct FireParticleSpawnData                                 LowFrequencyParticleSpawnSettings;                 // 0x30(0x10)
	TArray<struct ExteriorSmokeVFXSpawnDescs>                    ExteriorSmokeVFXSpawnDescs;                        // 0x40(0x10)
	Class FireGridVFXParamsDataAsset*                            VFXParams;                                         // 0x50(0x8)
};


// Size 0x48
struct FireParticleSystem
{
public:
	Class ParticleSystemComponent*                               SpawnedParticleSystem;                             // 0x0(0x8)
	char                                                         pad0x8_RIR07[0x8];                                 // 0x8(0x8)
	Struct FireCellStateParticleTemplate                         ParticleTemplate;                                  // 0x10(0x38)
};


// Size 0x10
struct FireMesh
{
public:
	Class StaticMeshComponent*                                   Mesh;                                              // 0x0(0x8)
};


// Size 0x18
struct ShipFireDamageParams
{
public:
	class                                                        DamagerType;                                       // 0x0(0x8)
	TArray<struct ShipFireDamageParams>                          ShipFireDamageParams;                              // 0x8(0x10)
};


// Size 0x38
struct ActorFireDamageParams
{
public:
	Struct FloatRange                                            TimeInFireBeforeDamage;                            // 0x20(0x10)
	int                                                          LevelsOfDamage;                                    // 0x30(0x4)
};


// Size 0x14
struct ShipFireLightParams
{
public:
	float                                                        FadeOutTime;                                       // 0x0(0x4)
	struct FName                                                 FirePostprocessComponentName;                      // 0x4(0x8)
	float                                                        DistanceToFireToActivatePostProcessSq;             // 0xc(0x4)
	float                                                        PostProcessSpringAcceleration;                     // 0x10(0x4)
};


// Size 0x18
struct ReplicatedFireCellCharringData
{
public:
	float                                                        MaxCharringTime;                                   // 0x0(0x4)
	char                                                         pad0x4_NGF8T[0x4];                                 // 0x4(0x4)
	TArray<Float TimeSpentCharring>                              TimeSpentCharring;                                 // 0x8(0x10)
};


// Size 0x1
struct ReplicatedFireCellData
{
public:
	byte                                                         State;                                             // 0x0(0x1)
};


// Size 0xc8
struct FireGridCharringManager
{
public:
	TArray<class MaterialInterface*>                             OwnerMaterials;                                    // 0x0(0x10)
	Struct Vector                                                AdditionalGridOffsetForCharring;                   // 0x10(0xc)
	char                                                         pad0x4_91Y2Y[0x4];                                 // 0x1c(0x4)
	Class Texture2DDynamic*                                      FireGridTexture;                                   // 0x20(0x8)
};


// Size 0x58
struct ShipFireLightRelativeSpawnDesc
{
public:
	Struct Vector                                                LightPositionOffset;                               // 0x30(0xc)
	char                                                         pad0x4_CVFGM[0x4];                                 // 0x3c(0x4)
	TArray<Byte DormantShipRegions>                              DormantShipRegions;                                // 0x40(0x10)
	float                                                        DormantFadeDistance;                               // 0x50(0x4)
	float                                                        AreaLightScaleWhenNotOnShip;                       // 0x54(0x4)
};


// Size 0x90
struct ShipFireLight
{
public:
	Struct ShipFireLightRelativeSpawnDesc                        Desc;                                              // 0x0(0x58)
	Class PointLightComponent*                                   PointLight;                                        // 0x58(0x8)
	Class StaticMeshComponent*                                   AreaLight;                                         // 0x60(0x8)
	Class MaterialInstanceDynamic*                               AreaLightMaterial;                                 // 0x68(0x8)
};


// Size 0x150
struct ShipFireLightManager
{
public:
	TArray<struct LightSpawnDescs>                               LightSpawnDescs;                                   // 0x0(0x10)
	Struct GenericLightTemplate                                  LightTemplate;                                     // 0x10(0xd0)
	TArray<struct Lights>                                        Lights;                                            // 0xe0(0x10)
	Class FirePropagator*                                        Propagator;                                        // 0xf0(0x8)
	Class StaticMesh*                                            AreaLightMesh;                                     // 0xf8(0x8)
	float                                                        AreaLightZScale;                                   // 0x100(0x4)
	float                                                        MinLightRadius;                                    // 0x104(0x4)
	float                                                        MaxLightRadius;                                    // 0x108(0x4)
	float                                                        MinFlickerScale;                                   // 0x10c(0x4)
	float                                                        LightMovementSpeedCmPerSecond;                     // 0x110(0x4)
	char                                                         pad0x4_ZYRZW[0x4];                                 // 0x114(0x4)
	Class ShipFireLightParamsDataAsset*                          LightParams;                                       // 0x118(0x8)
	Class PostProcessComponent*                                  ShipPostProcessComponent;                          // 0x120(0x8)
};


// Size 0x48
struct PlayerFireGridTickParams
{
public:
	Class Actor*                                                 FireGridActorPlayerIsInsideOf;                     // 0x28(0x8)
	class                                                        PlayerShipSize;                                    // 0x30(0x8)
};


}