// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x3c (Full Size[0x484] - InheritedSize[0x448]
class BP_WaterVolume_C: public WaterVolume
{
public:
	struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x448(0x8)
	class StaticMeshComponent*                                   WaterPlaneActivatationVolume;                      // 0x450(0x8)
	class DynamicFlowComponent*                                  DynamicFlow;                                       // 0x458(0x8)
	class FlatWaterPlaneComponent*                               FlatWaterPlane;                                    // 0x460(0x8)
	class FlatWaterMeshComponent*                                FlatWaterMesh;                                     // 0x468(0x8)
	class SceneComponent*                                        Root;                                              // 0x470(0x8)
	bool                                                         SunLit;                                            // 0x478(0x1)
	char                                                         pad0x3_LUXQX[0x3];                                 // 0x479(0x3)
	struct FName                                                 RippleGeneratorTag;                                // 0x47c(0x8)
};


}