// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class NetworkRegionServiceInterface: public Interface
{
public:
};


// Size 0xa0 (Full Size[0xc8] - InheritedSize[0x28]
class NetworkRegionService: public Object
{
public:
	char                                                         pad0x90_LLX5C[0x90];                               // 0x28(0x90)
	TArray<class PlayerController*>                              PlayersThatNeedToBeTicked;                         // 0xb8(0x10)
};


// Size 0x40 (Full Size[0x408] - InheritedSize[0x3c8]
class RegionAssetCacheActor: public Actor
{
public:
	TArray<struct RegionData>                                    RegionData;                                        // 0x3c8(0x10)
	TArray<class Object*>                                        LoadedAssets;                                      // 0x3d8(0x10)
	char                                                         pad0x20_R0JB6[0x20];                               // 0x3e8(0x20)
};


}