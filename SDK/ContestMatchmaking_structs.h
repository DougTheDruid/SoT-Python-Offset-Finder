#pragma once

// Name: SoT, Version: 2.4.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ContestMatchmaking.ServerCrewModel
// 0x0060
struct FServerCrewModel
{
	struct FGuid                                       CrewId;                                                    // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FUniqueNetIdRepl                            UserId;                                                    // 0x0010(0x0018)
	struct FGuid                                       ServerId;                                                  // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                SessionType;                                               // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S1N1[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector2D>                           Positions;                                                 // 0x0040(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   Resources;                                                 // 0x0050(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ContestMatchmaking.ContestMatchmakingServerRequestModel
// 0x0088
struct FContestMatchmakingServerRequestModel
{
	struct FGuid                                       ServerId;                                                  // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     VmId;                                                      // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     PrivateServerId;                                           // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ServerLocation;                                            // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	uint32_t                                           FeatureHash;                                               // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BF57[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             PlayModeTags;                                              // 0x0048(0x0010) (ZeroConstructor)
	TArray<struct FString>                             PlayModeStates;                                            // 0x0058(0x0010) (ZeroConstructor)
	TArray<struct FServerCrewModel>                    Crews;                                                     // 0x0068(0x0010) (ZeroConstructor)
	struct FGuid                                       RequestCorrelationId;                                      // 0x0078(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ContestMatchmaking.ServerCrewResponseModel
// 0x0078
struct FServerCrewResponseModel
{
	TArray<struct FServerCrewModel>                    Crews;                                                     // 0x0000(0x0010) (ZeroConstructor)
	TMap<struct FString, struct FString>               OptionalPlayModeInfo;                                      // 0x0010(0x0050) (ZeroConstructor)
	struct FTimespan                                   RetryAfter;                                                // 0x0060(0x0008) (ZeroConstructor)
	struct FTimespan                                   MigrationThreshold;                                        // 0x0068(0x0008) (ZeroConstructor)
	struct FTimespan                                   ExpireAfter;                                               // 0x0070(0x0008) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ContestMatchmaking.OptionalPlayModeModel
// 0x0050
struct FOptionalPlayModeModel
{
	TMap<struct FString, struct FString>               OptionalPlayModeMap;                                       // 0x0000(0x0050) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ContestMatchmaking.ServerRegionModel
// 0x000C
struct FServerRegionModel
{
	struct FVector2D                                   Position;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ContestMatchmaking.ServerContendedModel
// 0x0030
struct FServerContendedModel
{
	TArray<struct FVector2D>                           Positions;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FServerRegionModel>                  Regions;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   Resources;                                                 // 0x0020(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ContestMatchmaking.ServerCrewRequestModel
// 0x00B0
struct FServerCrewRequestModel
{
	struct FGuid                                       ServerId;                                                  // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     VmId;                                                      // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     PrivateServerId;                                           // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ServerLocation;                                            // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	uint32_t                                           FeatureHash;                                               // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KR4U[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             PlayModeTags;                                              // 0x0048(0x0010) (ZeroConstructor)
	struct FString                                     PlayModeState;                                             // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	int                                                CrewCount;                                                 // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CrewCountBucket;                                           // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CrewMin;                                                   // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CrewMax;                                                   // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                                   Uptime;                                                    // 0x0078(0x0008) (ZeroConstructor)
	struct FServerContendedModel                       Contended;                                                 // 0x0080(0x0030)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
