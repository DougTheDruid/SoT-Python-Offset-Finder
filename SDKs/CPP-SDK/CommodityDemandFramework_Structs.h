#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x18
struct RedeemCommodityTelemetryEvent
{
public:
	struct FString                                               Commodity;                                         // 0x0(0x10)
	bool                                                         RedemptionSucceeded;                               // 0x10(0x1)
};


// Size 0x8
struct CommoditySelectionType
{
public:
	struct FName                                                 CommodityType;                                     // 0x0(0x8)
};


// Size 0x20
struct CommodityTrackingModel
{
public:
	struct Guid                                                  ItemOfferId;                                       // 0x0(0x10)
	char                                                         NPCName;                                           // 0x10(0x1)
	int64                                                        TickWhenTracked;                                   // 0x18(0x8)
};


// Size 0x20
struct ActiveCommodityDemands
{
public:
	TArray<int>                                                  CommodityIdHashes;                                 // 0x0(0x10)
	TArray<char>                                                 CommodityDemands;                                  // 0x10(0x10)
};


// Size 0x48
struct TrackCommodityPurchaseOnServerRpc
{
public:
	class Object*                                                CommodityDemandStorageObject;                      // 0x18(0x8)
	struct FName                                                 NPCName;                                           // 0x20(0x8)
	struct Guid                                                  ItemOfferId;                                       // 0x28(0x10)
	struct FString                                               ItemClientId;                                      // 0x38(0x10)
};


// Size 0x28
struct CommoditySourceMetaWrapper
{
public:
	struct FName                                                 NPCIdentifier;                                     // 0x18(0x8)
	struct FName                                                 IslandIdentifier;                                  // 0x20(0x8)
};


// Size 0x10
struct CommodityTypeDataEntry
{
public:
	struct FName                                                 CommodityType;                                     // 0x0(0x8)
	struct FName                                                 DisplayName;                                       // 0x8(0x8)
};


// Size 0x10
struct MerchantSovereignHandInNameInformation
{
public:
	struct FName                                                 MerchantNPCName;                                   // 0x0(0x8)
	struct FName                                                 SovereignNPCName;                                  // 0x8(0x8)
};


// Size 0x10
struct CommodityRedemptionTrackingModel
{
public:
	uint16                                                       EntitlementDesc;                                   // 0x0(0x2)
	char                                                         NPCName;                                           // 0x2(0x1)
	int64                                                        TickWhenTracked;                                   // 0x8(0x8)
};


// Size 0x10
struct CommodityDescWithRedeemId
{
public:
	struct CommoditySelectionType                                RedeemId;                                          // 0x0(0x8)
	class UClass*                                                RedeemItemDesc;                                    // 0x8(0x8)
};


// Size 0x20
struct ActiveNPCDemands
{
public:
	TArray<int>                                                  NPCIdHashes;                                       // 0x0(0x10)
	TArray<struct ActiveCommodityDemands>                        NPCDemands;                                        // 0x10(0x10)
};


// Size 0x18
struct EntitlementToRedeemItems
{
public:
	class UClass*                                                RequiredEntitlement;                               // 0x0(0x8)
	TArray<struct CommodityDescWithRedeemId>                     RedeemItems;                                       // 0x8(0x10)
};


