// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x268
class BP_PhantomTornado_C: public Actor
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x3c8(0x8)
	Class ParticleSystemComponent*                               P_BigRocks;                                        // 0x3d0(0x8)
	Class StaticMeshComponent*                                   Vfx_TornadoTopSwirl;                               // 0x3d8(0x8)
	Class ParticleSystemComponent*                               P_EmplacementIntro3;                               // 0x3e0(0x8)
	Class ParticleSystemComponent*                               P_EmplacementIntro2;                               // 0x3e8(0x8)
	Class ParticleSystemComponent*                               P_EmplacementIntro1;                               // 0x3f0(0x8)
	Class StaticMeshComponent*                                   VFX_TornadoSmokeDish;                              // 0x3f8(0x8)
	Class ParticleSystemComponent*                               P_DebrisField;                                     // 0x400(0x8)
	Class StaticMeshComponent*                                   VFX_TornadoSwirl;                                  // 0x408(0x8)
	Class StaticMeshComponent*                                   Cloud;                                             // 0x410(0x8)
	Class ChildActorComponent*                                   LiveWire03;                                        // 0x418(0x8)
	Class ChildActorComponent*                                   LiveWire02;                                        // 0x420(0x8)
	Class ChildActorComponent*                                   LiveWire01;                                        // 0x428(0x8)
	Class StaticMeshComponent*                                   VFX_TornadoTube;                                   // 0x430(0x8)
	Class SceneComponent*                                        DefaultSceneRoot;                                  // 0x438(0x8)
	float                                                        FadeCloudTimeline_FadeOutAlpha_310A9781422F48C589351884CF741612; // 0x440(0x4)
	float                                                        FadeCloudTimeline_FadeINAlpha_310A9781422F48C589351884CF741612; // 0x444(0x4)
	byte                                                         FadeCloudTimeline__Direction_310A9781422F48C589351884CF741612; // 0x448(0x1)
	Class TimelineComponent*                                     FadeCloudTimeline;                                 // 0x450(0x8)
	float                                                        BlowUpTimeline_ErodeAlpha_1DAB983A4D9906A6C459858A888145C3; // 0x458(0x4)
	float                                                        BlowUpTimeline_BlowUpAlpha_1DAB983A4D9906A6C459858A888145C3; // 0x45c(0x4)
	byte                                                         BlowUpTimeline__Direction_1DAB983A4D9906A6C459858A888145C3; // 0x460(0x1)
	Class TimelineComponent*                                     BlowUpTimeline;                                    // 0x468(0x8)
	float                                                        TornadoAlpha_BottomAlpha_436128F646820FE474AED5BAE1BCF5C4; // 0x470(0x4)
	float                                                        TornadoAlpha_TopSwirlAlpha_436128F646820FE474AED5BAE1BCF5C4; // 0x474(0x4)
	float                                                        TornadoAlpha_MainAlpha_436128F646820FE474AED5BAE1BCF5C4; // 0x478(0x4)
	byte                                                         TornadoAlpha__Direction_436128F646820FE474AED5BAE1BCF5C4; // 0x47c(0x1)
	Class TimelineComponent*                                     TornadoAlpha;                                      // 0x480(0x8)
	TArray<Struct None>                                          EmplacementLocations;                              // 0x488(0x10)
	Class MaterialInstanceDynamic*                               TornadoMat;                                        // 0x498(0x8)
	TArray<class LiveWireArray*>                                 LiveWireArray;                                     // 0x4a0(0x10)
	TArray<class Emplacements*>                                  Emplacements;                                      // 0x4b0(0x10)
	TArray<Struct FName>                                         TornadoEnergyPointsNames;                          // 0x4c0(0x10)
	bool                                                         ShowInEditor;                                      // 0x4d0(0x1)
	Class MaterialInstanceDynamic*                               TopSwirlMat;                                       // 0x4d8(0x8)
	Class MaterialInstanceDynamic*                               DebrisMat;                                         // 0x4e0(0x8)
	Class MaterialInstanceDynamic*                               BottomMat;                                         // 0x4e8(0x8)
	bool                                                         ForceShowLightning;                                // 0x4f0(0x1)
	Class MaterialInstanceDynamic*                               OuterSwirlMat;                                     // 0x4f8(0x8)
	float                                                        DebugLineDuration;                                 // 0x500(0x4)
	Struct VfxSpawner                                            EmplacementSpawnVFX;                               // 0x528(0x90)
	Struct WwiseEmitter                                          TornadoEmitter;                                    // 0x5b8(0x20)
	Struct WwiseEmitterCreationParams                            EmitterCreationParams;                             // 0x5d8(0x28)
	Class WwiseEvent*                                            PlayTornadoSFX;                                    // 0x600(0x8)
	Class WwiseEvent*                                            StopTornadoSFX;                                    // 0x608(0x8)
	Class WwiseObjectPoolWrapper*                                WWisePool;                                         // 0x610(0x8)
	int                                                          TornadoPhase;                                      // 0x618(0x4)
	int                                                          Emplacement1Index;                                 // 0x61c(0x4)
	int                                                          Emplacement2Index;                                 // 0x620(0x4)
	int                                                          Emplacement3Index;                                 // 0x624(0x4)
	Class MaterialInstanceDynamic*                               CloudMat;                                          // 0x628(0x8)
};


}