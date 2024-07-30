#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x10
struct ItemAndReward
{
public:
	class UClass*                                                ItemDesc;                                          // 0x0(0x8)
	struct RewardId                                              HandInOnTimeRewardId;                              // 0x8(0x8)
};


// Size 0x28
struct MerchantContractItemDesc
{
public:
	class UClass*                                                AllocatedCrate;                                    // 0x0(0x8)
	TArray<struct ItemAndReward>                                 ItemData;                                          // 0x8(0x10)
	class UClass*                                                FaunaSpecies;                                      // 0x18(0x8)
	class UClass*                                                FaunaBreed;                                        // 0x20(0x8)
};


// Size 0x40
struct MerchantContractDeliveryRequest
{
public:
	int                                                          Id;                                                // 0x0(0x4)
	struct MerchantContractItemDesc                              ItemDesc;                                          // 0x8(0x28)
	int                                                          NumToAllocate;                                     // 0x30(0x4)
	int                                                          NumToCollect;                                      // 0x34(0x4)
	int                                                          NumToDeliver;                                      // 0x38(0x4)
};


// Size 0x28
struct PlayerMerchantContract
{
public:
	struct Guid                                                  Id;                                                // 0x0(0x10)
	struct FName                                                 IslandName;                                        // 0x10(0x8)
	TArray<struct MerchantContractDeliveryRequest>               Requests;                                          // 0x18(0x10)
};


// Size 0xc0
struct MerchantContract
{
public:
	TArray<struct MerchantContractDeliveryRequest>               DeliveryRequests;                                  // 0x18(0x10)
};


