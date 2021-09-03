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
// Classes
//---------------------------------------------------------------------------

// Class CustomDeath.CustomDeathInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCustomDeathInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CustomDeath.CustomDeathInterface");
		return ptr;
	}



	void SetShouldUseRevivalFlow(const struct FSetShouldUseRevivalFlowData& SetShouldUseRevivalFlowData);
	void SetShouldSkipFerryOfTheDamned(const struct FSetShouldSkipFerryOfTheDamnedData& SetShouldSkipFerryOfTheDamnedData);
	void SetGameModeDeathPenaltyRespawnTimer(const struct FGameModeDeathPenaltyRespawnTimerData& GameModeDeathPenaltyRespawnTimerData);
	bool SetCustomPlayerStart(const struct FSetCustomPlayerStartData& SetCustomPlayerStartData);
	void SetCustomConfigForPlayer(int PlayerId, const struct FCustomDeathConfiguration& CustomDeathConfiguration);
	void ResetCustomConfigForPlayer(const struct FResetCustomConfigForPlayerData& ResetCustomConfigForPlayerData);
	void KillPlayer(const struct FKillPlayerData& KillPlayerData);
	void KillCrew(const struct FKillCrewData& KillCrewData);
	bool GetShouldUseRevivalFlow(int PlayerId, bool bDefaultValue);
	bool GetShouldSkipFerryOfTheDamned(int PlayerId);
	class APlayerStart* GetCustomPlayerStart(int PlayerId);
	void ForcePlayerRespawn(const struct FForcePlayerRespawnData& ForcePlayerRespawnData);
	int DestroyCustomPlayerStart(const struct FDestroyCustomPlayerStartData& DestroyCustomPlayerStartData);
	class APlayerStart* CreateNewCustomPlayerStart(const struct FCustomPlayerStartConfigData& CustomPlayerStartConfigData);
	void AfterRead();
	void BeforeDelete();

};

// Class CustomDeath.CustomDeathService
// 0x0098 (FullSize[0x0468] - InheritedSize[0x03D0])
class ACustomDeathService : public AActor
{
public:
	unsigned char                                      UnknownData_TT8G[0x38];                                    // 0x03D0(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class APlayerStart*>                        CustomPlayerStarts;                                        // 0x0408(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_OEE5[0x50];                                    // 0x0418(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CustomDeath.CustomDeathService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
