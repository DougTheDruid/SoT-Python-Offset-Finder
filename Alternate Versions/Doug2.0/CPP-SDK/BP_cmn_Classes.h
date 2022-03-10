namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class BP_cmn_cannonball_chain_shot_01_a_ItemDesc_C: public ItemDesc
{
public:
};


// Size 0x8
class BP_cmn_cannonball_chain_shot_01_a_ItemInfo_C: public ProjectileItemInfo
{
public:
	Class SceneComponent*                              DefaultSceneRoot                                   // 0x508(0x8)
};


// Size 0x20
class BP_cmn_cannonball_chain_shot_01_a_Wieldable_C: public BP_CannonBall_C
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x7b8(0x8)
	float                                              JiggleVelocityThreshold                            // 0x7c0(0x4)
	float                                              JiggleAmount                                       // 0x7c4(0x4)
	float                                              JiggleVelocityScale                                // 0x7c8(0x4)
	Class MaterialInstanceDynamic*                     DynamicMaterial                                    // 0x7d0(0x8)
};


// Size 0x0
class BP_cmn_cannonball_chain_shot_01_a_Proxy_C: public BP_CannonBallProxy_C
{
public:
};


}