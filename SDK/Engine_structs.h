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
// Enums
//---------------------------------------------------------------------------

// Enum Engine.EAttachLocation
enum class Engine_EAttachLocation : uint8_t
{
	EAttachLocation__KeepRelativeOffset = 0,
	EAttachLocation__KeepWorldPosition = 1,
	EAttachLocation__SnapToTarget  = 2,
	EAttachLocation__SnapToTargetIncludingScale = 3,
	EAttachLocation__EAttachLocation_MAX = 4,

};

// Enum Engine.EEndPlayReason
enum class Engine_EEndPlayReason : uint8_t
{
	EEndPlayReason__Destroyed      = 0,
	EEndPlayReason__LevelTransition = 1,
	EEndPlayReason__EndPlayInEditor = 2,
	EEndPlayReason__RemovedFromWorld = 3,
	EEndPlayReason__Quit           = 4,
	EEndPlayReason__EEndPlayReason_MAX = 5,

};

// Enum Engine.ETickingGroup
enum class Engine_ETickingGroup : uint8_t
{
	TG_PrePhysics                  = 0,
	TG_StartPhysics                = 1,
	TG_DuringPhysics               = 2,
	TG_EndPhysics                  = 3,
	TG_PostPhysics                 = 4,
	TG_PostUpdateWork              = 5,
	TG_NewlySpawned                = 6,
	TG_MAX                         = 7,

};

// Enum Engine.ESpawnActorCollisionHandlingMethod
enum class Engine_ESpawnActorCollisionHandlingMethod : uint8_t
{
	ESpawnActorCollisionHandlingMethod__Undefined = 0,
	ESpawnActorCollisionHandlingMethod__AlwaysSpawn = 1,
	ESpawnActorCollisionHandlingMethod__AdjustIfPossibleButAlwaysSpawn = 2,
	ESpawnActorCollisionHandlingMethod__AdjustIfPossibleButDontSpawnIfColliding = 3,
	ESpawnActorCollisionHandlingMethod__DontSpawnIfColliding = 4,
	ESpawnActorCollisionHandlingMethod__ESpawnActorCollisionHandlingMethod_MAX = 5,

};

// Enum Engine.EAutoReceiveInput
enum class Engine_EAutoReceiveInput : uint8_t
{
	EAutoReceiveInput__Disabled    = 0,
	EAutoReceiveInput__Player0     = 1,
	EAutoReceiveInput__Player1     = 2,
	EAutoReceiveInput__Player2     = 3,
	EAutoReceiveInput__Player3     = 4,
	EAutoReceiveInput__Player4     = 5,
	EAutoReceiveInput__Player5     = 6,
	EAutoReceiveInput__Player6     = 7,
	EAutoReceiveInput__Player7     = 8,
	EAutoReceiveInput__EAutoReceiveInput_MAX = 9,

};

// Enum Engine.ENetRole
enum class Engine_ENetRole : uint8_t
{
	ROLE_None                      = 0,
	ROLE_SimulatedProxy            = 1,
	ROLE_AutonomousProxy           = 2,
	ROLE_Authority                 = 3,
	ROLE_MAX                       = 4,

};

// Enum Engine.ERotatorQuantization
enum class Engine_ERotatorQuantization : uint8_t
{
	ERotatorQuantization__ByteComponents = 0,
	ERotatorQuantization__ShortComponents = 1,
	ERotatorQuantization__ERotatorQuantization_MAX = 2,

};

// Enum Engine.EVectorQuantization
enum class Engine_EVectorQuantization : uint8_t
{
	EVectorQuantization__RoundWholeNumber = 0,
	EVectorQuantization__RoundOneDecimal = 1,
	EVectorQuantization__RoundTwoDecimals = 2,
	EVectorQuantization__EVectorQuantization_MAX = 3,

};

// Enum Engine.EActorSpawnRestrictions
enum class Engine_EActorSpawnRestrictions : uint8_t
{
	EActorSpawnRestrictions__ServerOnly = 0,
	EActorSpawnRestrictions__ClientOnly = 1,
	EActorSpawnRestrictions__ServerAndClient = 2,
	EActorSpawnRestrictions__SpawnRestrictionMax = 3,
	EActorSpawnRestrictions__EActorSpawnRestrictions_MAX = 4,

};

// Enum Engine.ENavPathEvent
enum class Engine_ENavPathEvent : uint8_t
{
	ENavPathEvent__Cleared         = 0,
	ENavPathEvent__NewPath         = 1,
	ENavPathEvent__UpdatedDueToGoalMoved = 2,
	ENavPathEvent__UpdatedDueToNavigationChanged = 3,
	ENavPathEvent__Invalidated     = 4,
	ENavPathEvent__RePathFailed    = 5,
	ENavPathEvent__Custom          = 6,
	ENavPathEvent__ENavPathEvent_MAX = 7,

};

// Enum Engine.EComponentNetDormancy
enum class Engine_EComponentNetDormancy : uint8_t
{
	EComponentNetDormancy__NotSupported = 0,
	EComponentNetDormancy__Awake   = 1,
	EComponentNetDormancy__FollowOwner = 2,
	EComponentNetDormancy__Dormant = 3,
	EComponentNetDormancy__Count   = 4,
	EComponentNetDormancy__EComponentNetDormancy_MAX = 5,

};

// Enum Engine.EComponentCreationMethod
enum class Engine_EComponentCreationMethod : uint8_t
{
	EComponentCreationMethod__Native = 0,
	EComponentCreationMethod__SimpleConstructionScript = 1,
	EComponentCreationMethod__UserConstructionScript = 2,
	EComponentCreationMethod__Instance = 3,
	EComponentCreationMethod__EComponentCreationMethod_MAX = 4,

};

// Enum Engine.EPlaneConstraintAxisSetting
enum class Engine_EPlaneConstraintAxisSetting : uint8_t
{
	EPlaneConstraintAxisSetting__Custom = 0,
	EPlaneConstraintAxisSetting__X = 1,
	EPlaneConstraintAxisSetting__Y = 2,
	EPlaneConstraintAxisSetting__Z = 3,
	EPlaneConstraintAxisSetting__UseGlobalPhysicsSetting = 4,
	EPlaneConstraintAxisSetting__EPlaneConstraintAxisSetting_MAX = 5,

};

// Enum Engine.EInterpToBehaviourType
enum class Engine_EInterpToBehaviourType : uint8_t
{
	EInterpToBehaviourType__OneShot = 0,
	EInterpToBehaviourType__OneShot_Reverse = 1,
	EInterpToBehaviourType__Loop_Reset = 2,
	EInterpToBehaviourType__PingPong = 3,
	EInterpToBehaviourType__EInterpToBehaviourType_MAX = 4,

};

// Enum Engine.EPlatformInterfaceDataType
enum class Engine_EPlatformInterfaceDataType : uint8_t
{
	PIDT_None                      = 0,
	PIDT_Int                       = 1,
	PIDT_Float                     = 2,
	PIDT_String                    = 3,
	PIDT_Object                    = 4,
	PIDT_Custom                    = 5,
	PIDT_MAX                       = 6,

};

// Enum Engine.EMovementMode
enum class Engine_EMovementMode : uint8_t
{
	MOVE_None                      = 0,
	MOVE_Walking                   = 1,
	MOVE_NavWalking                = 2,
	MOVE_Falling                   = 3,
	MOVE_Swimming                  = 4,
	MOVE_Flying                    = 5,
	MOVE_Custom                    = 6,
	MOVE_MAX                       = 7,

};

// Enum Engine.EOverlapFilterOption
enum class Engine_EOverlapFilterOption : uint8_t
{
	OverlapFilter_All              = 0,
	OverlapFilter_DynamicOnly      = 1,
	OverlapFilter_StaticOnly       = 2,
	OverlapFilter_MAX              = 3,

};

// Enum Engine.EObjectTypeQuery
enum class Engine_EObjectTypeQuery : uint8_t
{
	ObjectTypeQuery1               = 0,
	ObjectTypeQuery2               = 1,
	ObjectTypeQuery3               = 2,
	ObjectTypeQuery4               = 3,
	ObjectTypeQuery5               = 4,
	ObjectTypeQuery6               = 5,
	ObjectTypeQuery7               = 6,
	ObjectTypeQuery8               = 7,
	ObjectTypeQuery9               = 8,
	ObjectTypeQuery10              = 9,
	ObjectTypeQuery11              = 10,
	ObjectTypeQuery12              = 11,
	ObjectTypeQuery13              = 12,
	ObjectTypeQuery14              = 13,
	ObjectTypeQuery15              = 14,
	ObjectTypeQuery16              = 15,
	ObjectTypeQuery17              = 16,
	ObjectTypeQuery18              = 17,
	ObjectTypeQuery19              = 18,
	ObjectTypeQuery20              = 19,
	ObjectTypeQuery21              = 20,
	ObjectTypeQuery22              = 21,
	ObjectTypeQuery23              = 22,
	ObjectTypeQuery24              = 23,
	ObjectTypeQuery25              = 24,
	ObjectTypeQuery26              = 25,
	ObjectTypeQuery27              = 26,
	ObjectTypeQuery28              = 27,
	ObjectTypeQuery29              = 28,
	ObjectTypeQuery30              = 29,
	ObjectTypeQuery31              = 30,
	ObjectTypeQuery32              = 31,
	ObjectTypeQuery_MAX            = 32,
	EObjectTypeQuery_MAX           = 33,

};

// Enum Engine.EDrawDebugTrace
enum class Engine_EDrawDebugTrace : uint8_t
{
	EDrawDebugTrace__None          = 0,
	EDrawDebugTrace__ForOneFrame   = 1,
	EDrawDebugTrace__ForDuration   = 2,
	EDrawDebugTrace__Persistent    = 3,
	EDrawDebugTrace__EDrawDebugTrace_MAX = 4,

};

// Enum Engine.ETraceTypeQuery
enum class Engine_ETraceTypeQuery : uint8_t
{
	TraceTypeQuery1                = 0,
	TraceTypeQuery2                = 1,
	TraceTypeQuery3                = 2,
	TraceTypeQuery4                = 3,
	TraceTypeQuery5                = 4,
	TraceTypeQuery6                = 5,
	TraceTypeQuery7                = 6,
	TraceTypeQuery8                = 7,
	TraceTypeQuery9                = 8,
	TraceTypeQuery10               = 9,
	TraceTypeQuery11               = 10,
	TraceTypeQuery12               = 11,
	TraceTypeQuery13               = 12,
	TraceTypeQuery14               = 13,
	TraceTypeQuery15               = 14,
	TraceTypeQuery16               = 15,
	TraceTypeQuery17               = 16,
	TraceTypeQuery18               = 17,
	TraceTypeQuery19               = 18,
	TraceTypeQuery20               = 19,
	TraceTypeQuery21               = 20,
	TraceTypeQuery22               = 21,
	TraceTypeQuery23               = 22,
	TraceTypeQuery24               = 23,
	TraceTypeQuery25               = 24,
	TraceTypeQuery26               = 25,
	TraceTypeQuery27               = 26,
	TraceTypeQuery28               = 27,
	TraceTypeQuery29               = 28,
	TraceTypeQuery30               = 29,
	TraceTypeQuery31               = 30,
	TraceTypeQuery32               = 31,
	TraceTypeQuery_MAX             = 32,
	ETraceTypeQuery_MAX            = 33,

};

// Enum Engine.ECollisionChannel
enum class Engine_ECollisionChannel : uint8_t
{
	ECC_WorldStatic                = 0,
	ECC_WorldDynamic               = 1,
	ECC_Pawn                       = 2,
	ECC_Visibility                 = 3,
	ECC_Camera                     = 4,
	ECC_PhysicsBody                = 5,
	ECC_Vehicle                    = 6,
	ECC_Destructible               = 7,
	ECC_EngineTraceChannel1        = 8,
	ECC_EngineTraceChannel2        = 9,
	ECC_EngineTraceChannel3        = 10,
	ECC_EngineTraceChannel4        = 11,
	ECC_EngineTraceChannel5        = 12,
	ECC_EngineTraceChannel6        = 13,
	ECC_GameTraceChannel1          = 14,
	ECC_GameTraceChannel2          = 15,
	ECC_GameTraceChannel3          = 16,
	ECC_GameTraceChannel4          = 17,
	ECC_GameTraceChannel5          = 18,
	ECC_GameTraceChannel6          = 19,
	ECC_GameTraceChannel7          = 20,
	ECC_GameTraceChannel8          = 21,
	ECC_GameTraceChannel9          = 22,
	ECC_GameTraceChannel10         = 23,
	ECC_GameTraceChannel11         = 24,
	ECC_GameTraceChannel12         = 25,
	ECC_GameTraceChannel13         = 26,
	ECC_GameTraceChannel14         = 27,
	ECC_GameTraceChannel15         = 28,
	ECC_GameTraceChannel16         = 29,
	ECC_GameTraceChannel17         = 30,
	ECC_GameTraceChannel18         = 31,
	ECC_OverlapAll_Deprecated      = 32,
	ECC_MAX                        = 33,

};

// Enum Engine.EMoveComponentAction
enum class Engine_EMoveComponentAction : uint8_t
{
	EMoveComponentAction__Move     = 0,
	EMoveComponentAction__Stop     = 1,
	EMoveComponentAction__Return   = 2,
	EMoveComponentAction__EMoveComponentAction_MAX = 3,

};

// Enum Engine.EQuitPreference
enum class Engine_EQuitPreference : uint8_t
{
	EQuitPreference__Quit          = 0,
	EQuitPreference__Background    = 1,
	EQuitPreference__EQuitPreference_MAX = 2,

};

// Enum Engine.ENodeAdvancedPins
enum class Engine_ENodeAdvancedPins : uint8_t
{
	ENodeAdvancedPins__NoPins      = 0,
	ENodeAdvancedPins__Shown       = 1,
	ENodeAdvancedPins__Hidden      = 2,
	ENodeAdvancedPins__ENodeAdvancedPins_MAX = 3,

};

// Enum Engine.ENodeTitleType
enum class Engine_ENodeTitleType : uint8_t
{
	ENodeTitleType__FullTitle      = 0,
	ENodeTitleType__ListView       = 1,
	ENodeTitleType__EditableTitle  = 2,
	ENodeTitleType__MenuTitle      = 3,
	ENodeTitleType__MAX_TitleTypes = 4,
	ENodeTitleType__ENodeTitleType_MAX = 5,

};

// Enum Engine.EEdGraphPinDirection
enum class Engine_EEdGraphPinDirection : uint8_t
{
	EGPD_Input                     = 0,
	EGPD_Output                    = 1,
	EGPD_MAX                       = 2,

};

// Enum Engine.EBlueprintPinStyleType
enum class Engine_EBlueprintPinStyleType : uint8_t
{
	BPST_Original                  = 0,
	BPST_VariantA                  = 1,
	BPST_MAX                       = 2,

};

// Enum Engine.EViewModeIndex
enum class Engine_EViewModeIndex : uint8_t
{
	VMI_BrushWireframe             = 0,
	VMI_Wireframe                  = 1,
	VMI_Unlit                      = 2,
	VMI_Lit                        = 3,
	VMI_Lit_DetailLighting         = 4,
	VMI_LightingOnly               = 5,
	VMI_LightComplexity            = 6,
	VMI_ShaderComplexity           = 7,
	VMI_LightmapDensity            = 8,
	VMI_LitLightmapDensity         = 9,
	VMI_ReflectionOverride         = 10,
	VMI_VisualizeBuffer            = 11,
	VMI_StationaryLightOverlap     = 12,
	VMI_CollisionPawn              = 13,
	VMI_CollisionVisibility        = 14,
	VMI_CollisionWireframe         = 15,
	VMI_LODColoration              = 16,
	VMI_TriangleDensityScreenSpace = 17,
	VMI_TriangleDensityWorldSpace  = 18,
	VMI_Max                        = 19,
	VMI_Unknown                    = 20,

};

// Enum Engine.EDemoPlayFailure
enum class Engine_EDemoPlayFailure : uint8_t
{
	EDemoPlayFailure__Generic      = 0,
	EDemoPlayFailure__DemoNotFound = 1,
	EDemoPlayFailure__Corrupt      = 2,
	EDemoPlayFailure__InvalidVersion = 3,
	EDemoPlayFailure__EDemoPlayFailure_MAX = 4,

};

// Enum Engine.ETravelType
enum class Engine_ETravelType : uint8_t
{
	TRAVEL_Absolute                = 0,
	TRAVEL_Partial                 = 1,
	TRAVEL_Relative                = 2,
	TRAVEL_MAX                     = 3,

};

// Enum Engine.ETravelFailure
enum class Engine_ETravelFailure : uint8_t
{
	ETravelFailure__NoLevel        = 0,
	ETravelFailure__LoadMapFailure = 1,
	ETravelFailure__InvalidURL     = 2,
	ETravelFailure__PackageMissing = 3,
	ETravelFailure__PackageVersion = 4,
	ETravelFailure__NoDownload     = 5,
	ETravelFailure__TravelFailure  = 6,
	ETravelFailure__CheatCommands  = 7,
	ETravelFailure__PendingNetGameCreateFailure = 8,
	ETravelFailure__CloudSaveFailure = 9,
	ETravelFailure__ServerTravelFailure = 10,
	ETravelFailure__ClientTravelFailure = 11,
	ETravelFailure__ETravelFailure_MAX = 12,

};

// Enum Engine.ENetworkFailure
enum class Engine_ENetworkFailure : uint8_t
{
	ENetworkFailure__NetDriverAlreadyExists = 0,
	ENetworkFailure__NetDriverCreateFailure = 1,
	ENetworkFailure__NetDriverListenFailure = 2,
	ENetworkFailure__ConnectionLost = 3,
	ENetworkFailure__ConnectionTimeout = 4,
	ENetworkFailure__FailureReceived = 5,
	ENetworkFailure__OutdatedClient = 6,
	ENetworkFailure__OutdatedServer = 7,
	ENetworkFailure__PendingConnectionFailure = 8,
	ENetworkFailure__InvalidFeatureConfig = 9,
	ENetworkFailure__RPCSpamDetected = 10,
	ENetworkFailure__FailedPreLogin = 11,
	ENetworkFailure__InitialConnectionTimeout = 12,
	ENetworkFailure__PendingConnectionTimeout = 13,
	ENetworkFailure__PlayerDeemedInactive = 14,
	ENetworkFailure__CrewMigrationRequested = 15,
	ENetworkFailure__ServerAtMatchmakingCapacity = 16,
	ENetworkFailure__ServerShuttingDownWhilstMigrationOngoing = 17,
	ENetworkFailure__ServerShuttingDown = 18,
	ENetworkFailure__CrewSessionLost = 19,
	ENetworkFailure__ENetworkFailure_MAX = 20,

};

// Enum Engine.EInputEvent
enum class Engine_EInputEvent : uint8_t
{
	IE_Pressed                     = 0,
	IE_Released                    = 1,
	IE_Repeat                      = 2,
	IE_DoubleClick                 = 3,
	IE_Axis                        = 4,
	IE_MAX                         = 5,

};

// Enum Engine.EAngularConstraintMotion
enum class Engine_EAngularConstraintMotion : uint8_t
{
	ACM_Free                       = 0,
	ACM_Limited                    = 1,
	ACM_Locked                     = 2,
	ACM_MAX                        = 3,

};

// Enum Engine.EComponentSocketType
enum class Engine_EComponentSocketType : uint8_t
{
	EComponentSocketType__Invalid  = 0,
	EComponentSocketType__Bone     = 1,
	EComponentSocketType__Socket   = 2,
	EComponentSocketType__EComponentSocketType_MAX = 3,

};

// Enum Engine.EComponentMobility
enum class Engine_EComponentMobility : uint8_t
{
	EComponentMobility__Static     = 0,
	EComponentMobility__Stationary = 1,
	EComponentMobility__Movable    = 2,
	EComponentMobility__EComponentMobility_MAX = 3,

};

// Enum Engine.EPhysicalSurface
enum class Engine_EPhysicalSurface : uint8_t
{
	SurfaceType_Default            = 0,
	SurfaceType1                   = 1,
	SurfaceType2                   = 2,
	SurfaceType3                   = 3,
	SurfaceType4                   = 4,
	SurfaceType5                   = 5,
	SurfaceType6                   = 6,
	SurfaceType7                   = 7,
	SurfaceType8                   = 8,
	SurfaceType9                   = 9,
	SurfaceType10                  = 10,
	SurfaceType11                  = 11,
	SurfaceType12                  = 12,
	SurfaceType13                  = 13,
	SurfaceType14                  = 14,
	SurfaceType15                  = 15,
	SurfaceType16                  = 16,
	SurfaceType17                  = 17,
	SurfaceType18                  = 18,
	SurfaceType19                  = 19,
	SurfaceType20                  = 20,
	SurfaceType21                  = 21,
	SurfaceType22                  = 22,
	SurfaceType23                  = 23,
	SurfaceType24                  = 24,
	SurfaceType25                  = 25,
	SurfaceType26                  = 26,
	SurfaceType27                  = 27,
	SurfaceType28                  = 28,
	SurfaceType29                  = 29,
	SurfaceType30                  = 30,
	SurfaceType31                  = 31,
	SurfaceType32                  = 32,
	SurfaceType33                  = 33,
	SurfaceType34                  = 34,
	SurfaceType35                  = 35,
	SurfaceType36                  = 36,
	SurfaceType37                  = 37,
	SurfaceType38                  = 38,
	SurfaceType39                  = 39,
	SurfaceType40                  = 40,
	SurfaceType41                  = 41,
	SurfaceType42                  = 42,
	SurfaceType43                  = 43,
	SurfaceType44                  = 44,
	SurfaceType45                  = 45,
	SurfaceType46                  = 46,
	SurfaceType47                  = 47,
	SurfaceType48                  = 48,
	SurfaceType49                  = 49,
	SurfaceType50                  = 50,
	SurfaceType51                  = 51,
	SurfaceType52                  = 52,
	SurfaceType53                  = 53,
	SurfaceType54                  = 54,
	SurfaceType55                  = 55,
	SurfaceType56                  = 56,
	SurfaceType57                  = 57,
	SurfaceType58                  = 58,
	SurfaceType59                  = 59,
	SurfaceType60                  = 60,
	SurfaceType61                  = 61,
	SurfaceType62                  = 62,
	SurfaceType_Max                = 63,
	EPhysicalSurface_MAX           = 64,

};

// Enum Engine.EWalkableSlopeBehavior
enum class Engine_EWalkableSlopeBehavior : uint8_t
{
	WalkableSlope_Default          = 0,
	WalkableSlope_Increase         = 1,
	WalkableSlope_Decrease         = 2,
	WalkableSlope_Unwalkable       = 3,
	WalkableSlope_Max              = 4,

};

// Enum Engine.EAutoPossessAI
enum class Engine_EAutoPossessAI : uint8_t
{
	EAutoPossessAI__Disabled       = 0,
	EAutoPossessAI__PlacedInWorld  = 1,
	EAutoPossessAI__Spawned        = 2,
	EAutoPossessAI__PlacedInWorldOrSpawned = 3,
	EAutoPossessAI__EAutoPossessAI_MAX = 4,

};

// Enum Engine.ENetDormancy
enum class Engine_ENetDormancy : uint8_t
{
	DORM_Never                     = 0,
	DORM_Awake                     = 1,
	DORM_DormantAll                = 2,
	DORM_DormantPartial            = 3,
	DORM_Initial                   = 4,
	DORM_MAX                       = 5,

};

// Enum Engine.ESimplygonMaterialChannel
enum class Engine_ESimplygonMaterialChannel : uint8_t
{
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_AMBIENT = 0,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_DIFFUSE = 1,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_SPECULAR = 2,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_OPACITY = 3,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_EMISSIVE = 4,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_NORMALS = 5,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_DISPLACEMENT = 6,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_BASECOLOR = 7,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_ROUGHNESS = 8,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_METALLIC = 9,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_AO = 10,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_MAX = 11,

};

// Enum Engine.ESimplygonTextureResolution
enum class Engine_ESimplygonTextureResolution : uint8_t
{
	ESimplygonTextureResolution__TextureResolution = 0,
	ESimplygonTextureResolution__TextureResolution01 = 1,
	ESimplygonTextureResolution__TextureResolution02 = 2,
	ESimplygonTextureResolution__TextureResolution03 = 3,
	ESimplygonTextureResolution__TextureResolution04 = 4,
	ESimplygonTextureResolution__TextureResolution05 = 5,
	ESimplygonTextureResolution__TextureResolution06 = 6,
	ESimplygonTextureResolution__TextureResolution07 = 7,
	ESimplygonTextureResolution__TextureResolution_MAX = 8,

};

// Enum Engine.ESimplygonColorChannels
enum class Engine_ESimplygonColorChannels : uint8_t
{
	ESimplygonColorChannels__RGBA  = 0,
	ESimplygonColorChannels__RGB   = 1,
	ESimplygonColorChannels__L     = 2,
	ESimplygonColorChannels__ESimplygonColorChannels_MAX = 3,

};

// Enum Engine.ESimplygonTextureSamplingQuality
enum class Engine_ESimplygonTextureSamplingQuality : uint8_t
{
	ESimplygonTextureSamplingQuality__Poor = 0,
	ESimplygonTextureSamplingQuality__Low = 1,
	ESimplygonTextureSamplingQuality__Medium = 2,
	ESimplygonTextureSamplingQuality__High = 3,
	ESimplygonTextureSamplingQuality__ESimplygonTextureSamplingQuality_MAX = 4,

};

// Enum Engine.ESimplygonCasterType
enum class Engine_ESimplygonCasterType : uint8_t
{
	ESimplygonCasterType__None     = 0,
	ESimplygonCasterType__Color    = 1,
	ESimplygonCasterType__Normals  = 2,
	ESimplygonCasterType__Opacity  = 3,
	ESimplygonCasterType__ESimplygonCasterType_MAX = 4,

};

// Enum Engine.ESimplygonTextureStrech
enum class Engine_ESimplygonTextureStrech : uint8_t
{
	ESimplygonTextureStrech__None  = 0,
	ESimplygonTextureStrech__VerySmall = 1,
	ESimplygonTextureStrech__Small = 2,
	ESimplygonTextureStrech__Medium = 3,
	ESimplygonTextureStrech__Large = 4,
	ESimplygonTextureStrech__VeryLarge = 5,
	ESimplygonTextureStrech__ESimplygonTextureStrech_MAX = 6,

};

// Enum Engine.EMaterialLODType
enum class Engine_EMaterialLODType : uint8_t
{
	EMaterialLODType__Off          = 0,
	EMaterialLODType__BakeTexture  = 1,
	EMaterialLODType__BakeVertexColor = 2,
	EMaterialLODType__Replace      = 3,
	EMaterialLODType__EMaterialLODType_MAX = 4,

};

// Enum Engine.ESimplygonLODType
enum class Engine_ESimplygonLODType : uint8_t
{
	ESimplygonLODType__Reduction   = 0,
	ESimplygonLODType__Remeshing   = 1,
	ESimplygonLODType__ESimplygonLODType_MAX = 2,

};

// Enum Engine.EMeshFeatureImportance
enum class Engine_EMeshFeatureImportance : uint8_t
{
	EMeshFeatureImportance__Off    = 0,
	EMeshFeatureImportance__Lowest = 1,
	EMeshFeatureImportance__Low    = 2,
	EMeshFeatureImportance__Normal = 3,
	EMeshFeatureImportance__High   = 4,
	EMeshFeatureImportance__Highest = 5,
	EMeshFeatureImportance__EMeshFeatureImportance_MAX = 6,

};

// Enum Engine.EShadowMapFlags
enum class Engine_EShadowMapFlags : uint8_t
{
	SMF_None                       = 0,
	SMF_Streamed                   = 1,
	SMF_MAX                        = 2,

};

// Enum Engine.ELightMapPaddingType
enum class Engine_ELightMapPaddingType : uint8_t
{
	LMPT_NormalPadding             = 0,
	LMPT_PrePadding                = 1,
	LMPT_NoPadding                 = 2,
	LMPT_MAX                       = 3,

};

// Enum Engine.EDominanceGroup
enum class Engine_EDominanceGroup : uint8_t
{
	DominanceGroup                 = 0,
	DominanceGroup01               = 1,
	DominanceGroup02               = 2,
	DominanceGroup03               = 3,
	DominanceGroup04               = 4,
	DominanceGroup05               = 5,
	DominanceGroup06               = 6,
	DominanceGroup07               = 7,
	DominanceGroup08               = 8,
	DominanceGroup09               = 9,
	DominanceGroup10               = 10,
	DominanceGroup11               = 11,
	DominanceGroup12               = 12,
	DominanceGroup13               = 13,
	DominanceGroup14               = 14,
	DominanceGroup15               = 15,
	DominanceGroup16               = 16,
	DominanceGroup17               = 17,
	DominanceGroup18               = 18,
	DominanceGroup19               = 19,
	DominanceGroup20               = 20,
	DominanceGroup21               = 21,
	DominanceGroup22               = 22,
	DominanceGroup23               = 23,
	DominanceGroup24               = 24,
	DominanceGroup25               = 25,
	DominanceGroup26               = 26,
	DominanceGroup27               = 27,
	DominanceGroup28               = 28,
	DominanceGroup29               = 29,
	DominanceGroup30               = 30,
	DominanceGroup31               = 31,
	DominanceGroup_Max             = 32,

};

// Enum Engine.ECollisionEnabled
enum class Engine_ECollisionEnabled : uint8_t
{
	ECollisionEnabled__NoCollision = 0,
	ECollisionEnabled__QueryOnly   = 1,
	ECollisionEnabled__PhysicsOnly = 2,
	ECollisionEnabled__QueryAndPhysics = 3,
	ECollisionEnabled__ECollisionEnabled_MAX = 4,

};

// Enum Engine.ETimelineSigType
enum class Engine_ETimelineSigType : uint8_t
{
	ETS_EventSignature             = 0,
	ETS_FloatSignature             = 1,
	ETS_VectorSignature            = 2,
	ETS_LinearColorSignature       = 3,
	ETS_InvalidSignature           = 4,
	ETS_MAX                        = 5,

};

// Enum Engine.ESleepFamily
enum class Engine_ESleepFamily : uint8_t
{
	ESleepFamily__Normal           = 0,
	ESleepFamily__Sensitive        = 1,
	ESleepFamily__Custom           = 2,
	ESleepFamily__ESleepFamily_MAX = 3,

};

// Enum Engine.ERadialImpulseFalloff
enum class Engine_ERadialImpulseFalloff : uint8_t
{
	RIF_Constant                   = 0,
	RIF_Linear                     = 1,
	RIF_MAX                        = 2,

};

// Enum Engine.EInputConsumeOptions
enum class Engine_EInputConsumeOptions : uint8_t
{
	ICO_ConsumeAll                 = 0,
	ICO_ConsumeBoundKeys           = 1,
	ICO_ConsumeNone                = 2,
	ICO_MAX                        = 3,

};

// Enum Engine.EFilterInterpolationType
enum class Engine_EFilterInterpolationType : uint8_t
{
	BSIT_Average                   = 0,
	BSIT_Linear                    = 1,
	BSIT_Cubic                     = 2,
	BSIT_MAX                       = 3,

};

// Enum Engine.ECollisionResponse
enum class Engine_ECollisionResponse : uint8_t
{
	ECR_Ignore                     = 0,
	ECR_Overlap                    = 1,
	ECR_Block                      = 2,
	ECR_MAX                        = 3,

};

// Enum Engine.EPhysicsSceneType
enum class Engine_EPhysicsSceneType : uint8_t
{
	PST_Sync                       = 0,
	PST_Cloth                      = 1,
	PST_Async                      = 2,
	PST_MAX                        = 3,

};

// Enum Engine.ETriangleSortAxis
enum class Engine_ETriangleSortAxis : uint8_t
{
	TSA_X_Axis                     = 0,
	TSA_Y_Axis                     = 1,
	TSA_Z_Axis                     = 2,
	TSA_MAX                        = 3,

};

// Enum Engine.ETriangleSortOption
enum class Engine_ETriangleSortOption : uint8_t
{
	TRISORT_None                   = 0,
	TRISORT_CenterRadialDistance   = 1,
	TRISORT_Random                 = 2,
	TRISORT_MergeContiguous        = 3,
	TRISORT_Custom                 = 4,
	TRISORT_CustomLeftRight        = 5,
	TRISORT_MAX                    = 6,

};

// Enum Engine.ELightingBuildQuality
enum class Engine_ELightingBuildQuality : uint8_t
{
	Quality_Preview                = 0,
	Quality_Medium                 = 1,
	Quality_High                   = 2,
	Quality_Production             = 3,
	Quality_MAX                    = 4,

};

// Enum Engine.EMaterialSamplerType
enum class Engine_EMaterialSamplerType : uint8_t
{
	SAMPLERTYPE_Color              = 0,
	SAMPLERTYPE_Grayscale          = 1,
	SAMPLERTYPE_Alpha              = 2,
	SAMPLERTYPE_Normal             = 3,
	SAMPLERTYPE_Masks              = 4,
	SAMPLERTYPE_DistanceFieldFont  = 5,
	SAMPLERTYPE_LinearColor        = 6,
	SAMPLERTYPE_LinearGrayscale    = 7,
	SAMPLERTYPE_MAX                = 8,

};

// Enum Engine.EPresortedBillboardsMode
enum class Engine_EPresortedBillboardsMode : uint8_t
{
	PBM_Disabled                   = 0,
	PBM_FrontToBack2D              = 1,
	PBM_BackToFront2D              = 2,
	PBM_MAX                        = 3,

};

// Enum Engine.EMaterialGeometryMode
enum class Engine_EMaterialGeometryMode : uint8_t
{
	MGM_Normal                     = 0,
	MGM_VerticesAsBillboards       = 1,
	MGM_TriangleDensityView        = 2,
	MGM_TriangleDensityViewWorldSpace = 3,
	MGM_MAX                        = 4,

};

// Enum Engine.ELowResTranslucencyCascade
enum class Engine_ELowResTranslucencyCascade : uint8_t
{
	LRTC_QuarterRes                = 0,
	LRTC_HalfRes                   = 1,
	LRTC_FullRes                   = 2,
	LRTC_MAX                       = 3,

};

// Enum Engine.EMaterialTessellationMode
enum class Engine_EMaterialTessellationMode : uint8_t
{
	MTM_NoTessellation             = 0,
	MTM_FlatTessellation           = 1,
	MTM_PNTriangles                = 2,
	MTM_MAX                        = 3,

};

// Enum Engine.EMaterialShadingModel
enum class Engine_EMaterialShadingModel : uint8_t
{
	MSM_Unlit                      = 0,
	MSM_DefaultLit                 = 1,
	MSM_Subsurface                 = 2,
	MSM_PreintegratedSkin          = 3,
	MSM_ClearCoat                  = 4,
	MSM_SubsurfaceProfile          = 5,
	MSM_TwoSidedFoliage            = 6,
	MSM_MAX                        = 7,

};

// Enum Engine.EParticleCollisionMode
enum class Engine_EParticleCollisionMode : uint8_t
{
	EParticleCollisionMode__SceneDepth = 0,
	EParticleCollisionMode__DistanceField = 1,
	EParticleCollisionMode__EParticleCollisionMode_MAX = 2,

};

// Enum Engine.ETrailWidthMode
enum class Engine_ETrailWidthMode : uint8_t
{
	ETrailWidthMode_FromCentre     = 0,
	ETrailWidthMode_FromFirst      = 1,
	ETrailWidthMode_FromSecond     = 2,
	ETrailWidthMode_MAX            = 3,

};

// Enum Engine.ETranslucentSortPolicy
enum class Engine_ETranslucentSortPolicy : uint8_t
{
	ETranslucentSortPolicy__SortByDistance = 0,
	ETranslucentSortPolicy__SortByProjectedZ = 1,
	ETranslucentSortPolicy__SortAlongAxis = 2,
	ETranslucentSortPolicy__ETranslucentSortPolicy_MAX = 3,

};

// Enum Engine.ETranslucencyLightingMode
enum class Engine_ETranslucencyLightingMode : uint8_t
{
	TLM_VolumetricNonDirectional   = 0,
	TLM_VolumetricDirectional      = 1,
	TLM_VolumetricPerVertexNonDirectional = 2,
	TLM_VolumetricPerVertexDirectional = 3,
	TLM_Surface                    = 4,
	TLM_SurfacePerPixelLighting    = 5,
	TLM_DirectionalInnerCascade    = 6,
	TLM_NonDirectionalInnerCascade = 7,
	TLM_MAX                        = 8,

};

// Enum Engine.ESamplerSourceMode
enum class Engine_ESamplerSourceMode : uint8_t
{
	SSM_FromTextureAsset           = 0,
	SSM_Wrap_WorldGroupSettings    = 1,
	SSM_Clamp_WorldGroupSettings   = 2,
	SSM_MAX                        = 3,

};

// Enum Engine.EConstantMaterial
enum class Engine_EConstantMaterial : uint8_t
{
	CONSTMAT_None                  = 0,
	CONSTMAT_GroundCover           = 1,
	CONSTMAT_TreeFoliage           = 2,
	CONSTMAT_MAX                   = 3,

};

// Enum Engine.EBlendMode
enum class Engine_EBlendMode : uint8_t
{
	BLEND_Opaque                   = 0,
	BLEND_Masked                   = 1,
	BLEND_Translucent              = 2,
	BLEND_Additive                 = 3,
	BLEND_Modulate                 = 4,
	BLEND_BlendedOIT               = 5,
	BLEND_LowResTranslucent        = 6,
	BLEND_AlphaBlend               = 7,
	BLEND_TranslucentUI            = 8,
	BLEND_PremultipliedAlpha       = 9,
	BLEND_MAX                      = 10,

};

// Enum Engine.EIndirectLightingCacheQuality
enum class Engine_EIndirectLightingCacheQuality : uint8_t
{
	ILCQ_Off                       = 0,
	ILCQ_Point                     = 1,
	ILCQ_Volume                    = 2,
	ILCQ_MAX                       = 3,

};

// Enum Engine.ESceneDepthPriorityGroup
enum class Engine_ESceneDepthPriorityGroup : uint8_t
{
	SDPG_World                     = 0,
	SDPG_Foreground                = 1,
	SDPG_MAX                       = 2,

};

// Enum Engine.EDetachmentRule
enum class Engine_EDetachmentRule : uint8_t
{
	EDetachmentRule__KeepRelative  = 0,
	EDetachmentRule__KeepWorld     = 1,
	EDetachmentRule__EDetachmentRule_MAX = 2,

};

// Enum Engine.EAttachmentRule
enum class Engine_EAttachmentRule : uint8_t
{
	EAttachmentRule__KeepRelative  = 0,
	EAttachmentRule__KeepWorld     = 1,
	EAttachmentRule__SnapToTarget  = 2,
	EAttachmentRule__EAttachmentRule_MAX = 3,

};

// Enum Engine.EActorMetricsType
enum class Engine_EActorMetricsType : uint8_t
{
	METRICS_VERTS                  = 0,
	METRICS_TRIS                   = 1,
	METRICS_SECTIONS               = 2,
	METRICS_MAX                    = 3,

};

// Enum Engine.EAspectRatioAxisConstraint
enum class Engine_EAspectRatioAxisConstraint : uint8_t
{
	AspectRatio_MaintainYFOV       = 0,
	AspectRatio_MaintainXFOV       = 1,
	AspectRatio_MajorAxisFOV       = 2,
	AspectRatio_MaintainYFOV_UnitIsXFovIn16By9 = 3,
	AspectRatio_MAX                = 4,

};

// Enum Engine.EBlueprintType
enum class Engine_EBlueprintType : uint8_t
{
	BPTYPE_Normal                  = 0,
	BPTYPE_Const                   = 1,
	BPTYPE_MacroLibrary            = 2,
	BPTYPE_Interface               = 3,
	BPTYPE_LevelScript             = 4,
	BPTYPE_FunctionLibrary         = 5,
	BPTYPE_MAX                     = 6,

};

// Enum Engine.EBlueprintStatus
enum class Engine_EBlueprintStatus : uint8_t
{
	BS_Unknown                     = 0,
	BS_Dirty                       = 1,
	BS_Error                       = 2,
	BS_UpToDate                    = 3,
	BS_BeingCreated                = 4,
	BS_UpToDateWithWarnings        = 5,
	BS_MAX                         = 6,

};

// Enum Engine.ERelativeTransformSpace
enum class Engine_ERelativeTransformSpace : uint8_t
{
	RTS_World                      = 0,
	RTS_Actor                      = 1,
	RTS_Component                  = 2,
	RTS_Basis                      = 3,
	RTS_BasisGrid                  = 4,
	RTS_MAX                        = 5,

};

// Enum Engine.EDetailMode
enum class Engine_EDetailMode : uint8_t
{
	DM_Low                         = 0,
	DM_Medium                      = 1,
	DM_High                        = 2,
	DM_MAX                         = 3,

};

// Enum Engine.EBrushType
enum class Engine_EBrushType : uint8_t
{
	Brush_Default                  = 0,
	Brush_Add                      = 1,
	Brush_Subtract                 = 2,
	Brush_MAX                      = 3,

};

// Enum Engine.ECsgOper
enum class Engine_ECsgOper : uint8_t
{
	CSG_Active                     = 0,
	CSG_Add                        = 1,
	CSG_Subtract                   = 2,
	CSG_Intersect                  = 3,
	CSG_Deintersect                = 4,
	CSG_None                       = 5,
	CSG_MAX                        = 6,

};

// Enum Engine.ReverbPreset
enum class Engine_EReverbPreset : uint8_t
{
	REVERB_Default                 = 0,
	REVERB_Bathroom                = 1,
	REVERB_StoneRoom               = 2,
	REVERB_Auditorium              = 3,
	REVERB_ConcertHall             = 4,
	REVERB_Cave                    = 5,
	REVERB_Hallway                 = 6,
	REVERB_StoneCorridor           = 7,
	REVERB_Alley                   = 8,
	REVERB_Forest                  = 9,
	REVERB_City                    = 10,
	REVERB_Mountains               = 11,
	REVERB_Quarry                  = 12,
	REVERB_Plain                   = 13,
	REVERB_ParkingLot              = 14,
	REVERB_SewerPipe               = 15,
	REVERB_Underwater              = 16,
	REVERB_SmallRoom               = 17,
	REVERB_MediumRoom              = 18,
	REVERB_LargeRoom               = 19,
	REVERB_MediumHall              = 20,
	REVERB_LargeHall               = 21,
	REVERB_Plate                   = 22,
	REVERB_MAX                     = 23,

};

// Enum Engine.EStreamingVolumeUsage
enum class Engine_EStreamingVolumeUsage : uint8_t
{
	SVB_Loading                    = 0,
	SVB_LoadingAndVisibility       = 1,
	SVB_VisibilityBlockingOnLoad   = 2,
	SVB_BlockingOnLoad             = 3,
	SVB_LoadingNotVisible          = 4,
	SVB_MAX                        = 5,

};

// Enum Engine.ENavigationQueryResult
enum class Engine_ENavigationQueryResult : uint8_t
{
	ENavigationQueryResult__Invalid = 0,
	ENavigationQueryResult__Error  = 1,
	ENavigationQueryResult__Fail   = 2,
	ENavigationQueryResult__Success = 3,
	ENavigationQueryResult__ENavigationQueryResult_MAX = 4,

};

// Enum Engine.ENavDataGatheringModeConfig
enum class Engine_ENavDataGatheringModeConfig : uint8_t
{
	ENavDataGatheringModeConfig__Invalid = 0,
	ENavDataGatheringModeConfig__Instant = 1,
	ENavDataGatheringModeConfig__Lazy = 2,
	ENavDataGatheringModeConfig__ENavDataGatheringModeConfig_MAX = 3,

};

// Enum Engine.ENavDataGatheringMode
enum class Engine_ENavDataGatheringMode : uint8_t
{
	ENavDataGatheringMode__Default = 0,
	ENavDataGatheringMode__Instant = 1,
	ENavDataGatheringMode__Lazy    = 2,
	ENavDataGatheringMode__ENavDataGatheringMode_MAX = 3,

};

// Enum Engine.ENavigationOptionFlag
enum class Engine_ENavigationOptionFlag : uint8_t
{
	ENavigationOptionFlag__Default = 0,
	ENavigationOptionFlag__Enable  = 1,
	ENavigationOptionFlag__Disable = 2,
	ENavigationOptionFlag__MAX     = 3,
	ENavigationOptionFlag__ENavigationOptionFlag_MAX = 4,

};

// Enum Engine.EBlendableLocation
enum class Engine_EBlendableLocation : uint8_t
{
	BL_AfterTonemapping            = 0,
	BL_BeforeTonemapping           = 1,
	BL_BeforeTranslucency          = 2,
	BL_ReplacingTonemapper         = 3,
	BL_ActualBeforeTranslucency    = 4,
	BL_BeforeLighting              = 5,
	BL_MAX                         = 6,

};

// Enum Engine.EDisableShadowMapMethod
enum class Engine_EDisableShadowMapMethod : uint8_t
{
	DSM_None                       = 0,
	DSM_DisableLast                = 1,
	DSM_DisableThirdSecond         = 2,
	DSM_DisableAll                 = 3,
	DSM_MAX                        = 4,

};

// Enum Engine.EAntiAliasingMethod
enum class Engine_EAntiAliasingMethod : uint8_t
{
	AAM_None                       = 0,
	AAM_FXAA                       = 1,
	AAM_TemporalAA                 = 2,
	AAM_MAX                        = 3,

};

// Enum Engine.EDepthOfFieldMethod
enum class Engine_EDepthOfFieldMethod : uint8_t
{
	DOFM_BokehDOF                  = 0,
	DOFM_Gaussian                  = 1,
	DOFM_CircleDOF                 = 2,
	DOFM_MAX                       = 3,

};

// Enum Engine.ECameraAnimPlaySpace
enum class Engine_ECameraAnimPlaySpace : uint8_t
{
	ECameraAnimPlaySpace__CameraLocal = 0,
	ECameraAnimPlaySpace__World    = 1,
	ECameraAnimPlaySpace__UserDefined = 2,
	ECameraAnimPlaySpace__RARE_CutsceneWorld = 3,
	ECameraAnimPlaySpace__RARE_RelativeToWorldLocation = 4,
	ECameraAnimPlaySpace__ECameraAnimPlaySpace_MAX = 5,

};

// Enum Engine.ECameraProjectionMode
enum class Engine_ECameraProjectionMode : uint8_t
{
	ECameraProjectionMode__Perspective = 0,
	ECameraProjectionMode__Orthographic = 1,
	ECameraProjectionMode__ECameraProjectionMode_MAX = 2,

};

// Enum Engine.EInitialOscillatorOffset
enum class Engine_EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom               = 0,
	EOO_OffsetZero                 = 1,
	EOO_MAX                        = 2,

};

// Enum Engine.EViewTargetBlendFunction
enum class Engine_EViewTargetBlendFunction : uint8_t
{
	VTBlend_Linear                 = 0,
	VTBlend_Cubic                  = 1,
	VTBlend_EaseIn                 = 2,
	VTBlend_EaseOut                = 3,
	VTBlend_EaseInOut              = 4,
	VTBlend_MAX                    = 5,

};

// Enum Engine.EControllerAnalogStick
enum class Engine_EControllerAnalogStick : uint8_t
{
	EControllerAnalogStick__CAS_LeftStick = 0,
	EControllerAnalogStick__CAS_RightStick = 1,
	EControllerAnalogStick__CAS_MAX = 2,

};

// Enum Engine.ERichCurveExtrapolation
enum class Engine_ERichCurveExtrapolation : uint8_t
{
	RCCE_Cycle                     = 0,
	RCCE_CycleWithOffset           = 1,
	RCCE_Oscillate                 = 2,
	RCCE_Linear                    = 3,
	RCCE_Constant                  = 4,
	RCCE_None                      = 5,
	RCCE_MAX                       = 6,

};

// Enum Engine.ERichCurveTangentWeightMode
enum class Engine_ERichCurveTangentWeightMode : uint8_t
{
	RCTWM_WeightedNone             = 0,
	RCTWM_WeightedArrive           = 1,
	RCTWM_WeightedLeave            = 2,
	RCTWM_WeightedBoth             = 3,
	RCTWM_MAX                      = 4,

};

// Enum Engine.ERichCurveTangentMode
enum class Engine_ERichCurveTangentMode : uint8_t
{
	RCTM_Auto                      = 0,
	RCTM_User                      = 1,
	RCTM_Break                     = 2,
	RCTM_None                      = 3,
	RCTM_MAX                       = 4,

};

// Enum Engine.ERichCurveInterpMode
enum class Engine_ERichCurveInterpMode : uint8_t
{
	RCIM_Linear                    = 0,
	RCIM_Constant                  = 1,
	RCIM_Cubic                     = 2,
	RCIM_None                      = 3,
	RCIM_MAX                       = 4,

};

// Enum Engine.EDynamicForceFeedbackAction
enum class Engine_EDynamicForceFeedbackAction : uint8_t
{
	EDynamicForceFeedbackAction__Start = 0,
	EDynamicForceFeedbackAction__Update = 1,
	EDynamicForceFeedbackAction__Stop = 2,
	EDynamicForceFeedbackAction__EDynamicForceFeedbackAction_MAX = 3,

};

// Enum Engine.EStandbyType
enum class Engine_EStandbyType : uint8_t
{
	STDBY_Rx                       = 0,
	STDBY_Tx                       = 1,
	STDBY_BadPing                  = 2,
	STDBY_MAX                      = 3,

};

// Enum Engine.EWorldCompositionSetting
enum class Engine_EWorldCompositionSetting : uint8_t
{
	NoWorldComposition             = 0,
	WorldComposition               = 1,
	NestedWorldComposition         = 2,
	EWorldCompositionSetting_MAX   = 3,

};

// Enum Engine.EVisibilityAggressiveness
enum class Engine_EVisibilityAggressiveness : uint8_t
{
	VIS_LeastAggressive            = 0,
	VIS_ModeratelyAggressive       = 1,
	VIS_MostAggressive             = 2,
	VIS_Max                        = 3,

};

// Enum Engine.ERuntimeGenerationType
enum class Engine_ERuntimeGenerationType : uint8_t
{
	ERuntimeGenerationType__Static = 0,
	ERuntimeGenerationType__DynamicModifiersOnly = 1,
	ERuntimeGenerationType__Dynamic = 2,
	ERuntimeGenerationType__LegacyGeneration = 3,
	ERuntimeGenerationType__ERuntimeGenerationType_MAX = 4,

};

// Enum Engine.ERecastPartitioning
enum class Engine_ERecastPartitioning : uint8_t
{
	ERecastPartitioning__Monotone  = 0,
	ERecastPartitioning__Watershed = 1,
	ERecastPartitioning__ChunkyMonotone = 2,
	ERecastPartitioning__ERecastPartitioning_MAX = 3,

};

// Enum Engine.ENavCostDisplay
enum class Engine_ENavCostDisplay : uint8_t
{
	ENavCostDisplay__TotalCost     = 0,
	ENavCostDisplay__HeuristicOnly = 1,
	ENavCostDisplay__RealCostOnly  = 2,
	ENavCostDisplay__ENavCostDisplay_MAX = 3,

};

// Enum Engine.ENavLinkDirection
enum class Engine_ENavLinkDirection : uint8_t
{
	ENavLinkDirection__BothWays    = 0,
	ENavLinkDirection__LeftToRight = 1,
	ENavLinkDirection__RightToLeft = 2,
	ENavLinkDirection__ENavLinkDirection_MAX = 3,

};

// Enum Engine.EMaterialUsage
enum class Engine_EMaterialUsage : uint8_t
{
	MATUSAGE_SkeletalMesh          = 0,
	MATUSAGE_ParticleSprites       = 1,
	MATUSAGE_BeamTrails            = 2,
	MATUSAGE_MeshParticles         = 3,
	MATUSAGE_StaticLighting        = 4,
	MATUSAGE_MorphTargets          = 5,
	MATUSAGE_SplineMesh            = 6,
	MATUSAGE_Landscape             = 7,
	MATUSAGE_InstancedStaticMeshes = 8,
	MATUSAGE_Clothing              = 9,
	MATUSAGE_Deformables           = 10,
	MATUSAGE_FFTWaterMask          = 11,
	MATUSAGE_DynamicObjectFading   = 12,
	MATUSAGE_Clouds                = 13,
	MATUSAGE_InstancedRopes        = 14,
	MATUSAGE_WaterBoundary         = 15,
	MATUSAGE_PlanarReflection      = 16,
	MATUSAGE_CPUParticleSprites    = 17,
	MATUSAGE_Coverage              = 18,
	MATUSAGE_GPUInstanceCulling    = 19,
	MATUSAGE_PointLightShadow      = 20,
	MATUSAGE_MAX                   = 21,

};

// Enum Engine.EDOFMode
enum class Engine_EDOFMode : uint8_t
{
	EDOFMode__Default              = 0,
	EDOFMode__SixDOF               = 1,
	EDOFMode__YZPlane              = 2,
	EDOFMode__XZPlane              = 3,
	EDOFMode__XYPlane              = 4,
	EDOFMode__None                 = 5,
	EDOFMode__EDOFMode_MAX         = 6,

};

// Enum Engine.EExcludeFromCascades
enum class Engine_EExcludeFromCascades : uint8_t
{
	LastCascade                    = 0,
	LastTwoCascades                = 1,
	LastThreeCascades              = 2,
	EExcludeFromCascades_MAX       = 3,

};

// Enum Engine.EHasCustomNavigableGeometry
enum class Engine_EHasCustomNavigableGeometry : uint8_t
{
	EHasCustomNavigableGeometry__No = 0,
	EHasCustomNavigableGeometry__Yes = 1,
	EHasCustomNavigableGeometry__EvenIfNotCollidable = 2,
	EHasCustomNavigableGeometry__DontExport = 3,
	EHasCustomNavigableGeometry__EHasCustomNavigableGeometry_MAX = 4,

};

// Enum Engine.ECanBeCharacterBase
enum class Engine_ECanBeCharacterBase : uint8_t
{
	ECB_No                         = 0,
	ECB_Yes                        = 1,
	ECB_Owner                      = 2,
	ECB_MAX                        = 3,

};

// Enum Engine.EParticleSystemOcclusionBoundsMethod
enum class Engine_EParticleSystemOcclusionBoundsMethod : uint8_t
{
	EPSOBM_None                    = 0,
	EPSOBM_ParticleBounds          = 1,
	EPSOBM_CustomBounds            = 2,
	EPSOBM_MAX                     = 3,

};

// Enum Engine.ParticleSystemLODMethod
enum class Engine_EParticleSystemLODMethod : uint8_t
{
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX    = 3,

};

// Enum Engine.EParticleSystemUpdateMode
enum class Engine_EParticleSystemUpdateMode : uint8_t
{
	EPSUM_RealTime                 = 0,
	EPSUM_FixedTime                = 1,
	EPSUM_MAX                      = 2,

};

// Enum Engine.EParticleEventType
enum class Engine_EParticleEventType : uint8_t
{
	EPET_Any                       = 0,
	EPET_Spawn                     = 1,
	EPET_Death                     = 2,
	EPET_Collision                 = 3,
	EPET_Burst                     = 4,
	EPET_Blueprint                 = 5,
	EPET_MAX                       = 6,

};

// Enum Engine.ParticleReplayState
enum class Engine_EParticleReplayState : uint8_t
{
	PRS_Disabled                   = 0,
	PRS_Capturing                  = 1,
	PRS_Replaying                  = 2,
	PRS_MAX                        = 3,

};

// Enum Engine.EParticleSysParamType
enum class Engine_EParticleSysParamType : uint8_t
{
	PSPT_None                      = 0,
	PSPT_Scalar                    = 1,
	PSPT_ScalarRand                = 2,
	PSPT_Vector                    = 3,
	PSPT_VectorRand                = 4,
	PSPT_Color                     = 5,
	PSPT_Actor                     = 6,
	PSPT_Material                  = 7,
	PSPT_EmitterPoints             = 8,
	PSPT_MAX                       = 9,

};

// Enum Engine.SkeletalMeshOptimizationType
enum class Engine_ESkeletalMeshOptimizationType : uint8_t
{
	SMOT_NumOfTriangles            = 0,
	SMOT_MaxDeviation              = 1,
	SMOT_MAX                       = 2,

};

// Enum Engine.SkeletalMeshOptimizationImportance
enum class Engine_ESkeletalMeshOptimizationImportance : uint8_t
{
	SMOI_Off                       = 0,
	SMOI_Lowest                    = 1,
	SMOI_Low                       = 2,
	SMOI_Normal                    = 3,
	SMOI_High                      = 4,
	SMOI_Highest                   = 5,
	SMOI_MAX                       = 6,

};

// Enum Engine.EAnimGroupRole
enum class Engine_EAnimGroupRole : uint8_t
{
	EAnimGroupRole__CanBeLeader    = 0,
	EAnimGroupRole__AlwaysFollower = 1,
	EAnimGroupRole__AlwaysLeader   = 2,
	EAnimGroupRole__EAnimGroupRole_MAX = 3,

};

// Enum Engine.ERootMotionMode
enum class Engine_ERootMotionMode : uint8_t
{
	ERootMotionMode__NoRootMotionExtraction = 0,
	ERootMotionMode__IgnoreRootMotion = 1,
	ERootMotionMode__RootMotionFromEverything = 2,
	ERootMotionMode__RootMotionFromMontagesOnly = 3,
	ERootMotionMode__ERootMotionMode_MAX = 4,

};

// Enum Engine.ERootMotionRootLock
enum class Engine_ERootMotionRootLock : uint8_t
{
	ERootMotionRootLock__RefPose   = 0,
	ERootMotionRootLock__AnimFirstFrame = 1,
	ERootMotionRootLock__Zero      = 2,
	ERootMotionRootLock__ERootMotionRootLock_MAX = 3,

};

// Enum Engine.EBoneSpaces
enum class Engine_EBoneSpaces : uint8_t
{
	EBoneSpaces__WorldSpace        = 0,
	EBoneSpaces__ComponentSpace    = 1,
	EBoneSpaces__EBoneSpaces_MAX   = 2,

};

// Enum Engine.EMeshComponentUpdateFlag
enum class Engine_EMeshComponentUpdateFlag : uint8_t
{
	EMeshComponentUpdateFlag__AlwaysTickPoseAndRefreshBones = 0,
	EMeshComponentUpdateFlag__AlwaysTickPose = 1,
	EMeshComponentUpdateFlag__OnlyTickPoseWhenRendered = 2,
	EMeshComponentUpdateFlag__OnlyIfLODChanged = 3,
	EMeshComponentUpdateFlag__EMeshComponentUpdateFlag_MAX = 4,

};

// Enum Engine.EPhysBodyOp
enum class Engine_EPhysBodyOp : uint8_t
{
	PBO_None                       = 0,
	PBO_Term                       = 1,
	PBO_Disable                    = 2,
	PBO_MAX                        = 3,

};

// Enum Engine.EBoneVisibilityStatus
enum class Engine_EBoneVisibilityStatus : uint8_t
{
	BVS_HiddenByParent             = 0,
	BVS_Visible                    = 1,
	BVS_ExplicitlyHidden           = 2,
	BVS_MAX                        = 3,

};

// Enum Engine.EAngularDriveMode
enum class Engine_EAngularDriveMode : uint8_t
{
	EAngularDriveMode__SLERP       = 0,
	EAngularDriveMode__TwistAndSwing = 1,
	EAngularDriveMode__EAngularDriveMode_MAX = 2,

};

// Enum Engine.EConstraintFrame
enum class Engine_EConstraintFrame : uint8_t
{
	EConstraintFrame__Frame1       = 0,
	EConstraintFrame__Frame2       = 1,
	EConstraintFrame__EConstraintFrame_MAX = 2,

};

// Enum Engine.ELinearConstraintMotion
enum class Engine_ELinearConstraintMotion : uint8_t
{
	LCM_Free                       = 0,
	LCM_Limited                    = 1,
	LCM_Locked                     = 2,
	LCM_MAX                        = 3,

};

// Enum Engine.EBoneTranslationRetargetingMode
enum class Engine_EBoneTranslationRetargetingMode : uint8_t
{
	EBoneTranslationRetargetingMode__Animation = 0,
	EBoneTranslationRetargetingMode__Skeleton = 1,
	EBoneTranslationRetargetingMode__AnimationScaled = 2,
	EBoneTranslationRetargetingMode__AnimationRelative = 3,
	EBoneTranslationRetargetingMode__EBoneTranslationRetargetingMode_MAX = 4,

};

// Enum Engine.EAnimLinkMethod
enum class Engine_EAnimLinkMethod : uint8_t
{
	EAnimLinkMethod__Absolute      = 0,
	EAnimLinkMethod__Relative      = 1,
	EAnimLinkMethod__Proportional  = 2,
	EAnimLinkMethod__EAnimLinkMethod_MAX = 3,

};

// Enum Engine.ECurveBlendOption
enum class Engine_ECurveBlendOption : uint8_t
{
	ECurveBlendOption__MaxWeight   = 0,
	ECurveBlendOption__NormalizeByWeight = 1,
	ECurveBlendOption__BlendByWeight = 2,
	ECurveBlendOption__ECurveBlendOption_MAX = 3,

};

// Enum Engine.EAdditiveAnimationType
enum class Engine_EAdditiveAnimationType : uint8_t
{
	AAT_None                       = 0,
	AAT_LocalSpaceBase             = 1,
	AAT_RotationOffsetMeshSpace    = 2,
	AAT_MAX                        = 3,

};

// Enum Engine.ENotifyFilterType
enum class Engine_ENotifyFilterType : uint8_t
{
	ENotifyFilterType__NoFiltering = 0,
	ENotifyFilterType__LOD         = 1,
	ENotifyFilterType__ENotifyFilterType_MAX = 2,

};

// Enum Engine.EMontageNotifyTickType
enum class Engine_EMontageNotifyTickType : uint8_t
{
	EMontageNotifyTickType__Queued = 0,
	EMontageNotifyTickType__BranchingPoint = 1,
	EMontageNotifyTickType__EMontageNotifyTickType_MAX = 2,

};

// Enum Engine.EAnimationMode
enum class Engine_EAnimationMode : uint8_t
{
	EAnimationMode__AnimationBlueprint = 0,
	EAnimationMode__AnimationSingleNode = 1,
	EAnimationMode__AnimationCustomMode = 2,
	EAnimationMode__EAnimationMode_MAX = 3,

};

// Enum Engine.EKinematicBonesUpdateToPhysics
enum class Engine_EKinematicBonesUpdateToPhysics : uint8_t
{
	EKinematicBonesUpdateToPhysics__SkipSimulatingBones = 0,
	EKinematicBonesUpdateToPhysics__SkipAllBones = 1,
	EKinematicBonesUpdateToPhysics__EKinematicBonesUpdateToPhysics_MAX = 2,

};

// Enum Engine.ESplineCoordinateSpace
enum class Engine_ESplineCoordinateSpace : uint8_t
{
	ESplineCoordinateSpace__Local  = 0,
	ESplineCoordinateSpace__World  = 1,
	ESplineCoordinateSpace__ESplineCoordinateSpace_MAX = 2,

};

// Enum Engine.ESplinePointType
enum class Engine_ESplinePointType : uint8_t
{
	ESplinePointType__Linear       = 0,
	ESplinePointType__Curve        = 1,
	ESplinePointType__Constant     = 2,
	ESplinePointType__CurveClamped = 3,
	ESplinePointType__CurveCustomTangent = 4,
	ESplinePointType__ESplinePointType_MAX = 5,

};

// Enum Engine.FNavigationSystemRunMode
enum class Engine_EFNavigationSystemRunMode : uint8_t
{
	FNavigationSystemRunMode__InvalidMode = 0,
	FNavigationSystemRunMode__GameMode = 1,
	FNavigationSystemRunMode__EditorMode = 2,
	FNavigationSystemRunMode__SimulationMode = 3,
	FNavigationSystemRunMode__PIEMode = 4,
	FNavigationSystemRunMode__FNavigationSystemRunMode_MAX = 5,

};

// Enum Engine.ETypeAdvanceAnim
enum class Engine_ETypeAdvanceAnim : uint8_t
{
	ETAA_Default                   = 0,
	ETAA_Finished                  = 1,
	ETAA_Looped                    = 2,
	ETAA_MAX                       = 3,

};

// Enum Engine.EAlphaBlendOption
enum class Engine_EAlphaBlendOption : uint8_t
{
	EAlphaBlendOption__Linear      = 0,
	EAlphaBlendOption__Cubic       = 1,
	EAlphaBlendOption__HermiteCubic = 2,
	EAlphaBlendOption__Sinusoidal  = 3,
	EAlphaBlendOption__QuadraticInOut = 4,
	EAlphaBlendOption__CubicInOut  = 5,
	EAlphaBlendOption__QuarticInOut = 6,
	EAlphaBlendOption__QuinticInOut = 7,
	EAlphaBlendOption__CircularIn  = 8,
	EAlphaBlendOption__CircularOut = 9,
	EAlphaBlendOption__CircularInOut = 10,
	EAlphaBlendOption__ExpIn       = 11,
	EAlphaBlendOption__ExpOut      = 12,
	EAlphaBlendOption__ExpInOut    = 13,
	EAlphaBlendOption__Source      = 14,
	EAlphaBlendOption__Target      = 15,
	EAlphaBlendOption__Custom      = 16,
	EAlphaBlendOption__EAlphaBlendOption_MAX = 17,

};

// Enum Engine.ETransitionLogicType
enum class Engine_ETransitionLogicType : uint8_t
{
	ETransitionLogicType__TLT_StandardBlend = 0,
	ETransitionLogicType__TLT_Custom = 1,
	ETransitionLogicType__TLT_MAX  = 2,

};

// Enum Engine.ETransitionBlendMode
enum class Engine_ETransitionBlendMode : uint8_t
{
	ETransitionBlendMode__TBM_Linear = 0,
	ETransitionBlendMode__TBM_Cubic = 1,
	ETransitionBlendMode__TBM_MAX  = 2,

};

// Enum Engine.EBoneRotationSource
enum class Engine_EBoneRotationSource : uint8_t
{
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation     = 1,
	BRS_CopyFromTarget             = 2,
	BRS_MAX                        = 3,

};

// Enum Engine.EBoneControlSpace
enum class Engine_EBoneControlSpace : uint8_t
{
	BCS_WorldSpace                 = 0,
	BCS_ComponentSpace             = 1,
	BCS_ParentBoneSpace            = 2,
	BCS_BoneSpace                  = 3,
	BCS_MAX                        = 4,

};

// Enum Engine.EAnimNotifyEventType
enum class Engine_EAnimNotifyEventType : uint8_t
{
	EAnimNotifyEventType__Begin    = 0,
	EAnimNotifyEventType__End      = 1,
	EAnimNotifyEventType__EAnimNotifyEventType_MAX = 2,

};

// Enum Engine.ESoundSpatializationAlgorithm
enum class Engine_ESoundSpatializationAlgorithm : uint8_t
{
	SPATIALIZATION_Default         = 0,
	SPATIALIZATION_HRTF            = 1,
	SPATIALIZATION_MAX             = 2,

};

// Enum Engine.EAttenuationShape
enum class Engine_EAttenuationShape : uint8_t
{
	EAttenuationShape__Sphere      = 0,
	EAttenuationShape__Capsule     = 1,
	EAttenuationShape__Box         = 2,
	EAttenuationShape__Cone        = 3,
	EAttenuationShape__EAttenuationShape_MAX = 4,

};

// Enum Engine.ESoundDistanceCalc
enum class Engine_ESoundDistanceCalc : uint8_t
{
	SOUNDDISTANCE_Normal           = 0,
	SOUNDDISTANCE_InfiniteXYPlane  = 1,
	SOUNDDISTANCE_InfiniteXZPlane  = 2,
	SOUNDDISTANCE_InfiniteYZPlane  = 3,
	SOUNDDISTANCE_MAX              = 4,

};

// Enum Engine.ESoundDistanceModel
enum class Engine_ESoundDistanceModel : uint8_t
{
	ATTENUATION_Linear             = 0,
	ATTENUATION_Logarithmic        = 1,
	ATTENUATION_Inverse            = 2,
	ATTENUATION_LogReverse         = 3,
	ATTENUATION_NaturalSound       = 4,
	ATTENUATION_Custom             = 5,
	ATTENUATION_MAX                = 6,

};

// Enum Engine.EAmbientLightClusteringPolicy
enum class Engine_EAmbientLightClusteringPolicy : uint8_t
{
	OnlyLight                      = 0,
	ClosePriorityLight             = 1,
	BlendableInCouple              = 2,
	NoGrouping                     = 3,
	EAmbientLightClusteringPolicy_MAX = 4,

};

// Enum Engine.EAmbientLightConeShape
enum class Engine_EAmbientLightConeShape : uint8_t
{
	Sphere                         = 0,
	Hemisphere                     = 1,
	VeryWideCone                   = 2,
	WideCone                       = 3,
	NarrowishCone                  = 4,
	EAmbientLightConeShape_MAX     = 5,

};

// Enum Engine.ESimpleLightFunctionType
enum class Engine_ESimpleLightFunctionType : uint8_t
{
	NoFunction                     = 0,
	Pulse                          = 1,
	Flicker                        = 2,
	ESimpleLightFunctionType_MAX   = 3,

};

// Enum Engine.ESkyLightSourceType
enum class Engine_ESkyLightSourceType : uint8_t
{
	SLS_CapturedScene              = 0,
	SLS_SpecifiedCubemap           = 1,
	SLS_MAX                        = 2,

};

// Enum Engine.EOptimizationType
enum class Engine_EOptimizationType : uint8_t
{
	OT_NumOfTriangles              = 0,
	OT_MaxDeviation                = 1,
	OT_MAX                         = 2,

};

// Enum Engine.EImportanceLevel
enum class Engine_EImportanceLevel : uint8_t
{
	IL_Off                         = 0,
	IL_Lowest                      = 1,
	IL_Low                         = 2,
	IL_Normal                      = 3,
	IL_High                        = 4,
	IL_Highest                     = 5,
	TEMP_BROKEN2                   = 6,
	EImportanceLevel_MAX           = 7,

};

// Enum Engine.ENormalMode
enum class Engine_ENormalMode : uint8_t
{
	NM_PreserveSmoothingGroups     = 0,
	NM_RecalculateNormals          = 1,
	NM_RecalculateNormalsSmooth    = 2,
	NM_RecalculateNormalsHard      = 3,
	TEMP_BROKEN                    = 4,
	ENormalMode_MAX                = 5,

};

// Enum Engine.EPoseableAnimMode
enum class Engine_EPoseableAnimMode : uint8_t
{
	EPoseableAnimMode__Poseable    = 0,
	EPoseableAnimMode__Animated    = 1,
	EPoseableAnimMode__EPoseableAnimMode_MAX = 2,

};

// Enum Engine.ETextureSamplerFilter
enum class Engine_ETextureSamplerFilter : uint8_t
{
	ETextureSamplerFilter__Point   = 0,
	ETextureSamplerFilter__Bilinear = 1,
	ETextureSamplerFilter__Trilinear = 2,
	ETextureSamplerFilter__AnisotropicPoint = 3,
	ETextureSamplerFilter__AnisotropicLinear = 4,
	ETextureSamplerFilter__ETextureSamplerFilter_MAX = 5,

};

// Enum Engine.ETexturePowerOfTwoSetting
enum class Engine_ETexturePowerOfTwoSetting : uint8_t
{
	ETexturePowerOfTwoSetting__None = 0,
	ETexturePowerOfTwoSetting__PadToPowerOfTwo = 1,
	ETexturePowerOfTwoSetting__PadToSquarePowerOfTwo = 2,
	ETexturePowerOfTwoSetting__ETexturePowerOfTwoSetting_MAX = 3,

};

// Enum Engine.TextureMipGenSettings
enum class Engine_ETextureMipGenSettings : uint8_t
{
	TMGS_FromTextureGroup          = 0,
	TMGS_SimpleAverage             = 1,
	TMGS_Sharpen0                  = 2,
	TMGS_Sharpen1                  = 3,
	TMGS_Sharpen2                  = 4,
	TMGS_Sharpen3                  = 5,
	TMGS_Sharpen4                  = 6,
	TMGS_Sharpen5                  = 7,
	TMGS_Sharpen6                  = 8,
	TMGS_Sharpen7                  = 9,
	TMGS_Sharpen8                  = 10,
	TMGS_Sharpen9                  = 11,
	TMGS_Sharpen10                 = 12,
	TMGS_NoMipmaps                 = 13,
	TMGS_LeaveExistingMips         = 14,
	TMGS_Blur1                     = 15,
	TMGS_Blur2                     = 16,
	TMGS_Blur3                     = 17,
	TMGS_Blur4                     = 18,
	TMGS_Blur5                     = 19,
	TMGS_MAX                       = 20,

};

// Enum Engine.TextureGroup
enum class Engine_ETextureGroup : uint8_t
{
	TEXTUREGROUP_World             = 0,
	TEXTUREGROUP_WorldNormalMap    = 1,
	TEXTUREGROUP_WorldSpecular     = 2,
	TEXTUREGROUP_Character         = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon            = 6,
	TEXTUREGROUP_WeaponNormalMap   = 7,
	TEXTUREGROUP_WeaponSpecular    = 8,
	TEXTUREGROUP_Vehicle           = 9,
	TEXTUREGROUP_VehicleNormalMap  = 10,
	TEXTUREGROUP_VehicleSpecular   = 11,
	TEXTUREGROUP_Cinematic         = 12,
	TEXTUREGROUP_Effects           = 13,
	TEXTUREGROUP_EffectsNotFiltered = 14,
	TEXTUREGROUP_Skybox            = 15,
	TEXTUREGROUP_UI                = 16,
	TEXTUREGROUP_Lightmap          = 17,
	TEXTUREGROUP_RenderTarget      = 18,
	TEXTUREGROUP_MobileFlattened   = 19,
	TEXTUREGROUP_ProcBuilding_Face = 20,
	TEXTUREGROUP_ProcBuilding_LightMap = 21,
	TEXTUREGROUP_Shadowmap         = 22,
	TEXTUREGROUP_ColorLookupTable  = 23,
	TEXTUREGROUP_Terrain_Heightmap = 24,
	TEXTUREGROUP_Terrain_Weightmap = 25,
	TEXTUREGROUP_Bokeh             = 26,
	TEXTUREGROUP_IESLightProfile   = 27,
	TEXTUREGROUP_Pixels2D          = 28,
	TEXTUREGROUP_RareLoDTest       = 29,
	TEXTUREGROUP_Unassigned        = 30,
	TEXTUREGROUP_Animation         = 31,
	TEXTUREGROUP_Coherent          = 32,
	TEXTUREGROUP_MippedUI          = 33,
	TEXTUREGROUP_MAX               = 34,

};

// Enum Engine.ETextureSourceFormat
enum class Engine_ETextureSourceFormat : uint8_t
{
	TSF_Invalid                    = 0,
	TSF_G8                         = 1,
	TSF_BGRA8                      = 2,
	TSF_BGRE8                      = 3,
	TSF_RGBA16                     = 4,
	TSF_RGBA16F                    = 5,
	TSF_RGBA8                      = 6,
	TSF_RGBE8                      = 7,
	TSF_RGBA32F                    = 8,
	TSF_MAX                        = 9,

};

// Enum Engine.ETextureSourceArtType
enum class Engine_ETextureSourceArtType : uint8_t
{
	TSAT_Uncompressed              = 0,
	TSAT_PNGCompressed             = 1,
	TSAT_DDSFile                   = 2,
	TSAT_MAX                       = 3,

};

// Enum Engine.ETextureMipCount
enum class Engine_ETextureMipCount : uint8_t
{
	TMC_ResidentMips               = 0,
	TMC_AllMips                    = 1,
	TMC_AllMipsBiased              = 2,
	TMC_MAX                        = 3,

};

// Enum Engine.ECompositeTextureMode
enum class Engine_ECompositeTextureMode : uint8_t
{
	CTM_Disabled                   = 0,
	CTM_NormalRoughnessToRed       = 1,
	CTM_NormalRoughnessToGreen     = 2,
	CTM_NormalRoughnessToBlue      = 3,
	CTM_NormalRoughnessToAlpha     = 4,
	CTM_MAX                        = 5,

};

// Enum Engine.TextureAddress
enum class Engine_ETextureAddress : uint8_t
{
	TA_Wrap                        = 0,
	TA_Clamp                       = 1,
	TA_Mirror                      = 2,
	TA_MAX                         = 3,

};

// Enum Engine.TextureFilter
enum class Engine_ETextureFilter : uint8_t
{
	TF_Nearest                     = 0,
	TF_Bilinear                    = 1,
	TF_Trilinear                   = 2,
	TF_Default                     = 3,
	TF_MAX                         = 4,

};

// Enum Engine.TextureCompressionSettings
enum class Engine_ETextureCompressionSettings : uint8_t
{
	TC_Default                     = 0,
	TC_Normalmap                   = 1,
	TC_Masks                       = 2,
	TC_Grayscale                   = 3,
	TC_Displacementmap             = 4,
	TC_VectorDisplacementmap       = 5,
	TC_HDR                         = 6,
	TC_EditorIcon                  = 7,
	TC_Alpha                       = 8,
	TC_DistanceFieldFont           = 9,
	TC_HDR_Compressed              = 10,
	TC_BC7                         = 11,
	TC_SignedHDR                   = 12,
	TC_UnsignedHDR                 = 13,
	TC_HighQuality                 = 14,
	TC_TwoChannelFloat             = 15,
	TC_MAX                         = 16,

};

// Enum Engine.ESplineMeshAxis
enum class Engine_ESplineMeshAxis : uint8_t
{
	ESplineMeshAxis__X             = 0,
	ESplineMeshAxis__Y             = 1,
	ESplineMeshAxis__Z             = 2,
	ESplineMeshAxis__ESplineMeshAxis_MAX = 3,

};

// Enum Engine.EVerticalTextAligment
enum class Engine_EVerticalTextAligment : uint8_t
{
	EVRTA_TextTop                  = 0,
	EVRTA_TextCenter               = 1,
	EVRTA_TextBottom               = 2,
	EVRTA_QuadTop                  = 3,
	EVRTA_MAX                      = 4,

};

// Enum Engine.EHorizTextAligment
enum class Engine_EHorizTextAligment : uint8_t
{
	EHTA_Left                      = 0,
	EHTA_Center                    = 1,
	EHTA_Right                     = 2,
	EHTA_MAX                       = 3,

};

// Enum Engine.ESceneCaptureSource
enum class Engine_ESceneCaptureSource : uint8_t
{
	SCS_SceneColorHDR              = 0,
	SCS_FinalColorLDR              = 1,
	SCS_MAX                        = 2,

};

// Enum Engine.ETimelineDirection
enum class Engine_ETimelineDirection : uint8_t
{
	ETimelineDirection__Forward    = 0,
	ETimelineDirection__Backward   = 1,
	ETimelineDirection__ETimelineDirection_MAX = 2,

};

// Enum Engine.ETimelineLengthMode
enum class Engine_ETimelineLengthMode : uint8_t
{
	TL_TimelineLength              = 0,
	TL_LastKeyFrame                = 1,
	TL_MAX                         = 2,

};

// Enum Engine.EAdditiveBasePoseType
enum class Engine_EAdditiveBasePoseType : uint8_t
{
	ABPT_None                      = 0,
	ABPT_RefPose                   = 1,
	ABPT_AnimScaled                = 2,
	ABPT_AnimFrame                 = 3,
	ABPT_MAX                       = 4,

};

// Enum Engine.AnimationKeyFormat
enum class Engine_EAnimationKeyFormat : uint8_t
{
	AKF_ConstantKeyLerp            = 0,
	AKF_VariableKeyLerp            = 1,
	AKF_PerTrackCompression        = 2,
	AKF_MAX                        = 3,

};

// Enum Engine.AnimationCompressionFormat
enum class Engine_EAnimationCompressionFormat : uint8_t
{
	ACF_None                       = 0,
	ACF_Float96NoW                 = 1,
	ACF_Fixed48NoW                 = 2,
	ACF_IntervalFixed32NoW         = 3,
	ACF_Fixed32NoW                 = 4,
	ACF_Float32NoW                 = 5,
	ACF_Identity                   = 6,
	ACF_MAX                        = 7,

};

// Enum Engine.ENotifyTriggerMode
enum class Engine_ENotifyTriggerMode : uint8_t
{
	ENotifyTriggerMode__AllAnimations = 0,
	ENotifyTriggerMode__HighestWeightedAnimation = 1,
	ENotifyTriggerMode__None       = 2,
	ENotifyTriggerMode__ENotifyTriggerMode_MAX = 3,

};

// Enum Engine.EBlendSpaceAxis
enum class Engine_EBlendSpaceAxis : uint8_t
{
	BSA_None                       = 0,
	BSA_X                          = 1,
	BSA_Y                          = 2,
	BSA_Max                        = 3,

};

// Enum Engine.EEvaluateCurveTableResult
enum class Engine_EEvaluateCurveTableResult : uint8_t
{
	EEvaluateCurveTableResult__RowFound = 0,
	EEvaluateCurveTableResult__RowNotFound = 1,
	EEvaluateCurveTableResult__EEvaluateCurveTableResult_MAX = 2,

};

// Enum Engine.EGrammaticalNumber
enum class Engine_EGrammaticalNumber : uint8_t
{
	EGrammaticalNumber__Singular   = 0,
	EGrammaticalNumber__Plural     = 1,
	EGrammaticalNumber__EGrammaticalNumber_MAX = 2,

};

// Enum Engine.EGrammaticalGender
enum class Engine_EGrammaticalGender : uint8_t
{
	EGrammaticalGender__Neuter     = 0,
	EGrammaticalGender__Masculine  = 1,
	EGrammaticalGender__Feminine   = 2,
	EGrammaticalGender__Mixed      = 3,
	EGrammaticalGender__EGrammaticalGender_MAX = 4,

};

// Enum Engine.ESuggestProjVelocityTraceOption
enum class Engine_ESuggestProjVelocityTraceOption : uint8_t
{
	ESuggestProjVelocityTraceOption__DoNotTrace = 0,
	ESuggestProjVelocityTraceOption__TraceFullPath = 1,
	ESuggestProjVelocityTraceOption__OnlyTraceWhileAsceding = 2,
	ESuggestProjVelocityTraceOption__ESuggestProjVelocityTraceOption_MAX = 3,

};

// Enum Engine.EEasingFunc
enum class Engine_EEasingFunc : uint8_t
{
	EEasingFunc__Linear            = 0,
	EEasingFunc__Step              = 1,
	EEasingFunc__SinusoidalIn      = 2,
	EEasingFunc__SinusoidalOut     = 3,
	EEasingFunc__SinusoidalInOut   = 4,
	EEasingFunc__EaseIn            = 5,
	EEasingFunc__EaseOut           = 6,
	EEasingFunc__EaseInOut         = 7,
	EEasingFunc__ExpoIn            = 8,
	EEasingFunc__ExpoOut           = 9,
	EEasingFunc__ExpoInOut         = 10,
	EEasingFunc__CircularIn        = 11,
	EEasingFunc__CircularOut       = 12,
	EEasingFunc__CircularInOut     = 13,
	EEasingFunc__EEasingFunc_MAX   = 14,

};

// Enum Engine.ERoundingMode
enum class Engine_ERoundingMode : uint8_t
{
	HalfToEven                     = 0,
	HalfFromZero                   = 1,
	HalfToZero                     = 2,
	FromZero                       = 3,
	ToZero                         = 4,
	ToNegativeInfinity             = 5,
	ToPositiveInfinity             = 6,
	ERoundingMode_MAX              = 7,

};

// Enum Engine.EBodyCollisionResponse
enum class Engine_EBodyCollisionResponse : uint8_t
{
	EBodyCollisionResponse__BodyCollision_Enabled = 0,
	EBodyCollisionResponse__BodyCollision_Disabled = 1,
	EBodyCollisionResponse__BodyCollision_MAX = 2,

};

// Enum Engine.EPhysicsType
enum class Engine_EPhysicsType : uint8_t
{
	PhysType_Default               = 0,
	PhysType_Kinematic             = 1,
	PhysType_Simulated             = 2,
	PhysType_MAX                   = 3,

};

// Enum Engine.ECollisionTraceFlag
enum class Engine_ECollisionTraceFlag : uint8_t
{
	CTF_UseDefault                 = 0,
	CTF_UseSimpleAsComplex         = 1,
	CTF_UseComplexAsSimple         = 2,
	CTF_MAX                        = 3,

};

// Enum Engine.ReliabilityType
enum class Engine_EReliabilityType : uint8_t
{
	ReliabilityType__Reliable      = 0,
	ReliabilityType__Unreliable    = 1,
	ReliabilityType__Count         = 2,
	ReliabilityType__ReliabilityType_MAX = 3,

};

// Enum Engine.EUIScalingRule
enum class Engine_EUIScalingRule : uint8_t
{
	EUIScalingRule__ShortestSide   = 0,
	EUIScalingRule__LongestSide    = 1,
	EUIScalingRule__Horizontal     = 2,
	EUIScalingRule__Vertical       = 3,
	EUIScalingRule__Custom         = 4,
	EUIScalingRule__EUIScalingRule_MAX = 5,

};

// Enum Engine.ERenderFocusRule
enum class Engine_ERenderFocusRule : uint8_t
{
	ERenderFocusRule__Always       = 0,
	ERenderFocusRule__NonPointer   = 1,
	ERenderFocusRule__NavigationOnly = 2,
	ERenderFocusRule__Never        = 3,
	ERenderFocusRule__ERenderFocusRule_MAX = 4,

};

// Enum Engine.ESettingsLockedAxis
enum class Engine_ESettingsLockedAxis : uint8_t
{
	ESettingsLockedAxis__None      = 0,
	ESettingsLockedAxis__X         = 1,
	ESettingsLockedAxis__Y         = 2,
	ESettingsLockedAxis__Z         = 3,
	ESettingsLockedAxis__Invalid   = 4,
	ESettingsLockedAxis__ESettingsLockedAxis_MAX = 5,

};

// Enum Engine.ESettingsDOF
enum class Engine_ESettingsDOF : uint8_t
{
	ESettingsDOF__Full3D           = 0,
	ESettingsDOF__YZPlane          = 1,
	ESettingsDOF__XZPlane          = 2,
	ESettingsDOF__XYPlane          = 3,
	ESettingsDOF__ESettingsDOF_MAX = 4,

};

// Enum Engine.EFrictionCombineMode
enum class Engine_EFrictionCombineMode : uint8_t
{
	EFrictionCombineMode__Average  = 0,
	EFrictionCombineMode__Min      = 1,
	EFrictionCombineMode__Multiply = 2,
	EFrictionCombineMode__Max      = 3,
	EFrictionCombineMode__EFrictionCombineMode_MAX = 4,

};

// Enum Engine.EAntiAliasingMethodUI
enum class Engine_EAntiAliasingMethodUI : uint8_t
{
	EAntiAliasingMethodUI__AAM_None = 0,
	EAntiAliasingMethodUI__AAM_FXAA = 1,
	EAntiAliasingMethodUI__AAM_TemporalAA = 2,
	EAntiAliasingMethodUI__AAM_MAX = 3,

};

// Enum Engine.EDepthSort
enum class Engine_EDepthSort : uint8_t
{
	EDepthSort__Default            = 0,
	EDepthSort__ForcedOff          = 1,
	EDepthSort__ForcedOn           = 2,
	EDepthSort__EDepthSort_MAX     = 3,

};

// Enum Engine.EEarlyZPass
enum class Engine_EEarlyZPass : uint8_t
{
	EEarlyZPass__None              = 0,
	EEarlyZPass__OpaqueOnly        = 1,
	EEarlyZPass__OpaqueAndMasked   = 2,
	EEarlyZPass__Auto              = 3,
	EEarlyZPass__EEarlyZPass_MAX   = 4,

};

// Enum Engine.ECustomDepthStencil
enum class Engine_ECustomDepthStencil : uint8_t
{
	ECustomDepthStencil__Disabled  = 0,
	ECustomDepthStencil__Enabled   = 1,
	ECustomDepthStencil__EnabledOnDemand = 2,
	ECustomDepthStencil__EnabledWithStencil = 3,
	ECustomDepthStencil__ECustomDepthStencil_MAX = 4,

};

// Enum Engine.ECompositingSampleCount
enum class Engine_ECompositingSampleCount : uint8_t
{
	ECompositingSampleCount__One   = 0,
	ECompositingSampleCount__Two   = 1,
	ECompositingSampleCount__Four  = 2,
	ECompositingSampleCount__Eight = 3,
	ECompositingSampleCount__ECompositingSampleCount_MAX = 4,

};

// Enum Engine.EClearSceneOptions
enum class Engine_EClearSceneOptions : uint8_t
{
	EClearSceneOptions__NoClear    = 0,
	EClearSceneOptions__HardwareClear = 1,
	EClearSceneOptions__QuadAtMaxZ = 2,
	EClearSceneOptions__HardwareClearAndQuadAtMaxZ = 3,
	EClearSceneOptions__EClearSceneOptions_MAX = 4,

};

// Enum Engine.DistributionParamMode
enum class Engine_EDistributionParamMode : uint8_t
{
	DPM_Normal                     = 0,
	DPM_Abs                        = 1,
	DPM_Direct                     = 2,
	DPM_MAX                        = 3,

};

// Enum Engine.EDistributionVectorMirrorFlags
enum class Engine_EDistributionVectorMirrorFlags : uint8_t
{
	EDVMF_Same                     = 0,
	EDVMF_Different                = 1,
	EDVMF_Mirror                   = 2,
	EDVMF_MAX                      = 3,

};

// Enum Engine.EDistributionVectorLockFlags
enum class Engine_EDistributionVectorLockFlags : uint8_t
{
	EDVLF_None                     = 0,
	EDVLF_XY                       = 1,
	EDVLF_XZ                       = 2,
	EDVLF_YZ                       = 3,
	EDVLF_XYZ                      = 4,
	EDVLF_MAX                      = 5,

};

// Enum Engine.ECanCreateConnectionResponse
enum class Engine_ECanCreateConnectionResponse : uint8_t
{
	CONNECT_RESPONSE_MAKE          = 0,
	CONNECT_RESPONSE_DISALLOW      = 1,
	CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
	CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
	CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
	CONNECT_RESPONSE_MAX           = 6,

};

// Enum Engine.EGraphType
enum class Engine_EGraphType : uint8_t
{
	GT_Function                    = 0,
	GT_Ubergraph                   = 1,
	GT_Macro                       = 2,
	GT_Animation                   = 3,
	GT_StateMachine                = 4,
	GT_MAX                         = 5,

};

// Enum Engine.EConsoleType
enum class Engine_EConsoleType : uint8_t
{
	CONSOLE_Any                    = 0,
	CONSOLE_Mobile                 = 1,
	CONSOLE_MAX                    = 2,

};

// Enum Engine.ETransitionType
enum class Engine_ETransitionType : uint8_t
{
	TT_None                        = 0,
	TT_Paused                      = 1,
	TT_Loading                     = 2,
	TT_Saving                      = 3,
	TT_Connecting                  = 4,
	TT_Precaching                  = 5,
	TT_WaitingToConnect            = 6,
	TT_MAX                         = 7,

};

// Enum Engine.EFullyLoadPackageType
enum class Engine_EFullyLoadPackageType : uint8_t
{
	FULLYLOAD_Map                  = 0,
	FULLYLOAD_Game_PreLoadClass    = 1,
	FULLYLOAD_Game_PostLoadClass   = 2,
	FULLYLOAD_Always               = 3,
	FULLYLOAD_Mutator              = 4,
	FULLYLOAD_MAX                  = 5,

};

// Enum Engine.EFontImportCharacterSet
enum class Engine_EFontImportCharacterSet : uint8_t
{
	FontICS_Default                = 0,
	FontICS_Ansi                   = 1,
	FontICS_Symbol                 = 2,
	FontICS_MAX                    = 3,

};

// Enum Engine.EFontCacheType
enum class Engine_EFontCacheType : uint8_t
{
	EFontCacheType__Offline        = 0,
	EFontCacheType__Runtime        = 1,
	EFontCacheType__EFontCacheType_MAX = 2,

};

// Enum Engine.EPostCopyOperation
enum class Engine_EPostCopyOperation : uint8_t
{
	EPostCopyOperation__None       = 0,
	EPostCopyOperation__LogicalNegateBool = 1,
	EPostCopyOperation__EPostCopyOperation_MAX = 2,

};

// Enum Engine.EPinHidingMode
enum class Engine_EPinHidingMode : uint8_t
{
	EPinHidingMode__NeverAsPin     = 0,
	EPinHidingMode__PinHiddenByDefault = 1,
	EPinHidingMode__PinShownByDefault = 2,
	EPinHidingMode__AlwaysAsPin    = 3,
	EPinHidingMode__EPinHidingMode_MAX = 4,

};

// Enum Engine.EHIKEffector
enum class Engine_EHIKEffector : uint8_t
{
	HIKEffector_Hips               = 0,
	HIKEffector_LeftAnkle          = 1,
	HIKEffector_RightAnkle         = 2,
	HIKEffector_LeftWrist          = 3,
	HIKEffector_RightWrist         = 4,
	HIKEffector_LeftKnee           = 5,
	HIKEffector_RightKnee          = 6,
	HIKEffector_LeftElbow          = 7,
	HIKEffector_RightElbow         = 8,
	HIKEffector_ChestOrigin        = 9,
	HIKEffector_ChestEnd           = 10,
	HIKEffector_LeftFoot           = 11,
	HIKEffector_RightFoot          = 12,
	HIKEffector_LeftShoulder       = 13,
	HIKEffector_RightShoulder      = 14,
	HIKEffector_Head               = 15,
	HIKEffector_LeftHip            = 16,
	HIKEffector_RightHip           = 17,
	HIKEffector_LeftHand           = 18,
	HIKEffector_RightHand          = 19,
	HIKEffector_LeftHandThumb      = 20,
	HIKEffector_LeftHandIndex      = 21,
	HIKEffector_LeftHandMiddle     = 22,
	HIKEffector_LeftHandRing       = 23,
	HIKEffector_LeftHandPinky      = 24,
	HIKEffector_LeftHandExtraFinger = 25,
	HIKEffector_RightHandThumb     = 26,
	HIKEffector_RightHandIndex     = 27,
	HIKEffector_RightHandMiddle    = 28,
	HIKEffector_RightHandRing      = 29,
	HIKEffector_RightHandPinky     = 30,
	HIKEffector_RightHandExtraFinger = 31,
	HIKEffector_LeftFootThumb      = 32,
	HIKEffector_LeftFootIndex      = 33,
	HIKEffector_LeftFootMiddle     = 34,
	HIKEffector_LeftFootRing       = 35,
	HIKEffector_LeftFootPinky      = 36,
	HIKEffector_LeftFootExtraFinger = 37,
	HIKEffector_RightFootThumb     = 38,
	HIKEffector_RightFootIndex     = 39,
	HIKEffector_RightFootMiddle    = 40,
	HIKEffector_RightFootRing      = 41,
	HIKEffector_RightFootPinky     = 42,
	HIKEffector_RightFootExtraFinger = 43,
	HIKEffector_Last               = 44,
	HIKEffector_MAX                = 45,

};

// Enum Engine.EHIKProperty
enum class Engine_EHIKProperty : uint8_t
{
	HIKProp_HIKForceActorSpaceId   = 0,
	HIKProp_ScaleCompensationId    = 1,
	HIKProp_MassCenterCompensationId = 2,
	HIKProp_AnkleHeightCompensationId = 3,
	HIKProp_AnkleProximityCompensationId = 4,
	HIKProp_HipsHeightCompensationId = 5,
	HIKProp_ReachActorLeftAnkleId  = 6,
	HIKProp_ReachActorRightAnkleId = 7,
	HIKProp_ReachActorChestId      = 8,
	HIKProp_ReachActorLeftWristId  = 9,
	HIKProp_ReachActorRightWristId = 10,
	HIKProp_ReachActorLeftKneeId   = 11,
	HIKProp_ReachActorRightKneeId  = 12,
	HIKProp_ReachActorHeadId       = 13,
	HIKProp_ReachActorLeftElbowId  = 14,
	HIKProp_ReachActorRightElbowId = 15,
	HIKProp_ReachActorLeftAnkleRotationId = 16,
	HIKProp_ReachActorRightAnkleRotationId = 17,
	HIKProp_ReachActorHeadRotationId = 18,
	HIKProp_ReachActorLeftWristRotationId = 19,
	HIKProp_ReachActorRightWristRotationId = 20,
	HIKProp_ReachActorLeftFingerBaseId = 21,
	HIKProp_ReachActorRightFingerBaseId = 22,
	HIKProp_ReachActorLeftToesBaseId = 23,
	HIKProp_ReachActorRightToesBaseId = 24,
	HIKProp_ReachActorLeftFingerBaseRotationId = 25,
	HIKProp_ReachActorRightFingerBaseRotationId = 26,
	HIKProp_ReachActorLeftToesBaseRotationId = 27,
	HIKProp_ReachActorRightToesBaseRotationId = 28,
	HIKProp_ReachActorChestRotationId = 29,
	HIKProp_ReachActorLowerChestRotationId = 30,
	HIKProp_ReachActorLeftHandThumbId = 31,
	HIKProp_ReachActorLeftHandIndexId = 32,
	HIKProp_ReachActorLeftHandMiddleId = 33,
	HIKProp_ReachActorLeftHandRingId = 34,
	HIKProp_ReachActorLeftHandPinkyId = 35,
	HIKProp_ReachActorLeftHandExtraFingerId = 36,
	HIKProp_ReachActorRightHandThumbId = 37,
	HIKProp_ReachActorRightHandIndexId = 38,
	HIKProp_ReachActorRightHandMiddleId = 39,
	HIKProp_ReachActorRightHandRingId = 40,
	HIKProp_ReachActorRightHandPinkyId = 41,
	HIKProp_ReachActorRightHandExtraFingerId = 42,
	HIKProp_ReachActorLeftFootThumbId = 43,
	HIKProp_ReachActorLeftFootIndexId = 44,
	HIKProp_ReachActorLeftFootMiddleId = 45,
	HIKProp_ReachActorLeftFootRingId = 46,
	HIKProp_ReachActorLeftFootPinkyId = 47,
	HIKProp_ReachActorLeftFootExtraFingerId = 48,
	HIKProp_ReachActorRightFootThumbId = 49,
	HIKProp_ReachActorRightFootIndexId = 50,
	HIKProp_ReachActorRightFootMiddleId = 51,
	HIKProp_ReachActorRightFootRingId = 52,
	HIKProp_ReachActorRightFootPinkyId = 53,
	HIKProp_ReachActorRightFootExtraFingerId = 54,
	HIKProp_FootFloorContactId     = 55,
	HIKProp_FootBottomToAnkleId    = 56,
	HIKProp_FootBackToAnkleId      = 57,
	HIKProp_FootMiddleToAnkleId    = 58,
	HIKProp_FootFrontToMiddleId    = 59,
	HIKProp_FootInToAnkleId        = 60,
	HIKProp_FootOutToAnkleId       = 61,
	HIKProp_HandFloorContactId     = 62,
	HIKProp_HandBottomToWristId    = 63,
	HIKProp_HandBackToWristId      = 64,
	HIKProp_HandMiddleToWristId    = 65,
	HIKProp_HandFrontToMiddleId    = 66,
	HIKProp_HandInToWristId        = 67,
	HIKProp_HandOutToWristId       = 68,
	HIKProp_HandContactTypeId      = 69,
	HIKProp_HandFingerContactId    = 70,
	HIKProp_HandFingerContactModeId = 71,
	HIKProp_FootContactTypeId      = 72,
	HIKProp_FootFingerContactId    = 73,
	HIKProp_FootFingerContactModeId = 74,
	HIKProp_LeftUpLegRollId        = 75,
	HIKProp_LeftLegRollId          = 76,
	HIKProp_RightUpLegRollId       = 77,
	HIKProp_RightLegRollId         = 78,
	HIKProp_LeftArmRollId          = 79,
	HIKProp_LeftForeArmRollId      = 80,
	HIKProp_RightArmRollId         = 81,
	HIKProp_RightForeArmRollId     = 82,
	HIKProp_MirrorId               = 83,
	HIKProp_LeftKneeKillPitchId    = 84,
	HIKProp_RightKneeKillPitchId   = 85,
	HIKProp_LeftElbowKillPitchId   = 86,
	HIKProp_RightElbowKillPitchId  = 87,
	HIKProp_CtrlPullLeftFootId     = 88,
	HIKProp_CtrlPullRightFootId    = 89,
	HIKProp_CtrlPullLeftHandId     = 90,
	HIKProp_CtrlPullRightHandId    = 91,
	HIKProp_CtrlPullHeadId         = 92,
	HIKProp_CtrlPullLeftToeBaseId  = 93,
	HIKProp_CtrlPullLeftKneeId     = 94,
	HIKProp_CtrlPullRightToeBaseId = 95,
	HIKProp_CtrlPullRightKneeId    = 96,
	HIKProp_CtrlPullLeftFingerBaseId = 97,
	HIKProp_CtrlPullLeftElbowId    = 98,
	HIKProp_CtrlPullRightFingerBaseId = 99,
	HIKProp_CtrlPullRightElbowId   = 100,
	HIKProp_CtrlChestPullLeftHandId = 101,
	HIKProp_CtrlChestPullRightHandId = 102,
	HIKProp_CtrlResistHipsPositionId = 103,
	HIKProp_CtrlEnforceGravityId   = 104,
	HIKProp_CtrlResistHipsOrientationId = 105,
	HIKProp_CtrlResistChestPositionId = 106,
	HIKProp_CtrlResistChestOrientationId = 107,
	HIKProp_CtrlResistLeftCollarId = 108,
	HIKProp_CtrlResistRightCollarId = 109,
	HIKProp_CtrlResistLeftKneeId   = 110,
	HIKProp_CtrlResistRightKneeId  = 111,
	HIKProp_CtrlResistLeftElbowId  = 112,
	HIKProp_CtrlResistRightElbowId = 113,
	HIKProp_CtrlSpineStiffnessId   = 114,
	HIKProp_HipsTOffsetXId         = 115,
	HIKProp_HipsTOffsetYId         = 116,
	HIKProp_HipsTOffsetZId         = 117,
	HIKProp_ChestTOffsetXId        = 118,
	HIKProp_ChestTOffsetYId        = 119,
	HIKProp_ChestTOffsetZId        = 120,
	HIKProp_FootAutomaticToesId    = 121,
	HIKProp_FootFloorPivotId       = 122,
	HIKProp_PostureId              = 123,
	HIKProp_HandAutomaticFingersId = 124,
	HIKProp_HandFloorPivotId       = 125,
	HIKProp_CtrlNeckStiffnessId    = 126,
	HIKProp_HipsTranslationModeId  = 127,
	HIKProp_FingerSolvingId        = 128,
	HIKProp_FootContactStiffnessId = 129,
	HIKProp_CtrlResistMaximumExtensionLeftKnee = 130,
	HIKProp_CtrlResistMaximumExtensionRightKnee = 131,
	HIKProp_CtrlResistMaximumExtensionLeftElbow = 132,
	HIKProp_CtrlResistMaximumExtensionRightElbow = 133,
	HIKProp_CtrlResistCompressionFactorLeftKnee = 134,
	HIKProp_CtrlResistCompressionFactorRightKnee = 135,
	HIKProp_CtrlResistCompressionFactorLeftElbow = 136,
	HIKProp_CtrlResistCompressionFactorRightElbow = 137,
	HIKProp_HandFingerContactRollStiffness = 138,
	HIKProp_FootFingerContactRollStiffness = 139,
	HIKProp_HandContactStiffness   = 140,
	HIKProp_RollExtractionMode     = 141,
	HIKProp_PullIterationCount     = 142,
	HIKProp_LeftHandThumbTip       = 143,
	HIKProp_LeftHandIndexTip       = 144,
	HIKProp_LeftHandMiddleTip      = 145,
	HIKProp_LeftHandRingTip        = 146,
	HIKProp_LeftHandPinkyTip       = 147,
	HIKProp_LeftHandExtraFingerTip = 148,
	HIKProp_RightHandThumbTip      = 149,
	HIKProp_RightHandIndexTip      = 150,
	HIKProp_RightHandMiddleTip     = 151,
	HIKProp_RightHandRingTip       = 152,
	HIKProp_RightHandPinkyTip      = 153,
	HIKProp_RightHandExtraFingerTip = 154,
	HIKProp_LeftFootThumbTip       = 155,
	HIKProp_LeftFootIndexTip       = 156,
	HIKProp_LeftFootMiddleTip      = 157,
	HIKProp_LeftFootRingTip        = 158,
	HIKProp_LeftFootPinkyTip       = 159,
	HIKProp_LeftFootExtraFingerTip = 160,
	HIKProp_RightFootThumbTip      = 161,
	HIKProp_RightFootIndexTip      = 162,
	HIKProp_RightFootMiddleTip     = 163,
	HIKProp_RightFootRingTip       = 164,
	HIKProp_RightFootPinkyTip      = 165,
	HIKProp_RightFootExtraFingerTip = 166,
	HIKProp_RealisticShoulder      = 167,
	HIKProp_LeftLegMaxExtensionAngle = 168,
	HIKProp_RightLegMaxExtensionAngle = 169,
	HIKProp_LeftArmMaxExtensionAngle = 170,
	HIKProp_RightArmMaxExtensionAngle = 171,
	HIKProp_ExtraCollarRatioId     = 172,
	HIKProp_CollarStiffnessX       = 173,
	HIKProp_CollarStiffnessY       = 174,
	HIKProp_CollarStiffnessZ       = 175,
	HIKProp_ReachActorLeftShoulderId = 176,
	HIKProp_ReachActorRightShoulderId = 177,
	HIKProp_FingerPropagationId    = 178,
	HIKProp_RealisticLeftKneeSolvingId = 179,
	HIKProp_RealisticRightKneeSolvingId = 180,
	HIKProp_StretchStartArmsAndLegs = 181,
	HIKProp_StretchStopArmsAndLegs = 182,
	HIKProp_SnSScaleArmsAndLegs    = 183,
	HIKProp_SnSReachLeftWrist      = 184,
	HIKProp_SnSReachRightWrist     = 185,
	HIKProp_SnSReachLeftAnkle      = 186,
	HIKProp_SnSReachRightAnkle     = 187,
	HIKProp_SnSScaleSpine          = 188,
	HIKProp_SnSScaleSpineChildren  = 189,
	HIKProp_SnSReachChestEnd       = 190,
	HIKProp_SnSScaleNeck           = 191,
	HIKProp_SnSReachHead           = 192,
	HIKProp_LeftUpLegRollExId      = 193,
	HIKProp_LeftLegRollExId        = 194,
	HIKProp_RightUpLegRollExId     = 195,
	HIKProp_RightLegRollExId       = 196,
	HIKProp_LeftArmRollExId        = 197,
	HIKProp_LeftForeArmRollExId    = 198,
	HIKProp_RightArmRollExId       = 199,
	HIKProp_RightForeArmRollExId   = 200,
	HIKProp_TopSpineCorrectionId   = 201,
	HIKProp_LowerSpineCorrectionId = 202,
	HIKProp_SnSSmoothReach         = 203,
	HIKProp_LockXId                = 204,
	HIKProp_LockYId                = 205,
	HIKProp_LockZId                = 206,
	HIKProp_RealisticArmSolvingId  = 207,
	HIKProp_LastPropertyId         = 208,
	HIKProp_MAX                    = 209,

};

// Enum Engine.EHIKEffectorSpace
enum class Engine_EHIKEffectorSpace : uint8_t
{
	HIKEffectorSpace_World         = 0,
	HIKEffectorSpace_Character     = 1,
	HIKEffectorSpace_MAX           = 2,

};

// Enum Engine.EHIKHandsContactType
enum class Engine_EHIKHandsContactType : uint8_t
{
	HIKHandsContactType_Normal     = 0,
	HIKHandsContactType_Wrist      = 1,
	HIKHandsContactType_FingerBase = 2,
	HIKHandsContactType_Hoof       = 3,
	HIKHandsContactType_MAX        = 4,

};

// Enum Engine.EHIKFeetContactType
enum class Engine_EHIKFeetContactType : uint8_t
{
	HIKFeetContactType_Normal      = 0,
	HIKFeetContactType_Ankle       = 1,
	HIKFeetContactType_ToeBase     = 2,
	HIKFeetContactType_Hoof        = 3,
	HIKFeetContactType_MAX         = 4,

};

// Enum Engine.ETrackActiveCondition
enum class Engine_ETrackActiveCondition : uint8_t
{
	ETAC_Always                    = 0,
	ETAC_GoreEnabled               = 1,
	ETAC_GoreDisabled              = 2,
	ETAC_MAX                       = 3,

};

// Enum Engine.EInterpTrackMoveRotMode
enum class Engine_EInterpTrackMoveRotMode : uint8_t
{
	IMR_Keyframed                  = 0,
	IMR_LookAtGroup                = 1,
	IMR_Ignore                     = 2,
	IMR_MAX                        = 3,

};

// Enum Engine.EInterpMoveAxis
enum class Engine_EInterpMoveAxis : uint8_t
{
	AXIS_TranslationX              = 0,
	AXIS_TranslationY              = 1,
	AXIS_TranslationZ              = 2,
	AXIS_RotationX                 = 3,
	AXIS_RotationY                 = 4,
	AXIS_RotationZ                 = 5,
	AXIS_MAX                       = 6,

};

// Enum Engine.ETrackToggleAction
enum class Engine_ETrackToggleAction : uint8_t
{
	ETTA_Off                       = 0,
	ETTA_On                        = 1,
	ETTA_Toggle                    = 2,
	ETTA_Trigger                   = 3,
	ETTA_MAX                       = 4,

};

// Enum Engine.EVisibilityTrackCondition
enum class Engine_EVisibilityTrackCondition : uint8_t
{
	EVTC_Always                    = 0,
	EVTC_GoreEnabled               = 1,
	EVTC_GoreDisabled              = 2,
	EVTC_MAX                       = 3,

};

// Enum Engine.EVisibilityTrackAction
enum class Engine_EVisibilityTrackAction : uint8_t
{
	EVTA_Hide                      = 0,
	EVTA_Show                      = 1,
	EVTA_Toggle                    = 2,
	EVTA_MAX                       = 3,

};

// Enum Engine.EClampMode
enum class Engine_EClampMode : uint8_t
{
	CMODE_Clamp                    = 0,
	CMODE_ClampMin                 = 1,
	CMODE_ClampMax                 = 2,
	CMODE_MAX                      = 3,

};

// Enum Engine.ECustomMaterialOutputType
enum class Engine_ECustomMaterialOutputType : uint8_t
{
	CMOT_Float1                    = 0,
	CMOT_Float2                    = 1,
	CMOT_Float3                    = 2,
	CMOT_Float4                    = 3,
	CMOT_MAX                       = 4,

};

// Enum Engine.EDepthOfFieldFunctionValue
enum class Engine_EDepthOfFieldFunctionValue : uint8_t
{
	TDOF_NearAndFarMask            = 0,
	TDOF_NearMask                  = 1,
	TDOF_FarMask                   = 2,
	TDOF_MAX                       = 3,

};

// Enum Engine.EFunctionInputType
enum class Engine_EFunctionInputType : uint8_t
{
	FunctionInput_Scalar           = 0,
	FunctionInput_Vector2          = 1,
	FunctionInput_Vector3          = 2,
	FunctionInput_Vector4          = 3,
	FunctionInput_Texture2D        = 4,
	FunctionInput_TextureCube      = 5,
	FunctionInput_StaticBool       = 6,
	FunctionInput_MaterialAttributes = 7,
	FunctionInput_MAX              = 8,

};

// Enum Engine.ENoiseFunction
enum class Engine_ENoiseFunction : uint8_t
{
	NOISEFUNCTION_Simplex          = 0,
	NOISEFUNCTION_Perlin           = 1,
	NOISEFUNCTION_Gradient         = 2,
	NOISEFUNCTION_FastGradient     = 3,
	NOISEFUNCTION_MAX              = 4,

};

// Enum Engine.EMaterialSceneAttributeInputMode
enum class Engine_EMaterialSceneAttributeInputMode : uint8_t
{
	EMaterialSceneAttributeInputMode__Coordinates = 0,
	EMaterialSceneAttributeInputMode__OffsetFraction = 1,
	EMaterialSceneAttributeInputMode__EMaterialSceneAttributeInputMode_MAX = 2,

};

// Enum Engine.ESceneTextureId
enum class Engine_ESceneTextureId : uint8_t
{
	PPI_SceneColor                 = 0,
	PPI_SceneDepth                 = 1,
	PPI_DiffuseColor               = 2,
	PPI_SpecularColor              = 3,
	PPI_SubsurfaceColor            = 4,
	PPI_BaseColor                  = 5,
	PPI_Specular                   = 6,
	PPI_Metallic                   = 7,
	PPI_WorldNormal                = 8,
	PPI_SeparateTranslucency       = 9,
	PPI_Opacity                    = 10,
	PPI_Roughness                  = 11,
	PPI_MaterialAO                 = 12,
	PPI_CustomDepth                = 13,
	PPI_PostProcessInput0          = 14,
	PPI_PostProcessInput1          = 15,
	PPI_PostProcessInput2          = 16,
	PPI_PostProcessInput3          = 17,
	PPI_PostProcessInput4          = 18,
	PPI_PostProcessInput5          = 19,
	PPI_PostProcessInput6          = 20,
	PPI_DecalMask                  = 21,
	PPI_ShadingModel               = 22,
	PPI_AmbientOcclusion           = 23,
	PPI_CustomStencil              = 24,
	PPI_PlanarReflections          = 25,
	PPI_Mask                       = 26,
	PPI_PreviousMask               = 27,
	PPI_MAX                        = 28,

};

// Enum Engine.ESpeedTreeLODType
enum class Engine_ESpeedTreeLODType : uint8_t
{
	STLOD_Pop                      = 0,
	STLOD_Smooth                   = 1,
	STLOD_MAX                      = 2,

};

// Enum Engine.ESpeedTreeWindType
enum class Engine_ESpeedTreeWindType : uint8_t
{
	STW_None                       = 0,
	STW_Fastest                    = 1,
	STW_Fast                       = 2,
	STW_Better                     = 3,
	STW_Best                       = 4,
	STW_Palm                       = 5,
	STW_BestPlus                   = 6,
	STW_MAX                        = 7,

};

// Enum Engine.ESpeedTreeGeometryType
enum class Engine_ESpeedTreeGeometryType : uint8_t
{
	STG_Branch                     = 0,
	STG_Frond                      = 1,
	STG_Leaf                       = 2,
	STG_FacingLeaf                 = 3,
	STG_Billboard                  = 4,
	STG_MAX                        = 5,

};

// Enum Engine.ETextureMipValueMode
enum class Engine_ETextureMipValueMode : uint8_t
{
	TMVM_None                      = 0,
	TMVM_MipLevel                  = 1,
	TMVM_MipBias                   = 2,
	TMVM_Derivative                = 3,
	TMVM_MAX                       = 4,

};

// Enum Engine.ETextureColorChannel
enum class Engine_ETextureColorChannel : uint8_t
{
	TCC_Red                        = 0,
	TCC_Green                      = 1,
	TCC_Blue                       = 2,
	TCC_Alpha                      = 3,
	TCC_MAX                        = 4,

};

// Enum Engine.EMaterialVectorCoordTransform
enum class Engine_EMaterialVectorCoordTransform : uint8_t
{
	TRANSFORM_Tangent              = 0,
	TRANSFORM_Local                = 1,
	TRANSFORM_World                = 2,
	TRANSFORM_View                 = 3,
	TRANSFORM_MAX                  = 4,

};

// Enum Engine.EMaterialVectorCoordTransformSource
enum class Engine_EMaterialVectorCoordTransformSource : uint8_t
{
	TRANSFORMSOURCE_Tangent        = 0,
	TRANSFORMSOURCE_Local          = 1,
	TRANSFORMSOURCE_World          = 2,
	TRANSFORMSOURCE_View           = 3,
	TRANSFORMSOURCE_MAX            = 4,

};

// Enum Engine.EMaterialPositionTransformSource
enum class Engine_EMaterialPositionTransformSource : uint8_t
{
	TRANSFORMPOSSOURCE_Local       = 0,
	TRANSFORMPOSSOURCE_World       = 1,
	TRANSFORMPOSSOURCE_TranslatedWorld = 2,
	TRANSFORMPOSSOURCE_View        = 3,
	TRANSFORMPOSSOURCE_MAX         = 4,

};

// Enum Engine.EMaterialExposedViewProperty
enum class Engine_EMaterialExposedViewProperty : uint8_t
{
	MEVP_BufferSize                = 0,
	MEVP_FieldOfView               = 1,
	MEVP_TanHalfFieldOfView        = 2,
	MEVP_ViewSize                  = 3,
	MEVP_WorldSpaceCameraPosition  = 4,
	MEVP_MAX                       = 5,

};

// Enum Engine.EWorldPositionIncludedOffsets
enum class Engine_EWorldPositionIncludedOffsets : uint8_t
{
	WPT_Default                    = 0,
	WPT_ExcludeAllShaderOffsets    = 1,
	WPT_CameraRelative             = 2,
	WPT_CameraRelativeNoOffsets    = 3,
	WPT_MAX                        = 4,

};

// Enum Engine.EMaterialDecalResponse
enum class Engine_EMaterialDecalResponse : uint8_t
{
	MDR_None                       = 0,
	MDR_ColorNormalRoughness       = 1,
	MDR_Color                      = 2,
	MDR_ColorNormal                = 3,
	MDR_ColorRoughness             = 4,
	MDR_Normal                     = 5,
	MDR_NormalRoughness            = 6,
	MDR_Roughness                  = 7,
	MDR_MAX                        = 8,

};

// Enum Engine.EMaterialDomain
enum class Engine_EMaterialDomain : uint8_t
{
	MD_Surface                     = 0,
	MD_DeferredDecal               = 1,
	MD_LightFunction               = 2,
	MD_PostProcess                 = 3,
	MD_UI                          = 4,
	MD_MAX                         = 5,

};

// Enum Engine.EDecalBlendMode
enum class Engine_EDecalBlendMode : uint8_t
{
	DBM_Translucent                = 0,
	DBM_Stain                      = 1,
	DBM_Normal                     = 2,
	DBM_Emissive                   = 3,
	DBM_DBuffer_ColorNormalRoughness = 4,
	DBM_DBuffer_Color              = 5,
	DBM_DBuffer_ColorNormal        = 6,
	DBM_DBuffer_ColorRoughness     = 7,
	DBM_DBuffer_Normal             = 8,
	DBM_DBuffer_NormalRoughness    = 9,
	DBM_DBuffer_Roughness          = 10,
	DBM_Volumetric_DistanceFunction = 11,
	DBM_Wet                        = 12,
	DBM_MAX                        = 13,

};

// Enum Engine.ECanvasRenderTargetMips
enum class Engine_ECanvasRenderTargetMips : uint8_t
{
	ECanvasRenderTargetMips__Disabled = 0,
	ECanvasRenderTargetMips__Enabled = 1,
	ECanvasRenderTargetMips__ECanvasRenderTargetMips_MAX = 2,

};

// Enum Engine.EEmitterRenderMode
enum class Engine_EEmitterRenderMode : uint8_t
{
	ERM_Normal                     = 0,
	ERM_Point                      = 1,
	ERM_Cross                      = 2,
	ERM_LightsOnly                 = 3,
	ERM_None                       = 4,
	ERM_MAX                        = 5,

};

// Enum Engine.EParticleSubUVInterpMethod
enum class Engine_EParticleSubUVInterpMethod : uint8_t
{
	PSUVIM_None                    = 0,
	PSUVIM_Linear                  = 1,
	PSUVIM_Linear_NoBlend          = 2,
	PSUVIM_Linear_Blend            = 3,
	PSUVIM_Random                  = 4,
	PSUVIM_Random_Blend            = 5,
	PSUVIM_MAX                     = 6,

};

// Enum Engine.EEmitterQuality
enum class Engine_EEmitterQuality : uint8_t
{
	EEmitterQuality__Low           = 0,
	EEmitterQuality__Medium        = 1,
	EEmitterQuality__High          = 2,
	EEmitterQuality__EEmitterQuality_MAX = 3,

};

// Enum Engine.EBurstGroup
enum class Engine_EBurstGroup : uint8_t
{
	GroupA                         = 0,
	GroupB                         = 1,
	GroupC                         = 2,
	GroupD                         = 3,
	GroupE                         = 4,
	GroupReplacement               = 5,
	Group_MAX                      = 6,
	EBurstGroup_MAX                = 7,

};

// Enum Engine.EParticleBurstMethod
enum class Engine_EParticleBurstMethod : uint8_t
{
	EPBM_Instant                   = 0,
	EPBM_Interpolated              = 1,
	EPBM_MAX                       = 2,

};

// Enum Engine.EParticleScreenAlignment
enum class Engine_EParticleScreenAlignment : uint8_t
{
	PSA_FacingCameraPosition       = 0,
	PSA_Square                     = 1,
	PSA_Rectangle                  = 2,
	PSA_Velocity                   = 3,
	PSA_AwayFromCenter             = 4,
	PSA_TypeSpecific               = 5,
	PSA_VelocityScreen             = 6,
	PSA_InitialVelocityScreen      = 7,
	PSA_InitialVelocity            = 8,
	PSA_MAX                        = 9,

};

// Enum Engine.EParticleSourceSelectionMethod
enum class Engine_EParticleSourceSelectionMethod : uint8_t
{
	EPSSM_Random                   = 0,
	EPSSM_Sequential               = 1,
	EPSSM_MAX                      = 2,

};

// Enum Engine.EModuleType
enum class Engine_EModuleType : uint8_t
{
	EPMT_General                   = 0,
	EPMT_TypeData                  = 1,
	EPMT_Beam                      = 2,
	EPMT_Trail                     = 3,
	EPMT_Spawn                     = 4,
	EPMT_Required                  = 5,
	EPMT_Event                     = 6,
	EPMT_Light                     = 7,
	EPMT_MAX                       = 8,

};

// Enum Engine.EAccelerationGroupNames
enum class Engine_EAccelerationGroupNames : uint8_t
{
	AccelerationGroupB             = 0,
	AccelerationGroupC             = 1,
	AccelerationGroupD             = 2,
	AccelerationGroupE             = 3,
	AccelerationGroupReplacement   = 4,
	AccelerationGroup_MAX          = 5,
	EAccelerationGroupNames_MAX    = 6,

};

// Enum Engine.EDragOnLocalVelocityGroupName
enum class Engine_EDragOnLocalVelocityGroupName : uint8_t
{
	DragOnLocalVelocityGroupB      = 0,
	DragOnLocalVelocityGroupC      = 1,
	DragOnLocalVelocityGroupD      = 2,
	DragOnLocalVelocityGroupE      = 3,
	DragOnLocalVelocityGroupReplacement = 4,
	DragOnLocalVelocityGroup_MAX   = 5,
	EDragOnLocalVelocityGroupName_MAX = 6,

};

// Enum Engine.EDragCoefficientGroupName
enum class Engine_EDragCoefficientGroupName : uint8_t
{
	DragCoefficientGroupB          = 0,
	DragCoefficientGroupC          = 1,
	DragCoefficientGroupD          = 2,
	DragCoefficientGroupE          = 3,
	DragCoefficientGroupReplacement = 4,
	DragCoefficientGroup_MAX       = 5,
	EDragCoefficientGroupName_MAX  = 6,

};

// Enum Engine.EAttractorParticleSelectionMethod
enum class Engine_EAttractorParticleSelectionMethod : uint8_t
{
	EAPSM_Random                   = 0,
	EAPSM_Sequential               = 1,
	EAPSM_MAX                      = 2,

};

// Enum Engine.Beam2SourceTargetTangentMethod
enum class Engine_EBeam2SourceTargetTangentMethod : uint8_t
{
	PEB2STTM_Direct                = 0,
	PEB2STTM_UserSet               = 1,
	PEB2STTM_Distribution          = 2,
	PEB2STTM_Emitter               = 3,
	PEB2STTM_MAX                   = 4,

};

// Enum Engine.Beam2SourceTargetMethod
enum class Engine_EBeam2SourceTargetMethod : uint8_t
{
	PEB2STM_Default                = 0,
	PEB2STM_UserSet                = 1,
	PEB2STM_Emitter                = 2,
	PEB2STM_Particle               = 3,
	PEB2STM_Actor                  = 4,
	PEB2STM_MAX                    = 5,

};

// Enum Engine.BeamModifierType
enum class Engine_EBeamModifierType : uint8_t
{
	PEB2MT_Source                  = 0,
	PEB2MT_Target                  = 1,
	PEB2MT_MAX                     = 2,

};

// Enum Engine.EParticleCameraOffsetUpdateMethod
enum class Engine_EParticleCameraOffsetUpdateMethod : uint8_t
{
	EPCOUM_DirectSet               = 0,
	EPCOUM_Additive                = 1,
	EPCOUM_Scalar                  = 2,
	EPCOUM_MAX                     = 3,

};

// Enum Engine.EParticleCollisionComplete
enum class Engine_EParticleCollisionComplete : uint8_t
{
	EPCC_Kill                      = 0,
	EPCC_Freeze                    = 1,
	EPCC_HaltCollisions            = 2,
	EPCC_FreezeTranslation         = 3,
	EPCC_FreezeRotation            = 4,
	EPCC_FreezeMovement            = 5,
	EPCC_MAX                       = 6,

};

// Enum Engine.EParticleCollisionResponse
enum class Engine_EParticleCollisionResponse : uint8_t
{
	EParticleCollisionResponse__Bounce = 0,
	EParticleCollisionResponse__Stop = 1,
	EParticleCollisionResponse__Kill = 2,
	EParticleCollisionResponse__EParticleCollisionResponse_MAX = 3,

};

// Enum Engine.EStartAlphaGroupsName
enum class Engine_EStartAlphaGroupsName : uint8_t
{
	StartAlphaB                    = 0,
	StartAlphaC                    = 1,
	StartAlphaD                    = 2,
	StartAlphaE                    = 3,
	StartAlphaReplacement          = 4,
	StartAlpha_MAX                 = 5,
	EStartAlphaGroupsName_MAX      = 6,

};

// Enum Engine.EStartColorGroupsName
enum class Engine_EStartColorGroupsName : uint8_t
{
	StartColorB                    = 0,
	StartColorC                    = 1,
	StartColorD                    = 2,
	StartColorE                    = 3,
	StartColorReplacement          = 4,
	StartColor_MAX                 = 5,
	EStartColorGroupsName_MAX      = 6,

};

// Enum Engine.EGPUParticleCollisionEventLimit
enum class Engine_EGPUParticleCollisionEventLimit : uint8_t
{
	EGPUParticleCollisionEventLimit__OnlyOnFirstCollision = 0,
	EGPUParticleCollisionEventLimit__OnlyOnFirstTwoCollisions = 1,
	EGPUParticleCollisionEventLimit__Unlimited = 2,
	EGPUParticleCollisionEventLimit__EGPUParticleCollisionEventLimit_MAX = 3,

};

// Enum Engine.ESpawnEventGroupNames
enum class Engine_ESpawnEventGroupNames : uint8_t
{
	SpawnEventGroupB               = 0,
	SpawnEventGroupC               = 1,
	SpawnEventGroupD               = 2,
	SpawnEventGroupE               = 3,
	SpawnEventGroupReplacemnent    = 4,
	SpawnEventGroup_MAX            = 5,
	ESpawnEventGroupNames_MAX      = 6,

};

// Enum Engine.EFFTWaterKillPointLocation
enum class Engine_EFFTWaterKillPointLocation : uint8_t
{
	FFTWaterKillPointLocation_LowerBound = 0,
	FFTWaterKillPointLocation_Center = 1,
	FFTWaterKillPointLocation_UpperBound = 2,
	FFTWaterKillPointLocation_MAX  = 3,

};

// Enum Engine.EFFTWaterKillPointGroupName
enum class Engine_EFFTWaterKillPointGroupName : uint8_t
{
	FFTWaterKillPointGroupB        = 0,
	FFTWaterKillPointGroupC        = 1,
	FFTWaterKillPointGroupD        = 2,
	FFTWaterKillPointGroupE        = 3,
	FFTWaterKillPointGroupReplacement = 4,
	FFTWaterKillPointGroup_MAX     = 5,
	EFFTWaterKillPointGroupName_MAX = 6,

};

// Enum Engine.ELifetimeGroupsName
enum class Engine_ELifetimeGroupsName : uint8_t
{
	LifetimeB                      = 0,
	LifetimeC                      = 1,
	LifetimeD                      = 2,
	LifetimeE                      = 3,
	LifetimeReplacement            = 4,
	Lifetime_MAX                   = 5,
	ELifetimeGroupsName_MAX        = 6,

};

// Enum Engine.EStartLocationGroupNames
enum class Engine_EStartLocationGroupNames : uint8_t
{
	StartLocationGroupB            = 0,
	StartLocationGroupC            = 1,
	StartLocationGroupD            = 2,
	StartLocationGroupE            = 3,
	StartLocationGroup_MAX         = 4,
	EStartLocationGroupNames_MAX   = 5,

};

// Enum Engine.ELocationBoneSocketSelectionMethod
enum class Engine_ELocationBoneSocketSelectionMethod : uint8_t
{
	BONESOCKETSEL_Sequential       = 0,
	BONESOCKETSEL_Random           = 1,
	BONESOCKETSEL_MAX              = 2,

};

// Enum Engine.ELocationBoneSocketSource
enum class Engine_ELocationBoneSocketSource : uint8_t
{
	BONESOCKETSOURCE_Bones         = 0,
	BONESOCKETSOURCE_Sockets       = 1,
	BONESOCKETSOURCE_MAX           = 2,

};

// Enum Engine.ELocationEmitterSelectionMethod
enum class Engine_ELocationEmitterSelectionMethod : uint8_t
{
	ELESM_Random                   = 0,
	ELESM_Sequential               = 1,
	ELESM_MAX                      = 2,

};

// Enum Engine.EStartHeightGroupNames
enum class Engine_EStartHeightGroupNames : uint8_t
{
	StartHeightGroupB              = 0,
	StartHeightGroupC              = 1,
	StartHeightGroupD              = 2,
	StartHeightGroupE              = 3,
	StartHeightGroup_MAX           = 4,
	EStartHeightGroupNames_MAX     = 5,

};

// Enum Engine.EStartRadiusGroupNames
enum class Engine_EStartRadiusGroupNames : uint8_t
{
	StartRadiusGroupB              = 0,
	StartRadiusGroupC              = 1,
	StartRadiusGroupD              = 2,
	StartRadiusGroupE              = 3,
	StartRadiusGroup_MAX           = 4,
	EStartRadiusGroupNames_MAX     = 5,

};

// Enum Engine.EAngleRangeGroupNames
enum class Engine_EAngleRangeGroupNames : uint8_t
{
	AngleRangeGroupB               = 0,
	AngleRangeGroupC               = 1,
	AngleRangeGroupD               = 2,
	AngleRangeGroupE               = 3,
	AngleRangeGroup_MAX            = 4,
	EAngleRangeGroupNames_MAX      = 5,

};

// Enum Engine.CylinderHeightAxis
enum class Engine_ECylinderHeightAxis : uint8_t
{
	PMLPC_HEIGHTAXIS_X             = 0,
	PMLPC_HEIGHTAXIS_Y             = 1,
	PMLPC_HEIGHTAXIS_Z             = 2,
	PMLPC_HEIGHTAXIS_MAX           = 3,

};

// Enum Engine.ELocationSkelVertSurfaceSource
enum class Engine_ELocationSkelVertSurfaceSource : uint8_t
{
	VERTSURFACESOURCE_Vert         = 0,
	VERTSURFACESOURCE_Surface      = 1,
	VERTSURFACESOURCE_MAX          = 2,

};

// Enum Engine.EOrbitChainMode
enum class Engine_EOrbitChainMode : uint8_t
{
	EOChainMode_Add                = 0,
	EOChainMode_Scale              = 1,
	EOChainMode_Link               = 2,
	EOChainMode_MAX                = 3,

};

// Enum Engine.EParticleAxisLock
enum class Engine_EParticleAxisLock : uint8_t
{
	EPAL_NONE                      = 0,
	EPAL_X                         = 1,
	EPAL_Y                         = 2,
	EPAL_Z                         = 3,
	EPAL_NEGATIVE_X                = 4,
	EPAL_NEGATIVE_Y                = 5,
	EPAL_NEGATIVE_Z                = 6,
	EPAL_ROTATE_X                  = 7,
	EPAL_ROTATE_Y                  = 8,
	EPAL_ROTATE_Z                  = 9,
	EPAL_MAX                       = 10,

};

// Enum Engine.EEmitterDynamicParameterValue
enum class Engine_EEmitterDynamicParameterValue : uint8_t
{
	EDPV_UserSet                   = 0,
	EDPV_VelocityX                 = 1,
	EDPV_VelocityY                 = 2,
	EDPV_VelocityZ                 = 3,
	EDPV_VelocityMag               = 4,
	EDPV_MAX                       = 5,

};

// Enum Engine.EGroupScales
enum class Engine_EGroupScales : uint8_t
{
	GroupAScale                    = 0,
	GroupBScale                    = 1,
	GroupCScale                    = 2,
	GroupDScale                    = 3,
	GroupEScale                    = 4,
	GroupReplacementScale          = 5,
	GroupScale_MAX                 = 6,
	EGroupScales_MAX               = 7,

};

// Enum Engine.EOpacitySourceMode
enum class Engine_EOpacitySourceMode : uint8_t
{
	OSM_Alpha                      = 0,
	OSM_ColorBrightness            = 1,
	OSM_RedChannel                 = 2,
	OSM_GreenChannel               = 3,
	OSM_BlueChannel                = 4,
	OSM_MAX                        = 5,

};

// Enum Engine.ESubUVBoundingVertexCount
enum class Engine_ESubUVBoundingVertexCount : uint8_t
{
	BVC_FourVertices               = 0,
	BVC_EightVertices              = 1,
	BVC_MAX                        = 2,

};

// Enum Engine.EPriorityGroups
enum class Engine_EPriorityGroups : uint8_t
{
	PriorityZero                   = 0,
	PriorityOne                    = 1,
	PriorityTwo                    = 2,
	PriorityThree                  = 3,
	PriorityFour                   = 4,
	PriorityFive                   = 5,
	Priority_MAX                   = 6,
	EPriorityGroups_MAX            = 7,

};

// Enum Engine.EScreenAlignmentGroupNames
enum class Engine_EScreenAlignmentGroupNames : uint8_t
{
	ScreenAlignmentGroupB          = 0,
	ScreenAlignmentGroupC          = 1,
	ScreenAlignmentGroupD          = 2,
	ScreenAlignmentGroupE          = 3,
	ScreenAlignmentGroupReplacement = 4,
	ScreenAlignmentGroup_MAX       = 5,
	EScreenAlignmentGroupNames_MAX = 6,

};

// Enum Engine.EEmitterOriginGroupNames
enum class Engine_EEmitterOriginGroupNames : uint8_t
{
	EmitterOriginGroupB            = 0,
	EmitterOriginGroupC            = 1,
	EmitterOriginGroupD            = 2,
	EmitterOriginGroupE            = 3,
	EmitterOriginGroupReplacement  = 4,
	EmitterOriginGroup_MAX         = 5,
	EEmitterOriginGroupNames_MAX   = 6,

};

// Enum Engine.EEmitterNormalsMode
enum class Engine_EEmitterNormalsMode : uint8_t
{
	ENM_CameraFacing               = 0,
	ENM_Spherical                  = 1,
	ENM_Cylindrical                = 2,
	ENM_MAX                        = 3,

};

// Enum Engine.EParticleSortMode
enum class Engine_EParticleSortMode : uint8_t
{
	PSORTMODE_None                 = 0,
	PSORTMODE_ViewProjDepth        = 1,
	PSORTMODE_DistanceToView       = 2,
	PSORTMODE_Age_OldestFirst      = 3,
	PSORTMODE_Age_NewestFirst      = 4,
	PSORTMODE_MAX                  = 5,

};

// Enum Engine.EParticleUVFlipMode
enum class Engine_EParticleUVFlipMode : uint8_t
{
	EParticleUVFlipMode__None      = 0,
	EParticleUVFlipMode__FlipUV    = 1,
	EParticleUVFlipMode__FlipUOnly = 2,
	EParticleUVFlipMode__FlipVOnly = 3,
	EParticleUVFlipMode__RandomFlipUV = 4,
	EParticleUVFlipMode__RandomFlipUOnly = 5,
	EParticleUVFlipMode__RandomFlipVOnly = 6,
	EParticleUVFlipMode__RandomFlipUVIndependent = 7,
	EParticleUVFlipMode__EParticleUVFlipMode_MAX = 8,

};

// Enum Engine.ERotationAboutArbitraryAxisGroupName
enum class Engine_ERotationAboutArbitraryAxisGroupName : uint8_t
{
	RotationAboutArbitraryAxisGroupB = 0,
	RotationAboutArbitraryAxisGroupC = 1,
	RotationAboutArbitraryAxisGroupD = 2,
	RotationAboutArbitraryAxisGroupE = 3,
	RotationAboutArbitraryAxisGroupReplacement = 4,
	RotationAboutArbitraryAxisGroup_MAX = 5,
	ERotationAboutArbitraryAxisGroupName_MAX = 6,

};

// Enum Engine.EStartRotationGroupNames
enum class Engine_EStartRotationGroupNames : uint8_t
{
	StartRotationGroupB            = 0,
	StartRotationGroupC            = 1,
	StartRotationGroupD            = 2,
	StartRotationGroupE            = 3,
	StartRotationGroupReplacement  = 4,
	StartRotationGroup_MAX         = 5,
	EStartRotationGroupNames_MAX   = 6,

};

// Enum Engine.EStartRotationRateGroupNames
enum class Engine_EStartRotationRateGroupNames : uint8_t
{
	StartRotationRateGroupB        = 0,
	StartRotationRateGroupC        = 1,
	StartRotationRateGroupD        = 2,
	StartRotationRateGroupE        = 3,
	StartRotationRateGroupReplacement = 4,
	StartRotationRateGroup_MAX     = 5,
	EStartRotationRateGroupNames_MAX = 6,

};

// Enum Engine.EStartSizeGroupNames
enum class Engine_EStartSizeGroupNames : uint8_t
{
	StartSizeB                     = 0,
	StartSizeC                     = 1,
	StartSizeD                     = 2,
	StartSizeE                     = 3,
	StartSizeReplacement           = 4,
	StartSize_MAX                  = 5,
	EStartSizeGroupNames_MAX       = 6,

};

// Enum Engine.ERateGroupNames
enum class Engine_ERateGroupNames : uint8_t
{
	RateB                          = 0,
	RateC                          = 1,
	RateD                          = 2,
	RateE                          = 3,
	RateReplacement                = 4,
	Rate_MAX                       = 5,
	ERateGroupNames_MAX            = 6,

};

// Enum Engine.ETrail2SourceMethod
enum class Engine_ETrail2SourceMethod : uint8_t
{
	PET2SRCM_Default               = 0,
	PET2SRCM_Particle              = 1,
	PET2SRCM_Actor                 = 2,
	PET2SRCM_MAX                   = 3,

};

// Enum Engine.EBeamTaperMethod
enum class Engine_EBeamTaperMethod : uint8_t
{
	PEBTM_None                     = 0,
	PEBTM_Full                     = 1,
	PEBTM_Partial                  = 2,
	PEBTM_MAX                      = 3,

};

// Enum Engine.EBeam2Method
enum class Engine_EBeam2Method : uint8_t
{
	PEB2M_Distance                 = 0,
	PEB2M_Target                   = 1,
	PEB2M_Branch                   = 2,
	PEB2M_MAX                      = 3,

};

// Enum Engine.EInteractionWithKillPlane
enum class Engine_EInteractionWithKillPlane : uint8_t
{
	None                           = 0,
	KillOnFrontOfPlanes            = 1,
	KillOnBackOfPlanes             = 2,
	CollideWithFront               = 3,
	KillOnIntersectionPlanes       = 4,
	EInteractionWithKillPlane_MAX  = 5,

};

// Enum Engine.EParticleAlphaThresholdLevel
enum class Engine_EParticleAlphaThresholdLevel : uint8_t
{
	NoCulling                      = 0,
	Permissive                     = 1,
	Mild                           = 2,
	MildAggressive                 = 3,
	Aggressive                     = 4,
	EParticleAlphaThresholdLevel_MAX = 5,

};

// Enum Engine.EMeshCameraFacingOptions
enum class Engine_EMeshCameraFacingOptions : uint8_t
{
	XAxisFacing_NoUp               = 0,
	XAxisFacing_ZUp                = 1,
	XAxisFacing_NegativeZUp        = 2,
	XAxisFacing_YUp                = 3,
	XAxisFacing_NegativeYUp        = 4,
	LockedAxis_ZAxisFacing         = 5,
	LockedAxis_NegativeZAxisFacing = 6,
	LockedAxis_YAxisFacing         = 7,
	LockedAxis_NegativeYAxisFacing = 8,
	VelocityAligned_ZAxisFacing    = 9,
	VelocityAligned_NegativeZAxisFacing = 10,
	VelocityAligned_YAxisFacing    = 11,
	VelocityAligned_NegativeYAxisFacing = 12,
	EMeshCameraFacingOptions_MAX   = 13,

};

// Enum Engine.EMeshCameraFacingUpAxis
enum class Engine_EMeshCameraFacingUpAxis : uint8_t
{
	CameraFacing_NoneUP            = 0,
	CameraFacing_ZUp               = 1,
	CameraFacing_NegativeZUp       = 2,
	CameraFacing_YUp               = 3,
	CameraFacing_NegativeYUp       = 4,
	CameraFacing_MAX               = 5,

};

// Enum Engine.EMeshScreenAlignment
enum class Engine_EMeshScreenAlignment : uint8_t
{
	PSMA_MeshFaceCameraWithRoll    = 0,
	PSMA_MeshFaceCameraWithSpin    = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX                       = 3,

};

// Enum Engine.ETrailsRenderAxisOption
enum class Engine_ETrailsRenderAxisOption : uint8_t
{
	Trails_CameraUp                = 0,
	Trails_SourceUp                = 1,
	Trails_WorldUp                 = 2,
	Trails_MAX                     = 3,

};

// Enum Engine.EStartVelocityGroupsName
enum class Engine_EStartVelocityGroupsName : uint8_t
{
	StartVelocityB                 = 0,
	StartVelocityC                 = 1,
	StartVelocityD                 = 2,
	StartVelocityE                 = 3,
	StartVelocityReplacemnent      = 4,
	StartVelocity_MAX              = 5,
	EStartVelocityGroupsName_MAX   = 6,

};

// Enum Engine.EVelocityConeGroupNames
enum class Engine_EVelocityConeGroupNames : uint8_t
{
	VelocityConeGroupB             = 0,
	VelocityConeGroupC             = 1,
	VelocityConeGroupD             = 2,
	VelocityConeGroupE             = 3,
	VelocityConeGroupReplacemnent  = 4,
	VelocityConeGroup_MAX          = 5,
	EVelocityConeGroupNames_MAX    = 6,

};

// Enum Engine.ECloudStorageDelegate
enum class Engine_ECloudStorageDelegate : uint8_t
{
	CSD_KeyValueReadComplete       = 0,
	CSD_KeyValueWriteComplete      = 1,
	CSD_ValueChanged               = 2,
	CSD_DocumentQueryComplete      = 3,
	CSD_DocumentReadComplete       = 4,
	CSD_DocumentWriteComplete      = 5,
	CSD_DocumentConflictDetected   = 6,
	CSD_MAX                        = 7,

};

// Enum Engine.EAdManagerDelegate
enum class Engine_EAdManagerDelegate : uint8_t
{
	AMD_ClickedBanner              = 0,
	AMD_UserClosedAd               = 1,
	AMD_MAX                        = 2,

};

// Enum Engine.EMicroTransactionResult
enum class Engine_EMicroTransactionResult : uint8_t
{
	MTR_Succeeded                  = 0,
	MTR_Failed                     = 1,
	MTR_Canceled                   = 2,
	MTR_RestoredFromServer         = 3,
	MTR_MAX                        = 4,

};

// Enum Engine.EMicroTransactionDelegate
enum class Engine_EMicroTransactionDelegate : uint8_t
{
	MTD_PurchaseQueryComplete      = 0,
	MTD_PurchaseComplete           = 1,
	MTD_MAX                        = 2,

};

// Enum Engine.ETwitterIntegrationDelegate
enum class Engine_ETwitterIntegrationDelegate : uint8_t
{
	TID_AuthorizeComplete          = 0,
	TID_TweetUIComplete            = 1,
	TID_RequestComplete            = 2,
	TID_MAX                        = 3,

};

// Enum Engine.ETwitterRequestMethod
enum class Engine_ETwitterRequestMethod : uint8_t
{
	TRM_Get                        = 0,
	TRM_Post                       = 1,
	TRM_Delete                     = 2,
	TRM_MAX                        = 3,

};

// Enum Engine.EReporterLineStyle
enum class Engine_EReporterLineStyle : uint8_t
{
	EReporterLineStyle__Line       = 0,
	EReporterLineStyle__Dash       = 1,
	EReporterLineStyle__EReporterLineStyle_MAX = 2,

};

// Enum Engine.ELegendPosition
enum class Engine_ELegendPosition : uint8_t
{
	ELegendPosition__Outside       = 0,
	ELegendPosition__Inside        = 1,
	ELegendPosition__ELegendPosition_MAX = 2,

};

// Enum Engine.EGraphDataStyle
enum class Engine_EGraphDataStyle : uint8_t
{
	EGraphDataStyle__Lines         = 0,
	EGraphDataStyle__Filled        = 1,
	EGraphDataStyle__EGraphDataStyle_MAX = 2,

};

// Enum Engine.EGraphAxisStyle
enum class Engine_EGraphAxisStyle : uint8_t
{
	EGraphAxisStyle__Lines         = 0,
	EGraphAxisStyle__Notches       = 1,
	EGraphAxisStyle__Grid          = 2,
	EGraphAxisStyle__EGraphAxisStyle_MAX = 3,

};

// Enum Engine.EConstraintTransform
enum class Engine_EConstraintTransform : uint8_t
{
	EConstraintTransform__Absolute = 0,
	EConstraintTransform__Relative = 1,
	EConstraintTransform__EConstraintTransform_MAX = 2,

};

// Enum Engine.EControlConstraint
enum class Engine_EControlConstraint : uint8_t
{
	EControlConstraint__Orientation = 0,
	EControlConstraint__Translation = 1,
	EControlConstraint__Max        = 2,
	EControlConstraint__EControlConstraint_MAX = 3,

};

// Enum Engine.EImpactDamageOverride
enum class Engine_EImpactDamageOverride : uint8_t
{
	IDO_None                       = 0,
	IDO_On                         = 1,
	IDO_Off                        = 2,
	IDO_MAX                        = 3,

};

// Enum Engine.EMaxConcurrentResolutionRule
enum class Engine_EMaxConcurrentResolutionRule : uint8_t
{
	EMaxConcurrentResolutionRule__PreventNew = 0,
	EMaxConcurrentResolutionRule__StopOldest = 1,
	EMaxConcurrentResolutionRule__StopFarthestThenPreventNew = 2,
	EMaxConcurrentResolutionRule__StopFarthestThenOldest = 3,
	EMaxConcurrentResolutionRule__EMaxConcurrentResolutionRule_MAX = 4,

};

// Enum Engine.ESoundGroup
enum class Engine_ESoundGroup : uint8_t
{
	SOUNDGROUP_Default             = 0,
	SOUNDGROUP_Effects             = 1,
	SOUNDGROUP_UI                  = 2,
	SOUNDGROUP_Music               = 3,
	SOUNDGROUP_Voice               = 4,
	SOUNDGROUP_GameSoundGroup1     = 5,
	SOUNDGROUP_GameSoundGroup2     = 6,
	SOUNDGROUP_GameSoundGroup3     = 7,
	SOUNDGROUP_GameSoundGroup4     = 8,
	SOUNDGROUP_GameSoundGroup5     = 9,
	SOUNDGROUP_GameSoundGroup6     = 10,
	SOUNDGROUP_GameSoundGroup7     = 11,
	SOUNDGROUP_GameSoundGroup8     = 12,
	SOUNDGROUP_GameSoundGroup9     = 13,
	SOUNDGROUP_GameSoundGroup10    = 14,
	SOUNDGROUP_GameSoundGroup11    = 15,
	SOUNDGROUP_GameSoundGroup12    = 16,
	SOUNDGROUP_GameSoundGroup13    = 17,
	SOUNDGROUP_GameSoundGroup14    = 18,
	SOUNDGROUP_GameSoundGroup15    = 19,
	SOUNDGROUP_GameSoundGroup16    = 20,
	SOUNDGROUP_GameSoundGroup17    = 21,
	SOUNDGROUP_GameSoundGroup18    = 22,
	SOUNDGROUP_GameSoundGroup19    = 23,
	SOUNDGROUP_GameSoundGroup20    = 24,
	SOUNDGROUP_MAX                 = 25,

};

// Enum Engine.EDecompressionType
enum class Engine_EDecompressionType : uint8_t
{
	DTYPE_Setup                    = 0,
	DTYPE_Invalid                  = 1,
	DTYPE_Preview                  = 2,
	DTYPE_Native                   = 3,
	DTYPE_RealTime                 = 4,
	DTYPE_Procedural               = 5,
	DTYPE_Xenon                    = 6,
	DTYPE_Streaming                = 7,
	DTYPE_MAX                      = 8,

};

// Enum Engine.EAudioOutputTarget
enum class Engine_EAudioOutputTarget : uint8_t
{
	EAudioOutputTarget__Speaker    = 0,
	EAudioOutputTarget__Controller = 1,
	EAudioOutputTarget__ControllerFallbackToSpeaker = 2,
	EAudioOutputTarget__EAudioOutputTarget_MAX = 3,

};

// Enum Engine.ModulationParamMode
enum class Engine_EModulationParamMode : uint8_t
{
	MPM_Normal                     = 0,
	MPM_Abs                        = 1,
	MPM_Direct                     = 2,
	MPM_MAX                        = 3,

};

// Enum Engine.EUserDefinedStructureStatus
enum class Engine_EUserDefinedStructureStatus : uint8_t
{
	UDSS_UpToDate                  = 0,
	UDSS_Dirty                     = 1,
	UDSS_Error                     = 2,
	UDSS_Duplicate                 = 3,
	UDSS_MAX                       = 4,

};

// Enum Engine.EVectorFieldConstructionOp
enum class Engine_EVectorFieldConstructionOp : uint8_t
{
	VFCO_Extrude                   = 0,
	VFCO_Revolve                   = 1,
	VFCO_MAX                       = 2,

};

// Enum Engine.EHIKLookAtInterpolation
enum class Engine_EHIKLookAtInterpolation : uint8_t
{
	EHIKLookAtInterpolation_Constant = 0,
	EHIKLookAtInterpolation_EaseOut = 1,
	EHIKLookAtInterpolation_MAX    = 2,

};

// Enum Engine.EHIKLookAtLimits
enum class Engine_EHIKLookAtLimits : uint8_t
{
	EHIKLookAtLimits_None          = 0,
	EHIKLookAtLimits_Clamp         = 1,
	EHIKLookAtLimits_Disable       = 2,
	EHIKLookAtLimits_MAX           = 3,

};

// Enum Engine.ERefPoseType
enum class Engine_ERefPoseType : uint8_t
{
	EIT_LocalSpace                 = 0,
	EIT_Additive                   = 1,
	EIT_MAX                        = 2,

};

// Enum Engine.EEvaluatorMode
enum class Engine_EEvaluatorMode : uint8_t
{
	EEvaluatorMode__EM_Standard    = 0,
	EEvaluatorMode__EM_Freeze      = 1,
	EEvaluatorMode__EM_DelayedFreeze = 2,
	EEvaluatorMode__EM_MAX         = 3,

};

// Enum Engine.EEvaluatorDataSource
enum class Engine_EEvaluatorDataSource : uint8_t
{
	EEvaluatorDataSource__EDS_SourcePose = 0,
	EEvaluatorDataSource__EDS_DestinationPose = 1,
	EEvaluatorDataSource__EDS_MAX  = 2,

};

// Enum Engine.ECameraAlphaBlendMode
enum class Engine_ECameraAlphaBlendMode : uint8_t
{
	ECameraAlphaBlendMode__CABM_Linear = 0,
	ECameraAlphaBlendMode__CABM_Cubic = 1,
	ECameraAlphaBlendMode__CABM_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Engine.TickFunction
// 0x0048
struct FTickFunction
{
	unsigned char                                      UnknownData_ZL3B[0x30];                                    // 0x0000(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_ETickingGroup>                  TickGroup;                                                 // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9HZV[0x1];                                     // 0x0031(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bTickEvenWhenPaused : 1;                                   // 0x0032(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay)
	unsigned char                                      bCanEverTick : 1;                                          // 0x0032(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bStartWithTickEnabled : 1;                                 // 0x0032(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bAllowTickOnDedicatedServer : 1;                           // 0x0032(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_4A02[0xD];                                     // 0x0033(0x000D) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TickInterval;                                              // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OWL0[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ActorComponentTickFunction
// 0x0008 (0x0050 - 0x0048)
struct FActorComponentTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_87RS[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ResponseChannel
// 0x000C
struct FResponseChannel
{
	struct FName                                       Channel;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             Response;                                                  // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ADCU[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.CollisionResponseTemplate
// 0x0060
struct FCollisionResponseTemplate
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionEnabled>              CollisionEnabled;                                          // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GF84[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ObjectTypeName;                                            // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FW5C[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FResponseChannel>                    CustomResponses;                                           // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     HelpMessage;                                               // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	bool                                               bCanModify;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WFQN[0x27];                                    // 0x0039(0x0027) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BlueprintComponentDelegateBinding
// 0x0018
struct FBlueprintComponentDelegateBinding
{
	struct FName                                       ComponentPropertyName;                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       DelegatePropertyName;                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FunctionNameToBind;                                        // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BlueprintInputDelegateBinding
// 0x0004
struct FBlueprintInputDelegateBinding
{
	unsigned char                                      bConsumeInput : 1;                                         // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bExecuteWhenPaused : 1;                                    // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bOverrideParentBinding : 1;                                // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_SVEH[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BlueprintInputActionDelegateBinding
// 0x0014 (0x0018 - 0x0004)
struct FBlueprintInputActionDelegateBinding : public FBlueprintInputDelegateBinding
{
	struct FName                                       InputActionName;                                           // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EInputEvent>                    InputKeyEvent;                                             // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7IL0[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       FunctionNameToBind;                                        // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BlueprintInputAxisDelegateBinding
// 0x0010 (0x0014 - 0x0004)
struct FBlueprintInputAxisDelegateBinding : public FBlueprintInputDelegateBinding
{
	struct FName                                       InputAxisName;                                             // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FunctionNameToBind;                                        // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SimpleMemberReference
// 0x0020
struct FSimpleMemberReference
{
	class UObject*                                     MemberParent;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       MemberName;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       MemberGuid;                                                // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ActorTickFunction
// 0x0008 (0x0050 - 0x0048)
struct FActorTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_M5J4[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.Vector_NetQuantize100
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize100 : public FVector
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ActorPtr
// 0x0008
struct FActorPtr
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.Vector_NetQuantize
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize : public FVector
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.Vector_NetQuantizeNormal
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantizeNormal : public FVector
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.HitResult
// 0x0080
struct FHitResult
{
	unsigned char                                      bBlockingHit : 1;                                          // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bStartPenetrating : 1;                                     // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_SLME[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Time;                                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector_NetQuantize                         Location;                                                  // 0x000C(0x000C)
	struct FVector_NetQuantize                         ImpactPoint;                                               // 0x0018(0x000C)
	struct FVector_NetQuantizeNormal                   Normal;                                                    // 0x0024(0x000C)
	struct FVector_NetQuantizeNormal                   ImpactNormal;                                              // 0x0030(0x000C)
	struct FVector_NetQuantize                         TraceStart;                                                // 0x003C(0x000C)
	struct FVector_NetQuantize                         TraceEnd;                                                  // 0x0048(0x000C)
	float                                              PenetrationDepth;                                          // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Item;                                                      // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TWeakObjectPtr<class UPhysicalMaterial>            PhysMaterial;                                              // 0x005C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	TWeakObjectPtr<class AActor>                       Actor;                                                     // 0x0064(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	TWeakObjectPtr<class UPrimitiveComponent>          Component;                                                 // 0x006C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper)
	struct FName                                       BoneName;                                                  // 0x0074(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FaceIndex;                                                 // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.RepAttachment
// 0x0048
struct FRepAttachment
{
	class AActor*                                      AttachParent;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector_NetQuantize100                      LocationOffset;                                            // 0x0008(0x000C)
	struct FVector_NetQuantize100                      RelativeScale3D;                                           // 0x0014(0x000C)
	struct FRotator                                    RotationOffset;                                            // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       AttachSocket;                                              // 0x002C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1U2R[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             AttachComponent;                                           // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OLIC[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.Vector_NetQuantize10
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize10 : public FVector
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.RepRootMotionMontage
// 0x0040
struct FRepRootMotionMontage
{
	class UAnimMontage*                                AnimMontage;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Position;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector_NetQuantize10                       Location;                                                  // 0x000C(0x000C)
	struct FRotator                                    Rotation;                                                  // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6UQQ[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPrimitiveComponent*                         MovementBase;                                              // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       MovementBaseBoneName;                                      // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bRelativePosition;                                         // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bRelativeRotation;                                         // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5PEI[0x6];                                     // 0x003A(0x0006) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SimulatedRootMotionReplicatedMove
// 0x0048
struct FSimulatedRootMotionReplicatedMove
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_79EW[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRepRootMotionMontage                       RootMotion;                                                // 0x0008(0x0040) (ContainsInstancedReference)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.RootMotionMovementParams
// 0x0040
struct FRootMotionMovementParams
{
	bool                                               bHasRootMotion;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PZS5[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BlendWeight;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BPB6[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  RootMotionTransform;                                       // 0x0010(0x0030) (IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BasedMovementInfo
// 0x0038
struct FBasedMovementInfo
{
	class UPrimitiveComponent*                         MovementBase;                                              // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BoneName;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector_NetQuantize100                      Location;                                                  // 0x0010(0x000C)
	struct FRotator                                    Rotation;                                                  // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bServerHasBaseComponent;                                   // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bRelativeRotation;                                         // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8JSW[0x2];                                     // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LinearVelocity;                                            // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimTickRecord
// 0x0040
struct FAnimTickRecord
{
	class UAnimationAsset*                             SourceAsset;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_O9JE[0x38];                                    // 0x0008(0x0038) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimGroupInstance
// 0x0018
struct FAnimGroupInstance
{
	unsigned char                                      UnknownData_URVU[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ActiveVertexAnim
// 0x0010
struct FActiveVertexAnim
{
	class UVertexAnimBase*                             VertAnim;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Weight;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Time;                                                      // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimLinkableElement
// 0x0030
struct FAnimLinkableElement
{
	unsigned char                                      UnknownData_BIRP[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                LinkedMontage;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	int                                                SlotIndex;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	int                                                SegmentIndex;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	TEnumAsByte<Engine_EAnimLinkMethod>                LinkMethod;                                                // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	TEnumAsByte<Engine_EAnimLinkMethod>                CachedLinkMethod;                                          // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IW5X[0x2];                                     // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SegmentBeginTime;                                          // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              SegmentLength;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              LinkValue;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UAnimSequenceBase*                           LinkedSequence;                                            // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNotifyEvent
// 0x0080 (0x00B0 - 0x0030)
struct FAnimNotifyEvent : public FAnimLinkableElement
{
	float                                              DisplayTime;                                               // 0x0030(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TriggerTimeOffset;                                         // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EndTriggerTimeOffset;                                      // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TriggerWeightThreshold;                                    // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       NotifyName;                                                // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimNotify*                                 Notify;                                                    // 0x0048(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAnimNotifyState*                            NotifyStateClass;                                          // 0x0050(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAnimNotifyCondition*                        NotifyCondition;                                           // 0x0058(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                              Duration;                                                  // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WOXM[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimLinkableElement                        EndLink;                                                   // 0x0068(0x0030)
	bool                                               bConvertedFromBranchingPoint;                              // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EMontageNotifyTickType>         MontageTickType;                                           // 0x0099(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7RIA[0x2];                                     // 0x009A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NotifyTriggerChance;                                       // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ENotifyFilterType>              NotifyFilterType;                                          // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_E72E[0x3];                                     // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NotifyFilterLOD;                                           // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TrackIndex;                                                // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2LMU[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.PlayerAmbientLightOverrideSettings
// 0x0018
struct FPlayerAmbientLightOverrideSettings
{
	unsigned char                                      OverrideBodyLightAmbience : 1;                             // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_MZK7[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BodyLightAmbienceLightFactor;                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              BodyLightAmbienceBlendWithDefault;                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      OverrideLanternAmbience : 1;                               // 0x000C(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_NZLV[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LanternAmbienceLightFactor;                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              LanternAmbienceBlendWithDefault;                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.WeightedBlendable
// 0x0010
struct FWeightedBlendable
{
	float                                              Weight;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MCDC[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     Object;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.RainPostProcessSettings
// 0x00C0
struct FRainPostProcessSettings
{
	unsigned char                                      bOverride_RainParticleTexture : 1;                         // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_RainMeshTexture : 1;                             // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_RainIntensity : 1;                               // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_RainParticleAlpha : 1;                           // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_RainCloseParticleAlphaReductionMultiplier : 1;   // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_RainCloseParticleAlphaDistance : 1;              // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_RainParticleDensity : 1;                         // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_RainParticleSpeed : 1;                           // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_RainParticleWindVelocity : 1;                    // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_RainParticleWidth : 1;                           // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_RainParticleLength : 1;                          // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_RainMeshScale : 1;                               // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_RainMeshTextureScroll : 1;                       // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_RainMeshTextureTiling : 1;                       // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_RainMeshAlpha : 1;                               // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_RainMeshRowDivision : 1;                         // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_RainMeshColumnDivision : 1;                      // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_RainMeshBrightness : 1;                          // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_RainBrightness : 1;                              // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_RainTint : 1;                                    // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_RainMeshEndRadiusScale : 1;                      // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_RainMeshEndAlphaFade : 1;                        // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_RainMeshFadeDistance : 1;                        // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_RainAnimationFrameTime : 1;                      // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_RainSplashesPerSecond : 1;                       // 0x0003(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_RainSplashesPerSquareMetre : 1;                  // 0x0003(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_RainSplashesMaxPlacementAngle : 1;               // 0x0003(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_RainSplashData : 1;                              // 0x0003(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_RainSplashesMaxDistance1 : 1;                    // 0x0003(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_RainSplashData2 : 1;                             // 0x0003(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_RainSplashesMaxDistance2 : 1;                    // 0x0003(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_KPAS[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture*                                    RainParticleTexture;                                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UTexture*                                    RainMeshTexture;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              RainIntensity;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              RainParticleAlpha;                                         // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              RainCloseParticleAlphaReductionMultiplier;                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              RainCloseParticleAlphaDistance;                            // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              RainParticleDensity;                                       // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              RainParticleSpeed;                                         // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                                     RainParticleWindVelocity;                                  // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              RainParticleWidth;                                         // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              RainParticleLength;                                        // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                                     RainMeshScale;                                             // 0x0044(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	struct FVector2D                                   RainMeshTextureScroll;                                     // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	struct FVector2D                                   RainMeshTextureTiling;                                     // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              RainMeshAlpha;                                             // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int                                                RainMeshRowDivision;                                       // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int                                                RainMeshColumnDivision;                                    // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              RainMeshEndRadiusScale;                                    // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              RainMeshEndAlphaFade;                                      // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              RainMeshFadeDistance;                                      // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              RainMeshBrightness;                                        // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              RainBrightness;                                            // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FLinearColor                                RainTint;                                                  // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              RainAnimationFrameTime;                                    // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int                                                RainSplashesPerSecond;                                     // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              RainSplashesPerSquareMetre;                                // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              RainSplashesMaxPlacementAngle;                             // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UParticleComputeShaderData*                  RainSplashData;                                            // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              RainSplashesMaxDistance1;                                  // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8A9M[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleComputeShaderData*                  RainSplashData2;                                           // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              RainSplashesMaxDistance2;                                  // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KITL[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.LPVCascadeSettings
// 0x0070
struct FLPVCascadeSettings
{
	unsigned char                                      bOverride_LPVIntensity : 1;                                // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVDirectionalOcclusionIntensity : 1;            // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVDirectionalOcclusionRadius : 1;               // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVDiffuseOcclusionExponent : 1;                 // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVSpecularOcclusionExponent : 1;                // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVDiffuseOcclusionIntensity : 1;                // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVSpecularOcclusionIntensity : 1;               // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVSize : 1;                                     // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVSecondaryOcclusionIntensity : 1;              // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVSecondaryBounceIntensity : 1;                 // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVGeometryVolumeBias : 1;                       // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVVplInjectionBias : 1;                         // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVEmissiveInjectionIntensity : 1;               // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_NumberOfPropagationSteps : 1;                    // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bFreezeLPVUpdate : 1;                                      // 0x0001(0x0001) BIT_FIELD (Edit, BlueprintVisible, Interp, NoDestructor)
	unsigned char                                      UnknownData_C34U[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LPVIntensity;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              LPVVplInjectionBias;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              LPVSize;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LPVSecondaryOcclusionIntensity;                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              LPVSecondaryBounceIntensity;                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              LPVGeometryVolumeBias;                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              LPVEmissiveInjectionIntensity;                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              LPVDirectionalOcclusionIntensity;                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              LPVDirectionalOcclusionRadius;                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              LPVDiffuseOcclusionExponent;                               // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              LPVSpecularOcclusionExponent;                              // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              LPVDiffuseOcclusionIntensity;                              // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              LPVSpecularOcclusionIntensity;                             // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int                                                LPVNumberOfPropagationSteps;                               // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      UnknownData_M82V[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  LPVWorldRef;                                               // 0x0040(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.WeightedBlendables
// 0x0010
struct FWeightedBlendables
{
	TArray<struct FWeightedBlendable>                  Array;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.PostProcessSettings
// 0x0540
struct FPostProcessSettings
{
	unsigned char                                      bOverride_WhiteTemp : 1;                                   // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_WhiteTint : 1;                                   // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_ColorSaturation : 1;                             // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_ColorContrast : 1;                               // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_ColorGamma : 1;                                  // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_ColorGain : 1;                                   // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_ColorOffset : 1;                                 // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_FilmWhitePoint : 1;                              // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_FilmSaturation : 1;                              // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_FilmChannelMixerRed : 1;                         // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_FilmChannelMixerGreen : 1;                       // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_FilmChannelMixerBlue : 1;                        // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_FilmContrast : 1;                                // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_FilmDynamicRange : 1;                            // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_FilmHealAmount : 1;                              // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_FilmToeAmount : 1;                               // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_FilmShadowTint : 1;                              // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_FilmShadowTintBlend : 1;                         // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_FilmShadowTintAmount : 1;                        // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_FilmSlope : 1;                                   // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_FilmToe : 1;                                     // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_FilmShoulder : 1;                                // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_FilmBlackClip : 1;                               // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_FilmWhiteClip : 1;                               // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_SceneColorTint : 1;                              // 0x0003(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_SceneFringeIntensity : 1;                        // 0x0003(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_SceneFringeSaturation : 1;                       // 0x0003(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientCubemapTint : 1;                          // 0x0003(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientCubemapIntensity : 1;                     // 0x0003(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_BloomIntensity : 1;                              // 0x0003(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_BloomThreshold : 1;                              // 0x0003(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_Bloom1Tint : 1;                                  // 0x0003(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_Bloom1Size : 1;                                  // 0x0004(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_Bloom2Size : 1;                                  // 0x0004(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_Bloom2Tint : 1;                                  // 0x0004(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_Bloom3Tint : 1;                                  // 0x0004(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_Bloom3Size : 1;                                  // 0x0004(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_Bloom4Tint : 1;                                  // 0x0004(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_Bloom4Size : 1;                                  // 0x0004(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_Bloom5Tint : 1;                                  // 0x0004(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_Bloom5Size : 1;                                  // 0x0005(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_Bloom6Tint : 1;                                  // 0x0005(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_Bloom6Size : 1;                                  // 0x0005(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_BloomSizeScale : 1;                              // 0x0005(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_BloomDirtMaskIntensity : 1;                      // 0x0005(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_BloomDirtMaskTint : 1;                           // 0x0005(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_BloomDirtMask : 1;                               // 0x0005(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AutoExposureLowPercent : 1;                      // 0x0005(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AutoExposureHighPercent : 1;                     // 0x0006(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AutoExposureMinBrightness : 1;                   // 0x0006(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AutoExposureMaxBrightness : 1;                   // 0x0006(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AutoExposureSpeedUp : 1;                         // 0x0006(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AutoExposureSpeedDown : 1;                       // 0x0006(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AutoExposureBias : 1;                            // 0x0006(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_HistogramLogMin : 1;                             // 0x0006(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_HistogramLogMax : 1;                             // 0x0006(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LensFlareIntensity : 1;                          // 0x0007(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LensFlareTint : 1;                               // 0x0007(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LensFlareTints : 1;                              // 0x0007(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LensFlareBokehSize : 1;                          // 0x0007(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LensFlareBokehShape : 1;                         // 0x0007(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LensFlareThreshold : 1;                          // 0x0007(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_VignetteIntensity : 1;                           // 0x0007(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_GrainIntensity : 1;                              // 0x0007(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_GrainJitter : 1;                                 // 0x0008(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionIntensity : 1;                   // 0x0008(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionStaticFraction : 1;              // 0x0008(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionRadius : 1;                      // 0x0008(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionFadeDistance : 1;                // 0x0008(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionFadeRadius : 1;                  // 0x0008(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionDistance : 1;                    // 0x0008(0x0001) BIT_FIELD (Deprecated, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionRadiusInWS : 1;                  // 0x0008(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionPower : 1;                       // 0x0009(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionBias : 1;                        // 0x0009(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionQuality : 1;                     // 0x0009(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionMipBlend : 1;                    // 0x0009(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionMipScale : 1;                    // 0x0009(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionMipThreshold : 1;                // 0x0009(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionHemiIntensity : 1;               // 0x0009(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionHemiPower : 1;                   // 0x0009(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionHemiRadius : 1;                  // 0x000A(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionHemiBlurTolerance : 1;           // 0x000A(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionHemiUpsampleTolerance : 1;       // 0x000A(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionHemiNoiseFilterTolerance : 1;    // 0x000A(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionHemiRejectionFalloff : 1;        // 0x000A(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionHemiBias : 1;                    // 0x000A(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionHemiMaxDepthDownsample : 1;      // 0x000A(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionHemiUseNormals : 1;              // 0x000A(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionHemiCombineBeforeBlur : 1;       // 0x000B(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionHemiCombineWithMultiply : 1;     // 0x000B(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_MinOverdrawCount : 1;                            // 0x000B(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_MaxOverdrawCount : 1;                            // 0x000B(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_MinOverdrawColour : 1;                           // 0x000B(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_MaxOverdrawColour : 1;                           // 0x000B(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVIntensity : 1;                                // 0x000B(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVDirectionalOcclusionIntensity : 1;            // 0x000B(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bOverride_LPVDirectionalOcclusionRadius : 1;               // 0x000C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bOverride_LPVDiffuseOcclusionExponent : 1;                 // 0x000C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bOverride_LPVSpecularOcclusionExponent : 1;                // 0x000C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bOverride_LPVDiffuseOcclusionIntensity : 1;                // 0x000C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bOverride_LPVSpecularOcclusionIntensity : 1;               // 0x000C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bOverride_LPVSize : 1;                                     // 0x000C(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVSecondaryOcclusionIntensity : 1;              // 0x000C(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVSecondaryBounceIntensity : 1;                 // 0x000C(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVGeometryVolumeBias : 1;                       // 0x000D(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVVplInjectionBias : 1;                         // 0x000D(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVEmissiveInjectionIntensity : 1;               // 0x000D(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVWorldRef : 1;                                 // 0x000D(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_IndirectLightingColor : 1;                       // 0x000D(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_IndirectLightingIntensity : 1;                   // 0x000D(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_ColorGradingIntensity : 1;                       // 0x000D(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_ColorGradingLUT : 1;                             // 0x000D(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DepthOfFieldFocalDistance : 1;                   // 0x000E(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DepthOfFieldFstop : 1;                           // 0x000E(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DepthOfFieldDepthBlurRadius : 1;                 // 0x000E(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DepthOfFieldDepthBlurAmount : 1;                 // 0x000E(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DepthOfFieldFocalRegion : 1;                     // 0x000E(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DepthOfFieldNearTransitionRegion : 1;            // 0x000E(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DepthOfFieldFarTransitionRegion : 1;             // 0x000E(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DepthOfFieldScale : 1;                           // 0x000E(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DepthOfFieldMaxBokehSize : 1;                    // 0x000F(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DepthOfFieldNearBlurSize : 1;                    // 0x000F(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DepthOfFieldFarBlurSize : 1;                     // 0x000F(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DepthOfFieldMethod : 1;                          // 0x000F(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DepthOfFieldBokehShape : 1;                      // 0x000F(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DepthOfFieldOcclusion : 1;                       // 0x000F(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DepthOfFieldColorThreshold : 1;                  // 0x000F(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DepthOfFieldSizeThreshold : 1;                   // 0x000F(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DepthOfFieldSkyFocusDistance : 1;                // 0x0010(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_MotionBlurAmount : 1;                            // 0x0010(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_MotionBlurMax : 1;                               // 0x0010(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_MotionBlurPerObjectSize : 1;                     // 0x0010(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_ScreenPercentage : 1;                            // 0x0010(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AntiAliasingMethod : 1;                          // 0x0010(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_ScreenSpaceReflectionIntensity : 1;              // 0x0010(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_ScreenSpaceReflectionQuality : 1;                // 0x0010(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_ScreenSpaceReflectionMaxRoughness : 1;           // 0x0011(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_ScreenSpaceReflectionRoughnessScale : 1;         // 0x0011(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_SkyLightIntensityScale : 1;                      // 0x0011(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_SkyLightIntensityScaleForMinSpec : 1;            // 0x0011(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_SkyLightIntensityScaleInteriorInfluence : 1;     // 0x0011(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_GlobalReflectionTint : 1;                        // 0x0011(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_InsideAmbientColourForParticlesInfluence : 1;    // 0x0011(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_InsideAmbientColourForParticles : 1;             // 0x0011(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bUseThisVolumeForLPVSettings : 1;                          // 0x0012(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_GaussianBlur : 1;                                // 0x0012(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DisableShadowMapMethod : 1;                      // 0x0012(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_UseVolumeFogScale : 1;                           // 0x0012(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_VolumeFogScale : 1;                              // 0x0012(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_T9OV[0x1];                                     // 0x0013(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WhiteTemp;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              WhiteTint;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ColorSaturation;                                           // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	struct FVector                                     ColorContrast;                                             // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	struct FVector                                     ColorGamma;                                                // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	struct FVector                                     ColorGain;                                                 // 0x0040(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	struct FVector                                     ColorOffset;                                               // 0x004C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	struct FLinearColor                                FilmWhitePoint;                                            // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	struct FLinearColor                                FilmShadowTint;                                            // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              FilmShadowTintBlend;                                       // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              FilmShadowTintAmount;                                      // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              FilmSaturation;                                            // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FilmChannelMixerRed;                                       // 0x0084(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	struct FLinearColor                                FilmChannelMixerGreen;                                     // 0x0094(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	struct FLinearColor                                FilmChannelMixerBlue;                                      // 0x00A4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              FilmContrast;                                              // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              FilmToeAmount;                                             // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              FilmHealAmount;                                            // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              FilmDynamicRange;                                          // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              FilmSlope;                                                 // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              FilmToe;                                                   // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              FilmShoulder;                                              // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              FilmBlackClip;                                             // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              FilmWhiteClip;                                             // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FLinearColor                                SceneColorTint;                                            // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              SceneFringeIntensity;                                      // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              SceneFringeSaturation;                                     // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              BloomIntensity;                                            // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              BloomThreshold;                                            // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              BloomSizeScale;                                            // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              Bloom1Size;                                                // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              Bloom2Size;                                                // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              Bloom3Size;                                                // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              Bloom4Size;                                                // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              Bloom5Size;                                                // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              Bloom6Size;                                                // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FLinearColor                                Bloom1Tint;                                                // 0x0114(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	struct FLinearColor                                Bloom2Tint;                                                // 0x0124(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	struct FLinearColor                                Bloom3Tint;                                                // 0x0134(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	struct FLinearColor                                Bloom4Tint;                                                // 0x0144(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	struct FLinearColor                                Bloom5Tint;                                                // 0x0154(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	struct FLinearColor                                Bloom6Tint;                                                // 0x0164(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              BloomDirtMaskIntensity;                                    // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                BloomDirtMaskTint;                                         // 0x0178(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	class UTexture*                                    BloomDirtMask;                                             // 0x0188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LPVIntensity;                                              // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              LPVVplInjectionBias;                                       // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              LPVSize;                                                   // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LPVSecondaryOcclusionIntensity;                            // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              LPVSecondaryBounceIntensity;                               // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              LPVGeometryVolumeBias;                                     // 0x01A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              LPVEmissiveInjectionIntensity;                             // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              LPVDirectionalOcclusionIntensity;                          // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  LPVWorldRef;                                               // 0x01B0(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	float                                              LPVDirectionalOcclusionRadius;                             // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              LPVDiffuseOcclusionExponent;                               // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              LPVSpecularOcclusionExponent;                              // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              LPVDiffuseOcclusionIntensity;                              // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              LPVSpecularOcclusionIntensity;                             // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FLinearColor                                AmbientCubemapTint;                                        // 0x01F4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              AmbientCubemapIntensity;                                   // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	class UTextureCube*                                AmbientCubemap;                                            // 0x0208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AutoExposureLowPercent;                                    // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              AutoExposureHighPercent;                                   // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              AutoExposureMinBrightness;                                 // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              AutoExposureMaxBrightness;                                 // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              AutoExposureSpeedUp;                                       // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              AutoExposureSpeedDown;                                     // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              AutoExposureBias;                                          // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              HistogramLogMin;                                           // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              HistogramLogMax;                                           // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              LensFlareIntensity;                                        // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                LensFlareTint;                                             // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              LensFlareBokehSize;                                        // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              LensFlareThreshold;                                        // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UTexture*                                    LensFlareBokehShape;                                       // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                LensFlareTints[0x8];                                       // 0x0258(0x0080) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              VignetteIntensity;                                         // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              GrainJitter;                                               // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              GrainIntensity;                                            // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              AmbientOcclusionIntensity;                                 // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              AmbientOcclusionStaticFraction;                            // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              AmbientOcclusionRadius;                                    // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      AmbientOcclusionRadiusInWS : 1;                            // 0x02F0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_C6FD[0x3];                                     // 0x02F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AmbientOcclusionFadeDistance;                              // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              AmbientOcclusionFadeRadius;                                // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              AmbientOcclusionDistance;                                  // 0x02FC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AmbientOcclusionPower;                                     // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              AmbientOcclusionBias;                                      // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              AmbientOcclusionQuality;                                   // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              AmbientOcclusionMipBlend;                                  // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              AmbientOcclusionMipScale;                                  // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              AmbientOcclusionMipThreshold;                              // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              AmbientOcclusionHemiIntensity;                             // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              AmbientOcclusionHemiPower;                                 // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              AmbientOcclusionHemiRadius;                                // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              AmbientOcclusionHemiBlurTolerance;                         // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              AmbientOcclusionHemiUpsampleTolerance;                     // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              AmbientOcclusionHemiNoiseFilterTolerance;                  // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              AmbientOcclusionHemiRejectionFalloff;                      // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              AmbientOcclusionHemiBias;                                  // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      AmbientOcclusionHemiMaxDepthDownsample : 1;                // 0x0338(0x0001) BIT_FIELD (Edit, BlueprintVisible, Interp, NoDestructor, AdvancedDisplay)
	unsigned char                                      AmbientOcclusionHemiUseNormals : 1;                        // 0x0338(0x0001) BIT_FIELD (Edit, BlueprintVisible, Interp, NoDestructor, AdvancedDisplay)
	unsigned char                                      AmbientOcclusionHemiCombineBeforeBlur : 1;                 // 0x0338(0x0001) BIT_FIELD (Edit, BlueprintVisible, Interp, NoDestructor, AdvancedDisplay)
	unsigned char                                      AmbientOcclusionHemiCombineWithMultiply : 1;               // 0x0338(0x0001) BIT_FIELD (Edit, BlueprintVisible, Interp, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_MMAV[0x3];                                     // 0x0339(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinOverdrawCount;                                          // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              MaxOverdrawCount;                                          // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MinOverdrawColour;                                         // 0x0344(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	struct FLinearColor                                MaxOverdrawColour;                                         // 0x0354(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	struct FLinearColor                                IndirectLightingColor;                                     // 0x0364(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	float                                              IndirectLightingIntensity;                                 // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              ColorGradingIntensity;                                     // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5IPJ[0x4];                                     // 0x037C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture*                                    ColorGradingLUT;                                           // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EDepthOfFieldMethod>            DepthOfFieldMethod;                                        // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_27GG[0x3];                                     // 0x0389(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DepthOfFieldDepthBlurAmount;                               // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              DepthOfFieldDepthBlurRadius;                               // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              DepthOfFieldFstop;                                         // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              DepthOfFieldFocalDistance;                                 // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              DepthOfFieldFocalRegion;                                   // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              DepthOfFieldNearTransitionRegion;                          // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              DepthOfFieldFarTransitionRegion;                           // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              DepthOfFieldScale;                                         // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              DepthOfFieldMaxBokehSize;                                  // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              DepthOfFieldNearBlurSize;                                  // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              DepthOfFieldFarBlurSize;                                   // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	class UTexture*                                    DepthOfFieldBokehShape;                                    // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              DepthOfFieldOcclusion;                                     // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              DepthOfFieldColorThreshold;                                // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              DepthOfFieldSizeThreshold;                                 // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              DepthOfFieldSkyFocusDistance;                              // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              MotionBlurAmount;                                          // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              MotionBlurMax;                                             // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              MotionBlurPerObjectSize;                                   // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              ScreenPercentage;                                          // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TEnumAsByte<Engine_EAntiAliasingMethod>            AntiAliasingMethod;                                        // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TYG4[0x3];                                     // 0x03E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ScreenSpaceReflectionIntensity;                            // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              ScreenSpaceReflectionQuality;                              // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              ScreenSpaceReflectionMaxRoughness;                         // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              SkyLightIntensityScale;                                    // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              SkyLightIntensityScaleForMinSpec;                          // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              SkyLightIntensityScaleInteriorInfluence;                   // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      bUseVolumeFogScale : 1;                                    // 0x03FC(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_84D2[0x3];                                     // 0x03FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              VolumeFogScale;                                            // 0x0400(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                GlobalReflectionTint;                                      // 0x0404(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	float                                              InsideAmbientColourForParticlesInfluence;                  // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FLinearColor                                InsideAmbientColourForParticles;                           // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	struct FRainPostProcessSettings                    RainSettings;                                              // 0x0428(0x00C0) (Edit, BlueprintVisible)
	TArray<struct FLPVCascadeSettings>                 LPVSettings;                                               // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FPlayerAmbientLightOverrideSettings         PlayerAmbientLightOverrideSettings;                        // 0x04F8(0x0018) (Edit, BlueprintVisible)
	float                                              GaussianBlurIntensity;                                     // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EDisableShadowMapMethod>        DisableShadowMethod;                                       // 0x0514(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      UnknownData_B5EN[0x3];                                     // 0x0515(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeightedBlendables                         WeightedBlendables;                                        // 0x0518(0x0010) (Edit)
	TArray<class UObject*>                             Blendables;                                                // 0x0528(0x0010) (ZeroConstructor, Deprecated)
	unsigned char                                      UnknownData_K0LL[0x8];                                     // 0x0538(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.MinimalViewInfo
// 0x05A0
struct FMinimalViewInfo
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SXY8[0x10];                                    // 0x0018(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FOV;                                                       // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OrthoWidth;                                                // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OrthoNearClipPlane;                                        // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              OrthoFarClipPlane;                                         // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              AspectRatio;                                               // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bConstrainAspectRatio : 1;                                 // 0x003C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bUseFieldOfViewForLOD : 1;                                 // 0x003C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_RVEI[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_ECameraProjectionMode>          ProjectionMode;                                            // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_W0HC[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PostProcessBlendWeight;                                    // 0x0044(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_98RH[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPostProcessSettings                        PostProcessSettings;                                       // 0x0050(0x0540) (BlueprintVisible)
	unsigned char                                      UnknownData_ZITZ[0x10];                                    // 0x0590(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.MovementProperties
// 0x0004
struct FMovementProperties
{
	unsigned char                                      bCanCrouch : 1;                                            // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bCanJump : 1;                                              // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bCanWalk : 1;                                              // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bCanSwim : 1;                                              // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bCanFly : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_KQFP[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.NavAgentProperties
// 0x002C (0x0030 - 0x0004)
struct FNavAgentProperties : public FMovementProperties
{
	struct FName                                       Name;                                                      // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AgentRadius;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AgentHeight;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AgentStepHeight;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NavWalkingSearchHeightScale;                               // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NavWalkingSearchRadiusScale;                               // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NavWalkingSearchRadiusScaleOffMesh;                        // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AgentMaxSlope;                                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinRegionArea;                                             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_I1WS[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.NavAvoidanceMask
// 0x0004
struct FNavAvoidanceMask
{
	unsigned char                                      bGroup0 : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup1 : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup2 : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup3 : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup4 : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup5 : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup6 : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup7 : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup8 : 1;                                               // 0x0001(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup9 : 1;                                               // 0x0001(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup10 : 1;                                              // 0x0001(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup11 : 1;                                              // 0x0001(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup12 : 1;                                              // 0x0001(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup13 : 1;                                              // 0x0001(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup14 : 1;                                              // 0x0001(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup15 : 1;                                              // 0x0001(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup16 : 1;                                              // 0x0002(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup17 : 1;                                              // 0x0002(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup18 : 1;                                              // 0x0002(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup19 : 1;                                              // 0x0002(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup20 : 1;                                              // 0x0002(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup21 : 1;                                              // 0x0002(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup22 : 1;                                              // 0x0002(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup23 : 1;                                              // 0x0002(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup24 : 1;                                              // 0x0003(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup25 : 1;                                              // 0x0003(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup26 : 1;                                              // 0x0003(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup27 : 1;                                              // 0x0003(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup28 : 1;                                              // 0x0003(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup29 : 1;                                              // 0x0003(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup30 : 1;                                              // 0x0003(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup31 : 1;                                              // 0x0003(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.CharacterMovementComponentPreClothTickFunction
// 0x0008 (0x0050 - 0x0048)
struct FCharacterMovementComponentPreClothTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_4YI6[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.FindFloorResult
// 0x008C
struct FFindFloorResult
{
	unsigned char                                      bBlockingHit : 1;                                          // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor)
	unsigned char                                      bWalkableFloor : 1;                                        // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor)
	unsigned char                                      bLineTrace : 1;                                            // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor)
	unsigned char                                      UnknownData_FA10[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FloorDist;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LineDist;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  HitResult;                                                 // 0x000C(0x0080) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, ContainsInstancedReference)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.GameNameRedirect
// 0x0020
struct FGameNameRedirect
{
	struct FString                                     OldGameName;                                               // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     NewGameName;                                               // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ClassRedirect
// 0x0058
struct FClassRedirect
{
	struct FString                                     ObjectName;                                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     OldClassName;                                              // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     NewClassName;                                              // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     OldSubobjName;                                             // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     NewSubobjName;                                             // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	bool                                               InstanceOnly;                                              // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6NSB[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.PluginRedirect
// 0x0020
struct FPluginRedirect
{
	struct FString                                     OldPluginName;                                             // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     NewPluginName;                                             // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.StructRedirect
// 0x0020
struct FStructRedirect
{
	struct FString                                     OldStructName;                                             // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     NewStructName;                                             // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.RigidBodyErrorCorrection
// 0x001C
struct FRigidBodyErrorCorrection
{
	float                                              LinearDeltaThresholdSq;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LinearInterpAlpha;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LinearRecipFixTime;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AngularDeltaThreshold;                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AngularInterpAlpha;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AngularRecipFixTime;                                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BodySpeedThresholdSq;                                      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.NetDriverDefinition
// 0x0018
struct FNetDriverDefinition
{
	struct FName                                       DefName;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       DriverClassName;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       DriverClassNameFallback;                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.DropNoteInfo
// 0x0028
struct FDropNoteInfo
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Comment;                                                   // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.StatColorMapEntry
// 0x0008
struct FStatColorMapEntry
{
	float                                              In;                                                        // 0x0000(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                      Out;                                                       // 0x0004(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.StatColorMapping
// 0x0028
struct FStatColorMapping
{
	struct FString                                     StatName;                                                  // 0x0000(0x0010) (ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash)
	TArray<struct FStatColorMapEntry>                  ColorMap;                                                  // 0x0010(0x0010) (ZeroConstructor, Config, GlobalConfig)
	unsigned char                                      DisableBlend : 1;                                          // 0x0020(0x0001) BIT_FIELD (Config, GlobalConfig, NoDestructor)
	unsigned char                                      UnknownData_HXAV[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.GameClassShortName
// 0x0020
struct FGameClassShortName
{
	struct FString                                     ShortName;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     GameClassName;                                             // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.CustomPrimitiveData
// 0x0010
struct FCustomPrimitiveData
{
	TArray<float>                                      Data;                                                      // 0x0000(0x0010) (Edit, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.CollisionResponseContainer
// 0x0020
struct FCollisionResponseContainer
{
	TEnumAsByte<Engine_ECollisionResponse>             WorldStatic;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             WorldDynamic;                                              // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             Pawn;                                                      // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             Visibility;                                                // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             Camera;                                                    // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             PhysicsBody;                                               // 0x0005(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             Vehicle;                                                   // 0x0006(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             Destructible;                                              // 0x0007(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             EngineTraceChannel1;                                       // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             EngineTraceChannel2;                                       // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             EngineTraceChannel3;                                       // 0x000A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             EngineTraceChannel4;                                       // 0x000B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             EngineTraceChannel5;                                       // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             EngineTraceChannel6;                                       // 0x000D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel1;                                         // 0x000E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel2;                                         // 0x000F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel3;                                         // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel4;                                         // 0x0011(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel5;                                         // 0x0012(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel6;                                         // 0x0013(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel7;                                         // 0x0014(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel8;                                         // 0x0015(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel9;                                         // 0x0016(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel10;                                        // 0x0017(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel11;                                        // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel12;                                        // 0x0019(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel13;                                        // 0x001A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel14;                                        // 0x001B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel15;                                        // 0x001C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel16;                                        // 0x001D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel17;                                        // 0x001E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel18;                                        // 0x001F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.WalkableSlopeOverride
// 0x0008
struct FWalkableSlopeOverride
{
	TEnumAsByte<Engine_EWalkableSlopeBehavior>         WalkableSlopeBehavior;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3PBC[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WalkableSlopeAngle;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.CollisionResponse
// 0x0030
struct FCollisionResponse
{
	struct FCollisionResponseContainer                 ResponseToChannels;                                        // 0x0000(0x0020) (Transient)
	TArray<struct FResponseChannel>                    ResponseArray;                                             // 0x0020(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.MassPropertiesOverride
// 0x0024
struct FMassPropertiesOverride
{
	struct FVector                                     InertiaTensorOverride;                                     // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     COMTranslationOverride;                                    // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    COMRotatorOverride;                                        // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BodyInstance
// 0x0180
struct FBodyInstance
{
	unsigned char                                      UnknownData_IX19[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Scale3D;                                                   // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A1KT[0x4];                                     // 0x0010(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       CollisionProfileName;                                      // 0x0014(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9LAS[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCollisionResponse                          CollisionResponses;                                        // 0x0020(0x0030) (Edit)
	unsigned char                                      bUseCCD : 1;                                               // 0x0050(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay)
	unsigned char                                      bNotifyRigidBodyCollision : 1;                             // 0x0050(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bSimulatePhysics : 1;                                      // 0x0050(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bOverrideMass : 1;                                         // 0x0050(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bOverrideMassProperties : 1;                               // 0x0050(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bEnableGravity : 1;                                        // 0x0050(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bAutoWeld : 1;                                             // 0x0050(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_5TLP : 1;                                      // 0x0050(0x0001) BIT_FIELD (PADDING)
	unsigned char                                      bStartAwake : 1;                                           // 0x0051(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay)
	unsigned char                                      bGenerateWakeEvents : 1;                                   // 0x0051(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay)
	unsigned char                                      bUpdateMassWhenScaleChanges : 1;                           // 0x0051(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bLockTranslation : 1;                                      // 0x0051(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bLockRotation : 1;                                         // 0x0051(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bLockXTranslation : 1;                                     // 0x0051(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bLockYTranslation : 1;                                     // 0x0051(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bLockZTranslation : 1;                                     // 0x0051(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bLockXRotation : 1;                                        // 0x0052(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bLockYRotation : 1;                                        // 0x0052(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bLockZRotation : 1;                                        // 0x0052(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bOverrideMaxAngularVelocity : 1;                           // 0x0052(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_OSX2 : 1;                                      // 0x0052(0x0001) BIT_FIELD (PADDING)
	unsigned char                                      bUseAsyncScene : 1;                                        // 0x0052(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, Protected)
	unsigned char                                      bOverrideMaxDepenetrationVelocity : 1;                     // 0x0052(0x0001) BIT_FIELD (NoDestructor, Protected)
	unsigned char                                      bOverrideWalkableSlopeOnInstance : 1;                      // 0x0052(0x0001) BIT_FIELD (NoDestructor, Protected)
	unsigned char                                      UnknownData_9V0D[0x1];                                     // 0x0053(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxDepenetrationVelocity;                                  // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash)
	float                                              MassInKg;                                                  // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMassPropertiesOverride                     MassPropertiesOverride;                                    // 0x005C(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, AdvancedDisplay)
	float                                              LinearDamping;                                             // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AngularDamping;                                            // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     COMNudge;                                                  // 0x0088(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	float                                              MassScale;                                                 // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ADFY[0x10];                                    // 0x0098(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWalkableSlopeOverride                      WalkableSlopeOverride;                                     // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, AdvancedDisplay, Protected)
	class UPhysicalMaterial*                           PhysMaterialOverride;                                      // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              MaxAngularVelocity;                                        // 0x00B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              CustomSleepThresholdMultiplier;                            // 0x00BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              PhysicsBlendWeight;                                        // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PositionSolverIterationCount;                              // 0x00C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TEnumAsByte<Engine_EDominanceGroup>                DominanceGroup;                                            // 0x00C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SKIB[0x37];                                    // 0x00C9(0x0037) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint64_t                                           RigidActorSyncId;                                          // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint64_t                                           RigidActorAsyncId;                                         // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                VelocitySolverIterationCount;                              // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      UnknownData_51SJ[0x68];                                    // 0x0114(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_ESleepFamily>                   SleepFamily;                                               // 0x017C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TEnumAsByte<Engine_EDOFMode>                       DOFMode;                                                   // 0x017D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionEnabled>              CollisionEnabled;                                          // 0x017E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionChannel>              ObjectType;                                                // 0x017F(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.PrimitiveComponentPostPhysicsTickFunction
// 0x0008 (0x0050 - 0x0048)
struct FPrimitiveComponentPostPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_I5M3[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.OverlapInfo
// 0x0084
struct FOverlapInfo
{
	unsigned char                                      UnknownData_61EP[0x84];                                    // 0x0000(0x0084) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.DebugDisplayProperty
// 0x0020
struct FDebugDisplayProperty
{
	class UObject*                                     Obj;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      WithinClass;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CTAN[0x10];                                    // 0x0010(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.UniqueNetIdRepl
// 0x0018
struct FUniqueNetIdRepl
{
	unsigned char                                      UnknownData_TZGM[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ActiveForceFeedbackEffect
// 0x0018
struct FActiveForceFeedbackEffect
{
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AQRH[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ViewTargetTransitionParams
// 0x0010
struct FViewTargetTransitionParams
{
	float                                              BlendTime;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EViewTargetBlendFunction>       BlendFunction;                                             // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0HZZ[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BlendExp;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bLockOutgoing : 1;                                         // 0x000C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_8E89[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.LatentActionInfo
// 0x0018
struct FLatentActionInfo
{
	int                                                Linkage;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                UUID;                                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ExecutionFunction;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     CallbackTarget;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.LevelStreamingStatusUpdateInfo
// 0x0018
struct FLevelStreamingStatusUpdateInfo
{
	struct FString                                     PackageName;                                               // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	int                                                LODIndex;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bNewShouldBeLoaded : 1;                                    // 0x0014(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bNewShouldBeVisible : 1;                                   // 0x0014(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bNewShouldBlockOnLoad : 1;                                 // 0x0014(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_Y0FL[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.GeomSelection
// 0x000C
struct FGeomSelection
{
	int                                                Type;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SelectionIndex;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.GameModePrefix
// 0x0020
struct FGameModePrefix
{
	struct FString                                     Prefix;                                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     GameMode;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ReverbSettings
// 0x0018
struct FReverbSettings
{
	unsigned char                                      bApplyReverb : 1;                                          // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_JL89[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_EReverbPreset>                  ReverbType;                                                // 0x0004(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FKTS[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UReverbEffect*                               ReverbEffect;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Volume;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeTime;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.InteriorSettings
// 0x0024
struct FInteriorSettings
{
	unsigned char                                      bIsWorldSettings : 1;                                      // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_YWC1[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ExteriorVolume;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ExteriorTime;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ExteriorLPF;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ExteriorLPFTime;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InteriorVolume;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InteriorTime;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InteriorLPF;                                               // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InteriorLPFTime;                                           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.NetViewer
// 0x0028
struct FNetViewer
{
	class AActor*                                      InViewer;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      ViewTarget;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ViewLocation;                                              // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ViewDir;                                                   // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ExternalMip
// 0x0028
struct FExternalMip
{
	uint32_t                                           SizeX;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint32_t                                           SizeY;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint32_t                                           OffsetInFile;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint32_t                                           DataSizeOnDisk;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint32_t                                           DataSize;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint32_t                                           DecompressionFlags;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9JS0[0x10];                                    // 0x0018(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.DebugTextInfo
// 0x0060
struct FDebugTextInfo
{
	class AActor*                                      SrcActor;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     SrcActorOffset;                                            // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     SrcActorDesiredOffset;                                     // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     DebugText;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	float                                              TimeRemaining;                                             // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                      TextColor;                                                 // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bAbsoluteLocation : 1;                                     // 0x003C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bKeepAttachedToActor : 1;                                  // 0x003C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bDrawShadow : 1;                                           // 0x003C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_0ICO[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     OrigActorLocation;                                         // 0x0040(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CFSX[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFont*                                       Font;                                                      // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FontScale;                                                 // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VEDP[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.FeatureToggledStringAssetReferenceEntry
// 0x0018
struct FFeatureToggledStringAssetReferenceEntry
{
	struct FStringAssetReference                       Asset;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FName                                       Feature;                                                   // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.FractureEffect
// 0x0010
struct FFractureEffect
{
	class UParticleSystem*                             ParticleSystem;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Sound;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.LayerActorStats
// 0x0010
struct FLayerActorStats
{
	class UClass*                                      Type;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Total;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0UC3[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SoundGroup
// 0x0020
struct FSoundGroup
{
	TEnumAsByte<Engine_ESoundGroup>                    SoundGroup;                                                // 0x0000(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BOXJ[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DisplayName;                                               // 0x0008(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash)
	unsigned char                                      bAlwaysDecompressOnLoad : 1;                               // 0x0018(0x0001) BIT_FIELD (Config, NoDestructor)
	unsigned char                                      UnknownData_810S[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DecompressedDuration;                                      // 0x001C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SubtitleCue
// 0x0040
struct FSubtitleCue
{
	struct FText                                       Text;                                                      // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible)
	unsigned char                                      UnknownData_HNRP[0x20];                                    // 0x0000(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              Time;                                                      // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_E0SB[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.LocalizedSubtitle
// 0x0028
struct FLocalizedSubtitle
{
	struct FString                                     LanguageExt;                                               // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FSubtitleCue>                        Subtitles;                                                 // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      bMature : 1;                                               // 0x0020(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bManualWordWrap : 1;                                       // 0x0020(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bSingleLine : 1;                                           // 0x0020(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_OQFL[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SoundClassProperties
// 0x0024
struct FSoundClassProperties
{
	float                                              Volume;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Pitch;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StereoBleed;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LFEBleed;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VoiceCenterChannelVolume;                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RadioFilterVolume;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RadioFilterVolumeThreshold;                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bApplyEffects : 1;                                         // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bAlwaysPlay : 1;                                           // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bIsUISound : 1;                                            // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bIsMusic : 1;                                              // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bReverb : 1;                                               // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bCenterChannelOnly : 1;                                    // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bApplyAmbientVolumes : 1;                                  // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_PONW[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_EAudioOutputTarget>             OutputTarget;                                              // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OVI7[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.PassiveSoundMixModifier
// 0x0010
struct FPassiveSoundMixModifier
{
	class USoundMix*                                   SoundMix;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinVolumeThreshold;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxVolumeThreshold;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AudioEQEffect
// 0x0028
struct FAudioEQEffect
{
	unsigned char                                      UnknownData_4VX2[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HFFrequency;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HFGain;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MFCutoffFrequency;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MFBandwidth;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MFGain;                                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LFFrequency;                                               // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LFGain;                                                    // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FYLM[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SoundClassAdjuster
// 0x0018
struct FSoundClassAdjuster
{
	class USoundClass*                                 SoundClassObject;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeAdjuster;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PitchAdjuster;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bApplyToChildren : 1;                                      // 0x0010(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_OJP7[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              VoiceCenterChannelVolumeAdjuster;                          // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.DialogueContext
// 0x0018
struct FDialogueContext
{
	class UDialogueVoice*                              Speaker;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UDialogueVoice*>                      Targets;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.DialogueWaveParameter
// 0x0020
struct FDialogueWaveParameter
{
	class UDialogueWave*                               DialogueWave;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDialogueContext                            Context;                                                   // 0x0008(0x0018) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.DistanceDatum
// 0x0014
struct FDistanceDatum
{
	float                                              FadeInDistanceStart;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeInDistanceEnd;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeOutDistanceStart;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeOutDistanceEnd;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Volume;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ModulatorContinuousParams
// 0x0020
struct FModulatorContinuousParams
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Default;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinInput;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxInput;                                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinOutput;                                                 // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxOutput;                                                 // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EModulationParamMode>           ParamMode;                                                 // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FLAQ[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SubsurfaceProfileStruct
// 0x0024
struct FSubsurfaceProfileStruct
{
	float                                              ScatterRadius;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                SubsurfaceColor;                                           // 0x0004(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                FalloffColor;                                              // 0x0014(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.TTTrackBase
// 0x000C
struct FTTTrackBase
{
	struct FName                                       TrackName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsExternalCurve;                                          // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CEY9[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.TTEventTrack
// 0x000C (0x0018 - 0x000C)
struct FTTEventTrack : public FTTTrackBase
{
	unsigned char                                      UnknownData_D2WF[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 CurveKeys;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.TTFloatTrack
// 0x000C (0x0018 - 0x000C)
struct FTTFloatTrack : public FTTTrackBase
{
	unsigned char                                      UnknownData_3YQX[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 CurveFloat;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.TTVectorTrack
// 0x000C (0x0018 - 0x000C)
struct FTTVectorTrack : public FTTTrackBase
{
	unsigned char                                      UnknownData_Q2UV[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveVector*                                CurveVector;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.TTLinearColorTrack
// 0x000C (0x0018 - 0x000C)
struct FTTLinearColorTrack : public FTTTrackBase
{
	unsigned char                                      UnknownData_1M9N[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveLinearColor*                           CurveLinearColor;                                          // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.TouchInputControl
// 0x0078
struct FTouchInputControl
{
	class UTexture2D*                                  Image1;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Image2;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Center;                                                    // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   VisualSize;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   ThumbSize;                                                 // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   InteractionSize;                                           // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   InputScale;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FKey                                        MainInputKey;                                              // 0x0038(0x0020) (Edit)
	struct FKey                                        AltInputKey;                                               // 0x0058(0x0020) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ReferencePose
// 0x0018
struct FReferencePose
{
	struct FName                                       PoseName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTransform>                          ReferencePose;                                             // 0x0008(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.RepMovement
// 0x0038
struct FRepMovement
{
	struct FVector                                     LinearVelocity;                                            // 0x0000(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	struct FVector                                     AngularVelocity;                                           // 0x000C(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	struct FVector                                     Location;                                                  // 0x0018(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rotation;                                                  // 0x0024(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      bSimulatedPhysicSleep : 1;                                 // 0x0030(0x0001) BIT_FIELD (Transient, NoDestructor)
	unsigned char                                      bRepPhysics : 1;                                           // 0x0030(0x0001) BIT_FIELD (Transient, NoDestructor)
	TEnumAsByte<Engine_EVectorQuantization>            LocationQuantizationLevel;                                 // 0x0031(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TEnumAsByte<Engine_EVectorQuantization>            VelocityQuantizationLevel;                                 // 0x0032(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TEnumAsByte<Engine_ERotatorQuantization>           RotationQuantizationLevel;                                 // 0x0033(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XZOG[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AtmospherePrecomputeParameters
// 0x002C
struct FAtmospherePrecomputeParameters
{
	float                                              DensityHeight;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DecayHeight;                                               // 0x0004(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScatteringOrder;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TransmittanceTexWidth;                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TransmittanceTexHeight;                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                IrradianceTexWidth;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                IrradianceTexHeight;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InscatterAltitudeSampleNum;                                // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InscatterMuNum;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InscatterMuSNum;                                           // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InscatterNuNum;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.KeyHandleMap
// 0x0050
struct FKeyHandleMap
{
	unsigned char                                      UnknownData_YY00[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.IndexedCurve
// 0x0058
struct FIndexedCurve
{
	unsigned char                                      UnknownData_T8OY[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKeyHandleMap                               KeyHandlesToIndices;                                       // 0x0008(0x0050) (Transient, Protected)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.RichCurveKey
// 0x001C
struct FRichCurveKey
{
	TEnumAsByte<Engine_ERichCurveInterpMode>           InterpMode;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ERichCurveTangentMode>          TangentMode;                                               // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ERichCurveTangentWeightMode>    TangentWeightMode;                                         // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AHED[0x1];                                     // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Time;                                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ArriveTangent;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ArriveTangentWeight;                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LeaveTangent;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LeaveTangentWeight;                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.RichCurve
// 0x0020 (0x0078 - 0x0058)
struct FRichCurve : public FIndexedCurve
{
	TEnumAsByte<Engine_ERichCurveExtrapolation>        PreInfinityExtrap;                                         // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ERichCurveExtrapolation>        PostInfinityExtrap;                                        // 0x0059(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RPUB[0x6];                                     // 0x005A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FRichCurveKey>                       Keys;                                                      // 0x0060(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	float                                              DefaultValue;                                              // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3PWU[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.RuntimeFloatCurve
// 0x0080
struct FRuntimeFloatCurve
{
	struct FRichCurve                                  EditorCurveData;                                           // 0x0000(0x0078)
	class UCurveFloat*                                 ExternalCurve;                                             // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AttenuationSettings
// 0x00C0
struct FAttenuationSettings
{
	unsigned char                                      bAttenuate : 1;                                            // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bSpatialize : 1;                                           // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bAttenuateWithLPF : 1;                                     // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_3W56[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_ESoundDistanceModel>            DistanceAlgorithm;                                         // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9SC5[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeFloatCurve                          CustomAttenuationCurve;                                    // 0x0008(0x0080) (Edit, BlueprintVisible)
	TEnumAsByte<Engine_ESoundDistanceCalc>             DistanceType;                                              // 0x0088(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EAttenuationShape>              AttenuationShape;                                          // 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9Q0S[0x2];                                     // 0x008A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              dBAttenuationAtMax;                                        // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OmniRadius;                                                // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ESoundSpatializationAlgorithm>  SpatializationAlgorithm;                                   // 0x0094(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EUDB[0x3];                                     // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RadiusMin;                                                 // 0x0098(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RadiusMax;                                                 // 0x009C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     AttenuationShapeExtents;                                   // 0x00A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ConeOffset;                                                // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FalloffDistance;                                           // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LPFRadiusMin;                                              // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LPFRadiusMax;                                              // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_G813[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AudioComponentParam
// 0x0020
struct FAudioComponentParam
{
	struct FName                                       ParamName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FloatParam;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BoolParam;                                                 // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_81D5[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                IntParam;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LXHC[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundWave*                                  SoundWaveParam;                                            // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.LightmassLightSettings
// 0x000C
struct FLightmassLightSettings
{
	float                                              IndirectLightingSaturation;                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ShadowExponent;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bUseAreaShadowsForStationaryLight;                         // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_N5WJ[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.LightmassDirectionalLightSettings
// 0x0004 (0x0010 - 0x000C)
struct FLightmassDirectionalLightSettings : public FLightmassLightSettings
{
	float                                              LightSourceAngle;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.LightmassPointLightSettings
// 0x0000 (0x000C - 0x000C)
struct FLightmassPointLightSettings : public FLightmassLightSettings
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.NavGraphNode
// 0x0018
struct FNavGraphNode
{
	class UObject*                                     Owner;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UP4I[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.FFTWaterComponentWaveParticleType
// 0x0038
struct FFFTWaterComponentWaveParticleType
{
	struct FVector2D                                   SpawnRadiusRange;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   FoamRange;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   HeightRange;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   AngleRange;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   CalmWaterDampeningFactorRange;                             // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Density;                                                   // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CON6[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleComputeShaderData*                  ParticleComputeShaderData;                                 // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.FFTWaterComponentIntersectParticleType
// 0x0058
struct FFFTWaterComponentIntersectParticleType
{
	struct FVector2D                                   VelocityRange;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   FoamRange;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   HeightRange;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   ParticleWaveVelocityRange;                                 // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   ParticleWaveAbsoluteSpeedDifferenceRange;                  // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Density;                                                   // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeHorizontalVelocityWeight;                            // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HorizontalDirectionFromVolumeWeight;                       // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HorizontalRandomVelocityWeight;                            // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeVerticalVelocityWeight;                              // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VerticalRandomVelocityWeight;                              // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WaterVelocityWeight;                                       // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VelocityScaling;                                           // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnderwaterParticles : 1;                                   // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_ZR6L[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleComputeShaderData*                  ParticleComputeShaderData;                                 // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.FFTWaterComponentParticleParams
// 0x0248
struct FFFTWaterComponentParticleParams
{
	int                                                MaxParticlesPerFrame;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Z6Z5[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFFTWaterComponentWaveParticleType          WaveParticles[0x4];                                        // 0x0008(0x00E0) (Edit)
	struct FFFTWaterComponentIntersectParticleType     IntersectionParticles[0x4];                                // 0x00E8(0x0160) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.MurkyRegion
// 0x0020
struct FMurkyRegion
{
	bool                                               Enabled;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9Z3G[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Position;                                                  // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              InnerRadius;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OuterRadius;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Density;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSuperHeatedWater;                                        // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4AZ6[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.MaterialSpriteElement
// 0x0028
struct FMaterialSpriteElement
{
	class UMaterialInterface*                          Material;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 DistanceToOpacityCurve;                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bSizeIsInScreenSpace : 1;                                  // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_Q4DS[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BaseSizeX;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BaseSizeY;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_I7GZ[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 DistanceToSizeCurve;                                       // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.CustomChannelSetup
// 0x0010
struct FCustomChannelSetup
{
	TEnumAsByte<Engine_ECollisionChannel>              Channel;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UY9J[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Name;                                                      // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             DefaultResponse;                                           // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bTraceType;                                                // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bStaticObject;                                             // 0x000E(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QVU0[0x1];                                     // 0x000F(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.CustomProfile
// 0x0018
struct FCustomProfile
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FResponseChannel>                    CustomResponses;                                           // 0x0008(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.Redirector
// 0x0010
struct FRedirector
{
	struct FName                                       OldName;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       NewName;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.MergedCollisionComponentStaticMeshInstanceData
// 0x0040
struct FMergedCollisionComponentStaticMeshInstanceData
{
	struct FTransform                                  RelativeTransform;                                         // 0x0000(0x0030) (Edit, EditConst, IsPlainOldData, NoDestructor)
	class UStaticMesh*                                 StaticMesh;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OwningActorCrc32;                                          // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XBP6[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.FilePath
// 0x0010
struct FFilePath
{
	struct FString                                     FilePath;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ImportFactorySettingValues
// 0x0020
struct FImportFactorySettingValues
{
	struct FString                                     SettingName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	struct FString                                     Value;                                                     // 0x0010(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.EditorImportWorkflowDefinition
// 0x0020
struct FEditorImportWorkflowDefinition
{
	struct FFilePath                                   ImportFilePath;                                            // 0x0000(0x0010) (Edit, Config)
	TArray<struct FImportFactorySettingValues>         FactorySettings;                                           // 0x0010(0x0010) (Edit, ZeroConstructor, Config)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BuildPromotionImportWorkflowSettings
// 0x0150
struct FBuildPromotionImportWorkflowSettings
{
	struct FEditorImportWorkflowDefinition             Diffuse;                                                   // 0x0000(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             Normal;                                                    // 0x0020(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             StaticMesh;                                                // 0x0040(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             ReimportStaticMesh;                                        // 0x0060(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             BlendShapeMesh;                                            // 0x0080(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             MorphMesh;                                                 // 0x00A0(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             SkeletalMesh;                                              // 0x00C0(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             Animation;                                                 // 0x00E0(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             Sound;                                                     // 0x0100(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             SurroundSound;                                             // 0x0120(0x0020) (Edit, Config)
	TArray<struct FEditorImportWorkflowDefinition>     OtherAssetsToImport;                                       // 0x0140(0x0010) (Edit, ZeroConstructor, Config)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.MaterialEditorPromotionSettings
// 0x0030
struct FMaterialEditorPromotionSettings
{
	struct FFilePath                                   DefaultMaterialAsset;                                      // 0x0000(0x0010) (Edit)
	struct FFilePath                                   DefaultDiffuseTexture;                                     // 0x0010(0x0010) (Edit)
	struct FFilePath                                   DefaultNormalTexture;                                      // 0x0020(0x0010) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.DirectoryPath
// 0x0010
struct FDirectoryPath
{
	struct FString                                     path;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ExternalToolDefinition
// 0x0060
struct FExternalToolDefinition
{
	struct FString                                     ToolName;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	struct FFilePath                                   ExecutablePath;                                            // 0x0010(0x0010) (Edit, Config)
	struct FString                                     CommandLineOptions;                                        // 0x0020(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	struct FDirectoryPath                              WorkingDirectory;                                          // 0x0030(0x0010) (Edit, Config)
	struct FString                                     ScriptExtension;                                           // 0x0040(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	struct FDirectoryPath                              ScriptDirectory;                                           // 0x0050(0x0010) (Edit, Config)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BranchFilter
// 0x000C
struct FBranchFilter
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BlendDepth;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.InputBlendPose
// 0x0010
struct FInputBlendPose
{
	TArray<struct FBranchFilter>                       BranchFilters;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BeamModifierOptions
// 0x0004
struct FBeamModifierOptions
{
	unsigned char                                      bModify : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bScale : 1;                                                // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bLock : 1;                                                 // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_GWKE[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.PrimitiveSphereEmitterAngleRanges
// 0x0010
struct FPrimitiveSphereEmitterAngleRanges
{
	struct FVector2D                                   HorizontalAngle;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   VerticalAngle;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ExposedValueCopyRecord
// 0x0070
struct FExposedValueCopyRecord
{
	class UProperty*                                   SourceProperty;                                            // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SourcePropertyName;                                        // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               SourceSubPropertyNames;                                    // 0x0010(0x0010) (ZeroConstructor)
	int                                                SourceArrayIndex;                                          // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_98IM[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UProperty*                                   DestProperty;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DestArrayIndex;                                            // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Size;                                                      // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EPostCopyOperation>             PostCopyOperation;                                         // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QMC3[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBoolProperty*                               CachedBoolSourceProperty;                                  // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBoolProperty*                               CachedBoolDestProperty;                                    // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_THLJ[0x20];                                    // 0x0050(0x0020) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ExposedValueHandler
// 0x0028
struct FExposedValueHandler
{
	struct FName                                       BoundFunction;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FExposedValueCopyRecord>             CopyRecords;                                               // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_HDX5[0x10];                                    // 0x0018(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_Base
// 0x0030
struct FAnimNode_Base
{
	unsigned char                                      UnknownData_ER2Q[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FExposedValueHandler                        EvaluateGraphExposedInputs;                                // 0x0008(0x0028)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.PoseLinkBase
// 0x0018
struct FPoseLinkBase
{
	int                                                LinkID;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EE6T[0x14];                                    // 0x0004(0x0014) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.PoseLink
// 0x0000 (0x0018 - 0x0018)
struct FPoseLink : public FPoseLinkBase
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_SaveCachedPose
// 0x0060 (0x0090 - 0x0030)
struct FAnimNode_SaveCachedPose : public FAnimNode_Base
{
	int16_t                                            LastInitializedContextCounter;                             // 0x0030(0x0002) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int16_t                                            LastCacheBonesContextCounter;                              // 0x0032(0x0002) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int16_t                                            LastUpdatedContextCounter;                                 // 0x0034(0x0002) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int16_t                                            LastEvaluatedContextCounter;                               // 0x0036(0x0002) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                                   Pose;                                                      // 0x0038(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData_M5W0[0x40];                                    // 0x0050(0x0040) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_AssetPlayerBase
// 0x0010 (0x0040 - 0x0030)
struct FAnimNode_AssetPlayerBase : public FAnimNode_Base
{
	bool                                               bIgnoreForRelevancyTest;                                   // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YW98[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BlendWeight;                                               // 0x0034(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              InternalTimeAccumulator;                                   // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Y9EW[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_SequenceEvaluator
// 0x0010 (0x0050 - 0x0040)
struct FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase
{
	class UAnimSequenceBase*                           Sequence;                                                  // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ExplicitTime;                                              // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2BNK[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_SequencePlayer
// 0x0020 (0x0060 - 0x0040)
struct FAnimNode_SequencePlayer : public FAnimNode_AssetPlayerBase
{
	class UAnimSequenceBase*                           Sequence;                                                  // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bLoopAnimation;                                            // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5LX9[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PlayRate;                                                  // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GroupIndex;                                                // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EAnimGroupRole>                 GroupRole;                                                 // 0x0054(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_A3YB[0xB];                                     // 0x0055(0x000B) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_Slot
// 0x0030 (0x0060 - 0x0030)
struct FAnimNode_Slot : public FAnimNode_Base
{
	struct FPoseLink                                   Source;                                                    // 0x0030(0x0018) (Edit, BlueprintVisible)
	struct FName                                       SlotName;                                                  // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_25J9[0x8];                                     // 0x0050(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int16_t                                            LastSlotNodeInitializationCounter;                         // 0x0058(0x0002) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_M3U8[0x6];                                     // 0x005A(0x0006) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_StateMachine
// 0x0078 (0x00A8 - 0x0030)
struct FAnimNode_StateMachine : public FAnimNode_Base
{
	int                                                StateMachineIndexInClass;                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxTransitionsPerFrame;                                    // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1Y7A[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CurrentState;                                              // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              ElapsedTime;                                               // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_P77S[0x60];                                    // 0x0048(0x0060) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimationPotentialTransition
// 0x0010
struct FAnimationPotentialTransition
{
	unsigned char                                      UnknownData_WHH3[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimationActiveTransitionEntry
// 0x0090
struct FAnimationActiveTransitionEntry
{
	unsigned char                                      UnknownData_FRVH[0x90];                                    // 0x0000(0x0090) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
// 0x0050 (0x0080 - 0x0030)
struct FAnimNode_TransitionPoseEvaluator : public FAnimNode_Base
{
	TEnumAsByte<Engine_EEvaluatorDataSource>           DataSource;                                                // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EEvaluatorMode>                 EvaluatorMode;                                             // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_REZK[0x2];                                     // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                FramesToCachePose;                                         // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_K1OB[0x40];                                    // 0x0038(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CacheFramesRemaining;                                      // 0x0078(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9IJ7[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_TransitionResult
// 0x0010 (0x0040 - 0x0030)
struct FAnimNode_TransitionResult : public FAnimNode_Base
{
	bool                                               bCanEnterTransition;                                       // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_V95F[0xF];                                     // 0x0031(0x000F) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BlueprintInputAxisKeyDelegateBinding
// 0x002C (0x0030 - 0x0004)
struct FBlueprintInputAxisKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData_W11L[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKey                                        AxisKey;                                                   // 0x0008(0x0020)
	struct FName                                       FunctionNameToBind;                                        // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BlueprintInputKeyDelegateBinding
// 0x003C (0x0040 - 0x0004)
struct FBlueprintInputKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData_4GZO[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInputChord                                 InputChord;                                                // 0x0008(0x0028)
	TEnumAsByte<Engine_EInputEvent>                    InputKeyEvent;                                             // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_T2HY[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       FunctionNameToBind;                                        // 0x0034(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_09H6[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BlueprintInputTouchDelegateBinding
// 0x000C (0x0010 - 0x0004)
struct FBlueprintInputTouchDelegateBinding : public FBlueprintInputDelegateBinding
{
	TEnumAsByte<Engine_EInputEvent>                    InputKeyEvent;                                             // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KA7U[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       FunctionNameToBind;                                        // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.HIKBoneTransform
// 0x0030
struct FHIKBoneTransform
{
	int                                                BoneID;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Translation;                                               // 0x0004(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FQuat                                       Orientation;                                               // 0x0010(0x0010) (Edit, IsPlainOldData, NoDestructor)
	struct FVector                                     Scale;                                                     // 0x0020(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_T95F[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ExpressionInput
// 0x0038
struct FExpressionInput
{
	class UMaterialExpression*                         Expression;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OutputIndex;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OID5[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     InputName;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	int                                                Mask;                                                      // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaskR;                                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaskG;                                                     // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaskB;                                                     // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaskA;                                                     // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GCC64_Padding;                                             // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.CustomInput
// 0x0048
struct FCustomInput
{
	struct FString                                     InputName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	struct FExpressionInput                            Input;                                                     // 0x0010(0x0038) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ExpressionOutput
// 0x0028
struct FExpressionOutput
{
	struct FString                                     OutputName;                                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	int                                                Mask;                                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaskR;                                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaskG;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaskB;                                                     // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaskA;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FZBY[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.FunctionExpressionOutput
// 0x0040
struct FFunctionExpressionOutput
{
	class UMaterialExpressionFunctionOutput*           ExpressionOutput;                                          // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       ExpressionOutputId;                                        // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FExpressionOutput                           Output;                                                    // 0x0018(0x0028) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BasedPosition
// 0x0038
struct FBasedPosition
{
	class AActor*                                      Base;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Position;                                                  // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     CachedBaseLocation;                                        // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    CachedBaseRotation;                                        // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     CachedTransPosition;                                       // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.RigidBodyContactInfo
// 0x0030
struct FRigidBodyContactInfo
{
	struct FVector                                     ContactPosition;                                           // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ContactNormal;                                             // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ContactPenetration;                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XRO7[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPhysicalMaterial*                           PhysMaterial[0x2];                                         // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.CollisionImpactData
// 0x0028
struct FCollisionImpactData
{
	TArray<struct FRigidBodyContactInfo>               ContactInfos;                                              // 0x0000(0x0010) (ZeroConstructor)
	struct FVector                                     TotalNormalImpulse;                                        // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     TotalFrictionImpulse;                                      // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.RigidBodyState
// 0x0040
struct FRigidBodyState
{
	struct FVector_NetQuantize100                      Position;                                                  // 0x0000(0x000C)
	unsigned char                                      UnknownData_W0GR[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       Quaternion;                                                // 0x0010(0x0010) (IsPlainOldData, NoDestructor)
	struct FVector_NetQuantize100                      LinVel;                                                    // 0x0020(0x000C)
	struct FVector_NetQuantize100                      AngVel;                                                    // 0x002C(0x000C)
	unsigned char                                      Flags;                                                     // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4ZYI[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.EditedDocumentInfo
// 0x0018
struct FEditedDocumentInfo
{
	class UObject*                                     EditedObject;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   SavedViewOffset;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SavedZoomAmount;                                           // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PRZX[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BPInterfaceDescription
// 0x0018
struct FBPInterfaceDescription
{
	class UClass*                                      Interface;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class UEdGraph*>                            Graphs;                                                    // 0x0008(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.EdGraphPinType
// 0x0050
struct FEdGraphPinType
{
	struct FString                                     PinCategory;                                               // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     PinSubCategory;                                            // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	TWeakObjectPtr<class UObject>                      PinSubCategoryObject;                                      // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	struct FSimpleMemberReference                      PinSubCategoryMemberReference;                             // 0x0028(0x0020)
	bool                                               bIsArray;                                                  // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsReference;                                              // 0x0049(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsConst;                                                  // 0x004A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsWeakPointer;                                            // 0x004B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LUN0[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BPVariableMetaDataEntry
// 0x0018
struct FBPVariableMetaDataEntry
{
	struct FName                                       DataKey;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     DataValue;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BPVariableDescription
// 0x00E0
struct FBPVariableDescription
{
	struct FName                                       VarName;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       VarGuid;                                                   // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FEdGraphPinType                             VarType;                                                   // 0x0018(0x0050) (Edit)
	struct FString                                     FriendlyName;                                              // 0x0068(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	struct FText                                       Category;                                                  // 0x0078(0x0018) ELEMENT_SIZE_MISMATCH (Edit)
	unsigned char                                      UnknownData_Q267[0x20];                                    // 0x0078(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	uint64_t                                           PropertyFlags;                                             // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       RepNotifyFunc;                                             // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FBPVariableMetaDataEntry>            MetaDataArray;                                             // 0x00C0(0x0010) (Edit, ZeroConstructor)
	struct FString                                     DefaultValue;                                              // 0x00D0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.MemberReference
// 0x0038
struct FMemberReference
{
	class UObject*                                     MemberParent;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FString                                     MemberScope;                                               // 0x0008(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash)
	struct FName                                       MemberName;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FGuid                                       MemberGuid;                                                // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	bool                                               bSelfContext;                                              // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	bool                                               bWasDeprecated;                                            // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_S4OA[0x6];                                     // 0x0032(0x0006) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.LatentActionManager
// 0x00F0
struct FLatentActionManager
{
	unsigned char                                      UnknownData_U9OJ[0xF0];                                    // 0x0000(0x00F0) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.EndClothSimulationFunction
// 0x0008 (0x0050 - 0x0048)
struct FEndClothSimulationFunction : public FTickFunction
{
	unsigned char                                      UnknownData_7GNW[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.StartClothSimulationFunction
// 0x0008 (0x0050 - 0x0048)
struct FStartClothSimulationFunction : public FTickFunction
{
	unsigned char                                      UnknownData_EXM3[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.EndPhysicsTickFunction
// 0x0008 (0x0050 - 0x0048)
struct FEndPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_3I99[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.StartPhysicsTickFunction
// 0x0008 (0x0050 - 0x0048)
struct FStartPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_CP0T[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.LevelViewportInfo
// 0x0020
struct FLevelViewportInfo
{
	struct FVector                                     CamPosition;                                               // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    CamRotation;                                               // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              CamOrthoZoom;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CamUpdated;                                                // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6ACK[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.MaterialSimplificationSettings
// 0x0044
struct FMaterialSimplificationSettings
{
	struct FIntPoint                                   BaseColorMapSize;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bNormalMap;                                                // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F3DK[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FIntPoint                                   NormalMapSize;                                             // 0x000C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MetallicConstant;                                          // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bMetallicMap;                                              // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TT7F[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FIntPoint                                   MetallicMapSize;                                           // 0x001C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RoughnessConstant;                                         // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bRoughnessMap;                                             // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XCWZ[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FIntPoint                                   RoughnessMapSize;                                          // 0x002C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SpecularConstant;                                          // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bSpecularMap;                                              // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_98IO[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FIntPoint                                   SpecularMapSize;                                           // 0x003C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.LevelSimplificationDetails
// 0x00AC
struct FLevelSimplificationDetails
{
	bool                                               bCreatePackagePerAsset;                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_297G[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ProxyPixelSize;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMaterialSimplificationSettings             StaticMeshMaterial;                                        // 0x0008(0x0044) (Edit)
	bool                                               bOverrideLandscapeExportLOD;                               // 0x004C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A6A3[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LandscapeExportLOD;                                        // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMaterialSimplificationSettings             LandscapeMaterial;                                         // 0x0054(0x0044) (Edit)
	bool                                               bRemoveDownwardFacingTriangles;                            // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_X1MT[0x3];                                     // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CullAngleThreshold;                                        // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bBakeFoliageToLandscape;                                   // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bBakeGrassToLandscape;                                     // 0x00A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bGenerateMeshNormalMap;                                    // 0x00A2(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	bool                                               bGenerateMeshMetallicMap;                                  // 0x00A3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	bool                                               bGenerateMeshRoughnessMap;                                 // 0x00A4(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	bool                                               bGenerateMeshSpecularMap;                                  // 0x00A5(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	bool                                               bGenerateLandscapeNormalMap;                               // 0x00A6(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	bool                                               bGenerateLandscapeMetallicMap;                             // 0x00A7(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	bool                                               bGenerateLandscapeRoughnessMap;                            // 0x00A8(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	bool                                               bGenerateLandscapeSpecularMap;                             // 0x00A9(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5S26[0x2];                                     // 0x00AA(0x0002) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.StreamableTextureInstance
// 0x0014
struct FStreamableTextureInstance
{
	unsigned char                                      UnknownData_XMTV[0x14];                                    // 0x0000(0x0014) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.DynamicTextureInstance
// 0x0014 (0x0028 - 0x0014)
struct FDynamicTextureInstance : public FStreamableTextureInstance
{
	unsigned char                                      UnknownData_DT16[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  Texture;                                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAttached;                                                 // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KBB3[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              OriginalRadius;                                            // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.NameCurveKey
// 0x000C
struct FNameCurveKey
{
	float                                              Time;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Value;                                                     // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.NameCurve
// 0x0010 (0x0068 - 0x0058)
struct FNameCurve : public FIndexedCurve
{
	TArray<struct FNameCurveKey>                       Keys;                                                      // 0x0058(0x0010) (Edit, EditFixedSize, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.CollisionMergingSettings
// 0x0001
struct FCollisionMergingSettings
{
	unsigned char                                      UnknownData_IYKT[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.MergedCollisionActorsSimplification
// 0x000C
struct FMergedCollisionActorsSimplification
{
	struct FCollisionMergingSettings                   MergeCollisionSettings;                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_Y1FU[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxBoundRadius;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int                                                MinNumberOfComponentsToMerge;                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.MeshProxySettings
// 0x0070
struct FMeshProxySettings
{
	int                                                ScreenSize;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMaterialSimplificationSettings             Material;                                                  // 0x0004(0x0044) (Edit)
	int                                                TextureWidth;                                              // 0x0048(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TextureHeight;                                             // 0x004C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bExportNormalMap;                                          // 0x0050(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	bool                                               bExportMetallicMap;                                        // 0x0051(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	bool                                               bExportRoughnessMap;                                       // 0x0052(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	bool                                               bExportSpecularMap;                                        // 0x0053(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	bool                                               bRecalculateNormals;                                       // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_V7HN[0x3];                                     // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HardAngleThreshold;                                        // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MergeDistance;                                             // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bUseClippingPlane;                                         // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JUUH[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ClippingLevel;                                             // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AxisIndex;                                                 // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bPlaneNegativeHalfspace;                                   // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_J5X4[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.MeshMergingSettings
// 0x0038
struct FMeshMergingSettings
{
	bool                                               bGenerateLightMapUV;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JT66[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TargetLightMapUVChannel;                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TargetLightMapResolution;                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bImportVertexColors;                                       // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bPivotPointAtZero;                                         // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bMergePhysicsData;                                         // 0x000E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bMergeMaterials;                                           // 0x000F(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bExportNormalMap;                                          // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bExportMetallicMap;                                        // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bExportRoughnessMap;                                       // 0x0012(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bExportSpecularMap;                                        // 0x0013(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MergedMaterialAtlasResolution;                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEnableCollisionMerging;                                   // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bUseRelativeTransform;                                     // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bMergeRelativeToFirstComponent;                            // 0x001A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bDuplicateLODs;                                            // 0x001B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_URBE[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      LODScreenSizes;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                LODForCollision;                                           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HW7U[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.HierarchicalSimplification
// 0x00C0
struct FHierarchicalSimplification
{
	bool                                               bSimplifyMesh;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BS0D[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DrawDistance;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              DesiredBoundRadius;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              DesiredFillingPercentage;                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int                                                MinNumberOfActorsToBuild;                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FMeshProxySettings                          ProxySetting;                                              // 0x0014(0x0070) (Edit, AdvancedDisplay)
	unsigned char                                      UnknownData_9QI3[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMeshMergingSettings                        MergeSetting;                                              // 0x0088(0x0038) (Edit, AdvancedDisplay)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.NavGraphEdge
// 0x0018
struct FNavGraphEdge
{
	unsigned char                                      UnknownData_R8V4[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SpriteCategoryInfo
// 0x0078
struct FSpriteCategoryInfo
{
	struct FName                                       Category;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       DisplayName;                                               // 0x0008(0x0018) ELEMENT_SIZE_MISMATCH
	unsigned char                                      UnknownData_V03L[0x20];                                    // 0x0008(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       Description;                                               // 0x0040(0x0018) ELEMENT_SIZE_MISMATCH
	unsigned char                                      UnknownData_OHO3[0x20];                                    // 0x0040(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.TriIndices
// 0x000C
struct FTriIndices
{
	int                                                v0;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                v1;                                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                v2;                                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.TriMeshCollisionData
// 0x0038
struct FTriMeshCollisionData
{
	TArray<struct FVector>                             Vertices;                                                  // 0x0000(0x0010) (ZeroConstructor, Transient)
	TArray<struct FTriIndices>                         Indices;                                                   // 0x0010(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      bFlipNormals : 1;                                          // 0x0020(0x0001) BIT_FIELD (Transient, NoDestructor)
	unsigned char                                      UnknownData_DZLW[0x17];                                    // 0x0021(0x0017) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.PreviewAttachedObjectPair
// 0x0030
struct FPreviewAttachedObjectPair
{
	TAssetPtr<class UObject>                           AttachedObject;                                            // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH (UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YOZ2[0x4];                                     // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UObject*                                     Object;                                                    // 0x0020(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       AttachedTo;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimCurveBase
// 0x0018
struct FAnimCurveBase
{
	unsigned char                                      UnknownData_ITNU[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       LastObservedName;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9TWC[0x4];                                     // 0x0010(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CurveTypeFlags;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.VectorCurve
// 0x0168 (0x0180 - 0x0018)
struct FVectorCurve : public FAnimCurveBase
{
	struct FRichCurve                                  FloatCurves[0x3];                                          // 0x0018(0x0168)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.CameraCacheEntry
// 0x05B0
struct FCameraCacheEntry
{
	float                                              TimeStamp;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YQBU[0xC];                                     // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMinimalViewInfo                            POV;                                                       // 0x0010(0x05A0)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.DelegateArray
// 0x0010
struct FDelegateArray
{
	TArray<struct FScriptDelegate>                     Delegates;                                                 // 0x0000(0x0010) (ZeroConstructor, ContainsInstancedReference)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.NetObjectPtr
// 0x0014
struct FNetObjectPtr
{
	unsigned char                                      UnknownData_Z6AG[0x14];                                    // 0x0000(0x0014) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.NetActorPtr
// 0x0014
struct FNetActorPtr
{
	struct FNetObjectPtr                               ObjectPtr;                                                 // 0x0000(0x0014)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.PacketDiscardStats
// 0x0020
struct FPacketDiscardStats
{
	int                                                DiscardCounts[0x7];                                        // 0x0000(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BytesDiscarded;                                            // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.RuntimeVectorCurve
// 0x0170
struct FRuntimeVectorCurve
{
	struct FRichCurve                                  FloatCurves[0x3];                                          // 0x0000(0x0168)
	class UCurveVector*                                ExternalCurve;                                             // 0x0168(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.FeatureFlag
// 0x0008
struct FFeatureFlag
{
	struct FName                                       FeatureName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.NetSubObjectPtr
// 0x0014
struct FNetSubObjectPtr
{
	struct FNetObjectPtr                               SubObject;                                                 // 0x0000(0x0014)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.InputScaleBias
// 0x0008
struct FInputScaleBias
{
	float                                              Scale;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Bias;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ComponentSpacePoseLink
// 0x0000 (0x0018 - 0x0018)
struct FComponentSpacePoseLink : public FPoseLinkBase
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.IntegralKey
// 0x0008
struct FIntegralKey
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Value;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.IntegralCurve
// 0x0018 (0x0070 - 0x0058)
struct FIntegralCurve : public FIndexedCurve
{
	TArray<struct FIntegralKey>                        Keys;                                                      // 0x0058(0x0010) (Edit, ZeroConstructor)
	int                                                DefaultValue;                                              // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bUseDefaultValueBeforeFirstKey;                            // 0x006C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DOWV[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.StringCurveKey
// 0x0018
struct FStringCurveKey
{
	float                                              Time;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BG67[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Value;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.StringCurve
// 0x0020 (0x0078 - 0x0058)
struct FStringCurve : public FIndexedCurve
{
	struct FString                                     DefaultValue;                                              // 0x0058(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FStringCurveKey>                     Keys;                                                      // 0x0068(0x0010) (Edit, EditFixedSize, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ExposureSettings
// 0x0008
struct FExposureSettings
{
	int                                                LogOffset;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFixed;                                                    // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_J1W2[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.URL
// 0x0070
struct FURL
{
	struct FString                                     Protocol;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Host;                                                      // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	int                                                Port;                                                      // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1XIM[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Map;                                                       // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     RedirectURL;                                               // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FString>                             Op;                                                        // 0x0048(0x0010) (ZeroConstructor)
	struct FString                                     Portal;                                                    // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	int                                                Valid;                                                     // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UIEC[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.TickPrerequisite
// 0x0010
struct FTickPrerequisite
{
	unsigned char                                      UnknownData_OTDK[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_HIKBase
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_HIKBase : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     HIKSettings;                                               // 0x0030(0x0018) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.HIKElements
// 0x0058
struct FHIKElements
{
	unsigned char                                      UnknownData_F2ME[0x58];                                    // 0x0000(0x0058) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.InterpEdSelKey
// 0x0018
struct FInterpEdSelKey
{
	class UInterpGroup*                                Group;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInterpTrack*                                Track;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                KeyIndex;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UnsnappedPosition;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.CameraPreviewInfo
// 0x0030
struct FCameraPreviewInfo
{
	class UClass*                                      PawnClass;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequence*                               AnimSeq;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // 0x0010(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rotation;                                                  // 0x001C(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	class APawn*                                       PawnInst;                                                  // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SubTrackGroup
// 0x0028
struct FSubTrackGroup
{
	struct FString                                     GroupName;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	TArray<int>                                        TrackIndices;                                              // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      bIsCollapsed : 1;                                          // 0x0020(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bIsSelected : 1;                                           // 0x0020(0x0001) BIT_FIELD (Transient, NoDestructor)
	unsigned char                                      UnknownData_8LWP[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SupportedSubTrackInfo
// 0x0020
struct FSupportedSubTrackInfo
{
	class UClass*                                      SupportedClass;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FString                                     SubTrackName;                                              // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	int                                                GroupIndex;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_P8PG[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ClientReceiveData
// 0x0040
struct FClientReceiveData
{
	class APlayerController*                           LocalPC;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       MessageType;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MessageIndex;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KS59[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MessageString;                                             // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	class APlayerState*                                RelatedPlayerState_2;                                      // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                                RelatedPlayerState_3;                                      // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     OptionalObject;                                            // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ParticleCurvePair
// 0x0018
struct FParticleCurvePair
{
	struct FString                                     CurveName;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     CurveObject;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BeamTargetData
// 0x000C
struct FBeamTargetData
{
	struct FName                                       TargetName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetPercentage;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ParticleSystemReplayFrame
// 0x0010
struct FParticleSystemReplayFrame
{
	unsigned char                                      UnknownData_O2W7[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ParticleEmitterReplayFrame
// 0x0010
struct FParticleEmitterReplayFrame
{
	unsigned char                                      UnknownData_YOAA[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SoundNodeEditorData
// 0x0008
struct FSoundNodeEditorData
{
	unsigned char                                      UnknownData_KQYW[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.StreamedAudioPlatformData
// 0x0020
struct FStreamedAudioPlatformData
{
	unsigned char                                      UnknownData_ALXL[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SoundClassEditorData
// 0x0008
struct FSoundClassEditorData
{
	unsigned char                                      UnknownData_ZHER[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimationRecordingSettings
// 0x000C
struct FAnimationRecordingSettings
{
	bool                                               bRecordInWorldSpace;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bRemoveRootAnimation;                                      // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bAutoSaveAsset;                                            // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_II4W[0x1];                                     // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SampleRate;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Length;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.TViewTarget
// 0x05C0
struct FTViewTarget
{
	class AActor*                                      Target;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ESVV[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMinimalViewInfo                            POV;                                                       // 0x0010(0x05A0) (Edit, BlueprintVisible)
	class APlayerState*                                PlayerState;                                               // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Y8YB[0x8];                                     // 0x05B8(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.FloatCurve
// 0x0078 (0x0090 - 0x0018)
struct FFloatCurve : public FAnimCurveBase
{
	struct FRichCurve                                  FloatCurve;                                                // 0x0018(0x0078)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.RawCurveTracks
// 0x0010
struct FRawCurveTracks
{
	TArray<struct FFloatCurve>                         FloatCurves;                                               // 0x0000(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.CompositeSection
// 0x0028 (0x0058 - 0x0030)
struct FCompositeSection : public FAnimLinkableElement
{
	struct FName                                       SectionName;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartTime;                                                 // 0x0038(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       NextSectionName;                                           // 0x003C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IEAS[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UAnimMetaData*>                       MetaData;                                                  // 0x0048(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimSegment
// 0x0020
struct FAnimSegment
{
	class UAnimSequenceBase*                           AnimReference;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartPos;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AnimStartTime;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AnimEndTime;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AnimPlayRate;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LoopingCount;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2OVS[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimTrack
// 0x0010
struct FAnimTrack
{
	TArray<struct FAnimSegment>                        AnimSegments;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BranchingPoint
// 0x0010 (0x0040 - 0x0030)
struct FBranchingPoint : public FAnimLinkableElement
{
	struct FName                                       EventName;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DisplayTime;                                               // 0x0038(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TriggerTimeOffset;                                         // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BranchingPointMarker
// 0x000C
struct FBranchingPointMarker
{
	int                                                NotifyIndex;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TriggerTime;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EAnimNotifyEventType>           NotifyEventType;                                           // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BDMZ[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.LightmassWorldInfoSettings
// 0x0044
struct FLightmassWorldInfoSettings
{
	float                                              StaticLightingLevelScale;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int                                                NumIndirectLightingBounces;                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IndirectLightingQuality;                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              IndirectLightingSmoothness;                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FColor                                      EnvironmentColor;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              EnvironmentIntensity;                                      // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EmissiveBoost;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DiffuseBoost;                                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bUseAmbientOcclusion : 1;                                  // 0x0020(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bGenerateAmbientOcclusionMaterialMask : 1;                 // 0x0020(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_LYKL[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DirectIlluminationOcclusionFraction;                       // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IndirectIlluminationOcclusionFraction;                     // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OcclusionExponent;                                         // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FullyOccludedSamplesFraction;                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxOcclusionDistance;                                      // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bVisualizeMaterialDiffuse : 1;                             // 0x0038(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay)
	unsigned char                                      bVisualizeAmbientOcclusion : 1;                            // 0x0038(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_PLUD[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              VolumeLightSamplePlacementScale;                           // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      bCompressLightmaps : 1;                                    // 0x0040(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_LXE7[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.VectorParameterValue
// 0x0028
struct FVectorParameterValue
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ParameterValue;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGuid                                       ExpressionGUID;                                            // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AssetEditorOrbitCameraPosition
// 0x0028
struct FAssetEditorOrbitCameraPosition
{
	bool                                               bIsSet;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CA9I[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     CamOrbitPoint;                                             // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     CamOrbitZoom;                                              // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    CamOrbitRotation;                                          // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.MeshSectionInfoMap
// 0x0050
struct FMeshSectionInfoMap
{
	unsigned char                                      UnknownData_Q0NM[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.MeshSectionInfo
// 0x0008
struct FMeshSectionInfo
{
	int                                                MaterialIndex;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEnableCollision;                                          // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bCastShadow;                                               // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1GK3[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.PresortedBillboardsParams
// 0x0008
struct FPresortedBillboardsParams
{
	TEnumAsByte<Engine_EPresortedBillboardsMode>       Mode;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5Z32[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumDirections;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.MeshBuildSettings
// 0x0040
struct FMeshBuildSettings
{
	bool                                               bUseMikkTSpace;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bRecomputeNormals;                                         // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bRecomputeTangents;                                        // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bRemoveDegenerates;                                        // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bBuildAdjacencyBuffer;                                     // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bUseFullPrecisionUVs;                                      // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bGenerateLightmapUVs;                                      // 0x0006(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7H6W[0x1];                                     // 0x0007(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPresortedBillboardsParams                  PresortedBillboardsParams;                                 // 0x0008(0x0008) (Edit)
	int                                                MinLightmapResolution;                                     // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SrcLightmapIndex;                                          // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DstLightmapIndex;                                          // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BuildScale;                                                // 0x001C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     BuildScale3D;                                              // 0x0020(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DistanceFieldResolutionScale;                              // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bGenerateDistanceFieldAsIfTwoSided;                        // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IXSJ[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 DistanceFieldReplacementMesh;                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SimplygonChannelCastingSettings
// 0x0010
struct FSimplygonChannelCastingSettings
{
	TEnumAsByte<Engine_ESimplygonMaterialChannel>      MaterialChannel;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ESimplygonCasterType>           Caster;                                                    // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bActive;                                                   // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ESimplygonColorChannels>        ColorChannels;                                             // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BitsPerChannel;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bUseSRGB;                                                  // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bBakeVertexColors;                                         // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bFlipBackfacingNormals;                                    // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bUseTangentSpaceNormals;                                   // 0x000B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bFlipGreenChannel;                                         // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5VZW[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SimplygonMaterialLODSettings
// 0x0028
struct FSimplygonMaterialLODSettings
{
	bool                                               bActive;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EMaterialLODType>               MaterialLODType;                                           // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bUseAutomaticSizes;                                        // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ESimplygonTextureResolution>    TextureWidth;                                              // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ESimplygonTextureResolution>    TextureHeight;                                             // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ESimplygonTextureSamplingQuality> SamplingQuality;                                           // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EY0Y[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                GutterSpace;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ESimplygonTextureStrech>        TextureStrech;                                             // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bReuseExistingCharts;                                      // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JQH5[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSimplygonChannelCastingSettings>    ChannelsToCast;                                            // 0x0010(0x0010) (ZeroConstructor)
	bool                                               bBakeVertexData;                                           // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bBakeActorData;                                            // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bAllowMultiMaterial;                                       // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bPreferTwoSideMaterials;                                   // 0x0023(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7CR4[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.MeshReductionSettings
// 0x0058
struct FMeshReductionSettings
{
	float                                              PercentTriangles;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDeviation;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WeldingThreshold;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HardAngleThreshold;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EMeshFeatureImportance>         SilhouetteImportance;                                      // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EMeshFeatureImportance>         TextureImportance;                                         // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EMeshFeatureImportance>         ShadingImportance;                                         // 0x0012(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bActive;                                                   // 0x0013(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bRecalculateNormals;                                       // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_I340[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                BaseLODModel;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bGenerateUniqueLightmapUVs;                                // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bKeepSymmetry;                                             // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bVisibilityAided;                                          // 0x001E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bCullOccluded;                                             // 0x001F(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EMeshFeatureImportance>         VisibilityAggressiveness;                                  // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_J33V[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSimplygonMaterialLODSettings               MaterialLODSettings;                                       // 0x0028(0x0028) (Edit)
	TEnumAsByte<Engine_EMeshFeatureImportance>         VertexColorImportance;                                     // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bForceRebuild;                                             // 0x0051(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8U3C[0x6];                                     // 0x0052(0x0006) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SimplygonRemeshingSettings
// 0x0050
struct FSimplygonRemeshingSettings
{
	bool                                               bActive;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QC94[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ScreenSize;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bRecalculateNormals;                                       // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_E0WY[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HardAngleThreshold;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MergeDistance;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bUseClippingPlane;                                         // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0PFP[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ClippingLevel;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AxisIndex;                                                 // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bPlaneNegativeHalfspace;                                   // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bUseMassiveLOD;                                            // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bUseAggregateLOD;                                          // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_O3ZS[0x5];                                     // 0x0023(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSimplygonMaterialLODSettings               MaterialLODSettings;                                       // 0x0028(0x0028) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.StaticMeshSourceModel
// 0x00F8
struct FStaticMeshSourceModel
{
	struct FMeshBuildSettings                          BuildSettings;                                             // 0x0000(0x0040) (Edit)
	struct FMeshReductionSettings                      ReductionSettings;                                         // 0x0040(0x0058) (Edit)
	struct FSimplygonRemeshingSettings                 RemeshingSettings;                                         // 0x0098(0x0050) (Edit)
	int                                                OverriddenLightMapRes;                                     // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LODDistance;                                               // 0x00EC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScreenSize;                                                // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDeviation;                                              // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.StaticMeshOptimizationSettings
// 0x001C
struct FStaticMeshOptimizationSettings
{
	TEnumAsByte<Engine_EOptimizationType>              ReductionMethod;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OJTX[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NumOfTrianglesPercentage;                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDeviationPercentage;                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WeldingThreshold;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bRecalcNormals;                                            // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HSHX[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NormalsThreshold;                                          // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      SilhouetteImportance;                                      // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      TextureImportance;                                         // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ShadingImportance;                                         // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3TDJ[0x1];                                     // 0x001B(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.TexturePlatformData
// 0x0028
struct FTexturePlatformData
{
	unsigned char                                      UnknownData_WKJ2[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.TextureSource
// 0x0080
struct FTextureSource
{
	unsigned char                                      UnknownData_3Y12[0x80];                                    // 0x0000(0x0080) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ClusterNode
// 0x0028
struct FClusterNode
{
	struct FVector                                     BoundMin;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                FirstChild;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     BoundMax;                                                  // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                LastChild;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FirstInstance;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LastInstance;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.MobileInstancedStaticMeshLOD
// 0x0008
struct FMobileInstancedStaticMeshLOD
{
	float                                              LODReduction;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceToLOD;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.CompressedTrack
// 0x0038
struct FCompressedTrack
{
	TArray<unsigned char>                              ByteStream;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      Times;                                                     // 0x0010(0x0010) (ZeroConstructor)
	float                                              Mins[0x3];                                                 // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Ranges[0x3];                                               // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.CurveTrack
// 0x0018
struct FCurveTrack
{
	struct FName                                       CurveName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                      CurveWeights;                                              // 0x0008(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.RawAnimSequenceTrack
// 0x0030
struct FRawAnimSequenceTrack
{
	TArray<struct FVector>                             PosKeys;                                                   // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FQuat>                               RotKeys;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             ScaleKeys;                                                 // 0x0020(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimSequenceTrackContainer
// 0x0020
struct FAnimSequenceTrackContainer
{
	TArray<struct FRawAnimSequenceTrack>               AnimationTracks;                                           // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FName>                               TrackNames;                                                // 0x0010(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.EditorElement
// 0x0018
struct FEditorElement
{
	int                                                Indices[0x3];                                              // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Weights[0x3];                                              // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.GridBlendSample
// 0x001C
struct FGridBlendSample
{
	struct FEditorElement                              GridElement;                                               // 0x0000(0x0018)
	float                                              BlendWeight;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AssetImportInfo
// 0x0001
struct FAssetImportInfo
{
	unsigned char                                      UnknownData_HM3S[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimationNode_TwoWayBlend
// 0x0040 (0x0070 - 0x0030)
struct FAnimationNode_TwoWayBlend : public FAnimNode_Base
{
	struct FPoseLink                                   A;                                                         // 0x0030(0x0018) (Edit, BlueprintVisible)
	struct FPoseLink                                   B;                                                         // 0x0048(0x0018) (Edit, BlueprintVisible)
	float                                              Alpha;                                                     // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBias                             AlphaScaleBias;                                            // 0x0064(0x0008) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData_Q753[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_UseCachedPose
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_UseCachedPose : public FAnimNode_Base
{
	struct FPoseLink                                   LinkToCachingNode;                                         // 0x0030(0x0018)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_ConvertComponentToLocalSpace : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     ComponentPose;                                             // 0x0030(0x0018) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.DummySpacerCameraTypes
// 0x0001
struct FDummySpacerCameraTypes
{
	unsigned char                                      UnknownData_I232[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.NetTimeStampCalculator
// 0x0070
struct FNetTimeStampCalculator
{
	unsigned char                                      UnknownData_FMZK[0x6A];                                    // 0x0000(0x006A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint16_t                                           TimesWrapped;                                              // 0x006A(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint16_t                                           PackedTimeStamp;                                           // 0x006C(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7VXN[0x2];                                     // 0x006E(0x0002) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.StreamableManager
// 0x00C0
struct FStreamableManager
{
	unsigned char                                      UnknownData_DUI0[0xC0];                                    // 0x0000(0x00C0) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ServerMigrationTelemetryFailedData
// 0x0010
struct FServerMigrationTelemetryFailedData
{
	struct FString                                     Stage;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ServerMigrationTelemetryActorData
// 0x0028
struct FServerMigrationTelemetryActorData
{
	TAssetPtr<class UClass>                            ActorClass;                                                // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_D838[0x4];                                     // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                Count;                                                     // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TH8R[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ServerMigrationTelemetrySucceededData
// 0x0020
struct FServerMigrationTelemetrySucceededData
{
	TArray<struct FServerMigrationTelemetryActorData>  ActorDetails;                                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              TotalTime;                                                 // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumClients;                                                // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumActorsMigrated;                                         // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ActorSerialisationBytes;                                   // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ReplicatedPhysicsState
// 0x0050
struct FReplicatedPhysicsState
{
	class UPrimitiveComponent*                         MovementBase;                                              // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             AttachParent;                                              // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRepMovement                                ReplicatedMovement;                                        // 0x0010(0x0038)
	bool                                               IsAttached;                                                // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IU3N[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.PaintedVertex
// 0x0014
struct FPaintedVertex
{
	struct FVector                                     Position;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPackedNormal                               Normal;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FColor                                      Color;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.StaticMeshComponentLODInfo
// 0x0028
struct FStaticMeshComponentLODInfo
{
	unsigned char                                      UnknownData_MARV[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPaintedVertex>                      PaintedVertices;                                           // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_MARU[0x8];                                     // 0x0020(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.LightmassMaterialInterfaceSettings
// 0x0014
struct FLightmassMaterialInterfaceSettings
{
	unsigned char                                      bCastShadowAsMasked : 1;                                   // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_XPBH[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              EmissiveBoost;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DiffuseBoost;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ExportResolutionScale;                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bOverrideCastShadowAsMasked : 1;                           // 0x0010(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bOverrideEmissiveBoost : 1;                                // 0x0010(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bOverrideDiffuseBoost : 1;                                 // 0x0010(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bOverrideExportResolutionScale : 1;                        // 0x0010(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_VR64[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.MaterialInput
// 0x0038
struct FMaterialInput
{
	class UMaterialExpression*                         Expression;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OutputIndex;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BT70[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     InputName;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	int                                                Mask;                                                      // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaskR;                                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaskG;                                                     // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaskB;                                                     // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaskA;                                                     // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GCC64_Padding;                                             // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ScalarMaterialInput
// 0x0008 (0x0040 - 0x0038)
struct FScalarMaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                           // 0x0038(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_T3KQ[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Constant;                                                  // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.Vector2MaterialInput
// 0x0010 (0x0048 - 0x0038)
struct FVector2MaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                           // 0x0038(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_WQ1Z[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ConstantX;                                                 // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ConstantY;                                                 // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WAEP[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.MaterialAttributesInput
// 0x0000 (0x0038 - 0x0038)
struct FMaterialAttributesInput : public FExpressionInput
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.MaterialParameterCollectionInfo
// 0x0018
struct FMaterialParameterCollectionInfo
{
	struct FGuid                                       StateId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialParameterCollection*                ParameterCollection;                                       // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.MaterialRelevance
// 0x000C
struct FMaterialRelevance
{
	unsigned char                                      bOpaque : 1;                                               // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bMasked : 1;                                               // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bDistortion : 1;                                           // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bSeparateTranslucency : 1;                                 // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bNormalTranslucency : 1;                                   // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bDisableDepthTest : 1;                                     // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bOutputsVelocityInBasePass : 1;                            // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bUsesGlobalDistanceField : 1;                              // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_Z4PL[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint16_t                                           ShadingModelMask;                                          // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_43TW[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bOITTranslucencyRelevance : 1;                             // 0x0008(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bOITAfterTranslucencyRelevance : 1;                        // 0x0008(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bLowResTranslucencyRelevance : 1;                          // 0x0008(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bLowResCloudsRelevance : 1;                                // 0x0008(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bMaskPassRelevance : 1;                                    // 0x0008(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bTranslucentBeforeTranslucency : 1;                        // 0x0008(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bTranslucentBeforeVolumeFog : 1;                           // 0x0008(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_RI3Y[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BoxElement2D
// 0x0014
struct FBoxElement2D
{
	struct FVector2D                                   Center;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	float                                              Width;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Height;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Angle;                                                     // 0x0010(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ColorMaterialInput
// 0x0008 (0x0040 - 0x0038)
struct FColorMaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                           // 0x0038(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_YM97[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FColor                                      Constant;                                                  // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BakedStateExitTransition
// 0x0020
struct FBakedStateExitTransition
{
	int                                                CanTakeDelegateIndex;                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CustomResultNodeIndex;                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TransitionIndex;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bDesiredTransitionReturnValue;                             // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bAutomaticRemainingTimeRule;                               // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SH7M[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        PoseEvaluatorLinks;                                        // 0x0010(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BakedAnimationState
// 0x0050
struct FBakedAnimationState
{
	struct FName                                       StateName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       PathedStateName;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FBakedStateExitTransition>           Transitions;                                               // 0x0010(0x0010) (ZeroConstructor)
	int                                                StateRootNodeIndex;                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StartNotify;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                EndNotify;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FullyBlendedNotify;                                        // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsAConduit;                                               // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G96O[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                EntryRuleNodeIndex;                                        // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int>                                        PlayerNodeIndices;                                         // 0x0038(0x0010) (ZeroConstructor)
	bool                                               CanBeReEntered;                                            // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GF89[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.DestructibleDamageParameters
// 0x001C
struct FDestructibleDamageParameters
{
	float                                              DamageThreshold;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageSpread;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEnableImpactDamage;                                       // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YKUA[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ImpactDamage;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DefaultImpactDamageDepth;                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bCustomImpactResistance;                                   // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S2RW[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ImpactResistance;                                          // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.DestructibleAdvancedParameters
// 0x0010
struct FDestructibleAdvancedParameters
{
	float                                              DamageCap;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ImpactVelocityThreshold;                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxChunkSpeed;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FractureImpulseScale;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.DestructibleSpecialHierarchyDepths
// 0x0014
struct FDestructibleSpecialHierarchyDepths
{
	int                                                SupportDepth;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MinimumFractureDepth;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEnableDebris;                                             // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ISOH[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DebrisDepth;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                EssentialDepth;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.DestructibleDepthParameters
// 0x0001
struct FDestructibleDepthParameters
{
	TEnumAsByte<Engine_EImpactDamageOverride>          ImpactDamageOverride;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.DestructibleParametersFlag
// 0x0004
struct FDestructibleParametersFlag
{
	unsigned char                                      bAccumulateDamage : 1;                                     // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bAssetDefinedSupport : 1;                                  // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bWorldSupport : 1;                                         // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bDebrisTimeout : 1;                                        // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bDebrisMaxSeparation : 1;                                  // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bCrumbleSmallestChunks : 1;                                // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bAccurateRaycasts : 1;                                     // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bUseValidBounds : 1;                                       // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bFormExtendedStructures : 1;                               // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_K30V[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.DestructibleDebrisParameters
// 0x002C
struct FDestructibleDebrisParameters
{
	float                                              DebrisLifetimeMin;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DebrisLifetimeMax;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DebrisMaxSeparationMin;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DebrisMaxSeparationMax;                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBox                                        ValidBounds;                                               // 0x0010(0x001C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.DestructibleParameters
// 0x0088
struct FDestructibleParameters
{
	struct FDestructibleDamageParameters               DamageParameters;                                          // 0x0000(0x001C) (Edit)
	struct FDestructibleDebrisParameters               DebrisParameters;                                          // 0x001C(0x002C) (Edit)
	struct FDestructibleAdvancedParameters             AdvancedParameters;                                        // 0x0048(0x0010) (Edit)
	struct FDestructibleSpecialHierarchyDepths         SpecialHierarchyDepths;                                    // 0x0058(0x0014) (Edit)
	unsigned char                                      UnknownData_KWF9[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDestructibleDepthParameters>        DepthParameters;                                           // 0x0070(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	struct FDestructibleParametersFlag                 Flags;                                                     // 0x0080(0x0004) (Edit)
	unsigned char                                      UnknownData_JYKN[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNotifyTrack
// 0x0028
struct FAnimNotifyTrack
{
	struct FName                                       TrackName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                TrackColor;                                                // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XVQ9[0x10];                                    // 0x0018(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_ApplyAdditive
// 0x0040 (0x0070 - 0x0030)
struct FAnimNode_ApplyAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                      // 0x0030(0x0018) (Edit, BlueprintVisible)
	struct FPoseLink                                   Additive;                                                  // 0x0048(0x0018) (Edit, BlueprintVisible)
	float                                              Alpha;                                                     // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBias                             AlphaScaleBias;                                            // 0x0064(0x0008) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData_U0BS[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AlphaBlend
// 0x0030
struct FAlphaBlend
{
	TEnumAsByte<Engine_EAlphaBlendOption>              BlendOption;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_34PN[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BeginValue;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DesiredValue;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendTime;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 CustomCurve;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AlphaLerp;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              AlphaBlend;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              AlphaTarget;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              BlendTimeRemaining;                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              BlendedValue;                                              // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0VO6[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_BlendListBase
// 0x0078 (0x00A8 - 0x0030)
struct FAnimNode_BlendListBase : public FAnimNode_Base
{
	TArray<struct FPoseLink>                           BlendPose;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<float>                                      BlendTime;                                                 // 0x0040(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TEnumAsByte<Engine_EAlphaBlendOption>              BlendType;                                                 // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_B5GJ[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 CustomBlendCurve;                                          // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAlphaBlend>                         Blends;                                                    // 0x0060(0x0010) (ZeroConstructor)
	TArray<float>                                      BlendWeights;                                              // 0x0070(0x0010) (ZeroConstructor, Protected)
	TArray<float>                                      RemainingBlendTimes;                                       // 0x0080(0x0010) (ZeroConstructor, Protected)
	int                                                LastActiveChildIndex;                                      // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DPXN[0x14];                                    // 0x0094(0x0014) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_BlendListByBool
// 0x0008 (0x00B0 - 0x00A8)
struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{
	bool                                               bActiveValue;                                              // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CNEX[0x7];                                     // 0x00A9(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_BlendListByEnum
// 0x0018 (0x00C0 - 0x00A8)
struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{
	TArray<int>                                        EnumToPoseIndex;                                           // 0x00A8(0x0010) (ZeroConstructor)
	unsigned char                                      ActiveEnumValue;                                           // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UIHB[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_BlendListByInt
// 0x0008 (0x00B0 - 0x00A8)
struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{
	int                                                ActiveChildIndex;                                          // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CR6Q[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_BlendListByObject
// 0x0018 (0x00C0 - 0x00A8)
struct FAnimNode_BlendListByObject : public FAnimNode_BlendListBase
{
	class UClass*                                      ActiveTypeValue;                                           // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class UClass*>                              ObjectToPoseIndex;                                         // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.VectorMaterialInput
// 0x0010 (0x0048 - 0x0038)
struct FVectorMaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                           // 0x0038(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_HWMA[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Constant;                                                  // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.CameraCutInfo
// 0x0010
struct FCameraCutInfo
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TimeStamp;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.LightmassPrimitiveSettings
// 0x0018
struct FLightmassPrimitiveSettings
{
	unsigned char                                      bUseTwoSidedLighting : 1;                                  // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bShadowIndirectOnly : 1;                                   // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bUseEmissiveForStaticLighting : 1;                         // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bUseVertexNormalForHemisphereGather : 1;                   // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      UnknownData_1KIC[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              EmissiveLightFalloffExponent;                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EmissiveLightExplicitInfluenceRadius;                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EmissiveBoost;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DiffuseBoost;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FullyOccludedSamplesFraction;                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_ConvertLocalToComponentSpace : public FAnimNode_Base
{
	struct FPoseLink                                   LocalPose;                                                 // 0x0030(0x0018) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.MaterialFunctionInfo
// 0x0018
struct FMaterialFunctionInfo
{
	struct FGuid                                       StateId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialFunction*                           Function;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AutomaticInstancingMeshComponentArray
// 0x0010
struct FAutomaticInstancingMeshComponentArray
{
	TArray<class UInstancedStaticMeshComponent*>       Array;                                                     // 0x0000(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.CullDistanceSizePair
// 0x0008
struct FCullDistanceSizePair
{
	float                                              Size;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CullDistance;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.NavAgentSelector
// 0x0004
struct FNavAgentSelector
{
	unsigned char                                      bSupportsAgent0 : 1;                                       // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSupportsAgent1 : 1;                                       // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSupportsAgent2 : 1;                                       // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSupportsAgent3 : 1;                                       // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSupportsAgent4 : 1;                                       // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSupportsAgent5 : 1;                                       // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSupportsAgent6 : 1;                                       // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSupportsAgent7 : 1;                                       // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSupportsAgent8 : 1;                                       // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSupportsAgent9 : 1;                                       // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSupportsAgent10 : 1;                                      // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSupportsAgent11 : 1;                                      // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSupportsAgent12 : 1;                                      // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSupportsAgent13 : 1;                                      // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSupportsAgent14 : 1;                                      // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSupportsAgent15 : 1;                                      // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_T1EL[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.FOscillator
// 0x000C
struct FFOscillator
{
	float                                              Amplitude;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Frequency;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EInitialOscillatorOffset>       InitialOffset;                                             // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MMRD[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.VOscillator
// 0x0024
struct FVOscillator
{
	struct FFOscillator                                X;                                                         // 0x0000(0x000C) (Edit)
	struct FFOscillator                                Y;                                                         // 0x000C(0x000C) (Edit)
	struct FFOscillator                                Z;                                                         // 0x0018(0x000C) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ForceFeedbackChannelDetails
// 0x0088
struct FForceFeedbackChannelDetails
{
	unsigned char                                      bAffectsLeftLarge : 1;                                     // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bAffectsLeftSmall : 1;                                     // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bAffectsRightLarge : 1;                                    // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bAffectsRightSmall : 1;                                    // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bAffectsLeftTrigger : 1;                                   // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bAffectsRightTrigger : 1;                                  // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_ELFF[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeFloatCurve                          Curve;                                                     // 0x0008(0x0080) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.InterpGroupActorInfo
// 0x0018
struct FInterpGroupActorInfo
{
	struct FName                                       ObjectName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              Actors;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.NavigationFilterArea
// 0x0018
struct FNavigationFilterArea
{
	class UClass*                                      AreaClass;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              TravelCostOverride;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EnteringCostOverride;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bIsExcluded : 1;                                           // 0x0010(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bOverrideTravelCost : 1;                                   // 0x0010(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bOverrideEnteringCost : 1;                                 // 0x0010(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_TXK6[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.NavigationFilterFlags
// 0x0004
struct FNavigationFilterFlags
{
	unsigned char                                      bNavFlag0 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bNavFlag1 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bNavFlag2 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bNavFlag3 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bNavFlag4 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bNavFlag5 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bNavFlag6 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bNavFlag7 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bNavFlag8 : 1;                                             // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bNavFlag9 : 1;                                             // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bNavFlag10 : 1;                                            // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bNavFlag11 : 1;                                            // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bNavFlag12 : 1;                                            // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bNavFlag13 : 1;                                            // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bNavFlag14 : 1;                                            // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bNavFlag15 : 1;                                            // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_KLLL[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SupportedAreaData
// 0x0020
struct FSupportedAreaData
{
	struct FString                                     AreaClassName;                                             // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	int                                                AreaID;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4E3P[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      AreaClass;                                                 // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.NavigationLinkBase
// 0x0030
struct FNavigationLinkBase
{
	float                                              LeftProjectHeight;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxFallDownLength;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ENavLinkDirection>              Direction;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XTH5[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SnapRadius;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SnapHeight;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bUseSnapHeight : 1;                                        // 0x0018(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bSnapToCheapestArea : 1;                                   // 0x0018(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_X35D[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      AreaClass;                                                 // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FNavAgentSelector                           SupportedAgents;                                           // 0x0028(0x0004) (Edit)
	unsigned char                                      bSupportsAgent0 : 1;                                       // 0x002C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bSupportsAgent1 : 1;                                       // 0x002C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bSupportsAgent2 : 1;                                       // 0x002C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bSupportsAgent3 : 1;                                       // 0x002C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bSupportsAgent4 : 1;                                       // 0x002C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bSupportsAgent5 : 1;                                       // 0x002C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bSupportsAgent6 : 1;                                       // 0x002C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bSupportsAgent7 : 1;                                       // 0x002C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bSupportsAgent8 : 1;                                       // 0x002D(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bSupportsAgent9 : 1;                                       // 0x002D(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bSupportsAgent10 : 1;                                      // 0x002D(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bSupportsAgent11 : 1;                                      // 0x002D(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bSupportsAgent12 : 1;                                      // 0x002D(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bSupportsAgent13 : 1;                                      // 0x002D(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bSupportsAgent14 : 1;                                      // 0x002D(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bSupportsAgent15 : 1;                                      // 0x002D(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_2769[0x2];                                     // 0x002E(0x0002) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.NavigationSegmentLink
// 0x0030 (0x0060 - 0x0030)
struct FNavigationSegmentLink : public FNavigationLinkBase
{
	struct FVector                                     LeftStart;                                                 // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     LeftEnd;                                                   // 0x003C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     RightStart;                                                // 0x0048(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     RightEnd;                                                  // 0x0054(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ParticleEditorPromotionSettings
// 0x0010
struct FParticleEditorPromotionSettings
{
	struct FFilePath                                   DefaultParticleAsset;                                      // 0x0000(0x0010) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ToggleTrackKey
// 0x0008
struct FToggleTrackKey
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETrackToggleAction>             ToggleAction;                                              // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9J0P[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SoundTrackKey
// 0x0018
struct FSoundTrackKey
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Volume;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Pitch;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EHVW[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  Sound;                                                     // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.VisibilityTrackKey
// 0x0008
struct FVisibilityTrackKey
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EVisibilityTrackAction>         Action;                                                    // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EVisibilityTrackCondition>      ActiveCondition;                                           // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JZ4D[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.PrimitiveMaterialRef
// 0x0018
struct FPrimitiveMaterialRef
{
	class UPrimitiveComponent*                         Primitive;                                                 // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                             Decal;                                                     // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ElementIndex;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_682L[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.EmitterPointData
// 0x0040
struct FEmitterPointData
{
	struct FVector4                                    Position;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector4                                    InheritedVelocity;                                         // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector4                                    Orientation;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Scale;                                                     // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_H4C7[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ParticleSysParam
// 0x0050
struct FParticleSysParam
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EParticleSysParamType>          ParamType;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_N4O1[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Scalar;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Scalar_Low;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Vector;                                                    // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Vector_Low;                                                // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FColor                                      Color;                                                     // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      Actor;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          Material;                                                  // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FEmitterPointData>                   EmitterPoints;                                             // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.InstancedStaticMeshInstanceData
// 0x0050
struct FInstancedStaticMeshInstanceData
{
	struct FMatrix                                     Transform;                                                 // 0x0000(0x0040) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   LightmapUVBias;                                            // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   ShadowmapUVBias;                                           // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.CollectionParameterBase
// 0x0018
struct FCollectionParameterBase
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       Id;                                                        // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.CollectionVectorParameter
// 0x0010 (0x0028 - 0x0018)
struct FCollectionVectorParameter : public FCollectionParameterBase
{
	struct FLinearColor                                DefaultValue;                                              // 0x0018(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.NavCollisionCylinder
// 0x0014
struct FNavCollisionCylinder
{
	struct FVector                                     Offset;                                                    // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Height;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.DistributionLookupTable
// 0x0028
struct FDistributionLookupTable
{
	unsigned char                                      Op;                                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      EntryCount;                                                // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      EntryStride;                                               // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      SubEntryStride;                                            // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeScale;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeBias;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DT5D[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      Values;                                                    // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      LockFlag;                                                  // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OIQT[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.RawDistribution
// 0x0028
struct FRawDistribution
{
	struct FDistributionLookupTable                    Table;                                                     // 0x0000(0x0028) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.RawDistributionVector
// 0x0010 (0x0038 - 0x0028)
struct FRawDistributionVector : public FRawDistribution
{
	float                                              MinValue;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxValue;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDistributionVector*                         Distribution;                                              // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.RawDistributionFloat
// 0x0010 (0x0038 - 0x0028)
struct FRawDistributionFloat : public FRawDistribution
{
	float                                              MinValue;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxValue;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDistributionFloat*                          Distribution;                                              // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.RigTransformConstraint
// 0x0010
struct FRigTransformConstraint
{
	TEnumAsByte<Engine_EConstraintTransform>           TranformType;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9JLE[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ParentSpace;                                               // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Weight;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.TransformBaseConstraint
// 0x0010
struct FTransformBaseConstraint
{
	TArray<struct FRigTransformConstraint>             TransformConstraints;                                      // 0x0000(0x0010) (Edit, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.TransformBase
// 0x0028
struct FTransformBase
{
	struct FName                                       Node;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransformBaseConstraint                    Constraints[0x2];                                          // 0x0008(0x0020) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.InstancedStaticMeshMappingInfo
// 0x0008
struct FInstancedStaticMeshMappingInfo
{
	unsigned char                                      UnknownData_G4VT[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
// 0x007C
struct FMaterialInstanceBasePropertyOverrides
{
	bool                                               bOverride_OpacityMaskClipValue;                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bOverride_BlendMode;                                       // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bOverride_ShadingModel;                                    // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bOverride_DitheredLODTransition;                           // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bOverride_TwoSided;                                        // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bOverride_TessellationMode;                                // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bOverride_LowResTranslucency;                              // 0x0006(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bOverride_SkyLightWhenOccluded;                            // 0x0007(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bOverride_CloudShadowInfluence;                            // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bOverride_LightColorInfluence;                             // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bOverride_AmbientLightColorInfluence;                      // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bOverride_LightIntensityInfluence;                         // 0x000B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bOverride_AmbientLightIntensityInfluence;                  // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bOverride_AlternativeAmbientLightColorInfluence;           // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bOverride_AlternativeAmbientLightIntensityInfluence;       // 0x000E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bOverride_EvaluateLightningAtParticleCenter;               // 0x000F(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bOverride_DontRenderWhenPlayerInsideShip;                  // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bOverride_ObjectFadeEnabled;                               // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bOverride_ObjectFadeRate;                                  // 0x0012(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bOverride_ObjectFadeDistanceThreshold;                     // 0x0013(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bOverride_TranslucencyDirectionalLightingIntensity;        // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bOverride_TranslucencyVolumeFogScale;                      // 0x0015(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bOverride_TranslucencyDistanceFog;                         // 0x0016(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0SX8[0x1];                                     // 0x0017(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              OpacityMaskClipValue;                                      // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EBlendMode>                     BlendMode;                                                 // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EMaterialShadingModel>          ShadingModel;                                              // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4PWY[0x2];                                     // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      TwoSided : 1;                                              // 0x0020(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      DitheredLODTransition : 1;                                 // 0x0020(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_0K8N[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_EMaterialTessellationMode>      D3D11TessellationMode;                                     // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MN8L[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      ForceResolution : 1;                                       // 0x0028(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_DTKL[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_ELowResTranslucencyCascade>     ForcedResolution;                                          // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_V7A9[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      DisableTransition : 1;                                     // 0x0030(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_0TEJ[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FirstSplitDistance;                                        // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SecondSplitDistance;                                       // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FullResInFrontMaxDistance;                                 // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      FullResInFront : 1;                                        // 0x0040(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      PopPerParticle : 1;                                        // 0x0040(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_5ZVU[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SkyLightWhenOccluded;                                      // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CloudShadowInfluence;                                      // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LightIntensityInfluence;                                   // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LightColorInfluence;                                       // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AmbientLightIntensityInfluence;                            // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AmbientLightColorInfluence;                                // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AlternativeAmbientLightIntensityInfluence;                 // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AlternativeAmbientLightColorInfluence;                     // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bEvaluateLightningAtParticleCenter : 1;                    // 0x0064(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bDontRenderWhenPlayerInsideShip : 1;                       // 0x0064(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      ObjectFadeEnabled : 1;                                     // 0x0064(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_MPLC[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ObjectFadeRate;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ObjectFadeDistanceThreshold;                               // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TranslucencyDirectionalLightingIntensity;                  // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TranslucencyVolumeFogScale;                                // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      TranslucencyDistanceFog : 1;                               // 0x0078(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_BN5J[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.EventGraphFastCallPair
// 0x0010
struct FEventGraphFastCallPair
{
	class UFunction*                                   FunctionToPatch;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                EventGraphCallOffset;                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NHKP[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.DepthFieldGlowInfo
// 0x0024
struct FDepthFieldGlowInfo
{
	unsigned char                                      bEnableGlow : 1;                                           // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_IA2M[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                GlowColor;                                                 // 0x0004(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   GlowOuterRadius;                                           // 0x0014(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   GlowInnerRadius;                                           // 0x001C(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.FontRenderInfo
// 0x0028
struct FFontRenderInfo
{
	unsigned char                                      bClipText : 1;                                             // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bEnableShadow : 1;                                         // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_FNTR[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDepthFieldGlowInfo                         GlowInfo;                                                  // 0x0004(0x0024) (BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ComponentReference
// 0x0018
struct FComponentReference
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ComponentProperty;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZOUA[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.DamageEvent
// 0x0010
struct FDamageEvent
{
	unsigned char                                      UnknownData_ZN8E[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DamageTypeClass;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.RadialDamageParams
// 0x0014
struct FRadialDamageParams
{
	float                                              BaseDamage;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinimumDamage;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InnerRadius;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OuterRadius;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageFalloff;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.RadialDamageEvent
// 0x0030 (0x0040 - 0x0010)
struct FRadialDamageEvent : public FDamageEvent
{
	struct FRadialDamageParams                         Params;                                                    // 0x0010(0x0014)
	struct FVector                                     Origin;                                                    // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FHitResult>                          ComponentHits;                                             // 0x0030(0x0010) (ZeroConstructor, ContainsInstancedReference)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.PointDamageEvent
// 0x0090 (0x00A0 - 0x0010)
struct FPointDamageEvent : public FDamageEvent
{
	float                                              Damage;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector_NetQuantizeNormal                   ShotDirection;                                             // 0x0014(0x000C)
	struct FHitResult                                  HitInfo;                                                   // 0x0020(0x0080) (ContainsInstancedReference)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.POV
// 0x001C
struct FPOV
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FOV;                                                       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimUpdateRateParameters
// 0x0038
struct FAnimUpdateRateParameters
{
	unsigned char                                      UnknownData_37L4[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                UpdateRate;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                EvaluationRate;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bInterpolateSkippedFrames;                                 // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bSkipUpdate;                                               // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bSkipEvaluation;                                           // 0x000E(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1JZ5[0x1];                                     // 0x000F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TickedPoseOffestTime;                                      // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AdditionalTime;                                            // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_U9Y5[0x4];                                     // 0x0018(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                BaseNonRenderedUpdateRate;                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QC1Y[0x8];                                     // 0x0020(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      BaseVisibleDistanceFactorThesholds;                        // 0x0028(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimSlotDesc
// 0x000C
struct FAnimSlotDesc
{
	struct FName                                       SlotName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumChannels;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimSlotInfo
// 0x0018
struct FAnimSlotInfo
{
	struct FName                                       SlotName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                      ChannelWeights;                                            // 0x0008(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.MTDResult
// 0x0010
struct FMTDResult
{
	struct FVector                                     Direction;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Distance;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.OverlapResult
// 0x0018
struct FOverlapResult
{
	TWeakObjectPtr<class AActor>                       Actor;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	TWeakObjectPtr<class UPrimitiveComponent>          Component;                                                 // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper)
	unsigned char                                      UnknownData_4MFE[0x4];                                     // 0x0010(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bBlockingHit : 1;                                          // 0x0014(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_QGZ2[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SwarmDebugOptions
// 0x0004
struct FSwarmDebugOptions
{
	unsigned char                                      bDistributionEnabled : 1;                                  // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bForceContentExport : 1;                                   // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bInitialized : 1;                                          // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_XGOJ[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.LightmassDebugOptions
// 0x0010
struct FLightmassDebugOptions
{
	unsigned char                                      bDebugMode : 1;                                            // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bStatsEnabled : 1;                                         // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bGatherBSPSurfacesAcrossComponents : 1;                    // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_NH2Z[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CoplanarTolerance;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bUseImmediateImport : 1;                                   // 0x0008(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bImmediateProcessMappings : 1;                             // 0x0008(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bSortMappings : 1;                                         // 0x0008(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bDumpBinaryFiles : 1;                                      // 0x0008(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bDebugMaterials : 1;                                       // 0x0008(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bPadMappings : 1;                                          // 0x0008(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bDebugPaddings : 1;                                        // 0x0008(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bOnlyCalcDebugTexelMappings : 1;                           // 0x0008(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bUseRandomColors : 1;                                      // 0x0009(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bColorBordersGreen : 1;                                    // 0x0009(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bColorByExecutionTime : 1;                                 // 0x0009(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_KZAP[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ExecutionTimeDivisor;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.WrappedStringElement
// 0x0018
struct FWrappedStringElement
{
	struct FString                                     Value;                                                     // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FVector2D                                   LineExtent;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.TextSizingParameters
// 0x0028
struct FTextSizingParameters
{
	float                                              DrawX;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DrawY;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DrawXL;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DrawYL;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Scaling;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFont*                                       DrawFont;                                                  // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   SpacingAdjust;                                             // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.CanvasIcon
// 0x0018
struct FCanvasIcon
{
	class UTexture*                                    Texture;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              U;                                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              V;                                                         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UL;                                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VL;                                                        // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.FuncStatEntry
// 0x0020
struct FFuncStatEntry
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	uint64_t                                           RPCId;                                                     // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint32_t                                           Count;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FIVI[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SpikeStatEntry
// 0x0018
struct FSpikeStatEntry
{
	TArray<struct FFuncStatEntry>                      WorstRPCs;                                                 // 0x0000(0x0010) (ZeroConstructor)
	uint32_t                                           TotalRPCCount;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      SpikeDetected;                                             // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XZF5[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.RPCStatEntry
// 0x0060
struct FRPCStatEntry
{
	unsigned char                                      UnknownData_H7KX[0x30];                                    // 0x0000(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             AccumulatedPayloadInKB;                                    // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                             TimeIntervalInSec;                                         // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSpikeStatEntry                             WorstSpike;                                                // 0x0040(0x0018)
	uint32_t                                           RPCCount;                                                  // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_J8Z0[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.FontParameterValue
// 0x0028
struct FFontParameterValue
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFont*                                       FontValue;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontPage;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       ExpressionGUID;                                            // 0x0014(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9P38[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.NameIndexPair
// 0x000C
struct FNameIndexPair
{
	unsigned char                                      UnknownData_FPQ0[0xC];                                     // 0x0000(0x000C) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.FlatWaterMeshTextureOverride
// 0x000C (0x0018 - 0x000C)
struct FFlatWaterMeshTextureOverride : public FNameIndexPair
{
	unsigned char                                      UnknownData_0UJV[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture*                                    Texture;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.InstancedCoverageMeshLOD
// 0x0008
struct FInstancedCoverageMeshLOD
{
	float                                              LODReduction;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceToLOD;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.EngineShowFlagsSetting
// 0x0018
struct FEngineShowFlagsSetting
{
	struct FString                                     ShowFlagName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Enabled;                                                   // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PHX5[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.TimelineEventEntry
// 0x0014
struct FTimelineEventEntry
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptDelegate                             EventFunc;                                                 // 0x0004(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.TimelineVectorTrack
// 0x0030
struct FTimelineVectorTrack
{
	class UCurveVector*                                VectorCurve;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptDelegate                             InterpFunc;                                                // 0x0008(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)
	struct FName                                       VectorPropertyName;                                        // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStructProperty*                             VectorProperty;                                            // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IY9P[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.TimelineFloatTrack
// 0x0030
struct FTimelineFloatTrack
{
	class UCurveFloat*                                 FloatCurve;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptDelegate                             InterpFunc;                                                // 0x0008(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)
	struct FName                                       FloatPropertyName;                                         // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFloatProperty*                              FloatProperty;                                             // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OBG3[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.TimelineLinearColorTrack
// 0x0030
struct FTimelineLinearColorTrack
{
	class UCurveLinearColor*                           LinearColorCurve;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptDelegate                             InterpFunc;                                                // 0x0008(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)
	struct FName                                       LinearColorPropertyName;                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStructProperty*                             LinearColorProperty;                                       // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FKYU[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.Timeline
// 0x0098
struct FTimeline
{
	TEnumAsByte<Engine_ETimelineLengthMode>            LengthMode;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UK1T[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Length;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bLooping : 1;                                              // 0x0008(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bReversePlayback : 1;                                      // 0x0008(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bPlaying : 1;                                              // 0x0008(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_FWOP[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PlayRate;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Position;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_R6CD[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTimelineEventEntry>                 Events;                                                    // 0x0018(0x0010) (ZeroConstructor, RepSkip, ContainsInstancedReference)
	TArray<struct FTimelineVectorTrack>                InterpVectors;                                             // 0x0028(0x0010) (ZeroConstructor, RepSkip, ContainsInstancedReference)
	TArray<struct FTimelineFloatTrack>                 InterpFloats;                                              // 0x0038(0x0010) (ZeroConstructor, RepSkip, ContainsInstancedReference)
	TArray<struct FTimelineLinearColorTrack>           InterpLinearColors;                                        // 0x0048(0x0010) (ZeroConstructor, RepSkip, ContainsInstancedReference)
	struct FScriptDelegate                             TimelinePostUpdateFunc;                                    // 0x0058(0x0010) (ZeroConstructor, InstancedReference, RepSkip, NoDestructor)
	struct FScriptDelegate                             TimelineFinishedFunc;                                      // 0x0068(0x0010) (ZeroConstructor, InstancedReference, RepSkip, NoDestructor)
	unsigned char                                      UnknownData_N4GN[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class UObject>                      PropertySetObject;                                         // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper)
	struct FName                                       DirectionPropertyName;                                     // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UByteProperty*                               DirectionProperty;                                         // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.TrackToSkeletonMap
// 0x0004
struct FTrackToSkeletonMap
{
	int                                                BoneTreeIndex;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.TranslationTrack
// 0x0020
struct FTranslationTrack
{
	TArray<struct FVector>                             PosKeys;                                                   // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      Times;                                                     // 0x0010(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.RotationTrack
// 0x0020
struct FRotationTrack
{
	TArray<struct FQuat>                               RotKeys;                                                   // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      Times;                                                     // 0x0010(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.CompressedOffsetData
// 0x0018
struct FCompressedOffsetData
{
	TArray<int>                                        OffsetData;                                                // 0x0000(0x0010) (ZeroConstructor)
	int                                                StripSize;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TGXE[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BlendParameter
// 0x0020
struct FBlendParameter
{
	struct FString                                     DisplayName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	float                                              Min;                                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Max;                                                       // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GridNum;                                                   // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_T2CW[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.InterpolationParameter
// 0x0008
struct FInterpolationParameter
{
	float                                              InterpolationTime;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EFilterInterpolationType>       InterpolationType;                                         // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L9FS[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BlendSampleData
// 0x0020
struct FBlendSampleData
{
	int                                                SampleDataIndex;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TotalWeight;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Time;                                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OVVW[0x14];                                    // 0x000C(0x0014) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BlendFilter
// 0x0090
struct FBlendFilter
{
	unsigned char                                      UnknownData_QK7T[0x90];                                    // 0x0000(0x0090) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimSetMeshLinkup
// 0x0010
struct FAnimSetMeshLinkup
{
	TArray<int>                                        BoneToTrackTable;                                          // 0x0000(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.EditorMapPerformanceTestDefinition
// 0x0018
struct FEditorMapPerformanceTestDefinition
{
	struct FFilePath                                   PerformanceTestmap;                                        // 0x0000(0x0010) (Edit, Config)
	int                                                TestTimer;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UBNT[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BuildPromotionBlueprintSettings
// 0x0020
struct FBuildPromotionBlueprintSettings
{
	struct FFilePath                                   FirstMeshPath;                                             // 0x0000(0x0010) (Edit)
	struct FFilePath                                   SecondMeshPath;                                            // 0x0010(0x0010) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BuildPromotionNewProjectSettings
// 0x0020
struct FBuildPromotionNewProjectSettings
{
	struct FDirectoryPath                              NewProjectFolderOverride;                                  // 0x0000(0x0010) (Edit)
	struct FString                                     NewProjectNameOverride;                                    // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.LaunchOnTestSettings
// 0x0020
struct FLaunchOnTestSettings
{
	struct FFilePath                                   LaunchOnTestmap;                                           // 0x0000(0x0010) (Edit, Config)
	struct FString                                     DeviceID;                                                  // 0x0010(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.NavAvoidanceData
// 0x003C
struct FNavAvoidanceData
{
	unsigned char                                      UnknownData_MLBW[0x3C];                                    // 0x0000(0x003C) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.NameMapping
// 0x0010
struct FNameMapping
{
	struct FName                                       NodeName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BoneName;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.RigConfiguration
// 0x0018
struct FRigConfiguration
{
	class URig*                                        Rig;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FNameMapping>                        BoneMappingTable;                                          // 0x0008(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BoneReductionSetting
// 0x0010
struct FBoneReductionSetting
{
	TArray<struct FName>                               BonesToRemove;                                             // 0x0000(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_Root
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_Root : public FAnimNode_Base
{
	struct FPoseLink                                   Result;                                                    // 0x0030(0x0018) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ScalarParameterValue
// 0x001C
struct FScalarParameterValue
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ParameterValue;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       ExpressionGUID;                                            // 0x000C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.FFTWaterComponentParams
// 0x0310
struct FFFTWaterComponentParams
{
	struct FLinearColor                                AmbientColour;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                WaterColour;                                               // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                ShallowWaterColour;                                        // 0x0020(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                BackLitColour;                                             // 0x0030(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                FoamColour;                                                // 0x0040(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                FoamHighlightColour;                                       // 0x0050(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FresnelPower;                                              // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpecularBrightness;                                        // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FoamBrightness;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReflectionBrightness;                                      // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FoamFadeStart;                                             // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FoamFadeEnd;                                               // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      DEBUG_Wireframe : 1;                                       // 0x0078(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_PLY7[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Size;                                                      // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WindSpeed;                                                 // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WindSpeedInEditor;                                         // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CarrierWaveAmplitude;                                      // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CarrierWaveWaveLength;                                     // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CarrierWavePropagationSpeed;                               // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HorizonFadeDistance;                                       // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HorizonDarkenStart;                                        // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HorizonDarkenRange;                                        // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CloudShadowDarkenStart;                                    // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CloudShadowDarkenRange;                                    // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CausticsDepth;                                             // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QO3T[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture*                                    FoamColourTex;                                             // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFFTWaterComponentParticleParams            ParticleParams;                                            // 0x00B8(0x0248) (Edit)
	float                                              ExtendedPlaneSize;                                         // 0x0300(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ExtendedPlaneFadeDistance;                                 // 0x0304(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   PositionOffset;                                            // 0x0308(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.KShapeElem
// 0x0020
struct FKShapeElem
{
	unsigned char                                      UnknownData_74FI[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.KConvexElem
// 0x0070 (0x0090 - 0x0020)
struct FKConvexElem : public FKShapeElem
{
	TArray<struct FVector>                             VertexData;                                                // 0x0020(0x0010) (ZeroConstructor)
	struct FBox                                        ElemBox;                                                   // 0x0030(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZMBZ[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Transform;                                                 // 0x0050(0x0030) (IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XZ72[0x10];                                    // 0x0080(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.KSphereElem
// 0x0010 (0x0030 - 0x0020)
struct FKSphereElem : public FKShapeElem
{
	struct FVector                                     Center;                                                    // 0x0020(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // 0x002C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.KBoxElem
// 0x0030 (0x0050 - 0x0020)
struct FKBoxElem : public FKShapeElem
{
	struct FVector                                     Center;                                                    // 0x0020(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FDVT[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       Orientation;                                               // 0x0030(0x0010) (Edit, EditConst, IsPlainOldData, NoDestructor)
	float                                              X;                                                         // 0x0040(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Y;                                                         // 0x0044(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Z;                                                         // 0x0048(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RO4L[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.KSphylElem
// 0x0030 (0x0050 - 0x0020)
struct FKSphylElem : public FKShapeElem
{
	struct FVector                                     Center;                                                    // 0x0020(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FF49[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       Orientation;                                               // 0x0030(0x0010) (Edit, EditConst, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // 0x0040(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Length;                                                    // 0x0044(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_17IT[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.KAggregateGeom
// 0x0048
struct FKAggregateGeom
{
	TArray<struct FKSphereElem>                        SphereElems;                                               // 0x0000(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FKBoxElem>                           BoxElems;                                                  // 0x0010(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FKSphylElem>                         SphylElems;                                                // 0x0020(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FKConvexElem>                        ConvexElems;                                               // 0x0030(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	unsigned char                                      UnknownData_OV6A[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.TextureParameterValue
// 0x0020
struct FTextureParameterValue
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                                    ParameterValue;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       ExpressionGUID;                                            // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.GPUSpriteLocalVectorFieldInfo
// 0x0070
struct FGPUSpriteLocalVectorFieldInfo
{
	class UVectorField*                                Field;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WMI2[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Transform;                                                 // 0x0010(0x0030) (IsPlainOldData, NoDestructor)
	struct FRotator                                    MinInitialRotation;                                        // 0x0040(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    MaxInitialRotation;                                        // 0x004C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    RotationRate;                                              // 0x0058(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Intensity;                                                 // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Tightness;                                                 // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bIgnoreComponentTransform : 1;                             // 0x006C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bTileX : 1;                                                // 0x006C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bTileY : 1;                                                // 0x006C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bTileZ : 1;                                                // 0x006C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_HMY1[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.FloatDistribution
// 0x0028
struct FFloatDistribution
{
	struct FDistributionLookupTable                    Table;                                                     // 0x0000(0x0028) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.GPUSpriteEmitterInfo
// 0x02A0
struct FGPUSpriteEmitterInfo
{
	class UParticleModuleRequired*                     RequiredModule;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleModuleSpawn*                        SpawnModule;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleModuleSpawnPerUnit*                 SpawnPerUnitModule;                                        // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleModuleSpawnRepeatPerPoint*          SpawnRepeatPerPointModule;                                 // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleComputeShaderData*                  ParticleComputeData;                                       // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleModuleParametersOverVelocity*       ParametersOverVelocity;                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleModuleParametersOverCustom*         ParametersOverCustom;                                      // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UParticleModule*>                     SpawnModules;                                              // 0x0038(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_WO5I[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGPUSpriteLocalVectorFieldInfo              LocalVectorField;                                          // 0x0050(0x0070)
	struct FFloatDistribution                          VectorFieldScale;                                          // 0x00C0(0x0028) (ZeroConstructor)
	struct FFloatDistribution                          PointAttractorStrength;                                    // 0x00E8(0x0028) (ZeroConstructor)
	struct FFloatDistribution                          Resilience;                                                // 0x0110(0x0028) (ZeroConstructor)
	struct FVector                                     ConstantAcceleration;                                      // 0x0138(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     PointAttractorPosition;                                    // 0x0144(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              PointAttractorRadiusSq;                                    // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     OrbitOffsetBase;                                           // 0x0154(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     OrbitOffsetRange;                                          // 0x0160(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   InvMaxSize;                                                // 0x016C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaxLifetime;                                               // 0x0174(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxParticleCount;                                          // 0x0178(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxDeathRate;                                              // 0x017C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EParticleScreenAlignment>       ScreenAlignment[0x6];                                      // 0x0180(0x0006) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EParticleAxisLock>              LockAxisFlag;                                              // 0x0186(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GLP9[0x1];                                     // 0x0187(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bEnableCollision : 1;                                      // 0x0188(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bNeedsVectorFields : 1;                                    // 0x0188(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bOpacitySpawnsOnCPU : 1;                                   // 0x0188(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bSizeSpawnsOnCPU : 1;                                      // 0x0188(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bVelocitySpawnsOnCPU : 1;                                  // 0x0188(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bIgnoreComponentColorTint : 1;                             // 0x0188(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bGeneratesDeathEvents : 1;                                 // 0x0188(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bGeneratesCollisionEvents : 1;                             // 0x0188(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_JQUY[0x3];                                     // 0x0189(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_EParticleCollisionMode>         CollisionMode;                                             // 0x018C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_U0IC[0x3];                                     // 0x018D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRawDistributionVector                      DynamicColor;                                              // 0x0190(0x0038) (ContainsInstancedReference)
	struct FRawDistributionFloat                       DynamicAlpha;                                              // 0x01C8(0x0038) (ContainsInstancedReference)
	struct FRawDistributionVector                      DynamicColorScale;                                         // 0x0200(0x0038) (ContainsInstancedReference)
	struct FRawDistributionFloat                       DynamicAlphaScale;                                         // 0x0238(0x0038) (ContainsInstancedReference)
	struct FVector4                                    MurkyColorScale;                                           // 0x0270(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       LocationEmitterName;                                       // 0x0280(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bKillParticlesOnFFTWater : 1;                              // 0x0288(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_Y9R3[0x17];                                    // 0x0289(0x0017) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.GPUSpriteResourceData
// 0x0810
struct FGPUSpriteResourceData
{
	TArray<struct FColor>                              QuantizedColorSamples;                                     // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FColor>                              QuantizedMiscSamples;                                      // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FColor>                              QuantizedDynamicParamSamples;                              // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FColor>                              QuantizedSimulationAttrSamples;                            // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FColor>                              QuantizedSizeOverVelocitySamples;                          // 0x0040(0x0010) (ZeroConstructor)
	struct FVector4                                    ColorScale;                                                // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector4                                    ColorBias;                                                 // 0x0060(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector4                                    MiscScale;                                                 // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector4                                    MiscBias;                                                  // 0x0080(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector4                                    DynParamScale;                                             // 0x0090(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector4                                    DynParamBias;                                              // 0x00A0(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector4                                    MurkyColorScale;                                           // 0x00B0(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector4                                    SimulationAttrCurveScale;                                  // 0x00C0(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector4                                    SimulationAttrCurveBias;                                   // 0x00D0(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector4                                    SizeOverVelocityScale;                                     // 0x00E0(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector4                                    SizeOverVelocityBias;                                      // 0x00F0(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector4                                    SubImageSize;                                              // 0x0100(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector4                                    SizeBySpeed;                                               // 0x0110(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ConstantAcceleration;                                      // 0x0120(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     OrbitOffsetBase;                                           // 0x012C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     OrbitOffsetRange;                                          // 0x0138(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     OrbitFrequencyBase;                                        // 0x0144(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     OrbitFrequencyRange;                                       // 0x0150(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     OrbitPhaseBase;                                            // 0x015C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     OrbitPhaseRange;                                           // 0x0168(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              GlobalVectorFieldScale;                                    // 0x0174(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GlobalVectorFieldTightness;                                // 0x0178(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PerParticleVectorFieldScale;                               // 0x017C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PerParticleVectorFieldBias;                                // 0x0180(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DragCoefficientScale[0x6];                                 // 0x0184(0x0018) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DragCoefficientBias[0x6];                                  // 0x019C(0x0018) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DragLocalVelocityScale[0x6];                               // 0x01B4(0x0018) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DragLocalVelocityBias[0x6];                                // 0x01CC(0x0018) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ResilienceScale;                                           // 0x01E4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ResilienceBias;                                            // 0x01E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CollisionRadiusScale;                                      // 0x01EC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CollisionRadiusBias;                                       // 0x01F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CollisionTimeBias;                                         // 0x01F4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OneMinusFriction;                                          // 0x01F8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CameraMotionBlurAmount;                                    // 0x01FC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AlphaThreshold;                                            // 0x0200(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EParticleScreenAlignment>       ScreenAlignment[0x6];                                      // 0x0204(0x0006) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EParticleAxisLock>              LockAxisFlag;                                              // 0x020A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_T6LJ[0x1];                                     // 0x020B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   PivotOffset;                                               // 0x020C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_80K7[0x464];                                   // 0x0214(0x0464) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AlignmentInheritedVelocityScale;                           // 0x0678(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AKZ0[0x194];                                   // 0x067C(0x0194) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_BlendSpacePlayer
// 0x00D0 (0x0110 - 0x0040)
struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
{
	float                                              X;                                                         // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Y;                                                         // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Z;                                                         // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bLoop;                                                     // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_B4O2[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBlendSpaceBase*                             BlendSpace;                                                // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GroupIndex;                                                // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EAnimGroupRole>                 GroupRole;                                                 // 0x0064(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VRTH[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlendFilter                                BlendFilter;                                               // 0x0068(0x0090) (Protected)
	TArray<struct FBlendSampleData>                    BlendSampleDataCache;                                      // 0x00F8(0x0010) (ZeroConstructor, Protected)
	unsigned char                                      UnknownData_VN8P[0x8];                                     // 0x0108(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_BlendSpaceEvaluator
// 0x0008 (0x0118 - 0x0110)
struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{
	float                                              NormalizedTime;                                            // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_O76H[0x4];                                     // 0x0114(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_HIKFloorContact
// 0x0078 (0x00C0 - 0x0048)
struct FAnimNode_HIKFloorContact : public FAnimNode_HIKBase
{
	bool                                               FeetContact;                                               // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               HandsContact;                                              // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               FingersContact;                                            // 0x004A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ToesContact;                                               // 0x004B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EHIKFeetContactType>            FeetContactType;                                           // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EHIKHandsContactType>           HandsContactType;                                          // 0x004D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DYCW[0x2];                                     // 0x004E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DistanceUp;                                                // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceDown;                                              // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NbRays;                                                    // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FootRadius;                                                // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaTime;                                                 // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Smoothing;                                                 // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCollisionResponseContainer                 OverrideRaycastCollisionResponse;                          // 0x0068(0x0020) (Edit, BlueprintVisible)
	float                                              FeetHeight;                                                // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FeetBack;                                                  // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FeetMiddle;                                                // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FeetFront;                                                 // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FeetInSide;                                                // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FeetOutSide;                                               // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HandsHeight;                                               // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HandsBack;                                                 // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HandsMiddle;                                               // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HandsFront;                                                // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HandsInSide;                                               // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HandsOutSide;                                              // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QV47[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_HIKLookAt
// 0x0040 (0x0088 - 0x0048)
struct FAnimNode_HIKLookAt : public FAnimNode_HIKBase
{
	float                                              Alpha;                                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TargetPosition;                                            // 0x004C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ChestContribution;                                         // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               XYOnly;                                                    // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EHIKLookAtLimits>               Limits;                                                    // 0x005D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SIBN[0x2];                                     // 0x005E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LimitsHorizontalAngle;                                     // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LimitsVerticalAngle;                                       // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ActivationSpeed;                                           // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetPositionSpeed;                                       // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EHIKLookAtInterpolation>        InterpolationMode;                                         // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_00A8[0x17];                                    // 0x0071(0x0017) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_HIKOffset
// 0x0018 (0x0060 - 0x0048)
struct FAnimNode_HIKOffset : public FAnimNode_HIKBase
{
	float                                              Alpha;                                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReachT;                                                    // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Translation;                                               // 0x0050(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EHIKEffector>                   Effector;                                                  // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EHIKEffectorSpace>              EffectorSpace;                                             // 0x005D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AQKN[0x2];                                     // 0x005E(0x0002) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_HIKPin
// 0x0010 (0x0058 - 0x0048)
struct FAnimNode_HIKPin : public FAnimNode_HIKBase
{
	float                                              Alpha;                                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PinTStrength;                                              // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PinRStrength;                                              // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EHIKEffector>                   Effector;                                                  // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3A1H[0x3];                                     // 0x0055(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_HIKPlant
// 0x0018 (0x0060 - 0x0048)
struct FAnimNode_HIKPlant : public FAnimNode_HIKBase
{
	float                                              Alpha;                                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HipsLevel;                                                 // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ProjectionDistance;                                        // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PullFeetInsteadOfAnkles;                                   // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsQuadruped;                                               // 0x0055(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MJES[0x2];                                     // 0x0056(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ChestLevel;                                                // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PullHandsInsteadOfWrists;                                  // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8F2H[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_HIKPull
// 0x0008 (0x0050 - 0x0048)
struct FAnimNode_HIKPull : public FAnimNode_HIKBase
{
	float                                              Alpha;                                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EHIKEffector>                   Effector;                                                  // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RQGM[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_HIKReach
// 0x0038 (0x0080 - 0x0048)
struct FAnimNode_HIKReach : public FAnimNode_HIKBase
{
	float                                              Alpha;                                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReachT;                                                    // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReachR;                                                    // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Translation;                                               // 0x0054(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FQuat                                       Orientation;                                               // 0x0060(0x0010) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EHIKEffector>                   Effector;                                                  // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EHIKEffectorSpace>              EffectorSpace;                                             // 0x0071(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NEQT[0x2];                                     // 0x0072(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ParentBone;                                                // 0x0074(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FUCH[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_HIKReachRotator
// 0x0028 (0x0070 - 0x0048)
struct FAnimNode_HIKReachRotator : public FAnimNode_HIKBase
{
	float                                              Alpha;                                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReachT;                                                    // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReachR;                                                    // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Translation;                                               // 0x0054(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    Orientation;                                               // 0x0060(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EHIKEffector>                   Effector;                                                  // 0x006C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EHIKEffectorSpace>              EffectorSpace;                                             // 0x006D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_98I4[0x2];                                     // 0x006E(0x0002) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_HIKRelativePlant
// 0x0050 (0x0098 - 0x0048)
struct FAnimNode_HIKRelativePlant : public FAnimNode_HIKBase
{
	float                                              Alpha;                                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Depth;                                                     // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HipsRotationFactor;                                        // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChestRotationFactor;                                       // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceUp;                                                // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceDown;                                              // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NbRays;                                                    // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FootRadius;                                                // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCollisionResponseContainer                 OverrideRaycastCollisionResponse;                          // 0x0068(0x0020) (Edit, BlueprintVisible)
	float                                              DeltaTime;                                                 // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Smoothing;                                                 // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_M2BW[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_HIKResist
// 0x0008 (0x0050 - 0x0048)
struct FAnimNode_HIKResist : public FAnimNode_HIKBase
{
	float                                              Alpha;                                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EHIKEffector>                   Effector;                                                  // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZICE[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_HIKSetProperty
// 0x0008 (0x0050 - 0x0048)
struct FAnimNode_HIKSetProperty : public FAnimNode_HIKBase
{
	TEnumAsByte<Engine_EHIKProperty>                   Property;                                                  // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GFKV[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Value;                                                     // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_HIKSolve
// 0x0038 (0x0080 - 0x0048)
struct FAnimNode_HIKSolve : public FAnimNode_HIKBase
{
	float                                              Alpha;                                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RW9U[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FComponentSpacePoseLink                     InputFKPose;                                               // 0x0050(0x0018) (Edit, BlueprintVisible)
	bool                                               enablePullEngine;                                          // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               enableBodyPartSolving;                                     // 0x0069(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               enableLODSolver;                                           // 0x006A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               enableLegsSNS;                                             // 0x006B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               enableArmsSNS;                                             // 0x006C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               boneLengthFromInputPose;                                   // 0x006D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bodyPartSolveLeftShoulder;                                 // 0x006E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bodyPartSolveRightShoulder;                                // 0x006F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bodyPartSolveLeftArm;                                      // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bodyPartSolveRightArm;                                     // 0x0071(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bodyPartSolveLeftLeg;                                      // 0x0072(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bodyPartSolveRightLeg;                                     // 0x0073(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bodyPartSolveLeftHand;                                     // 0x0074(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bodyPartSolveRightHand;                                    // 0x0075(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bodyPartSolveLeftFoot;                                     // 0x0076(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bodyPartSolveRightFoot;                                    // 0x0077(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bodyPartSolveHead;                                         // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bodyPartSolveSpine;                                        // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               checkOutputPoseContainsNaNs;                               // 0x007A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_C340[0x5];                                     // 0x007B(0x0005) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_HIKTest
// 0x0010 (0x0058 - 0x0048)
struct FAnimNode_HIKTest : public FAnimNode_HIKBase
{
	float                                              Alpha;                                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Param;                                                     // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Intensity;                                                 // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Z0ME[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_LayeredBoneBlend
// 0x0070 (0x00A0 - 0x0030)
struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                  // 0x0030(0x0018) (Edit, BlueprintVisible)
	TArray<struct FPoseLink>                           BlendPoses;                                                // 0x0048(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<struct FInputBlendPose>                     LayerSetup;                                                // 0x0058(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<float>                                      BlendWeights;                                              // 0x0068(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	bool                                               bMeshSpaceRotationBlend;                                   // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECurveBlendOption>              CurveBlendOption;                                          // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AD20[0x26];                                    // 0x007A(0x0026) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_MultiWayBlend
// 0x0040 (0x0070 - 0x0030)
struct FAnimNode_MultiWayBlend : public FAnimNode_Base
{
	TArray<struct FPoseLink>                           Poses;                                                     // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      DesiredAlphas;                                             // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bAdditiveNode;                                             // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bNormalizeAlpha;                                           // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_C7UX[0x2];                                     // 0x0052(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInputScaleBias                             AlphaScaleBias;                                            // 0x0054(0x0008) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData_IVRH[0x14];                                    // 0x005C(0x0014) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_MeshSpaceRefPose
// 0x0000 (0x0030 - 0x0030)
struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_RefPose
// 0x0008 (0x0038 - 0x0030)
struct FAnimNode_RefPose : public FAnimNode_Base
{
	TEnumAsByte<Engine_ERefPoseType>                   RefPoseType;                                               // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WYZM[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.RepTransform
// 0x0018
struct FRepTransform
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ReplicatedTransformState
// 0x0030
struct FReplicatedTransformState
{
	class USceneComponent*                             MovementBase;                                              // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             AttachParent;                                              // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRepTransform                               ReplicatedMovement;                                        // 0x0010(0x0018)
	bool                                               IsAttached;                                                // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5U2G[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SkelMeshMergeMorphTarget
// 0x000C
struct FSkelMeshMergeMorphTarget
{
	unsigned char                                      UnknownData_8VI0[0xC];                                     // 0x0000(0x000C) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ROscillator
// 0x0024
struct FROscillator
{
	struct FFOscillator                                Pitch;                                                     // 0x0000(0x000C) (Edit)
	struct FFOscillator                                Yaw;                                                       // 0x000C(0x000C) (Edit)
	struct FFOscillator                                Roll;                                                      // 0x0018(0x000C) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ClothPhysicsProperties
// 0x0024
struct FClothPhysicsProperties
{
	float                                              BendResistance;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ShearResistance;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StretchLimit;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Friction;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damping;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Drag;                                                      // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GravityScale;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InertiaBlend;                                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SelfCollisionThickness;                                    // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ClothingAssetData
// 0x0040
struct FClothingAssetData
{
	struct FName                                       AssetName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ApexFileName;                                              // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	bool                                               bClothPropertiesChanged;                                   // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AEUG[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FClothPhysicsProperties                     PhysicsProperties;                                         // 0x001C(0x0024) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SkelMeshComponentLODInfo
// 0x0010
struct FSkelMeshComponentLODInfo
{
	TArray<bool>                                       HiddenMaterials;                                           // 0x0000(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ConstrainComponentPropName
// 0x0008
struct FConstrainComponentPropName
{
	struct FName                                       ComponentName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ConstraintInstance
// 0x0160
struct FConstraintInstance
{
	unsigned char                                      UnknownData_AJ7M[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             OwnerComponent;                                            // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_H9CQ[0xC];                                     // 0x0010(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       JointName;                                                 // 0x001C(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ConstraintBone1;                                           // 0x0024(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ConstraintBone2;                                           // 0x002C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Pos1;                                                      // 0x0034(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     PriAxis1;                                                  // 0x0040(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     SecAxis1;                                                  // 0x004C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Pos2;                                                      // 0x0058(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     PriAxis2;                                                  // 0x0064(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     SecAxis2;                                                  // 0x0070(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bDisableCollision : 1;                                     // 0x007C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bEnableProjection : 1;                                     // 0x007C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_AXP9[0x3];                                     // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ProjectionLinearTolerance;                                 // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ProjectionAngularTolerance;                                // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ELinearConstraintMotion>        LinearXMotion;                                             // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ELinearConstraintMotion>        LinearYMotion;                                             // 0x0089(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ELinearConstraintMotion>        LinearZMotion;                                             // 0x008A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BHCA[0x1];                                     // 0x008B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LinearLimitSize;                                           // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bLinearLimitSoft : 1;                                      // 0x0090(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_49A2[0x3];                                     // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LinearLimitStiffness;                                      // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              LinearLimitDamping;                                        // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      bLinearBreakable : 1;                                      // 0x009C(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_I4GS[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LinearBreakThreshold;                                      // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TEnumAsByte<Engine_EAngularConstraintMotion>       AngularSwing1Motion;                                       // 0x00A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EAngularConstraintMotion>       AngularTwistMotion;                                        // 0x00A5(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EAngularConstraintMotion>       AngularSwing2Motion;                                       // 0x00A6(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3J8K[0x1];                                     // 0x00A7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bSwingLimitSoft : 1;                                       // 0x00A8(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay)
	unsigned char                                      bTwistLimitSoft : 1;                                       // 0x00A8(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_0MTW[0x3];                                     // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Swing1LimitAngle;                                          // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TwistLimitAngle;                                           // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Swing2LimitAngle;                                          // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SwingLimitStiffness;                                       // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              SwingLimitDamping;                                         // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              TwistLimitStiffness;                                       // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              TwistLimitDamping;                                         // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FRotator                                    AngularRotationOffset;                                     // 0x00C8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bAngularBreakable : 1;                                     // 0x00D4(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_YZNW[0x3];                                     // 0x00D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AngularBreakThreshold;                                     // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      bLinearXPositionDrive : 1;                                 // 0x00DC(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bLinearXVelocityDrive : 1;                                 // 0x00DC(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bLinearYPositionDrive : 1;                                 // 0x00DC(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bLinearYVelocityDrive : 1;                                 // 0x00DC(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bLinearZPositionDrive : 1;                                 // 0x00DC(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bLinearZVelocityDrive : 1;                                 // 0x00DC(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bLinearPositionDrive : 1;                                  // 0x00DC(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bLinearVelocityDrive : 1;                                  // 0x00DC(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      UnknownData_1PJS[0x3];                                     // 0x00DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LinearPositionTarget;                                      // 0x00E0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     LinearVelocityTarget;                                      // 0x00EC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LinearDriveSpring;                                         // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LinearDriveDamping;                                        // 0x00FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LinearDriveForceLimit;                                     // 0x0100(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bSwingPositionDrive : 1;                                   // 0x0104(0x0001) BIT_FIELD (Deprecated, NoDestructor)
	unsigned char                                      bSwingVelocityDrive : 1;                                   // 0x0104(0x0001) BIT_FIELD (Deprecated, NoDestructor)
	unsigned char                                      bTwistPositionDrive : 1;                                   // 0x0104(0x0001) BIT_FIELD (Deprecated, NoDestructor)
	unsigned char                                      bTwistVelocityDrive : 1;                                   // 0x0104(0x0001) BIT_FIELD (Deprecated, NoDestructor)
	unsigned char                                      bAngularSlerpDrive : 1;                                    // 0x0104(0x0001) BIT_FIELD (Deprecated, NoDestructor)
	unsigned char                                      bAngularOrientationDrive : 1;                              // 0x0104(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bEnableSwingDrive : 1;                                     // 0x0104(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bEnableTwistDrive : 1;                                     // 0x0104(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bAngularVelocityDrive : 1;                                 // 0x0105(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      UnknownData_FWL2[0xA];                                     // 0x0106(0x000A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       AngularPositionTarget;                                     // 0x0110(0x0010) (Deprecated, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EAngularDriveMode>              AngularDriveMode;                                          // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9FPE[0x3];                                     // 0x0121(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    AngularOrientationTarget;                                  // 0x0124(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     AngularVelocityTarget;                                     // 0x0130(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              AngularDriveSpring;                                        // 0x013C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AngularDriveDamping;                                       // 0x0140(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AngularDriveForceLimit;                                    // 0x0144(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4FU6[0x18];                                    // 0x0148(0x0018) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BoneNode
// 0x0001
struct FBoneNode
{
	TEnumAsByte<Engine_EBoneTranslationRetargetingMode> TranslationRetargetingMode;                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SkeletonToMeshLinkup
// 0x0020
struct FSkeletonToMeshLinkup
{
	TArray<int>                                        SkeletonToMeshTable;                                       // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        MeshToSkeletonTable;                                       // 0x0010(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SmartNameContainer
// 0x0050
struct FSmartNameContainer
{
	unsigned char                                      UnknownData_1XIJ[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimSlotGroup
// 0x0018
struct FAnimSlotGroup
{
	struct FName                                       GroupName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               SlotNames;                                                 // 0x0008(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SingleAnimationPlayData
// 0x0020
struct FSingleAnimationPlayData
{
	class UAnimationAsset*                             AnimToPlay;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVertexAnimation*                            VertexAnimToPlay;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bSavedLooping : 1;                                         // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bSavedPlaying : 1;                                         // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_LF6Q[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SavedPosition;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SavedPlayRate;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UBVV[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.InterpControlPoint
// 0x001C
struct FInterpControlPoint
{
	struct FVector                                     PositionControlPoint;                                      // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bPositionIsRelative;                                       // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZBCD[0xF];                                     // 0x000D(0x000F) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BlendSample
// 0x0018
struct FBlendSample
{
	class UAnimSequence*                               Animation;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     SampleValue;                                               // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DCO6[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.NavDataConfig
// 0x0028 (0x0058 - 0x0030)
struct FNavDataConfig : public FNavAgentProperties
{
	struct FColor                                      Color;                                                     // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     DefaultQueryExtent;                                        // 0x0034(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      NavigationDataClass;                                       // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FStringClassReference                       NavigationDataClassName;                                   // 0x0048(0x0010) (ZeroConstructor, Config)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.NavCollisionBox
// 0x0018
struct FNavCollisionBox
{
	struct FVector                                     Offset;                                                    // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Extent;                                                    // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimParentNodeAssetOverride
// 0x0018
struct FAnimParentNodeAssetOverride
{
	class UAnimationAsset*                             NewAsset;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       ParentNodeGuid;                                            // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.DataTableCategoryHandle
// 0x0018
struct FDataTableCategoryHandle
{
	class UDataTable*                                  DataTable;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ColumnName;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       RowContents;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.DataTableRowHandle
// 0x0010
struct FDataTableRowHandle
{
	class UDataTable*                                  DataTable;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       RowName;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BlueprintDebugData
// 0x0001
struct FBlueprintDebugData
{
	unsigned char                                      UnknownData_CT2K[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.PointerToUberGraphFrame
// 0x0008
struct FPointerToUberGraphFrame
{
	unsigned char                                      UnknownData_BP5V[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.DebuggingInfoForSingleFunction
// 0x0140
struct FDebuggingInfoForSingleFunction
{
	unsigned char                                      UnknownData_T2EC[0x140];                                   // 0x0000(0x0140) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.NodeToCodeAssociation
// 0x0014
struct FNodeToCodeAssociation
{
	unsigned char                                      UnknownData_ZWGC[0x14];                                    // 0x0000(0x0014) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimBlueprintDebugData
// 0x0001
struct FAnimBlueprintDebugData
{
	unsigned char                                      UnknownData_5MPH[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimationFrameSnapshot
// 0x0001
struct FAnimationFrameSnapshot
{
	unsigned char                                      UnknownData_UEPH[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.StateMachineDebugData
// 0x00B0
struct FStateMachineDebugData
{
	unsigned char                                      UnknownData_VZDR[0xB0];                                    // 0x0000(0x00B0) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.NavigationLink
// 0x0018 (0x0048 - 0x0030)
struct FNavigationLink : public FNavigationLinkBase
{
	struct FVector                                     Left;                                                      // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Right;                                                     // 0x003C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ParticleSystemLOD
// 0x0001
struct FParticleSystemLOD
{
	unsigned char                                      UnknownData_CJBE[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.LODSoloTrack
// 0x0010
struct FLODSoloTrack
{
	TArray<unsigned char>                              SoloEnableSetting;                                         // 0x0000(0x0010) (ZeroConstructor, Transient)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.NamedEmitterMaterial
// 0x0010
struct FNamedEmitterMaterial
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          Material;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SkeletalMaterial
// 0x0010
struct FSkeletalMaterial
{
	class UMaterialInterface*                          MaterialInterface;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEnableShadowCasting;                                      // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_B7YA[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BoneMirrorInfo
// 0x0008
struct FBoneMirrorInfo
{
	int                                                SourceIndex;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<CoreUObject_EAxis>                     BoneFlipAxis;                                              // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_E5OZ[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.TriangleSortSettings
// 0x000C
struct FTriangleSortSettings
{
	TEnumAsByte<Engine_ETriangleSortOption>            TriangleSorting;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETriangleSortAxis>              CustomLeftRightAxis;                                       // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_X7TE[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       CustomLeftRightBoneName;                                   // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BoneReference
// 0x000C
struct FBoneReference
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_P9Z3[0x4];                                     // 0x0008(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.DeformablesSettings
// 0x0010
struct FDeformablesSettings
{
	float                                              DistanceStiffness;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeStiffness;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damping;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDistance;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimGroupInfo
// 0x0018
struct FAnimGroupInfo
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.TableRowBase
// 0x0000
struct FTableRowBase
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.CollectionScalarParameter
// 0x0004 (0x001C - 0x0018)
struct FCollectionScalarParameter : public FCollectionParameterBase
{
	float                                              DefaultValue;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ParticleEventGPU_GenerateInfo
// 0x0028
struct FParticleEventGPU_GenerateInfo
{
	TEnumAsByte<Engine_EParticleEventType>             Type;                                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MHOE[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Frequency;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       CustomName;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EGPUParticleCollisionEventLimit> CollisionEventLimit;                                       // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_O6XA[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UParticleModuleEventSendToGame*>      ParticleModuleEventsToSendToGame;                          // 0x0018(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SkeletalMeshOptimizationSettings
// 0x0070
struct FSkeletalMeshOptimizationSettings
{
	TEnumAsByte<Engine_ESkeletalMeshOptimizationType>  ReductionMethod;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NOBO[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NumOfTrianglesPercentage;                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDeviationPercentage;                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WeldingThreshold;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bRecalcNormals;                                            // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IFU8[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NormalsThreshold;                                          // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ESkeletalMeshOptimizationImportance> SilhouetteImportance;                                      // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ESkeletalMeshOptimizationImportance> TextureImportance;                                         // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ESkeletalMeshOptimizationImportance> ShadingImportance;                                         // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ESkeletalMeshOptimizationImportance> SkinningImportance;                                        // 0x001B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BoneReductionRatio;                                        // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxBonesPerVertex;                                         // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_95LI[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBoneReference>                      BonesToRemove;                                             // 0x0028(0x0010) (Edit, ZeroConstructor)
	int                                                BaseLODModel;                                              // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LODChainLastIndex;                                         // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bForceRebuild;                                             // 0x0040(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3ISL[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSimplygonMaterialLODSettings               MaterialLODSettings;                                       // 0x0048(0x0028) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.InputAxisProperties
// 0x0010
struct FInputAxisProperties
{
	float                                              DeadZone;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Sensitivity;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Exponent;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bInvert : 1;                                               // 0x000C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_8132[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.InputAxisConfigEntry
// 0x0018
struct FInputAxisConfigEntry
{
	struct FName                                       AxisKeyName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputAxisProperties                        AxisProperties;                                            // 0x0008(0x0010) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.OrbitOptions
// 0x0004
struct FOrbitOptions
{
	unsigned char                                      bProcessDuringSpawn : 1;                                   // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bProcessDuringUpdate : 1;                                  // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bUseEmitterTime : 1;                                       // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_2STW[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.VelocityConeGroupParams
// 0x0080
struct FVelocityConeGroupParams
{
	struct FRawDistributionFloat                       Angle;                                                     // 0x0000(0x0038) (Edit, ContainsInstancedReference)
	struct FRawDistributionFloat                       Velocity;                                                  // 0x0038(0x0038) (Edit, ContainsInstancedReference)
	struct FVector                                     Direction;                                                 // 0x0070(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FU98[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SkeletalMeshLODInfo
// 0x00F0
struct FSkeletalMeshLODInfo
{
	float                                              ScreenSize;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LODHysteresis;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int>                                        LODMaterialMap;                                            // 0x0008(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FTriangleSortSettings>               TriangleSortSettings;                                      // 0x0018(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	unsigned char                                      bHasBeenSimplified : 1;                                    // 0x0028(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_YWT5[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSkeletalMeshOptimizationSettings           ReductionSettings;                                         // 0x0030(0x0070) (Edit)
	struct FSimplygonRemeshingSettings                 RemeshingSettings;                                         // 0x00A0(0x0050) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.CircleElement2D
// 0x000C
struct FCircleElement2D
{
	struct FVector2D                                   Center;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ConvexElement2D
// 0x0010
struct FConvexElement2D
{
	TArray<struct FVector2D>                           VertexData;                                                // 0x0000(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AggregateGeometry2D
// 0x0030
struct FAggregateGeometry2D
{
	TArray<struct FCircleElement2D>                    CircleElements;                                            // 0x0000(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FBoxElement2D>                       BoxElements;                                               // 0x0010(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FConvexElement2D>                    ConvexElements;                                            // 0x0020(0x0010) (Edit, EditFixedSize, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BuilderPoly
// 0x0020
struct FBuilderPoly
{
	TArray<int>                                        VertexIndices;                                             // 0x0000(0x0010) (ZeroConstructor)
	int                                                Direction;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ItemName;                                                  // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PolyFlags;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.FunctionExpressionInput
// 0x0050
struct FFunctionExpressionInput
{
	class UMaterialExpressionFunctionInput*            ExpressionInput;                                           // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       ExpressionInputId;                                         // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FExpressionInput                            Input;                                                     // 0x0018(0x0038) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SlotAnimationTrack
// 0x0018
struct FSlotAnimationTrack
{
	struct FName                                       SlotName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimTrack                                  AnimTrack;                                                 // 0x0008(0x0010) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ParticleReplayTrackKey
// 0x000C
struct FParticleReplayTrackKey
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ClipIDNumber;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ParticleRandomSeedInfo
// 0x0020
struct FParticleRandomSeedInfo
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bGetSeedFromInstance : 1;                                  // 0x0008(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bInstanceSeedIsIndex : 1;                                  // 0x0008(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bResetSeedOnEmitterLooping : 1;                            // 0x0008(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bRandomlySelectSeedArray : 1;                              // 0x0008(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_TE3L[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        RandomSeeds;                                               // 0x0010(0x0010) (Edit, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_RotateRootBone
// 0x0030 (0x0060 - 0x0030)
struct FAnimNode_RotateRootBone : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                  // 0x0030(0x0018) (Edit, BlueprintVisible)
	float                                              Pitch;                                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Yaw;                                                       // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    MeshToComponent;                                           // 0x0050(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XVF6[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SplineMeshParams
// 0x0058
struct FSplineMeshParams
{
	struct FVector                                     StartPos;                                                  // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     StartTangent;                                              // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   StartScale;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	float                                              StartRoll;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector2D                                   StartOffset;                                               // 0x0024(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	struct FVector                                     EndPos;                                                    // 0x002C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     EndTangent;                                                // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   EndScale;                                                  // 0x0044(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	float                                              EndRoll;                                                   // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector2D                                   EndOffset;                                                 // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.PurchaseInfo
// 0x0040
struct FPurchaseInfo
{
	struct FString                                     Identifier;                                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     DisplayName;                                               // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     DisplayDescription;                                        // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     DisplayPrice;                                              // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.Node
// 0x0060
struct FNode
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ParentName;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  Transform;                                                 // 0x0010(0x0030) (IsPlainOldData, NoDestructor)
	struct FString                                     DisplayName;                                               // 0x0040(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	bool                                               bAdvanced;                                                 // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_U48F[0xF];                                     // 0x0051(0x000F) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.VectorDistribution
// 0x0028
struct FVectorDistribution
{
	struct FDistributionLookupTable                    Table;                                                     // 0x0000(0x0028) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.Vector4Distribution
// 0x0028
struct FVector4Distribution
{
	struct FDistributionLookupTable                    Table;                                                     // 0x0000(0x0028) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.PlatformInterfaceData
// 0x0030
struct FPlatformInterfaceData
{
	struct FName                                       DataName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EPlatformInterfaceDataType>     Type;                                                      // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9QZG[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                IntValue;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FloatValue;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PDLP[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StringValue;                                               // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ObjectValue;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.PlatformInterfaceDelegateResult
// 0x0038
struct FPlatformInterfaceDelegateResult
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_X0HW[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPlatformInterfaceData                      Data;                                                      // 0x0008(0x0030)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.FastArraySerializerItem
// 0x0008
struct FFastArraySerializerItem
{
	int                                                ReplicationID;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	int                                                ReplicationKey;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.FastArraySerializer
// 0x00A8
struct FFastArraySerializer
{
	unsigned char                                      UnknownData_3PX4[0xA8];                                    // 0x0000(0x00A8) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ScaleTrack
// 0x0020
struct FScaleTrack
{
	TArray<struct FVector>                             ScaleKeys;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      Times;                                                     // 0x0010(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.EditorImportExportTestDefinition
// 0x0038
struct FEditorImportExportTestDefinition
{
	struct FFilePath                                   ImportFilePath;                                            // 0x0000(0x0010) (Edit, Config)
	struct FString                                     ExportFileExtension;                                       // 0x0010(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	bool                                               bSkipExport;                                               // 0x0020(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_B2JM[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FImportFactorySettingValues>         FactorySettings;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, Config)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.TextureRenderData
// 0x0048
struct FTextureRenderData
{
	class UTexture*                                    RenderTexture;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   ScreenPosition;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   ScreenSize;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   CoordinatePosition;                                        // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   CoordinateSize;                                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                RenderColor;                                               // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EBlendMode>                     BlendMode;                                                 // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BN89[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Rotation;                                                  // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   PivotPoint;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.InstancedNavMesh
// 0x0038
struct FInstancedNavMesh
{
	TAssetPtr<class UClass>                            AssetClass;                                                // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XPV1[0x4];                                     // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FVector                                     Location;                                                  // 0x0020(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       NavMeshName;                                               // 0x002C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNavAgentSelector                           SupportedAgents;                                           // 0x0034(0x0004) (Edit, DisableEditOnInstance)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.FractureMaterial
// 0x0024
struct FFractureMaterial
{
	struct FVector2D                                   UVScale;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   UVOffset;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Tangent;                                                   // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              UAngle;                                                    // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InteriorElementIndex;                                      // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.DestructibleChunkParameters
// 0x0004
struct FDestructibleChunkParameters
{
	bool                                               bIsSupportChunk;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bDoNotFracture;                                            // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bDoNotDamage;                                              // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bDoNotCrumble;                                             // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AudioQualitySettings
// 0x0040
struct FAudioQualitySettings
{
	struct FText                                       DisplayName;                                               // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (Edit)
	unsigned char                                      UnknownData_UGRU[0x20];                                    // 0x0000(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                MaxChannels;                                               // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_D9YS[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.PhysicalSurfaceName
// 0x000C
struct FPhysicalSurfaceName
{
	TEnumAsByte<Engine_EPhysicalSurface>               Type;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_35XE[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Name;                                                      // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.DominanceGroupPair
// 0x000C
struct FDominanceGroupPair
{
	TEnumAsByte<Engine_EDominanceGroup>                FirstGroupId;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EDominanceGroup>                SecondGroupId;                                             // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NA6M[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                FirstDominanceValue;                                       // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SecondDominanceValue;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.DominanceGroupName
// 0x000C
struct FDominanceGroupName
{
	TEnumAsByte<Engine_EDominanceGroup>                Type;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VTFB[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Name;                                                      // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.TextureLODGroup
// 0x0038
struct FTextureLODGroup
{
	TEnumAsByte<Engine_ETextureGroup>                  Group;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ON08[0xB];                                     // 0x0001(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LODBias;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZMAL[0x4];                                     // 0x0010(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumStreamedMips;                                           // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETextureMipGenSettings>         MipGenSettings;                                            // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WAG5[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MinLODSize;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxLODSize;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       MinMagFilter;                                              // 0x0024(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       MipFilter;                                                 // 0x002C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TextureQualityReduction;                                   // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.DialogueContextMapping
// 0x0028
struct FDialogueContextMapping
{
	struct FDialogueContext                            Context;                                                   // 0x0000(0x0018) (Edit)
	class USoundWave*                                  SoundWave;                                                 // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDialogueSoundWaveProxy*                     Proxy;                                                     // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.InterpLookupPoint
// 0x000C
struct FInterpLookupPoint
{
	struct FName                                       GroupName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Time;                                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.InterpLookupTrack
// 0x0010
struct FInterpLookupTrack
{
	TArray<struct FInterpLookupPoint>                  Points;                                                    // 0x0000(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.TransformCurve
// 0x0480 (0x0498 - 0x0018)
struct FTransformCurve : public FAnimCurveBase
{
	struct FVectorCurve                                TranslationCurve;                                          // 0x0018(0x0180)
	struct FVectorCurve                                RotationCurve;                                             // 0x0198(0x0180)
	struct FVectorCurve                                ScaleCurve;                                                // 0x0318(0x0180)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SkeletalMeshComponentPreClothTickFunction
// 0x0008 (0x0050 - 0x0048)
struct FSkeletalMeshComponentPreClothTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_RCLY[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.RootMotionExtractionStep
// 0x0010
struct FRootMotionExtractionStep
{
	class UAnimSequence*                               AnimSequence;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartPosition;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EndPosition;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimationTransitionRule
// 0x0010
struct FAnimationTransitionRule
{
	struct FName                                       RuleToExecute;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TransitionReturnVal;                                       // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_J3Z1[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TransitionIndex;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimationStateBase
// 0x0008
struct FAnimationStateBase
{
	struct FName                                       StateName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimationState
// 0x0020 (0x0028 - 0x0008)
struct FAnimationState : public FAnimationStateBase
{
	TArray<struct FAnimationTransitionRule>            Transitions;                                               // 0x0008(0x0010) (ZeroConstructor)
	int                                                StateRootNodeIndex;                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StartNotify;                                               // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                EndNotify;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FullyBlendedNotify;                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SlotEvaluationPose
// 0x0048
struct FSlotEvaluationPose
{
	TEnumAsByte<Engine_EAdditiveAnimationType>         AdditiveType;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_E2QU[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Weight;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZH4Q[0x40];                                    // 0x0008(0x0040) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.PerBoneBlendWeight
// 0x0008
struct FPerBoneBlendWeight
{
	int                                                SourceIndex;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendWeight;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.PerBoneBlendWeights
// 0x0010
struct FPerBoneBlendWeights
{
	TArray<struct FPerBoneBlendWeight>                 BoneBlendWeights;                                          // 0x0000(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.A2Pose
// 0x0010
struct FA2Pose
{
	TArray<struct FTransform>                          Bones;                                                     // 0x0000(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.A2CSPose
// 0x0018 (0x0028 - 0x0010)
struct FA2CSPose : public FA2Pose
{
	unsigned char                                      UnknownData_PZ7Z[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              ComponentSpaceFlags;                                       // 0x0018(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimMontageInstance
// 0x00A0
struct FAnimMontageInstance
{
	class UAnimMontage*                                Montage;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DesiredWeight;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Weight;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendTime;                                                 // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultBlendTimeMultiplier;                                // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int>                                        NextSections;                                              // 0x0018(0x0010) (ZeroConstructor)
	TArray<int>                                        PrevSections;                                              // 0x0028(0x0010) (ZeroConstructor)
	bool                                               bPlaying;                                                  // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VQB0[0x2F];                                    // 0x0039(0x002F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAnimNotifyEvent>                    ActiveStateBranchingPoints;                                // 0x0068(0x0010) (ZeroConstructor, Transient, ContainsInstancedReference)
	float                                              Position;                                                  // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NU0Z[0x20];                                    // 0x0080(0x0020) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.FogVolumeInfo
// 0x0130
struct FFogVolumeInfo
{
	class UFogVolumeComponent*                         Component;                                                 // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_00OY[0xF8];                                    // 0x0008(0x00F8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture*                                    VolumeTexture;                                             // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                                    MeshFogVolumeTexture;                                      // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QHD0[0x20];                                    // 0x0110(0x0020) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.WaterSimPlane
// 0x0030
struct FWaterSimPlane
{
	class UClass*                                      WaterId;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                                     WaterOwner;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlane                                      NonFFTPlane;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bUseFFT;                                                   // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bActive;                                                   // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YHVY[0x2];                                     // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FFTBasePlaneHeight;                                        // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_P9UZ[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BatchedPoint
// 0x0028
struct FBatchedPoint
{
	struct FVector                                     Position;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color;                                                     // 0x000C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              PointSize;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RemainingLifeTime;                                         // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      DepthPriority;                                             // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4G0M[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BatchedLine
// 0x0034
struct FBatchedLine
{
	struct FVector                                     Start;                                                     // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     End;                                                       // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color;                                                     // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Thickness;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RemainingLifeTime;                                         // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      DepthPriority;                                             // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LSE7[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimNode_RotationOffsetBlendSpace
// 0x0018 (0x0128 - 0x0110)
struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{
	struct FPoseLink                                   BasePose;                                                  // 0x0110(0x0018) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.PerBoneInterpolation
// 0x0010
struct FPerBoneInterpolation
{
	struct FBoneReference                              BoneReference;                                             // 0x0000(0x000C) (Edit)
	float                                              InterpolationSpeedPerSec;                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.CanvasUVTri
// 0x0060
struct FCanvasUVTri
{
	struct FVector2D                                   V0_Pos;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   V0_UV;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                V0_Color;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   V1_Pos;                                                    // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   V1_UV;                                                     // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                V1_Color;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   V2_Pos;                                                    // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   V2_UV;                                                     // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                V2_Color;                                                  // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.LocationBoneSocketInfo
// 0x0014
struct FLocationBoneSocketInfo
{
	struct FName                                       BoneSocketName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Offset;                                                    // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.RPCStats
// 0x00C0
struct FRPCStats
{
	struct FRPCStatEntry                               Entries[0x2];                                              // 0x0000(0x00C0)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.FuncStatHolder
// 0x0028
struct FFuncStatHolder
{
	unsigned char                                      UnknownData_TDOD[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AutoCompleteNode
// 0x0028
struct FAutoCompleteNode
{
	int                                                IndexChar;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EH64[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        AutoCompleteListIndices;                                   // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_2ZGI[0x10];                                    // 0x0018(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.RuntimeCurveLinearColor
// 0x01E8
struct FRuntimeCurveLinearColor
{
	struct FRichCurve                                  ColorCurves[0x4];                                          // 0x0000(0x01E0)
	class UCurveLinearColor*                           ExternalCurve;                                             // 0x01E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.CurveTableRowHandle
// 0x0010
struct FCurveTableRowHandle
{
	class UCurveTable*                                 CurveTable;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       RowName;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.GraphReference
// 0x0020
struct FGraphReference
{
	class UEdGraph*                                    MacroGraph;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UBlueprint*                                  GraphBlueprint;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FGuid                                       GraphGuid;                                                 // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.EdGraphSchemaAction
// 0x00C8
struct FEdGraphSchemaAction
{
	unsigned char                                      UnknownData_PX5F[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       MenuDescription;                                           // 0x0008(0x0018) ELEMENT_SIZE_MISMATCH
	unsigned char                                      UnknownData_98XJ[0x20];                                    // 0x0000(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FString                                     TooltipDescription;                                        // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FText                                       Category;                                                  // 0x0050(0x0018) ELEMENT_SIZE_MISMATCH
	unsigned char                                      UnknownData_TO2G[0x20];                                    // 0x0050(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       Keywords;                                                  // 0x0088(0x0018) ELEMENT_SIZE_MISMATCH
	unsigned char                                      UnknownData_OZ4Y[0x20];                                    // 0x0088(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                Grouping;                                                  // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SectionID;                                                 // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.EdGraphSchemaAction_NewNode
// 0x0008 (0x00D0 - 0x00C8)
struct FEdGraphSchemaAction_NewNode : public FEdGraphSchemaAction
{
	class UEdGraphNode*                                NodeTemplate;                                              // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ScreenMessageString
// 0x0028
struct FScreenMessageString
{
	uint64_t                                           Key;                                                       // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ScreenMessage;                                             // 0x0008(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash)
	struct FColor                                      DisplayColor;                                              // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	float                                              TimeToDisplay;                                             // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentTimeDisplayed;                                      // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AP4U[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.FullyLoadedPackagesInfo
// 0x0038
struct FFullyLoadedPackagesInfo
{
	TEnumAsByte<Engine_EFullyLoadPackageType>          FullyLoadType;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0PR0[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Tag;                                                       // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FName>                               PackagesToLoad;                                            // 0x0018(0x0010) (ZeroConstructor)
	TArray<class UObject*>                             LoadedObjects;                                             // 0x0028(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.LevelStreamingStatus
// 0x0010
struct FLevelStreamingStatus
{
	struct FName                                       PackageName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bShouldBeLoaded : 1;                                       // 0x0008(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bShouldBeVisible : 1;                                      // 0x0008(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_DGSF[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           LODIndex;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.NamedNetDriver
// 0x0010
struct FNamedNetDriver
{
	class UNetDriver*                                  NetDriver;                                                 // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UWLO[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.WorldContext
// 0x0298
struct FWorldContext
{
	unsigned char                                      UnknownData_HDUG[0xE0];                                    // 0x0000(0x00E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FURL                                        LastURL;                                                   // 0x00E0(0x0070)
	struct FURL                                        LastRemoteURL;                                             // 0x0150(0x0070)
	class UPendingNetGame*                             PendingNetGame;                                            // 0x01C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFullyLoadedPackagesInfo>            PackagesToFullyLoad;                                       // 0x01C8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_FUON[0x10];                                    // 0x01D8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ULevel*>                              LoadedLevelsForPendingMapChange;                           // 0x01E8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_WMKO[0x18];                                    // 0x01F8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UObjectReferencer*>                   ObjectReferencers;                                         // 0x0210(0x0010) (ZeroConstructor)
	TArray<struct FLevelStreamingStatus>               PendingLevelStreamingStatusUpdates;                        // 0x0220(0x0010) (ZeroConstructor)
	class UGameViewportClient*                         GameViewport;                                              // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                               OwningGameInstance;                                        // 0x0238(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FNamedNetDriver>                     ActiveNetDrivers;                                          // 0x0240(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData_BS82[0x48];                                    // 0x0250(0x0048) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ActiveHapticFeedbackEffect
// 0x0010
struct FActiveHapticFeedbackEffect
{
	class UHapticFeedbackEffect*                       HapticEffect;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4AO7[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BuildPromotionOpenAssetSettings
// 0x0060
struct FBuildPromotionOpenAssetSettings
{
	struct FFilePath                                   BlueprintAsset;                                            // 0x0000(0x0010) (Edit, Config)
	struct FFilePath                                   MaterialAsset;                                             // 0x0010(0x0010) (Edit, Config)
	struct FFilePath                                   ParticleSystemAsset;                                       // 0x0020(0x0010) (Edit, Config)
	struct FFilePath                                   SkeletalMeshAsset;                                         // 0x0030(0x0010) (Edit, Config)
	struct FFilePath                                   StaticMeshAsset;                                           // 0x0040(0x0010) (Edit, Config)
	struct FFilePath                                   TextureAsset;                                              // 0x0050(0x0010) (Edit, Config)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BuildPromotionTestSettings
// 0x0210
struct FBuildPromotionTestSettings
{
	struct FFilePath                                   DefaultStaticMeshAsset;                                    // 0x0000(0x0010) (Edit)
	struct FBuildPromotionImportWorkflowSettings       ImportWorkflow;                                            // 0x0010(0x0150) (Edit)
	struct FBuildPromotionOpenAssetSettings            OpenAssets;                                                // 0x0160(0x0060) (Edit)
	struct FBuildPromotionBlueprintSettings            BlueprintSettings;                                         // 0x01C0(0x0020) (Edit)
	struct FBuildPromotionNewProjectSettings           NewProjectSettings;                                        // 0x01E0(0x0020) (Edit)
	struct FFilePath                                   SourceControlMaterial;                                     // 0x0200(0x0010) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.OpenTestAsset
// 0x0018
struct FOpenTestAsset
{
	struct FFilePath                                   AssetToOpen;                                               // 0x0000(0x0010) (Edit)
	bool                                               bSkipTestWhenUnAttended;                                   // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ALJ0[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BlueprintInstancedActorDelegateBinding
// 0x0010
struct FBlueprintInstancedActorDelegateBinding
{
	struct FName                                       DelegatePropertyName;                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FunctionNameToBind;                                        // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.FontImportOptionsData
// 0x00B0
struct FFontImportOptionsData
{
	struct FString                                     FontName;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	float                                              Height;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bEnableAntialiasing : 1;                                   // 0x0014(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bEnableBold : 1;                                           // 0x0014(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bEnableItalic : 1;                                         // 0x0014(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bEnableUnderline : 1;                                      // 0x0014(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bAlphaOnly : 1;                                            // 0x0014(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_KBTW[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_EFontImportCharacterSet>        CharacterSet;                                              // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_H260[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Chars;                                                     // 0x0020(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     UnicodeRange;                                              // 0x0030(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     CharsFilePath;                                             // 0x0040(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     CharsFileWildcard;                                         // 0x0050(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	unsigned char                                      bCreatePrintableOnly : 1;                                  // 0x0060(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bIncludeASCIIRange : 1;                                    // 0x0060(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_2XJA[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                ForegroundColor;                                           // 0x0064(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bEnableDropShadow : 1;                                     // 0x0074(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_LSP1[0x3];                                     // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TexturePageWidth;                                          // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TexturePageMaxHeight;                                      // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                XPadding;                                                  // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                YPadding;                                                  // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ExtendBoxTop;                                              // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ExtendBoxBottom;                                           // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ExtendBoxRight;                                            // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ExtendBoxLeft;                                             // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bEnableLegacyMode : 1;                                     // 0x0098(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_9SRJ[0x3];                                     // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Kerning;                                                   // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bUseDistanceFieldAlpha : 1;                                // 0x00A0(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_HL5E[0x3];                                     // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DistanceFieldScaleFactor;                                  // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceFieldScanRadiusScale;                              // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VZUA[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.FontCharacter
// 0x0018
struct FFontCharacter
{
	int                                                StartU;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StartV;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                USize;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                VSize;                                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      TextureIndex;                                              // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GHGU[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                VerticalOffset;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.HapticFeedbackDetails
// 0x0100
struct FHapticFeedbackDetails
{
	struct FRuntimeFloatCurve                          Frequency;                                                 // 0x0000(0x0080) (Edit)
	struct FRuntimeFloatCurve                          Amplitude;                                                 // 0x0080(0x0080) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.HIKBoneMapping
// 0x000C
struct FHIKBoneMapping
{
	struct FName                                       UnrealBoneName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HumanIKBone;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ParticleEvent_GenerateInfo
// 0x0028
struct FParticleEvent_GenerateInfo
{
	TEnumAsByte<Engine_EParticleEventType>             Type;                                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Z827[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Frequency;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ParticleFrequency;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      FirstTimeOnly : 1;                                         // 0x000C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      LastTimeOnly : 1;                                          // 0x000C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UseReflectedImpactVector : 1;                              // 0x000C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bUseOrbitOffset : 1;                                       // 0x000C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_54MH[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       CustomName;                                                // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UParticleModuleEventSendToGame*>      ParticleModuleEventsToSendToGame;                          // 0x0018(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.GenericStruct
// 0x0004
struct FGenericStruct
{
	int                                                Data;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.CollisionProfileName
// 0x0008
struct FCollisionProfileName
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.TimerHandle
// 0x0004
struct FTimerHandle
{
	unsigned char                                      UnknownData_VIB6[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.DebugFloatHistory
// 0x0020
struct FDebugFloatHistory
{
	TArray<float>                                      Samples;                                                   // 0x0000(0x0010) (ZeroConstructor, Transient)
	float                                              MaxSamples;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinValue;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxValue;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAutoAdjustMinMax;                                         // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EPLX[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.FormatTextArgument
// 0x0070
struct FFormatTextArgument
{
	struct FText                                       ArgumentName;                                              // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, DisableEditOnTemplate)
	unsigned char                                      UnknownData_A09T[0x20];                                    // 0x0000(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       TextValue;                                                 // 0x0038(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, DisableEditOnTemplate)
	unsigned char                                      UnknownData_VH68[0x20];                                    // 0x0038(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimationTransitionBetweenStates
// 0x0030 (0x0038 - 0x0008)
struct FAnimationTransitionBetweenStates : public FAnimationStateBase
{
	int                                                PreviousState;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NextState;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CrossfadeDuration;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StartNotify;                                               // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                EndNotify;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InterruptNotify;                                           // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EAlphaBlendOption>              BlendMode;                                                 // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LM42[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 CustomCurve;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETransitionLogicType>           LogicType;                                                 // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XFAX[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BakedAnimationStateMachine
// 0x0030
struct FBakedAnimationStateMachine
{
	struct FName                                       MachineName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InitialState;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EKF6[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBakedAnimationState>                States;                                                    // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FAnimationTransitionBetweenStates>   Transitions;                                               // 0x0020(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.CurveEdEntry
// 0x0038
struct FCurveEdEntry
{
	class UObject*                                     CurveObject;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                      CurveColor;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PKTQ[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CurveName;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	int                                                bHideCurve;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                bColorCurve;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                bFloatingPointColorCurve;                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                bClamp;                                                    // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ClampLow;                                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ClampHigh;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.CurveEdTab
// 0x0030
struct FCurveEdTab
{
	struct FString                                     TabName;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FCurveEdEntry>                       Curves;                                                    // 0x0010(0x0010) (ZeroConstructor)
	float                                              ViewStartInput;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ViewEndInput;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ViewStartOutput;                                           // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ViewEndOutput;                                             // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BoolTrackKey
// 0x0008
struct FBoolTrackKey
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Value : 1;                                                 // 0x0004(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_DF95[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.DirectorTrackCut
// 0x0014
struct FDirectorTrackCut
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TransitionTime;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       TargetCamGroup;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ShotNumber;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.EventTrackKey
// 0x000C
struct FEventTrackKey
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       EventName;                                                 // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimControlTrackKey
// 0x0020
struct FAnimControlTrackKey
{
	float                                              StartTime;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_I4PJ[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequence*                               AnimSeq;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AnimStartOffset;                                           // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AnimEndOffset;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AnimPlayRate;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bLooping : 1;                                              // 0x001C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bReverse : 1;                                              // 0x001C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_Z5R0[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ComponentKey
// 0x0020
struct FComponentKey
{
	class UClass*                                      OwnerClass;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SCSVariableName;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       AssociatedGuid;                                            // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ComponentOverrideRecord
// 0x0028
struct FComponentOverrideRecord
{
	class UActorComponent*                             ComponentTemplate;                                         // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FComponentKey                               ComponentKey;                                              // 0x0008(0x0020)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.KeyBind
// 0x0038
struct FKeyBind
{
	struct FKey                                        Key;                                                       // 0x0000(0x0020) (Config)
	struct FString                                     Command;                                                   // 0x0020(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash)
	unsigned char                                      Control : 1;                                               // 0x0030(0x0001) BIT_FIELD (Config, NoDestructor)
	unsigned char                                      Shift : 1;                                                 // 0x0030(0x0001) BIT_FIELD (Config, NoDestructor)
	unsigned char                                      Alt : 1;                                                   // 0x0030(0x0001) BIT_FIELD (Config, NoDestructor)
	unsigned char                                      Cmd : 1;                                                   // 0x0030(0x0001) BIT_FIELD (Config, NoDestructor)
	unsigned char                                      bIgnoreCtrl : 1;                                           // 0x0030(0x0001) BIT_FIELD (Config, NoDestructor)
	unsigned char                                      bIgnoreShift : 1;                                          // 0x0030(0x0001) BIT_FIELD (Config, NoDestructor)
	unsigned char                                      bIgnoreAlt : 1;                                            // 0x0030(0x0001) BIT_FIELD (Config, NoDestructor)
	unsigned char                                      bIgnoreCmd : 1;                                            // 0x0030(0x0001) BIT_FIELD (Config, NoDestructor)
	unsigned char                                      UnknownData_BOQX[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.InputActionKeyMapping
// 0x0030
struct FInputActionKeyMapping
{
	struct FName                                       ActionName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                        Key;                                                       // 0x0008(0x0020) (Edit)
	unsigned char                                      bShift : 1;                                                // 0x0028(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bCtrl : 1;                                                 // 0x0028(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bAlt : 1;                                                  // 0x0028(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bCmd : 1;                                                  // 0x0028(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_TQRB[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.InputAxisKeyMapping
// 0x0030
struct FInputAxisKeyMapping
{
	struct FName                                       AxisName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                        Key;                                                       // 0x0008(0x0020) (Edit)
	float                                              Scale;                                                     // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ICSI[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.InputCombinedAxisKeyMapping
// 0x0058
struct FInputCombinedAxisKeyMapping
{
	struct FName                                       AxisName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                        KeyX;                                                      // 0x0008(0x0020) (Edit)
	struct FKey                                        KeyY;                                                      // 0x0028(0x0020) (Edit)
	float                                              Scale;                                                     // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CircularDeadZoneLowerBound;                                // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CircularDeadZoneUpperBound;                                // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Exponent;                                                  // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.EmitterDynamicParameter
// 0x0050
struct FEmitterDynamicParameter
{
	struct FName                                       ParamName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bUseEmitterTime : 1;                                       // 0x0008(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSpawnTimeOnly : 1;                                        // 0x0008(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_7XO8[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_EEmitterDynamicParameterValue>  ValueMethod;                                               // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HVV6[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bScaleVelocityByParamValue : 1;                            // 0x0010(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_HKQ9[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRawDistributionFloat                       ParamValue;                                                // 0x0018(0x0038) (Edit, ContainsInstancedReference)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.ParticleBurst
// 0x0014
struct FParticleBurst
{
	int                                                Count;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CountLow;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Time;                                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpawnMultiplier;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EBurstGroup>                    Group;                                                     // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3P4F[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.RotationAboutAxisParameters
// 0x0010
struct FRotationAboutAxisParameters
{
	struct FVector                                     Rotation;                                                  // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bUseRotation : 1;                                          // 0x000C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bUseLocalSpace : 1;                                        // 0x000C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_LMUJ[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.PreviewAssetAttachContainer
// 0x0010
struct FPreviewAssetAttachContainer
{
	TArray<struct FPreviewAttachedObjectPair>          AttachedObjects;                                           // 0x0000(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.MorphTargetMap
// 0x0010
struct FMorphTargetMap
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMorphTarget*                                MorphTarget;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.BoneMirrorExport
// 0x0014
struct FBoneMirrorExport
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SourceBoneName;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<CoreUObject_EAxis>                     BoneFlipAxis;                                              // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LWXF[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimationGroupReference
// 0x000C
struct FAnimationGroupReference
{
	struct FName                                       GroupName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EAnimGroupRole>                 GroupRole;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_22UC[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.AnimExtractContext
// 0x0008
struct FAnimExtractContext
{
	bool                                               bExtractRootMotion;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G5Q0[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurrentTime;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Engine.SmartNameMapping
// 0x0068
struct FSmartNameMapping
{
	unsigned char                                      UnknownData_DCFD[0x68];                                    // 0x0000(0x0068) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
