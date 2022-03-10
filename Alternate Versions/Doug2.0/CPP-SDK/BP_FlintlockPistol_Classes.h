namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x38
class BP_FlintlockPistol_C: public ProjectileWeapon
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0xa60(0x8)
	Class PostProcessComponent*                        PostProcess                                        // 0xa68(0x8)
	byte                                               sfx relationship                                   // 0xa70(0x1)
	Class MaterialInstanceDynamic*                     DynamicMaterial                                    // 0xa78(0x8)
	Class Object*                                      ThirdPerson_VFX_AI                                 // 0xa80(0x8)
	Class WwiseEvent*                                  Flintlock3rdPersonSFX                              // 0xa88(0x8)
	Class WwiseEvent*                                  FlintLockFirstPersonSFX                            // 0xa90(0x8)
};


}