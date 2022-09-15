// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x11d
class BP_FlyingCreature_C: public FlyingCreature
{
public:
	Class SceneComponent*                                        DefaultSceneRoot;                                  // 0x420(0x8)
	byte                                                         CreatureType;                                      // 0x428(0x1)
	byte                                                         NumOfCreatures;                                    // 0x429(0x1)
	float                                                        BoundsBias;                                        // 0x42c(0x4)
	Class StaticMeshComponent*                                   StaticMeshComponent;                               // 0x430(0x8)
	Class MaterialInstanceDynamic*                               currMaterial;                                      // 0x438(0x8)
	TArray<class MaterialInstanceDynamic*>                       MaterialInstance;                                  // 0x440(0x10)
	float                                                        Seed;                                              // 0x450(0x4)
	float                                                        FlapSpeed;                                         // 0x454(0x4)
	float                                                        CirclingSpeed;                                     // 0x458(0x4)
	byte                                                         CirclingDirection;                                 // 0x45c(0x1)
	float                                                        CirclingRadius;                                    // 0x460(0x4)
	float                                                        FlapDeformation;                                   // 0x464(0x4)
	float                                                        mud;                                               // 0x468(0x4)
	float                                                        FlockSpeed;                                        // 0x46c(0x4)
	Struct Vector2D                                              FlockingSpread;                                    // 0x470(0x8)
	float                                                        FlockingHeight;                                    // 0x478(0x4)
	float                                                        BirdSpeed;                                         // 0x47c(0x4)
	Struct Vector2D                                              BirdSpread;                                        // 0x480(0x8)
	float                                                        BirdHeight;                                        // 0x488(0x4)
	float                                                        RandomHorizontalSpread;                            // 0x48c(0x4)
	float                                                        HueVariance;                                       // 0x490(0x4)
	float                                                        RandomVerticalSpread;                              // 0x494(0x4)
	float                                                        Smoothness;                                        // 0x498(0x4)
	TArray<Assetclass SelectedCreatureType>                      SelectedCreatureType;                              // 0x4a0(0x10)
	TArray<Assetclass Seagull>                                   Seagull;                                           // 0x4b0(0x10)
	float                                                        Size;                                              // 0x4c0(0x4)
	float                                                        SizeVariance;                                      // 0x4c4(0x4)
	float                                                        SimSpeed;                                          // 0x4c8(0x4)
	Struct Vector                                                BBox;                                              // 0x4cc(0xc)
	TArray<Assetclass Skellygull_01>                             Skellygull_01;                                     // 0x4d8(0x10)
	TArray<Assetclass Bats_01>                                   Bats_01;                                           // 0x4e8(0x10)
	TArray<Assetclass Parrot_01>                                 Parrot_01;                                         // 0x4f8(0x10)
	bool                                                         ScaleInDistance;                                   // 0x508(0x1)
	float                                                        DistanceScale;                                     // 0x50c(0x4)
	float                                                        DrawDistanceWithoutScale;                          // 0x510(0x4)
	float                                                        DrawDistanceWithScale;                             // 0x514(0x4)
	float                                                        ForceHibernation;                                  // 0x518(0x4)
	bool                                                         HibernateAtNight;                                  // 0x51c(0x1)
	Struct Vector                                                HibernateBoundsExtension;                          // 0x520(0xc)
	float                                                        hibernationStartTime;                              // 0x52c(0x4)
	float                                                        hibernationEndTime;                                // 0x530(0x4)
	float                                                        HibernationTransitionTime;                         // 0x534(0x4)
	float                                                        HibernationIndependance;                           // 0x538(0x4)
	bool                                                         Glide;                                             // 0x53c(0x1)
};


}