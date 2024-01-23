// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x120 (Full Size[0x4e8] - InheritedSize[0x3c8]
class BP_FishCreature_C: public Actor
{
public:
	class SceneComponent*                                        DefaultSceneRoot;                                  // 0x3c8(0x8)
	byte                                                         CreatureType;                                      // 0x3d0(0x1)
	byte                                                         NumOfCreatures;                                    // 0x3d1(0x1)
	char                                                         pad0x2_DXNJ3[0x2];                                 // 0x3d2(0x2)
	float                                                        BoundsBias;                                        // 0x3d4(0x4)
	class StaticMeshComponent*                                   StaticMeshComponent;                               // 0x3d8(0x8)
	class MaterialInstanceDynamic*                               currMaterial;                                      // 0x3e0(0x8)
	TArray<class MaterialInstanceDynamic*>                       MaterialInstance;                                  // 0x3e8(0x10)
	float                                                        Seed;                                              // 0x3f8(0x4)
	float                                                        SwimSpeed;                                         // 0x3fc(0x4)
	float                                                        circlingSpeed;                                     // 0x400(0x4)
	byte                                                         CirclingDirection;                                 // 0x404(0x1)
	char                                                         pad0x3_IQCNQ[0x3];                                 // 0x405(0x3)
	float                                                        CirclingRadius;                                    // 0x408(0x4)
	float                                                        SwimDeformation;                                   // 0x40c(0x4)
	float                                                        Mud;                                               // 0x410(0x4)
	float                                                        shoalSpeed;                                        // 0x414(0x4)
	struct Vector2D                                              ShoalingSpread;                                    // 0x418(0x8)
	float                                                        ShoalingHeight;                                    // 0x420(0x4)
	float                                                        fishSpeed;                                         // 0x424(0x4)
	struct Vector2D                                              FishSpread;                                        // 0x428(0x8)
	float                                                        FishHeight;                                        // 0x430(0x4)
	float                                                        RandomSpread;                                      // 0x434(0x4)
	float                                                        HueVariance;                                       // 0x438(0x4)
	float                                                        smoothness;                                        // 0x43c(0x4)
	TArray<Assetclass SelectedCreatureType>                      SelectedCreatureType;                              // 0x440(0x10)
	TArray<Assetclass Fish_04>                                   Fish_04;                                           // 0x450(0x10)
	TArray<Assetclass Fish_05>                                   Fish_05;                                           // 0x460(0x10)
	float                                                        Size;                                              // 0x470(0x4)
	float                                                        SizeVariance;                                      // 0x474(0x4)
	float                                                        SimSpeed;                                          // 0x478(0x4)
	struct Vector                                                BBox;                                              // 0x47c(0xc)
	TArray<Assetclass Fish_07>                                   Fish_07;                                           // 0x488(0x10)
	float                                                        DrawDistance;                                      // 0x498(0x4)
	char                                                         pad0x4_V7YCA[0x4];                                 // 0x49c(0x4)
	TArray<Assetclass Clown_01>                                  Clown_01;                                          // 0x4a0(0x10)
	float                                                        SizeCompensation;                                  // 0x4b0(0x4)
	char                                                         pad0x4_BJG5H[0x4];                                 // 0x4b4(0x4)
	TArray<Assetclass Splashtail>                                Splashtail;                                        // 0x4b8(0x10)
	TArray<Assetclass Pondie>                                    Pondie;                                            // 0x4c8(0x10)
	struct LinearColor                                           FishDistribution;                                  // 0x4d8(0x10)
};


}