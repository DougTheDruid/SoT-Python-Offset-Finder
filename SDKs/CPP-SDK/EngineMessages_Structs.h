#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x10
struct EngineServiceTerminate
{
public:
	struct FString                                               UserName;                                          // 0x0(0x10)
};


// Size 0x20
struct EngineServiceAuthGrant
{
public:
	struct FString                                               UserName;                                          // 0x0(0x10)
	struct FString                                               UserToGrant;                                       // 0x10(0x10)
};


// Size 0x20
struct EngineServiceAuthDeny
{
public:
	struct FString                                               UserName;                                          // 0x0(0x10)
	struct FString                                               UserToDeny;                                        // 0x10(0x10)
};


// Size 0x18
struct EngineServiceNotification
{
public:
	struct FString                                               Text;                                              // 0x0(0x10)
	double                                                       TimeSeconds;                                       // 0x10(0x8)
};


// Size 0x50
struct EngineServicePong
{
public:
	struct FString                                               CurrentLevel;                                      // 0x0(0x10)
	int                                                          EngineVersion;                                     // 0x10(0x4)
	bool                                                         HasBegunPlay;                                      // 0x14(0x1)
	struct Guid                                                  InstanceId;                                        // 0x18(0x10)
	struct FString                                               InstanceType;                                      // 0x28(0x10)
	struct Guid                                                  SessionId;                                         // 0x38(0x10)
	float                                                        WorldTimeSeconds;                                  // 0x48(0x4)
};


// Size 0x20
struct EngineServiceExecuteCommand
{
public:
	struct FString                                               Command;                                           // 0x0(0x10)
	struct FString                                               UserName;                                          // 0x10(0x10)
};


