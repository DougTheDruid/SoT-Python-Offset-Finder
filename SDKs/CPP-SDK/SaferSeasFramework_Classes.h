#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class SaferSeasDataAssetProviderServiceInterface: public Interface
{
public:
};


// Size 0x10 (Full Size[0x48] - InheritedSize[0x38]
class SaferSeasSettings: public DeveloperSettings
{
public:
	struct StringAssetReference                                  SaferSeasBlacklistAsset;                           // 0x38(0x10)
};


// Size 0x28 (Full Size[0x3c8] - InheritedSize[0x3a0]
class SaferSeasDataAssetProviderService: public Actor
{
public:
	char                                                         pad0x8_7W9UC[0x8];                                 // 0x3a0(0x8)
	class SaferSeasEntitlementBlacklistDataAsset*                SaferSeasEntitlementBlacklistDataAsset;            // 0x3a8(0x8)
	char                                                         pad0x18_I0ZEY[0x18];                               // 0x3b0(0x18)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class SaferSeasEntitlementBlacklistDataAsset: public DataAsset
{
public:
	TArray<Class>                                                BlacklistedEntitlements;                           // 0x28(0x10)
};


