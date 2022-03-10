namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x28
class BP_Projectile_CannonBall_ChainShot_C: public CannonProjectile
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x658(0x8)
	Class MeshRotatorComponent*                        MeshRotator                                        // 0x660(0x8)
	Class BoxCollisionExtentAdjustOverTimeComponent*   BoxCollisionExtentAdjustOverTime                   // 0x668(0x8)
	Class StaticMeshComponent*                         chainshot                                          // 0x670(0x8)
	Class BoxComponent*                                Collision                                          // 0x678(0x8)
};


}