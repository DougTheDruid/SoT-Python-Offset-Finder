namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class BP_cmn_cannonball_cur_fire_01_a_ItemDesc_C: public ItemDesc
{
public:
};


// Size 0x8
class BP_cmn_cannonball_cur_fire_01_a_ItemInfo_C: public ProjectileItemInfo
{
public:
	Class SceneComponent*                              DefaultSceneRoot                                   // 0x508(0x8)
};


// Size 0x8
class BP_Projectile_CannonBall_Cur_Fire_C: public BP_Projectile_CannonBall_Cursed_C
{
public:
	Class MeshRotatorComponent*                        MeshRotator                                        // 0x670(0x8)
};


// Size 0x0
class BP_CursedCannoball_FireBall_proxy_C: public BP_CannonBallProxy_C
{
public:
};


// Size 0x59
class BP_cmn_cannonball_cur_fire_01_a_Wieldable_C: public BP_Grenade_Wieldable_C
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x8a8(0x8)
	Class PointLightComponent*                         PointLight                                         // 0x8b0(0x8)
	Struct ObjectMessagingHandle                       OnWieldedHandle                                    // 0x8b8(0x48)
	bool                                               IsWielded                                          // 0x900(0x1)
};


// Size 0x0
class BP_Projectile_CannonBall_Cur_Fire_Thrown_C: public BP_Projectile_CannonBall_Cursed_ComplexWaterHits_C
{
public:
};


}