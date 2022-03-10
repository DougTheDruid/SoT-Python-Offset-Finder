namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class KnockbackInterface: public Interface
{
public:
};


// Size 0x80
class KnockbackColliderComponent: public BoxComponent
{
public:
	Struct CollisionProfileName                        SolidCollisionProfile                              // 0x5d8(0x8)
	Struct CollisionProfileName                        KnockbackTraceProfile                              // 0x5e0(0x8)
	byte                                               KnockbackType                                      // 0x5e8(0x1)
	Struct KnockBackInfo                               KnockbackParams                                    // 0x5ec(0x50)
	class                                              KnockbackDamageType                                // 0x648(0x8)
	float                                              KnockbackInterval                                  // 0x650(0x4)
	byte                                               SolidState                                         // 0x658(0x1)
};


}