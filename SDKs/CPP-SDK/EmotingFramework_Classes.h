// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class EmoteCameraInterface: public Interface
{
public:
};


// Size 0x150 (Full Size[0x518] - InheritedSize[0x3c8]
class EmoteCard: public Actor
{
public:
	char                                                         pad0x8_81ZPR[0x8];                                 // 0x3c8(0x8)
	class MaterialInstanceDynamic*                               DynamicCardSelectionMaterialInstance;              // 0x3d0(0x8)
	class StaticMeshComponent*                                   MeshComponent;                                     // 0x3d8(0x8)
	struct FName                                                 RandomCardParameterName;                           // 0x3e0(0x8)
	struct Int32Range                                            RandomCardParameterRange;                          // 0x3e8(0x10)
	char                                                         pad0x120_ZRDC4[0x120];                             // 0x3f8(0x120)
};


// Size 0x128 (Full Size[0x4f0] - InheritedSize[0x3c8]
class EmoteCoin: public Actor
{
public:
	char                                                         pad0x128_ZS3M1[0x128];                             // 0x3c8(0x128)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class EmotePropData: public DataAsset
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class EmoteRandomFromListAsset: public DataAsset
{
public:
	TArray<struct EmoteData>                                     EmoteDataList;                                     // 0x28(0x10)
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class EmotePropDiceData: public EmotePropData
{
public:
	byte                                                         DiceType;                                          // 0x28(0x1)
	char                                                         pad0x7_J0PNF[0x7];                                 // 0x29(0x7)
};


// Size 0x130 (Full Size[0x4f8] - InheritedSize[0x3c8]
class EmoteDice: public Actor
{
public:
	char                                                         pad0x130_WW8GQ[0x130];                             // 0x3c8(0x130)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class EmoteIdListingAsset: public DataAsset
{
public:
	TArray<struct FName>                                         EmoteIds;                                          // 0x28(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class EmoteInteractionObjectsProviderInterface: public Interface
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class EmotePropRandomObjectData: public EmotePropData
{
public:
	TArray<struct EmotePropRandomObjectInfo>                     PossibleObjects;                                   // 0x28(0x10)
};


// Size 0x140 (Full Size[0x508] - InheritedSize[0x3c8]
class EmoteRandomObject: public Actor
{
public:
	char                                                         pad0x8_7YV4J[0x8];                                 // 0x3c8(0x8)
	class StaticMeshComponent*                                   MeshComponent;                                     // 0x3d0(0x8)
	class MaterialInstanceDynamic*                               DynamicMaterialInstance;                           // 0x3d8(0x8)
	char                                                         pad0x128_PH8BS[0x128];                             // 0x3e0(0x128)
};


// Size 0x8 (Full Size[0x40] - InheritedSize[0x38]
class EmoteSettings: public DeveloperSettings
{
public:
	int                                                          NumPages;                                          // 0x38(0x4)
	char                                                         pad0x4_U9LKA[0x4];                                 // 0x3c(0x4)
};


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class EmoteZoomInAnalogInputId: public AnalogInputId
{
public:
};


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class EmoteZoomMouseAnalogInputId: public AnalogInputId
{
public:
};


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class EmoteZoomOutAnalogInputId: public AnalogInputId
{
public:
};


}