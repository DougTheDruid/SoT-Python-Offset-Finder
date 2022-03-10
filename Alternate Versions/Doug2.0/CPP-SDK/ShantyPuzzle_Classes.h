namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class ShantyPuzzleInterface: public Interface
{
public:
};


// Size 0x110
class ShantyPuzzleComponent: public SceneComponent
{
public:
	class                                              RequiredShantyItemDesc                             // 0x2d8(0x8)
	TArray<Struct RequiredShantyItemDesc>              ShantyPuzzleInteractionZoneDefinitions             // 0x2e0(0x10)
	bool                                               TimeLimited                                        // 0x2f0(0x1)
	bool                                               ShouldMoveEnsembleToActorPosition                  // 0x2f1(0x1)
	Struct GameTimeRange                               ActiveTimeRange                                    // 0x2f8(0x10)
	TArray<class ShantyPuzzleInteractionZones*>        ShantyPuzzleInteractionZones                       // 0x308(0x10)
	Class Ensemble*                                    CurrentlyPlayingShantyPuzzleEnsemble               // 0x318(0x8)
};


// Size 0x20
class ShantyPuzzleInteractionZoneComponent: public SphereComponent
{
public:
};


}