// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x100 (Full Size[0x548] - InheritedSize[0x448]
class BP_Crest_C: public Crest
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x448(0x8)
	Class ParticleSystemComponent*                               VFX_Back;                                          // 0x450(0x8)
	Class ParticleSystemComponent*                               VFX_Front;                                         // 0x458(0x8)
	Class MaybeCompressedCanvasRenderTarget2D*                   TextCanvasRenderTarget;                            // 0x460(0x8)
	Class MaybeCompressedCanvasRenderTarget2D*                   BlurCanvasRenderTarget;                            // 0x468(0x8)
	Class MaybeCompressedCanvasRenderTarget2D*                   BevelCanvasRenderTarget;                           // 0x470(0x8)
	Class Material*                                              BlurCanvasMaterial;                                // 0x478(0x8)
	Class Material*                                              BevelCanvasMaterial;                               // 0x480(0x8)
	Class MaterialInstanceDynamic*                               DynamicBlurCanvasMaterial;                         // 0x488(0x8)
	Class MaterialInstanceDynamic*                               DynamicBevelCanvasMaterial;                        // 0x490(0x8)
	Class MaterialInstanceDynamic*                               CrestDynamicMaterial;                              // 0x498(0x8)
	int                                                          CanvasWidth;                                       // 0x4a0(0x4)
	int                                                          CanvasHeight;                                      // 0x4a4(0x4)
	Class Font*                                                  Font;                                              // 0x4a8(0x8)
	Class WwiseObjectPoolWrapper*                                NameplatePool;                                     // 0x4b0(0x8)
	Struct WwiseEmitterCreationParams                            EmitterCreationParams;                             // 0x4b8(0x28)
	float                                                        Cooldown;                                          // 0x4e0(0x4)
	char                                                         pad0x4_ZRFPE[0x4];                                 // 0x4e4(0x4)
	Struct SlateFontInfo                                         FontInfo;                                          // 0x4e8(0x40)
	TArray<class ParticleSystem*>                                VFXSizeVariants;                                   // 0x528(0x10)
	int                                                          NameSizeIndex;                                     // 0x538(0x4)
	Struct FeatureFlag                                           FeatureName;                                       // 0x53c(0xc)
};


}