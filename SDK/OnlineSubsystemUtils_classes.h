#pragma once

// Name: SoT, Version: 2.3.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementBlueprintLibrary");
		return ptr;
	}



	void STATIC_GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementId, bool* bFoundID, float* Progress);
	void STATIC_GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementId, bool* bFoundID, struct FText* Title, struct FText* LockedDescription, struct FText* UnlockedDescription, bool* bHidden);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UInAppPurchaseCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_6L47[0x40];                                    // 0x0048(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy");
		return ptr;
	}



	class UInAppPurchaseCallbackProxy* STATIC_CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const struct FInAppPurchaseProductRequest& ProductRequest);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
class UInAppPurchaseQueryCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_FXVG[0x50];                                    // 0x0048(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy");
		return ptr;
	}



	class UInAppPurchaseQueryCallbackProxy* STATIC_CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<struct FString> ProductIdentifiers);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
// 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
class UInAppPurchaseRestoreCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_UG0R[0x50];                                    // 0x0048(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy");
		return ptr;
	}



	class UInAppPurchaseRestoreCallbackProxy* STATIC_CreateProxyObjectForInAppPurchaseRestore(class APlayerController* PlayerController);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.IpConnection
// 0x0050 (FullSize[0x345D8] - InheritedSize[0x34588])
class UIpConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData_L7RG[0x50];                                    // 0x34588(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.IpConnection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.IpNetDriver
// 0x0050 (FullSize[0x04C8] - InheritedSize[0x0478])
class UIpNetDriver : public UNetDriver
{
public:
	unsigned char                                      LogPortUnreach : 1;                                        // 0x0478(0x0001) BIT_FIELD (Config, NoDestructor)
	unsigned char                                      AllowPlayerPortUnreach : 1;                                // 0x0478(0x0001) BIT_FIELD (Config, NoDestructor)
	unsigned char                                      UnknownData_NY8W[0x3];                                     // 0x0479(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           MaxPortCountToTry;                                         // 0x047C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7HQ3[0x48];                                    // 0x0480(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.IpNetDriver");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary");
		return ptr;
	}



	bool STATIC_WriteLeaderboardInteger(class APlayerController* PlayerController, const struct FName& StatName, int StatValue);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class ULeaderboardFlushCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_RFUT[0x18];                                    // 0x0048(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy");
		return ptr;
	}



	class ULeaderboardFlushCallbackProxy* STATIC_CreateProxyObjectForFlush(class APlayerController* PlayerController, const struct FName& SessionName);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class ULeaderboardQueryCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_ZGEP[0x48];                                    // 0x0048(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy");
		return ptr;
	}



	class ULeaderboardQueryCallbackProxy* STATIC_CreateProxyObjectForIntQuery(class APlayerController* PlayerController, const struct FName& StatName);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.LogoutCallbackProxy
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_CUNA[0x18];                                    // 0x0048(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.LogoutCallbackProxy");
		return ptr;
	}



	class ULogoutCallbackProxy* STATIC_Logout(class UObject* WorldContextObject, class APlayerController* PlayerController);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.OnlineBeacon
