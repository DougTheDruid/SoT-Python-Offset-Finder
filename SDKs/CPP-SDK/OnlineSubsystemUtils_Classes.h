// Generated by dougthedruid on Discord
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
	char                                                         pad0x60_LXPGD[0x60];                               // 0x28(0x60)
};


// Size 0x70 (Full Size[0x98] - InheritedSize[0x28]
class InAppPurchaseQueryCallbackProxy: public Object
{
public:
	char                                                         pad0x70_HA4GM[0x70];                               // 0x28(0x70)
};


// Size 0x70 (Full Size[0x98] - InheritedSize[0x28]
class InAppPurchaseRestoreCallbackProxy: public Object
{
public:
	char                                                         pad0x70_K70AZ[0x70];                               // 0x28(0x70)
};


// Size 0x50 (Full Size[0x345f0] - InheritedSize[0x345a0]
class IpConnection: public NetConnection
{
public:
	char                                                         pad0x50_63NXY[0x50];                               // 0x345a0(0x50)
};


// Size 0x50 (Full Size[0x4c8] - InheritedSize[0x478]
class IpNetDriver: public NetDriver
{
public:
	bool                                                         LogPortUnreach;                                    // 0x478(0x1)
	bool                                                         AllowPlayerPortUnreach;                            // 0x478(0x1)
	char                                                         pad0x3_AWW5N[0x3];                                 // 0x479(0x3)
	char                                                         pad0x4c_G5Y03[0x4c];                               // 0x47c(0x4c)
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
	char                                                         pad0x38_E1DHC[0x38];                               // 0x28(0x38)
};


// Size 0x68 (Full Size[0x90] - InheritedSize[0x28]
class LeaderboardQueryCallbackProxy: public Object
{
public:
	char                                                         pad0x68_UCPHX[0x68];                               // 0x28(0x68)
};


// Size 0x38 (Full Size[0x60] - InheritedSize[0x28]
class LogoutCallbackProxy: public BlueprintAsyncActionBase
{
public:
	char                                                         pad0x38_B1O5F[0x38];                               // 0x28(0x38)
};


// Size 0x28 (Full Size[0x3f0] - InheritedSize[0x3c8]
class OnlineBeacon: public Actor
{
public:
	char                                                         pad0x8_71MGF[0x8];                                 // 0x3c8(0x8)
	float                                                        BeaconConnectionInitialTimeout;                    // 0x3d0(0x4)
	float                                                        BeaconConnectionTimeout;                           // 0x3d4(0x4)
	class NetDriver*                                             NetDriver;                                         // 0x3d8(0x8)
	char                                                         pad0x10_V7HCX[0x10];                               // 0x3e0(0x10)
};


// Size 0x28 (Full Size[0x418] - InheritedSize[0x3f0]
class OnlineBeaconClient: public OnlineBeacon
{
public:
	class OnlineBeaconHostObject*                                BeaconOwner;                                       // 0x3f0(0x8)
	class NetConnection*                                         BeaconConnection;                                  // 0x3f8(0x8)
	byte                                                         ConnectionState;                                   // 0x400(0x1)
	char                                                         pad0x17_T8SSC[0x17];                               // 0x401(0x17)
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
	TArray<struct PartyReservation>                              Reservations;                                      // 0x48(0x10)
	char                                                         pad0x10_ZCDSE[0x10];                               // 0x58(0x10)
};


// Size 0x58 (Full Size[0x470] - InheritedSize[0x418]
class PartyBeaconClient: public OnlineBeaconClient
{
public:
	char                                                         pad0x10_ZG90N[0x10];                               // 0x418(0x10)
	struct FString                                               DestSessionId;                                     // 0x428(0x10)
	struct PartyReservation                                      PendingReservation;                                // 0x438(0x30)
	byte                                                         RequestType;                                       // 0x468(0x1)
	bool                                                         bPendingReservationSent;                           // 0x469(0x1)
	bool                                                         bCancelReservation;                                // 0x46a(0x1)
	char                                                         pad0x5_56LHO[0x5];                                 // 0x46b(0x5)
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
	char                                                         pad0x4_GCIDZ[0x4];                                 // 0x3f4(0x4)
	TArray<class OnlineBeaconClient*>                            ClientActors;                                      // 0x3f8(0x10)
	char                                                         pad0xa0_1R20M[0xa0];                               // 0x408(0xa0)
};


