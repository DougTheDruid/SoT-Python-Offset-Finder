// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x60 (Full Size[0xbd0] - InheritedSize[0xb70]
class BP_EyeOfReach_C: public ProjectileWeapon
{
public:
	struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0xb70(0x8)
	class StaticMeshComponent*                                   Glint;                                             // 0xb78(0x8)
	class PostProcessComponent*                                  PostProcess;                                       // 0xb80(0x8)
	byte                                                         sfx relationship;                                  // 0xb88(0x1)
	char                                                         pad0x7_5ZTSF[0x7];                                 // 0xb89(0x7)
	class MaterialInstanceDynamic*                               DynamicMaterial;                                   // 0xb90(0x8)
	bool                                                         TurningOn;                                         // 0xb98(0x1)
	char                                                         pad0x3_NHILS[0x3];                                 // 0xb99(0x3)
	float                                                        BlurTime;                                          // 0xb9c(0x4)
	float                                                        BlurInDuration;                                    // 0xba0(0x4)
	float                                                        BlurOutDuration;                                   // 0xba4(0x4)
	class CurveFloat*                                            BlurCurve;                                         // 0xba8(0x8)
	class Texture2D*                                             LensNormal;                                        // 0xbb0(0x8)
	class Texture2D*                                             LensMask;                                          // 0xbb8(0x8)
	struct LinearColor                                           LensTint;                                          // 0xbc0(0x10)
};


}