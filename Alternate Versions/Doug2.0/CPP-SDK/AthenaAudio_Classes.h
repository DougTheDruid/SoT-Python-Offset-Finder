namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10
class AthenaAudioConfig: public DataAsset
{
public:
	Class WwiseObjectPoolWrapper*                      ItemProxyPool                                      // 0x28(0x8)
	Class WwiseObjectPoolWrapper*                      AnimNotifyPool                                     // 0x30(0x8)
};


// Size 0x10
class AthenaAudioModuleSettings: public DeveloperSettings
{
public:
	Struct StringAssetReference                        AudioConfigAsset                                   // 0x38(0x10)
};


}