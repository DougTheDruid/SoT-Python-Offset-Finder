// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class KnockbackInterface: public Interface
{
public:
};


// Size 0x80 (Full Size[0x670] - InheritedSize[0x5f0]
class KnockbackColliderComponent: public BoxComponent
{
public:
	Struct CollisionProfileName                                  SolidCollisionProfile;                             // 0x5e8(0x8)
	Struct CollisionProfileName                                  KnockbackTraceProfile;                             // 0x5f0(0x8)
	byte                                                         KnockbackType;                                     // 0x5f8(0x1)
	char                                                         pad0x3_OZZ8I[0x3];                                 // 0x5f9(0x3)
	Struct KnockBackInfo                                         KnockbackParams;                                   // 0x5fc(0x50)
	class                                                        KnockbackDamageType;                               // 0x658(0x8)
	float                                                        KnockbackInterval;                                 // 0x660(0x4)
	char                                                         pad0x4_IQBS3[0x4];                                 // 0x664(0x4)
	byte                                                         SolidState;                                        // 0x668(0x1)
	char                                                         pad0x9_JAA8X[0x9];                                 // 0x667(0x9)
};


}