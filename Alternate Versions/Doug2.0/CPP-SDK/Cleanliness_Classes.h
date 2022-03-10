namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class CleanlinessInterface: public Interface
{
public:
};


// Size 0x0
class CleanlinessTransferInterface: public Interface
{
public:
};


// Size 0x80
class CleanlinessComponent: public ActorComponent
{
public:
	Class CurveFloat*                                  DirtinessStrengthToMaterialStrength                // 0xd8(0x8)
	Struct CleanlinessInfo                             CleanlinessInfo                                    // 0xe0(0xc)
	float                                              DirtinessDecayRatePerSecond                        // 0xec(0x4)
	float                                              QuickCleanDirtynessDecayRatePerSecond              // 0xf0(0x4)
};


}