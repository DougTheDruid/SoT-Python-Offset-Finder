// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x40 (Full Size[0x68] - InheritedSize[0x28]
class AssetExclusionCanaryAsset: public DataAsset
{
public:
	Struct FText                                                 TextMustNotBeEmpty;                                // 0x28(0x38)
	int                                                          ValueMustBeSetTo10;                                // 0x60(0x4)
	char                                                         pad0xc_E8QEM[0xc];                                 // 0x62(0xc)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class AssetExclusionCanaryContainerList: public DataAsset
{
public:
	TArray<class AssetExclusionCanaryAsset*>                     CanaryAssets;                                      // 0x28(0x10)
};


}