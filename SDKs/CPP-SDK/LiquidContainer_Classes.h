// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class LiquidContainerInterface: public Interface
{
public:
};


// Size 0x60
class LiquidContainerComponent: public ActorComponent
{
public:
	struct FName                                                 LiquidMaterialName;                                // 0xc8(0x8)
	struct FName                                                 LiquidMaterialParameterName;                       // 0xd0(0x8)
	TArray<Struct LiquidTypeParams>                              LiquidTypeParams;                                  // 0xd8(0x10)
	float                                                        StartingLiquidLevelNormalised;                     // 0xe8(0x4)
	Class CurveFloat*                                            TransitionCurve;                                   // 0xf0(0x8)
	float                                                        TransitionSpeedDecrease;                           // 0xf8(0x4)
	float                                                        TransitionSpeedIncrease;                           // 0xfc(0x4)
	TArray<class LiquidMaterials*>                               LiquidMaterials;                                   // 0x100(0x10)
};


// Size 0x0
class LiquidContainerServiceInterface: public Interface
{
public:
};


// Size 0x8
class LiquidContainerService: public InteractableService
{
public:
};


}