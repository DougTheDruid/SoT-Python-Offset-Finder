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
// Classes
//---------------------------------------------------------------------------

// Class AthenaDebug.DrawDebugServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDrawDebugServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaDebug.DrawDebugServiceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaDebug.DrawDebugService
// 0x00F8 (FullSize[0x04C8] - InheritedSize[0x03D0])
class ADrawDebugService : public AActor
{
public:
	unsigned char                                      UnknownData_11W6[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDrawDebugItemMessage>               MessagesReplicated;                                        // 0x03D8(0x0010) (Net, ZeroConstructor)
	TArray<struct FDrawDebugItemSphere>                SpheresReplicated;                                         // 0x03E8(0x0010) (Net, ZeroConstructor, RepNotify)
	TArray<struct FDrawDebugItemBox>                   BoxesReplicated;                                           // 0x03F8(0x0010) (Net, ZeroConstructor, RepNotify)
	TArray<struct FDrawDebugItemCapsule>               CapsulesReplicated;                                        // 0x0408(0x0010) (Net, ZeroConstructor, RepNotify)
	TArray<struct FDrawDebugItemLine>                  LinesReplicated;                                           // 0x0418(0x0010) (Net, ZeroConstructor, RepNotify)
	TArray<struct FDrawDebugItemSector>                SectorsReplicated;                                         // 0x0428(0x0010) (Net, ZeroConstructor, RepNotify)
	TArray<struct FDrawDebugItemString>                StringsReplicated;                                         // 0x0438(0x0010) (Net, ZeroConstructor, RepNotify)
	bool                                               IsDrawDebugActive;                                         // 0x0448(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_3OVD[0x7F];                                    // 0x0449(0x007F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaDebug.DrawDebugService");
		return ptr;
	}



	void OnRep_PersistentShapeChanged();
	void OnRep_IsDrawDebugActiveChanged();
	void Multicast_ClearGroup(const struct FName& GroupName);
	void Multicast_AddStrings(TArray<struct FDrawDebugItemString> Strings);
	void Multicast_AddSpheres(TArray<struct FDrawDebugItemSphere> Spheres);
	void Multicast_AddSectors(TArray<struct FDrawDebugItemSector> Sectors);
	void Multicast_AddLines(TArray<struct FDrawDebugItemLine> Lines);
	void Multicast_AddCapsules(TArray<struct FDrawDebugItemCapsule> Capsules);
	void Multicast_AddBoxes(TArray<struct FDrawDebugItemBox> Boxes);
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaDebug.ShippingDebugActorSphereCollection
// 0x0010 (FullSize[0x03E0] - InheritedSize[0x03D0])
class AShippingDebugActorSphereCollection : public AActor
{
public:
	TArray<struct FSphereData>                         SphereList;                                                // 0x03D0(0x0010) (Net, ZeroConstructor, Protected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaDebug.ShippingDebugActorSphereCollection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaDebug.TickableDebugDrawingServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTickableDebugDrawingServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaDebug.TickableDebugDrawingServiceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaDebug.Videprinter
// 0x0028 (FullSize[0x03F8] - InheritedSize[0x03D0])
class AVideprinter : public AActor
{
public:
	TArray<struct FString>                             OutputRingBuffer;                                          // 0x03D0(0x0010) (Net, ZeroConstructor)
	int                                                AddAt;                                                     // 0x03E0(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Id;                                                        // 0x03E4(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_J7UY[0xC];                                     // 0x03EC(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaDebug.Videprinter");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaDebug.VideprinterServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVideprinterServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaDebug.VideprinterServiceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaDebug.VideprinterService
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UVideprinterService : public UObject
{
public:
	unsigned char                                      UnknownData_W6ST[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AVideprinter*>                        Videprinters;                                              // 0x0030(0x0010) (ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaDebug.VideprinterService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
