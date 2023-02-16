// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x80 (Full Size[0x360] - InheritedSize[0x2e0]
class WorldLocationPopUpComponent: public SceneComponent
{
public:
	Class WorldLocationPopUpDataAsset*                           PopUpData;                                         // 0x2e0(0x8)
	Class ShapeComponent*                                        LocationOverlapVolume;                             // 0x2e8(0x8)
	float                                                        LocationCooldown;                                  // 0x2f0(0x4)
	bool                                                         AlwaysShowPopUp;                                   // 0x2f4(0x1)
	char                                                         pad0x6d_YY6PY[0x6d];                               // 0x2f3(0x6d)
};


// Size 0x58 (Full Size[0x80] - InheritedSize[0x28]
class WorldLocationPopUpDataAsset: public DataAsset
{
public:
	struct FName                                                 Id;                                                // 0x28(0x8)
	Struct StringAssetReference                                  BannerIcon;                                        // 0x30(0x10)
	Struct FText                                                 DisplayText;                                       // 0x40(0x38)
	Class PopUpAudioDesc*                                        AudioOverride;                                     // 0x78(0x8)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WorldLocationVisitorInterface: public Interface
{
public:
};


// Size 0x40 (Full Size[0x108] - InheritedSize[0xc8]
class WorldLocationVisitorComponent: public ActorComponent
{
public:
	char                                                         pad0x8_ZRMTZ[0x8];                                 // 0xc8(0x8)
	float                                                        RevisitCooldown;                                   // 0xd0(0x4)
	char                                                         pad0x3c_XL200[0x3c];                               // 0xd2(0x3c)
};


}