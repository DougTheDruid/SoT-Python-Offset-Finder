namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x40
class BP_Sea_Fort_WindowGlows_C: public SeaFortDistantLights
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x3d0(0x8)
	Class StaticMeshComponent*                         glows                                              // 0x3d8(0x8)
	Class StaticMeshComponent*                         window_planes                                      // 0x3e0(0x8)
	Class SceneComponent*                              SharedRoot                                         // 0x3e8(0x8)
	float                                              FadeCurve_Fade_F995538E47EE9A6B32A4C3A8CF00537A    // 0x3f0(0x4)
	byte                                               FadeCurve__Direction_F995538E47EE9A6B32A4C3A8CF00537A // 0x3f4(0x1)
	Class TimelineComponent*                           FadeCurve                                          // 0x3f8(0x8)
	Class MaterialInstanceDynamic*                     WindowDynamicMaterial                              // 0x400(0x8)
	Class MaterialInstanceDynamic*                     GlowDynamicMaterial                                // 0x408(0x8)
};


}