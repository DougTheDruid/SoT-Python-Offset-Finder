// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xa5
class BP_Placement_Garden_C: public Actor
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x3c8(0x8)
	Class BillboardComponent*                                    Billboard;                                         // 0x3d0(0x8)
	Class SphereComponent*                                       Spherical Volume;                                  // 0x3d8(0x8)
	Class SceneComponent*                                        Scene;                                             // 0x3e0(0x8)
	TArray<Struct PlacementGardenSeed>                           Meshes;                                            // 0x3e8(0x10)
	float                                                        Radius;                                            // 0x3f8(0x4)
	bool                                                         Radius Visible;                                    // 0x3fc(0x1)
	float                                                        Spawn Density;                                     // 0x400(0x4)
	float                                                        Spawn Clustering;                                  // 0x404(0x4)
	int                                                          Seed;                                              // 0x408(0x4)
	TArray<class Object*>                                        Physical Materials;                                // 0x410(0x10)
	bool                                                         Update On Drag;                                    // 0x420(0x1)
	TArray<Float Mesh Probabilities>                             Mesh Probabilities;                                // 0x428(0x10)
	TArray<class InstancedStaticMeshComponent*>                  Instanced Meshes;                                  // 0x438(0x10)
	Struct RandomStream                                          Random;                                            // 0x448(0x8)
	int                                                          Instance Count;                                    // 0x450(0x4)
	TArray<Struct LinearColor>                                   Mesh Radii;                                        // 0x458(0x10)
	float                                                        Max Draw Distance;                                 // 0x468(0x4)
	bool                                                         Cast Shadows;                                      // 0x46c(0x1)
};


}