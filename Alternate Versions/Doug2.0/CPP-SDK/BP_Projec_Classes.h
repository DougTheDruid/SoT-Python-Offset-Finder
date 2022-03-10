namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
class BP_Projectile_VolcanoRockSmall_C: public VolcanicRock
{
public:
	Class RotatingAudioSourceComponent*                RotatingAudioSource                                // 0x660(0x8)
	Class StaticMeshComponent*                         RockMesh                                           // 0x668(0x8)
	Class SphereComponent*                             Collision                                          // 0x670(0x8)
};


// Size 0x10
class BP_Projectile_VolcanoRockMini_C: public VolcanicRock
{
public:
	Class StaticMeshComponent*                         StaticMesh                                         // 0x660(0x8)
	Class SphereComponent*                             Collision                                          // 0x668(0x8)
};


// Size 0x18
class BP_Projectile_VolcanoRockMedium_C: public VolcanicRock
{
public:
	Class RotatingAudioSourceComponent*                RotatingAudioSource                                // 0x660(0x8)
	Class StaticMeshComponent*                         RockMesh                                           // 0x668(0x8)
	Class SphereComponent*                             Collision                                          // 0x670(0x8)
};


// Size 0x18
class BP_Projectile_VolcanoRockLarge_C: public VolcanicRock
{
public:
	Class RotatingAudioSourceComponent*                RotatingAudioSource                                // 0x660(0x8)
	Class StaticMeshComponent*                         RockMesh                                           // 0x668(0x8)
	Class SphereComponent*                             Collision                                          // 0x670(0x8)
};


}