namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class BP_cmn_cannonball_Grenade_Scatter_ItemDesc_C: public ItemDesc
{
public:
};


// Size 0x8
class BP_cmn_cannonball_Grenade_Scatter_ItemInfo_C: public ProjectileItemInfo
{
public:
	Class SceneComponent*                              DefaultSceneRoot                                   // 0x508(0x8)
};


// Size 0xc
class BP_Projectile_Grenade_Scatter_C: public BP_Projectile_CannonBall_Cursed_C
{
public:
	Class MeshRotatorComponent*                        MeshRotator                                        // 0x670(0x8)
	float                                              ImpactMultiplierCannon                             // 0x678(0x4)
};


// Size 0x0
class BP_CursedCannoball_Grenade_Scatter_Proxy_C: public BP_CannonBallProxy_C
{
public:
};


// Size 0x20
class BP_cmn_cannonball_Grenade_Scatter_Wieldable_C: public BP_Grenade_Wieldable_C
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x8a8(0x8)
	float                                              JiggleVelocityThreshold                            // 0x8b0(0x4)
	float                                              JiggleVelocityScale                                // 0x8b4(0x4)
	float                                              JiggleAmount                                       // 0x8b8(0x4)
	Class MaterialInstanceDynamic*                     DynamicMaterial                                    // 0x8c0(0x8)
};


// Size 0xc
class BP_Projectile_CannonBall_Grenade_Scatter_Thrown_C: public BP_Projectile_CannonBall_Cursed_ComplexWaterHits_C
{
public:
	Class ExplosiveComponent*                          Explosive                                          // 0x698(0x8)
	float                                              ImpactMultiplier                                   // 0x6a0(0x4)
};


}