// 0x0028 (FullSize[0x03F8] - InheritedSize[0x03D0])
class AOnlineBeacon : public AActor
{
public:
	unsigned char                                      UnknownData_ZM0P[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BeaconConnectionInitialTimeout;                            // 0x03D8(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              BeaconConnectionTimeout;                                   // 0x03DC(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UNetDriver*                                  NetDriver;                                                 // 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XIAO[0x10];                                    // 0x03E8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeacon");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.OnlineBeaconClient
// 0x0028 (FullSize[0x0420] - InheritedSize[0x03F8])
class AOnlineBeaconClient : public AOnlineBeacon
{
public:
	class AOnlineBeaconHostObject*                     BeaconOwner;                                               // 0x03F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UNetConnection*                              BeaconConnection;                                          // 0x0400(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	TEnumAsByte<OnlineSubsystemUtils_EBeaconConnectionState> ConnectionState;                                           // 0x0408(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_R2BU[0x17];                                    // 0x0409(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconClient");
		return ptr;
	}



	void ClientOnConnected();
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.PartyBeaconState
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UPartyBeaconState : public UObject
{
public:
	struct FName                                       SessionName;                                               // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	int                                                NumConsumedReservations;                                   // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	int                                                MaxReservations;                                           // 0x0034(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	int                                                NumTeams;                                                  // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	int                                                NumPlayersPerTeam;                                         // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	int                                                ReservedHostTeamNum;                                       // 0x0040(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	int                                                ForceTeamNum;                                              // 0x0044(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	TArray<struct FPartyReservation>                   Reservations;                                              // 0x0048(0x0010) (ZeroConstructor, Transient, Protected)
	unsigned char                                      UnknownData_EKZ9[0x10];                                    // 0x0058(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconState");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.PartyBeaconClient
// 0x0058 (FullSize[0x0478] - InheritedSize[0x0420])
class APartyBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData_GWCQ[0x10];                                    // 0x0420(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DestSessionId;                                             // 0x0430(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash)
	struct FPartyReservation                           PendingReservation;                                        // 0x0440(0x0030) (Protected)
	TEnumAsByte<OnlineSubsystemUtils_EClientRequestType> RequestType;                                               // 0x0470(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	bool                                               bPendingReservationSent;                                   // 0x0471(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	bool                                               bCancelReservation;                                        // 0x0472(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_EHTV[0x5];                                     // 0x0473(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconClient");
		return ptr;
	}



	void ServerUpdateReservationRequest(const struct FString& SessionId, const struct FPartyReservation& ReservationUpdate);
	void ServerReservationRequest(const struct FString& SessionId, const struct FPartyReservation& Reservation);
	void ServerCancelReservationRequest(const struct FUniqueNetIdRepl& PartyLeader);
	void ClientSendReservationUpdates(int NumRemainingReservations);
	void ClientReservationResponse(TEnumAsByte<OnlineSubsystemUtils_EPartyReservationResult> ReservationResponse);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.TestBeaconClient
// 0x0000 (FullSize[0x0420] - InheritedSize[0x0420])
class ATestBeaconClient : public AOnlineBeaconClient
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.TestBeaconClient");
		return ptr;
	}



	void ServerPong();
	void ClientPing();
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.OnlineBeaconHost
// 0x00B8 (FullSize[0x04B0] - InheritedSize[0x03F8])
class AOnlineBeaconHost : public AOnlineBeacon
{
public:
	int                                                ListenPort;                                                // 0x03F8(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3WMP[0x4];                                     // 0x03FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                              // 0x0400(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_VI80[0xA0];                                    // 0x0410(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconHost");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// 0x0028 (FullSize[0x03F8] - InheritedSize[0x03D0])
class AOnlineBeaconHostObject : public AActor
{
public:
	struct FString                                     BeaconTypeName;                                            // 0x03D0(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash)
	class UClass*                                      ClientBeaconActorClass;                                    // 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash)
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                              // 0x03E8(0x0010) (ZeroConstructor, Protected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconHostObject");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.PartyBeaconHost
// 0x0038 (FullSize[0x0430] - InheritedSize[0x03F8])
class APartyBeaconHost : public AOnlineBeaconHostObject
{
public:
	class UPartyBeaconState*                           State;                                                     // 0x03F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QEM7[0x28];                                    // 0x0400(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SessionTimeoutSecs;                                        // 0x0428(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              TravelSessionTimeoutSecs;                                  // 0x042C(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconHost");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.TestBeaconHost
// 0x0000 (FullSize[0x03F8] - InheritedSize[0x03F8])
class ATestBeaconHost : public AOnlineBeaconHostObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.TestBeaconHost");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.OnlineBlueprintCallProxyBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UOnlineBlueprintCallProxyBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBlueprintCallProxyBase");
		return ptr;
	}



