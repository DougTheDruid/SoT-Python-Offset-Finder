#pragma once

// Name: SoT, Version: 2.2.1.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum Sessions.ESessionStyle
enum class Sessions_ESessionStyle : uint8_t
{
	ESessionStyle__Invalid         = 0,
	ESessionStyle__Standard        = 1,
	ESessionStyle__BeachNPCSpawn   = 2,
	ESessionStyle__Max             = 3,
	ESessionStyle__ESessionStyle_MAX = 4,

};

// Enum Sessions.ESessionGrouping
enum class Sessions_ESessionGrouping : uint8_t
{
	ESessionGrouping__Invalid      = 0,
	ESessionGrouping__Default      = 1,
	ESessionGrouping__MediumLargeShip = 2,
	ESessionGrouping__Max          = 3,
	ESessionGrouping__ESessionGrouping_MAX = 4,

};

// Enum Sessions.ECrewSessionType
enum class Sessions_ECrewSessionType : uint8_t
{
	ECrewSessionType__Invalid      = 0,
	ECrewSessionType__SmallShip    = 1,
	ECrewSessionType__MediumShip   = 2,
	ECrewSessionType__LargeShip    = 3,
	ECrewSessionType__ServerLarge  = 4,
	ECrewSessionType__SloopSolo    = 5,
	ECrewSessionType__Lobby        = 6,
	ECrewSessionType__ECrewSessionType_MAX = 7,

};

// Enum Sessions.ESessionVisibility
enum class Sessions_ESessionVisibility : uint8_t
{
	ESessionVisibility__Invalid    = 0,
	ESessionVisibility__Open       = 1,
	ESessionVisibility__Closed     = 2,
	ESessionVisibility__ESessionVisibility_MAX = 3,

};

// Enum Sessions.ECrewSessionQoSServerResolveResult
enum class Sessions_ECrewSessionQoSServerResolveResult : uint8_t
{
	ECrewSessionQoSServerResolveResult__Success = 0,
	ECrewSessionQoSServerResolveResult__InvalidLocation = 1,
	ECrewSessionQoSServerResolveResult__TimedOut = 2,
	ECrewSessionQoSServerResolveResult__Failed = 3,
	ECrewSessionQoSServerResolveResult__ECrewSessionQoSServerResolveResult_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Sessions.SessionTemplate
// 0x0018
struct FSessionTemplate
{
	struct FString                                     TemplateName;                                              // 0x0000(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash)
	TEnumAsByte<Sessions_ECrewSessionType>             SessionType;                                               // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_939K[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxPlayers;                                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Sessions.CrewSessionTemplate
// 0x0020 (0x0038 - 0x0018)
struct FCrewSessionTemplate : public FSessionTemplate
{
	struct FString                                     MatchmakingHopper;                                         // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	class UClass*                                      ShipSize;                                                  // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int                                                MaxMatchmakingPlayers;                                     // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_U2O7[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Sessions.SessionLostEvent
// 0x0001
struct FSessionLostEvent
{
	unsigned char                                      UnknownData_C7M7[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Sessions.SessionDetailsChangedEvent
// 0x0020
struct FSessionDetailsChangedEvent
{
	unsigned char                                      UnknownData_QGOL[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Sessions.SessionInfoUpdateAvailableEvent
// 0x0010
struct FSessionInfoUpdateAvailableEvent
{
	struct FGuid                                       CrewId;                                                    // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Sessions.CrewSessionOperationFailedTelemetryEvent
// 0x0018
struct FCrewSessionOperationFailedTelemetryEvent
{
	struct FString                                     ErrorMessage;                                              // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	int                                                OperationTypeCode;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WasCancelled;                                              // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CU9B[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Sessions.CrewSessionBaseTelemetryEvent
// 0x0010
struct FCrewSessionBaseTelemetryEvent
{
	struct FGuid                                       CrewId;                                                    // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Sessions.CrewSessionMemberTelemetry
// 0x0028
struct FCrewSessionMemberTelemetry
{
	struct FString                                     UserId;                                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     StatusString;                                              // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	bool                                               IsSessionHost;                                             // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AK5O[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Sessions.CrewSessionTelemetry
// 0x0040
struct FCrewSessionTelemetry
{
	TArray<struct FCrewSessionMemberTelemetry>         SessionMembers;                                            // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     SessionTemplate;                                           // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     SessionVisibility;                                         // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Playmode;                                                  // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Sessions.CrewSessionBaseSessionTelemetryEvent
// 0x0040 (0x0050 - 0x0010)
struct FCrewSessionBaseSessionTelemetryEvent : public FCrewSessionBaseTelemetryEvent
{
	struct FCrewSessionTelemetry                       Session;                                                   // 0x0010(0x0040)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Sessions.CrewSessionMatchmakingFollowedTelemetryEvent
// 0x0028 (0x0078 - 0x0050)
struct FCrewSessionMatchmakingFollowedTelemetryEvent : public FCrewSessionBaseSessionTelemetryEvent
{
	struct FGuid                                       NewCrewId;                                                 // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                ResultCode;                                                // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5SH8[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Message;                                                   // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Sessions.CrewSessionMatchmakingEndedTelemetryEvent
// 0x0028 (0x0078 - 0x0050)
struct FCrewSessionMatchmakingEndedTelemetryEvent : public FCrewSessionBaseSessionTelemetryEvent
{
	struct FGuid                                       NewCrewId;                                                 // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                ResultCode;                                                // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ACZL[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Message;                                                   // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Sessions.CrewSessionMatchmakingStartedTelemetryEvent
// 0x0008 (0x0018 - 0x0010)
struct FCrewSessionMatchmakingStartedTelemetryEvent : public FCrewSessionBaseTelemetryEvent
{
	float                                              TimeoutSeconds;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PreserveSession;                                           // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ResubmitTicket;                                            // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XST5[0x2];                                     // 0x0016(0x0002) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Sessions.CrewSessionLeaveTelemetryEvent
// 0x0000 (0x0010 - 0x0010)
struct FCrewSessionLeaveTelemetryEvent : public FCrewSessionBaseTelemetryEvent
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Sessions.CrewSessionQoSMeasurementTelemetry
// 0x0020
struct FCrewSessionQoSMeasurementTelemetry
{
	struct FString                                     Location;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	uint32_t                                           AvgLatency;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumReceivedPings;                                          // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumFailedPings;                                            // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Sessions_ECrewSessionQoSServerResolveResult> ResolveResult;                                             // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LocationWasConsidered;                                     // 0x001D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LOVA[0x2];                                     // 0x001E(0x0002) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Sessions.CrewSessionJoinedTelemetryEvent
// 0x0020 (0x0070 - 0x0050)
struct FCrewSessionJoinedTelemetryEvent : public FCrewSessionBaseSessionTelemetryEvent
{
	struct FString                                     JoinMethod;                                                // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FCrewSessionQoSMeasurementTelemetry> QoSTelemetry;                                              // 0x0060(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Sessions.CrewSessionCreatedTelemetryEvent
// 0x0010 (0x0060 - 0x0050)
struct FCrewSessionCreatedTelemetryEvent : public FCrewSessionBaseSessionTelemetryEvent
{
	TArray<struct FCrewSessionQoSMeasurementTelemetry> QoSTelemetry;                                              // 0x0050(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
