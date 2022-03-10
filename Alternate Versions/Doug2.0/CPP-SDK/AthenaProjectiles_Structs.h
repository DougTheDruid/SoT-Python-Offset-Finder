namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
class ThrottledProjectileTickPool: public None
{
public:
	int                                                MaxNumberToTickPerFrame                            // 0x0(0x4)
	TArray<Class MaxNumberToTickPerFrame>              Projectiles                                        // 0x8(0x10)
};


// Size 0x10
class GlobalProjectileSettings: public None
{
public:
	byte                                               SettingsFor                                        // 0x0(0x1)
	float                                              ProjectileDestroyDepth                             // 0x4(0x4)
	float                                              ProjectileOceanFloorDestroyDepth                   // 0x8(0x4)
	float                                              ProjectileMinimumFallDistance                      // 0xc(0x4)
};


}