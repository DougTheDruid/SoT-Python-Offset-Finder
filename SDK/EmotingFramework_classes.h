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

// Class EmotingFramework.EmoteCard
// 0x0140 (FullSize[0x0510] - InheritedSize[0x03D0])
class AEmoteCard : public AActor
{
public:
	unsigned char                                      UnknownData_ET9V[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    DynamicCardSelectionMaterialInstance;                      // 0x03D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        MeshComponent;                                             // 0x03E0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       RandomCardParameterName;                                   // 0x03E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInt32Range                                 RandomCardParameterRange;                                  // 0x03F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NIBH[0x110];                                   // 0x0400(0x0110) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EmotingFramework.EmoteCard");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EmotingFramework.EmoteCoin
// 0x0118 (FullSize[0x04E8] - InheritedSize[0x03D0])
class AEmoteCoin : public AActor
{
public:
	unsigned char                                      UnknownData_6D0Q[0x118];                                   // 0x03D0(0x0118) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EmotingFramework.EmoteCoin");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EmotingFramework.EmoteIdListingAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UEmoteIdListingAsset : public UDataAsset
{
public:
	TArray<struct FName>                               EmoteIds;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EmotingFramework.EmoteIdListingAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EmotingFramework.EmoteSettings
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UEmoteSettings : public UDeveloperSettings
{
public:
	int                                                Pages;                                                     // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ILXR[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EmotingFramework.EmoteSettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
