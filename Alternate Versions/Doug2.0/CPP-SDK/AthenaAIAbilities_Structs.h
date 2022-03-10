namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10
class MeleeAttackIdWeights: public None
{
public:
	class                                              MeleeAttackType                                    // 0x0(0x8)
	float                                              Weight                                             // 0x8(0x4)
};


// Size 0x18
class AshenLordFireShroudParams: public None
{
public:
	class                                              FireShroudZoneClass                                // 0x0(0x8)
	Struct Vector                                      FireShroudCollisionVolume                          // 0x8(0xc)
};


// Size 0x20
class AshenLordFireShroud: public None
{
public:
	Class StatusEffectOverlapZone*                     FireShroudOverlapZone                              // 0x0(0x8)
	Struct AshenLordFireShroudParams                   Params                                             // 0x8(0x18)
};


}