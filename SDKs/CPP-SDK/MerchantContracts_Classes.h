// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class MerchantContractsBlueprintLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class MerchantContractsServiceInterface: public Interface
{
public:
};


// Size 0xb0 (Full Size[0xd8] - InheritedSize[0x28]
class MerchantContractsService: public Object
{
public:
	char                                                         pad0x8_00SRE[0x8];                                 // 0x28(0x8)
	TArray<struct MerchantContract>                              Contracts;                                         // 0x30(0x10)
	char                                                         pad0x98_7A38W[0x98];                               // 0x40(0x98)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class PlayerMerchantContractsInterface: public Interface
{
public:
};


// Size 0x18 (Full Size[0xe0] - InheritedSize[0xc8]
class PlayerMerchantContractsComponent: public ActorComponent
{
public:
	char                                                         pad0x8_N38KN[0x8];                                 // 0xc8(0x8)
	TArray<struct PlayerMerchantContract>                        Contracts;                                         // 0xd0(0x10)
};


}