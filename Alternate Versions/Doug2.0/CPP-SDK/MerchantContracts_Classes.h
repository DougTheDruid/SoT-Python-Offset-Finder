namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class MerchantContractsBlueprintLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class MerchantContractsServiceInterface: public Interface
{
public:
};


// Size 0x30
class MerchantContractsService: public Object
{
public:
	TArray<Struct CollectCrate>                        Contracts                                          // 0x30(0x10)
};


// Size 0x0
class PlayerMerchantContractsInterface: public Interface
{
public:
};


// Size 0x18
class PlayerMerchantContractsComponent: public ActorComponent
{
public:
	TArray<Struct CommodityDataFileLocation>           Contracts                                          // 0xd0(0x10)
};


}