// Size 0x28 (Full Size[0x3f0] - InheritedSize[0x3c8]
class OnlineBeaconHostObject: public Actor
{
public:
	struct FString                                               BeaconTypeName;                                    // 0x3c8(0x10)
	class UClass*                                                ClientBeaconActorClass;                            // 0x3d8(0x8)
	TArray<class OnlineBeaconClient*>                            ClientActors;                                      // 0x3e0(0x10)
};


// Size 0x38 (Full Size[0x428] - InheritedSize[0x3f0]
class PartyBeaconHost: public OnlineBeaconHostObject
{
public:
	class PartyBeaconState*                                      State;                                             // 0x3f0(0x8)
	char                                                         pad0x28_J0JGL[0x28];                               // 0x3f8(0x28)
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
	char                                                         pad0x38_TD46D[0x38];                               // 0x28(0x38)
};


// Size 0x58 (Full Size[0x80] - InheritedSize[0x28]
class AchievementWriteCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
	char                                                         pad0x58_9OPVX[0x58];                               // 0x28(0x58)
};


// Size 0x40 (Full Size[0x68] - InheritedSize[0x28]
class ConnectionCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
	char                                                         pad0x40_1PFFR[0x40];                               // 0x28(0x40)
};


// Size 0x58 (Full Size[0x80] - InheritedSize[0x28]
class CreateSessionCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
	char                                                         pad0x58_11QZN[0x58];                               // 0x28(0x58)
};


// Size 0x40 (Full Size[0x68] - InheritedSize[0x28]
class DestroySessionCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
	char                                                         pad0x40_RLROC[0x40];                               // 0x28(0x40)
};


// Size 0x50 (Full Size[0x78] - InheritedSize[0x28]
class EndMatchCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
	char                                                         pad0x50_S5GC0[0x50];                               // 0x28(0x50)
};


// Size 0x48 (Full Size[0x70] - InheritedSize[0x28]
class EndTurnCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
	char                                                         pad0x48_K7EPL[0x48];                               // 0x28(0x48)
};


// Size 0x60 (Full Size[0x88] - InheritedSize[0x28]
class FindSessionsCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
	char                                                         pad0x60_CVVZB[0x60];                               // 0x28(0x60)
};


// Size 0x60 (Full Size[0x88] - InheritedSize[0x28]
class FindTurnBasedMatchCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
	char                                                         pad0x60_K3D7Z[0x60];                               // 0x28(0x60)
};


// Size 0x120 (Full Size[0x148] - InheritedSize[0x28]
class JoinSessionCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
	char                                                         pad0x120_8ZI97[0x120];                             // 0x28(0x120)
};


// Size 0x48 (Full Size[0x70] - InheritedSize[0x28]
class QuitMatchCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
	char                                                         pad0x48_ULYJT[0x48];                               // 0x28(0x48)
};


// Size 0x140 (Full Size[0x168] - InheritedSize[0x28]
class OnlineSessionClient: public OnlineSession
{
public:
	char                                                         pad0x138_J9WIU[0x138];                             // 0x28(0x138)
	bool                                                         bIsFromInvite;                                     // 0x160(0x1)
	bool                                                         bHandlingDisconnect;                               // 0x161(0x1)
	char                                                         pad0x6_KZ7HX[0x6];                                 // 0x162(0x6)
};


// Size 0x30 (Full Size[0x58] - InheritedSize[0x28]
class ShowLoginUICallbackProxy: public BlueprintAsyncActionBase
{
public:
	char                                                         pad0x30_JNZY3[0x30];                               // 0x28(0x30)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class TurnBasedBlueprintLibrary: public BlueprintFunctionLibrary
{
public:
};


}