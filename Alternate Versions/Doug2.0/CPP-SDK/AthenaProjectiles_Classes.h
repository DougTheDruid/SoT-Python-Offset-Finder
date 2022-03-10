namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10
class AthenaProjectilesThrottledTickCollectionAsset: public DataAsset
{
public:
	TArray<Struct GlobalSettings>                      ProjectileTickPools                                // 0x28(0x10)
};


// Size 0x10
class ProjectileLauncherSpecificSettings: public DeveloperSettings
{
public:
	TArray<Struct SetParamValues>                      GlobalSettings                                     // 0x38(0x10)
};


}