// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10
class PuzzleManager: public Actor
{
public:
	TArray<class PuzzleManagerPolicy*>                           PuzzleManagerPolicies;                             // 0x3c8(0x10)
};


// Size 0x0
class PuzzleManagerPolicyInterface: public Interface
{
public:
};


// Size 0xb8
class PuzzleManagerPolicy: public Object
{
public:
	Class Actor*                                                 PuzzleManager;                                     // 0x38(0x8)
};


}