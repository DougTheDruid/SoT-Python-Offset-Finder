// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x60
class BP_EyeOfReach_C: public ProjectileWeapon
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0xa50(0x8)
	Class StaticMeshComponent*                                   Glint;                                             // 0xa58(0x8)
	Class PostProcessComponent*                                  PostProcess;                                       // 0xa60(0x8)
	byte                                                         sfx relationship;                                  // 0xa68(0x1)
	Class MaterialInstanceDynamic*                               DynamicMaterial;                                   // 0xa70(0x8)
	bool                                                         TurningOn;                                         // 0xa78(0x1)
	float                                                        BlurTime;                                          // 0xa7c(0x4)
	float                                                        BlurInDuration;                                    // 0xa80(0x4)
	float                                                        BlurOutDuration;                                   // 0xa84(0x4)
	Class CurveFloat*                                            BlurCurve;                                         // 0xa88(0x8)
	Class Texture2D*                                             LensNormal;                                        // 0xa90(0x8)
	Class Texture2D*                                             LensMask;                                          // 0xa98(0x8)
	Struct LinearColor                                           LensTint;                                          // 0xaa0(0x10)
};


}