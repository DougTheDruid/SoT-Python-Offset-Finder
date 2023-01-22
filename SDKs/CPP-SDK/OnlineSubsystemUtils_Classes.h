// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AchievementBlueprintLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x60 (Full Size[0x88] - InheritedSize[0x28]
class InAppPurchaseCallbackProxy: public Object
{
public:
};


// Size 0x70 (Full Size[0x98] - InheritedSize[0x28]
class InAppPurchaseQueryCallbackProxy: public Object
{
public:
};


// Size 0x70 (Full Size[0x98] - InheritedSize[0x28]
class InAppPurchaseRestoreCallbackProxy: public Object
{
public:
};


// Size 0x50 (Full Size[0x345f0] - InheritedSize[0x345a0]
class IpConnection: public NetConnection
{
public:
};


// Size 0x50 (Full Size[0x4c8] - InheritedSize[0x478]
class IpNetDriver: public NetDriver
{
public:
	bool                                                         LogPortUnreach;                                    // 0x478(0x1)
	bool                                                         AllowPlayerPortUnreach;                            // 0x478(0x1)
	char                                                         pad0x3_Y27CB[0x3];                                 // 0x479(0x3)
	char                                                         pad0x52_6L170[0x52];                               // 0x47a(0x52)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class LeaderboardBlueprintLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x38 (Full Size[0x60] - InheritedSize[0x28]
class LeaderboardFlushCallbackProxy: public Object
{
public:
};


// Size 0x68 (Full Size[0x90] - InheritedSize[0x28]
class LeaderboardQueryCallbackProxy: public Object
{
public:
};


// Size 0x38 (Full Size[0x60] - InheritedSize[0x28]
class LogoutCallbackProxy: public BlueprintAsyncActionBase
{
public:
};


// Size 0x28 (Full Size[0x3f0] - InheritedSize[0x3c8]
class OnlineBeacon: public Actor
{
public:
	char                                                         pad0x8_8J96S[0x8];                                 // 0x3c8(0x8)
	float                                                        BeaconConnectionInitialTimeout;                    // 0x3d0(0x4)
	float                                                        BeaconConnectionTimeout;                           // 0x3d4(0x4)
	Class NetDriver*                                             NetDriver;                                         // 0x3d8(0x8)
	char                                                         pad0x20_O4QJH[0x20];                               // 0x3de(0x20)
};


// Size 0x28 (Full Size[0x418] - InheritedSize[0x3f0]
class OnlineBeaconClient: public OnlineBeacon
{
public:
	Class OnlineBeaconHostObject*                                BeaconOwner;                                       // 0x3f0(0x8)
	Class NetConnection*                                         BeaconConnection;                                  // 0x3f8(0x8)
	byte                                                         ConnectionState;                                   // 0x400(0x1)
	char                                                         pad0x19_Q1PJ3[0x19];                               // 0x3ff(0x19)
};


// Size 0x40 (Full Size[0x68] - InheritedSize[0x28]
class PartyBeaconState: public Object
{
public:
	struct FName                                                 SessionName;                                       // 0x28(0x8)
	int                                                          NumConsumedReservations;                           // 0x30(0x4)
	int                                                          MaxReservations;                                   // 0x34(0x4)
	int                                                          NumTeams;                                          // 0x38(0x4)
	int                                                          NumPlayersPerTeam;                                 // 0x3c(0x4)
	int                                                          ReservedHostTeamNum;                               // 0x40(0x4)
	int                                                          ForceTeamNum;                                      // 0x44(0x4)
	TArray<Struct PartyReservation>                              Reservations;                                      // 0x48(0x10)
	char                                                         pad0x30_ET2VU[0x30];                               // 0x56(0x30)
};


// Size 0x58 (Full Size[0x470] - InheritedSize[0x418]
class PartyBeaconClient: public OnlineBeaconClient
{
public:
	char                                                         pad0x10_2HHPB[0x10];                               // 0x418(0x10)
	Struct FString                                               DestSessionId;                                     // 0x428(0x10)
	Struct PartyReservation                                      PendingReservation;                                // 0x438(0x30)
	byte                                                         RequestType;                                       // 0x468(0x1)
	bool                                                         bPendingReservationSent;                           // 0x469(0x1)
	bool                                                         bCancelReservation;                                // 0x46a(0x1)
	char                                                         pad0x7_TYR86[0x7];                                 // 0x469(0x7)
};


// Size 0x0 (Full Size[0x418] - InheritedSize[0x418]
class TestBeaconClient: public OnlineBeaconClient
{
public:
};


// Size 0xb8 (Full Size[0x4a8] - InheritedSize[0x3f0]
class OnlineBeaconHost: public OnlineBeacon
{
public:
	int                                                          ListenPort;                                        // 0x3f0(0x4)
	char                                                         pad0x4_MC32T[0x4];                                 // 0x3f4(0x4)
	TArray<class OnlineBeaconClient*>                            ClientActors;                                      // 0x3f8(0x10)
	char                                                         pad0xc0_9CW1V[0xc0];                               // 0x406(0xc0)
};


// Size 0x28 (Full Size[0x3f0] - InheritedSize[0x3c8]
class OnlineBeaconHostObject: public Actor
{
public:
	Struct FString                                               BeaconTypeName;                                    // 0x3c8(0x10)
	class                                                        ClientBeaconActorClass;                            // 0x3d8(0x8)
	TArray<class OnlineBeaconClient*>                            ClientActors;                                      // 0x3e0(0x10)
};


// Size 0x38 (Full Size[0x428] - InheritedSize[0x3f0]
class PartyBeaconHost: public OnlineBeaconHostObject
{
public:
	Class PartyBeaconState*                                      State;                                             // 0x3f0(0x8)
	char                                                         pad0x28_CA690[0x28];                               // 0x3f8(0x28)
	float                                                        SessionTimeoutSecs;                                // 0x420(0x4)
	float                                                        TravelSessionTimeoutSecs;                          // 0x424(0x4)
};


// Size 0x0 (Full Size[0x3f0] - InheritedSize[0x3f0]
class TestBeaconHost: public OnlineBeaconHostObject
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class OnlineBlueprintCallProxyBase: public Object
{
public:
};


// Size 0x38 (Full Size[0x60] - InheritedSize[0x28]
class AchievementQueryCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
};


