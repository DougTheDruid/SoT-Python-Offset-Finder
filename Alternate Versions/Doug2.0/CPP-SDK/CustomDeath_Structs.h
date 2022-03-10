namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x8
class SetCustomPlayerStartData: public None
{
public:
	int                                                PlayerNetGUID                                      // 0x0(0x4)
	int                                                PlayerStartActorNetID                              // 0x4(0x4)
};


// Size 0x18
class CustomDeathConfiguration: public None
{
public:
};


// Size 0x18
class DestroyCustomPlayerStartData: public None
{
public:
	int                                                PlayerStartActorNetID                              // 0x0(0x4)
	Struct FString                                     Tag                                                // 0x8(0x10)
};


// Size 0x8
class CustomPlayerStartConfigResponseData: public None
{
public:
	bool                                               Success                                            // 0x0(0x1)
	int                                                PlayerStartId                                      // 0x4(0x4)
};


// Size 0x30
class CustomPlayerStartConfigData: public None
{
public:
	Struct Vector                                      Location                                           // 0x0(0xc)
	Struct Quat                                        Rotation                                           // 0x10(0x10)
	TArray<Str >                                       Tags                                               // 0x20(0x10)
};


// Size 0x4
class ResetCustomConfigForPlayerData: public None
{
public:
	int                                                PlayerNetGUID                                      // 0x0(0x4)
};


// Size 0x8
class SetShouldSkipFerryOfTheDamnedData: public None
{
public:
	int                                                PlayerNetGUID                                      // 0x0(0x4)
	bool                                               bShouldSkipFerryOfTheDamned                        // 0x4(0x1)
};


// Size 0x8
class SetShouldUseRevivalFlowData: public None
{
public:
	int                                                PlayerNetGUID                                      // 0x0(0x4)
	bool                                               bShouldUseRevivalFlow                              // 0x4(0x1)
};


// Size 0x4
class GameModeDeathPenaltyRespawnTimerData: public None
{
public:
	float                                              SpawnTimer                                         // 0x0(0x4)
};


// Size 0x8
class ForcePlayerRespawnData: public None
{
public:
	int                                                PlayerNetGUID                                      // 0x0(0x4)
	bool                                               bRespawnAsGhost                                    // 0x4(0x1)
};


// Size 0x10
class KillCrewData: public None
{
public:
	Struct Guid                                        CrewNetGUID                                        // 0x0(0x10)
};


// Size 0x4
class KillPlayerData: public None
{
public:
	int                                                PlayerNetGUID                                      // 0x0(0x4)
};


}