	void Activate();
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_U6HH[0x18];                                    // 0x0048(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementQueryCallbackProxy");
		return ptr;
	}



	class UAchievementQueryCallbackProxy* STATIC_CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController);
	class UAchievementQueryCallbackProxy* STATIC_CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_SIYX[0x38];                                    // 0x0048(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementWriteCallbackProxy");
		return ptr;
	}



	class UAchievementWriteCallbackProxy* STATIC_WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementName, float Progress, int UserTag);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_7JG6[0x20];                                    // 0x0048(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.ConnectionCallbackProxy");
		return ptr;
	}



	class UConnectionCallbackProxy* STATIC_ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_DLSN[0x38];                                    // 0x0048(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.CreateSessionCallbackProxy");
		return ptr;
	}



	class UCreateSessionCallbackProxy* STATIC_CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int PublicConnections, bool bUseLAN);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_39C4[0x20];                                    // 0x0048(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.DestroySessionCallbackProxy");
		return ptr;
	}



	class UDestroySessionCallbackProxy* STATIC_DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.EndMatchCallbackProxy
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_VVD3[0x30];                                    // 0x0048(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.EndMatchCallbackProxy");
		return ptr;
	}



	class UEndMatchCallbackProxy* STATIC_EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> LocalPlayerOutcome, TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> OtherPlayersOutcome);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.EndTurnCallbackProxy
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_A3WD[0x28];                                    // 0x0048(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.EndTurnCallbackProxy");
		return ptr;
	}



	class UEndTurnCallbackProxy* STATIC_EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_7HBR[0x40];                                    // 0x0048(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.FindSessionsCallbackProxy");
		return ptr;
	}



	struct FString STATIC_GetServerName(const struct FBlueprintSessionResult& Result);
	int STATIC_GetPingInMs(const struct FBlueprintSessionResult& Result);
	int STATIC_GetMaxPlayers(const struct FBlueprintSessionResult& Result);
	int STATIC_GetCurrentPlayers(const struct FBlueprintSessionResult& Result);
	class UFindSessionsCallbackProxy* STATIC_FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_LOD1[0x40];                                    // 0x0048(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy");
		return ptr;
	}



	class UFindTurnBasedMatchCallbackProxy* STATIC_FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, int MinPlayers, int MaxPlayers, int PlayerGroup, bool ShowExistingMatches);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// 0x0120 (FullSize[0x0148] - InheritedSize[0x0028])
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_EQ8M[0x100];                                   // 0x0048(0x0100) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.JoinSessionCallbackProxy");
		return ptr;
	}



	class UJoinSessionCallbackProxy* STATIC_JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_5UVI[0x28];                                    // 0x0048(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.QuitMatchCallbackProxy");
		return ptr;
	}



	class UQuitMatchCallbackProxy* STATIC_QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> Outcome, int TurnTimeoutInSeconds);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.OnlineSessionClient
// 0x0140 (FullSize[0x0168] - InheritedSize[0x0028])
class UOnlineSessionClient : public UOnlineSession
{
public:
	unsigned char                                      UnknownData_CMCW[0x138];                                   // 0x0028(0x0138) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsFromInvite;                                             // 0x0160(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected)
	bool                                               bHandlingDisconnect;                                       // 0x0161(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_MKUM[0x6];                                     // 0x0162(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineSessionClient");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_0A75[0x10];                                    // 0x0048(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.ShowLoginUICallbackProxy");
		return ptr;
	}



	class UShowLoginUICallbackProxy* STATIC_ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary");
		return ptr;
	}



	void STATIC_RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object);
	void STATIC_GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, int PlayerIndex, struct FString* PlayerDisplayName);
	void STATIC_GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, int* PlayerIndex);
	void STATIC_GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, bool* bIsMyTurn);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