// Size 0x58 (Full Size[0x80] - InheritedSize[0x28]
class AchievementWriteCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
};


// Size 0x40 (Full Size[0x68] - InheritedSize[0x28]
class ConnectionCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
};


// Size 0x58 (Full Size[0x80] - InheritedSize[0x28]
class CreateSessionCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
};


// Size 0x40 (Full Size[0x68] - InheritedSize[0x28]
class DestroySessionCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
};


// Size 0x50 (Full Size[0x78] - InheritedSize[0x28]
class EndMatchCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
};


// Size 0x48 (Full Size[0x70] - InheritedSize[0x28]
class EndTurnCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
};


// Size 0x60 (Full Size[0x88] - InheritedSize[0x28]
class FindSessionsCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
};


// Size 0x60 (Full Size[0x88] - InheritedSize[0x28]
class FindTurnBasedMatchCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
};


// Size 0x120 (Full Size[0x148] - InheritedSize[0x28]
class JoinSessionCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
};


// Size 0x48 (Full Size[0x70] - InheritedSize[0x28]
class QuitMatchCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
};


// Size 0x140 (Full Size[0x168] - InheritedSize[0x28]
class OnlineSessionClient: public OnlineSession
{
public:
	char                                                         pad0x138_2XF6X[0x138];                             // 0x28(0x138)
	bool                                                         bIsFromInvite;                                     // 0x160(0x1)
	bool                                                         bHandlingDisconnect;                               // 0x161(0x1)
	char                                                         pad0x8_8KJST[0x8];                                 // 0x160(0x8)
};


// Size 0x30 (Full Size[0x58] - InheritedSize[0x28]
class ShowLoginUICallbackProxy: public BlueprintAsyncActionBase
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class TurnBasedBlueprintLibrary: public BlueprintFunctionLibrary
{
public:
};


}