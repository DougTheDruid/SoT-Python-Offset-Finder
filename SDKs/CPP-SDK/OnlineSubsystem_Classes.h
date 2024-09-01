#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "OnlineSubsystem_Structs.h"


// Size 0x38 (Full Size[0x60] - InheritedSize[0x28]
class DefaultOnlineEnvironmentSettings: public Object
{
public:
	struct FString                                               EnvironmentId;                                     // 0x28(0x10)
	uint32                                                       TitleId;                                           // 0x38(0x4)
	struct FString                                               ServiceConfigId;                                   // 0x40(0x10)
	struct FString                                               ClientCertificateThumbprint;                       // 0x50(0x10)
};


// Size 0x38 (Full Size[0x60] - InheritedSize[0x28]
class NamedInterfaces: public Object
{
public:
	TArray<struct NamedInterface>                                NamedInterfaces;                                   // 0x28(0x10)
	TArray<struct NamedInterfaceDef>                             NamedInterfaceDefs;                                // 0x38(0x10)
};


