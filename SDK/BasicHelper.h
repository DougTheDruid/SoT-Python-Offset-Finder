#pragma once
#pragma warning(disable: 4267)

// Name: SoT, Version: 2.3.0

#include <vector>
#include <locale>
#include <unordered_set>
#include <unordered_map>
#include <Windows.h>

#define EXTERNAL_PROPS
#define UE4

/*!!HELPER_DEF!!*/

#if defined(EXTERNAL_PROPS)
#include "../MemoryManager.h"
#endif

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{


#if defined(EXTERNAL_PROPS)
extern MemoryManager* Mem;
#else
bool InitSdk(const std::string& moduleName, uintptr_t gObjectsOffset, uintptr_t gNamesOffset);
bool InitSdk();
#endif

template<typename Fn>
inline Fn GetVFunction(const void* instance, std::size_t index)
{
	auto vtable = *static_cast<const void***>(const_cast<void*>(instance));
	return reinterpret_cast<Fn>(vtable[index]);
}

class UObject;

template<class T>
struct TArray
{
private:
	T* Data;
	int32_t Count;
	int32_t Max;
	
	friend struct FString;

public:
	TArray()
	{
		Data = nullptr;
		Max = 0;
		Count = 0;
	}

	int Num() const
	{
		return Count;
	}

	T& operator[](int i)
	{
		return Data[i];
	}

	const T& operator[](int i) const
	{
		return Data[i];
	}

	bool IsValidIndex(int i) const
	{
		return i < Num();
	}
};

struct FString : public TArray<wchar_t>
{
	FString() = default;

	explicit FString(const wchar_t* other)
	{
		Max = Count = *other ? std::wcslen(other) + 1 : 0;

		if (Count)
		{
			Data = const_cast<wchar_t*>(other);
		}
	};

	inline bool IsValid() const
	{
		return Data != nullptr;
	}

	inline const wchar_t* cw_str() const
	{
		return Data;
	}

	inline const char* c_str() const
	{
		return (const char*)Data;
	}

	std::string ToString() const
	{
		size_t length = std::wcslen(Data);
		std::string str(length, '\0');
		std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(Data, Data + length, '?', &str[0]);

		return str;
	}

	std::wstring ToWString() const
	{
		std::wstring str(Data);
		return str;
	}
};

class FUObjectItem
{
public:
	class UObject* Object;
	int Flags;
	int32_t ClusterIndex;
	int32_t SerialNumber;
	unsigned char pad_QERH8Y8O9U[0x04];
	enum class ObjectFlags : int32_t
	{
		None = 0,
		Native = 1 << 25,
		Async = 1 << 26,
		AsyncLoading = 1 << 27,
		Unreachable = 1 << 28,
		PendingKill = 1 << 29,
		RootSet = 1 << 30,
		NoStrongReference = 1 << 31
	};

#ifdef UE4
	inline bool IsUnreachable() const
	{
		return !!(Flags & static_cast<std::underlying_type_t<ObjectFlags>>(ObjectFlags::Unreachable));
	}
	inline bool IsPendingKill() const
	{
		return !!(Flags & static_cast<std::underlying_type_t<ObjectFlags>>(ObjectFlags::PendingKill));
	}
#endif
};

#ifdef GOBJECTS_CHUNKS
class TUObjectArray
{
	enum
	{
		NumElementsPerChunk = 64 * 1024,
	};
public:
	inline int32_t Num() const
	{
		return NumElements;
	}

	inline int32_t Max() const
	{
		return MaxElements;
	}

	inline bool IsValidIndex(int32_t Index) const
	{
		return Index < Num() && Index >= 0;
	}

	inline FUObjectItem* GetObjectPtr(int32_t Index) const
	{
		const int32_t ChunkIndex = Index / NumElementsPerChunk;
		const int32_t WithinChunkIndex = Index % NumElementsPerChunk;
		if (!IsValidIndex(Index)) return nullptr;
		if (ChunkIndex > NumChunks) return nullptr;
		if (Index > MaxElements) return nullptr;
		FUObjectItem* Chunk = Objects[ChunkIndex];
		if (!Chunk) return nullptr;
		return Chunk + WithinChunkIndex;
	}

	inline UObject* GetByIndex(int32_t index) const
	{
		FUObjectItem* ItemPtr = GetObjectPtr(index);
		if (!ItemPtr) return nullptr;

		return (*ItemPtr).Object;
	}

	inline FUObjectItem* GetItemByIndex(int32_t index) const
	{
		FUObjectItem* ItemPtr = GetObjectPtr(index);
		if (!ItemPtr) return nullptr;
		return ItemPtr;
	}

private:
	FUObjectItem** Objects;
	FUObjectItem* PreAllocatedObjects;
	int32_t MaxElements;
	int32_t NumElements;
	int32_t MaxChunks;
	int32_t NumChunks;
};
#else
class TUObjectArray
{
private:
	FUObjectItem* Objects;
	int32_t MaxElements;
	int32_t NumElements;
	
public:
	inline int32_t Num() const
	{
		return NumElements;
	}

	inline UObject* GetByIndex(int32_t index) const
	{
		return Objects[index].Object;
	}

	inline FUObjectItem* GetItemByIndex(int32_t index) const
	{
		if (index < NumElements)
		{
			return &Objects[index];
		}
		return nullptr;
	}
};
#endif // GOBJECTS_CHUNKS

#ifdef FNAME_POOL
struct FNameEntryHeader
{
	uint16_t bIsWide : 1;
#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
	uint16_t Len : 15;
#else
	static constexpr uint32_t ProbeHashBits = 5;
	uint16_t LowercaseProbeHash : ProbeHashBits;
	uint16_t Len : 10;
#endif
};

class FNameEntry
{
public:
#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
	uint32_t ComparisonId; /*FNameEntryId*/
#endif
	FNameEntryHeader Header;

	union
	{
		char AnsiName[1024];
		wchar_t WideName[1024];
	};

	inline int32_t GetLength() const
	{
		return Header.Len;
	}
	inline bool IsWide() const
	{
		return Header.bIsWide;
	}
	inline int32_t GetId() const
	{
#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
		return ComparisonId;
#else
		return *(uint16_t*)&Header;
#endif
	}
	inline std::string GetAnsiName() const
	{
		uint32_t len = GetLength();
		if (len > 1024) return "[Error: Overflow]";

		return std::string((const char*)AnsiName, len);
	}
	inline std::wstring GetWideName() const
	{
		uint32_t len = GetLength();
		return std::wstring((const wchar_t*)WideName, len);
	}
#ifdef UNI_NAMES
	std::wstring GetName() const
	{
		return GetWideName();
	}
#else
	std::string GetName() const
	{
		return GetAnsiName();
	}
#endif
};

class FNameEntryAllocator
{
	/*
	enum { Stride = alignof(FNameEntry) };
	enum { BlockSizeBytes = Stride * FNameBlockOffsets };
	*/
private:
	unsigned char frwLock[0x8];
public:
#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
	static const int Stride = 0x04;
#else
	static const int Stride = 0x02;
#endif
	int32_t CurrentBlock;
	int32_t CurrentByteCursor;
	uint8_t* Blocks[8192];

	inline int32_t NumBlocks() const
	{
		return CurrentBlock + 1;
	}
	inline FNameEntry* GetById(int32_t key) const
	{
		int block = key >> 16;
		int offset = (uint16_t)key;

		if (!IsValidIndex(key, block, offset))
			return reinterpret_cast<FNameEntry*>(Blocks[0] + 0); // "None"

		return reinterpret_cast<FNameEntry*>(Blocks[block] + ((uint64_t)offset * Stride));
	}
	inline bool IsValidIndex(int32_t key) const
	{
		uint32_t block = key >> 16;
		uint16_t offset = key;
		return IsValidIndex(key, block, offset);
	}
	inline bool IsValidIndex(int32_t key, uint32_t block, uint16_t offset) const
	{
		return (key >= 0 && block < NumBlocks() && offset* Stride < 0x20000);
	}
};

class FNamePool
{
public:
	FNameEntryAllocator Allocator;
	uint32_t AnsiCount;
	uint32_t WideCount;

	inline FNameEntry* GetNext(uintptr_t& nextFNameAddress)
	{
		static int lastBlock = 0;
		if (nextFNameAddress == NULL)
		{
			lastBlock = 0;
			nextFNameAddress = reinterpret_cast<uintptr_t>(Allocator.Blocks[0]);
		}

	RePlay:
#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
		int32_t nextFNameComparisonId = *reinterpret_cast<int32_t*>(nextFNameAddress);
#else
		int32_t nextFNameComparisonId = MAKELONG((uint16_t)((nextFNameAddress - reinterpret_cast<uintptr_t>(Allocator.Blocks[lastBlock])) / 2), (uint16_t)lastBlock);
#endif
		int32_t block = nextFNameComparisonId >> 16;
		int32_t offset = (uint16_t)nextFNameComparisonId;
		int32_t offsetFromBlock = (nextFNameAddress - reinterpret_cast<uintptr_t>(Allocator.Blocks[lastBlock]));

		// Get entry information
		const uintptr_t entryOffset = nextFNameAddress;
#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
		const int toAdd = 0x04 + 0x02; // HeaderOffset + HeaderSize
		const uint16_t nameHeader = *reinterpret_cast<uint16_t*>(entryOffset + 0x04);
		int nameLength = nameHeader >> 1;
#else
		const int toAdd = 0x00 + 0x02; // HeaderOffset + HeaderSize
		const uint16_t nameHeader = *reinterpret_cast<uint16_t*>(entryOffset);
		int nameLength = nameHeader >> 6;
#endif
		bool isWide = (nameHeader & 1) != 0;

		if (isWide)
			nameLength += nameLength;

#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
		int aligne = (entryOffset + toAdd + nameLength) % 4;
		if (aligne != 0)
			nameLength += 4 - aligne;
#else
		// if odd number (odd numbers are aligned with 0x00)
		if (!isWide && nameLength % 2 != 0)
			nameLength += 1;
#endif

		// Block end ?
#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
		if (offsetFromBlock + toAdd + nameLength >= 0xFFFF * FNameEntryAllocator::Stride || nameHeader == 0x00 || (block == Allocator.CurrentBlock && offset >= Allocator.CurrentByteCursor))
#else
		if (offsetFromBlock + toAdd + (nameLength * 2) >= 0xFFFF * FNameEntryAllocator::Stride || nameHeader == 0x00 || block == Allocator.CurrentBlock && offset >= Allocator.CurrentByteCursor)
#endif
		{
			nextFNameAddress = reinterpret_cast<uintptr_t>(Allocator.Blocks[++lastBlock]);
			goto RePlay;
		}

		// We hit last Name in last Block
		if (lastBlock > Allocator.CurrentBlock)
			return nullptr;

		// Get next name address
		nextFNameAddress = entryOffset + toAdd + nameLength;

		// Get name
		FNameEntry* ret = Allocator.GetById(nextFNameComparisonId);

		return ret;
	}

	inline size_t Num() const
	{
		return AnsiCount;
	}

	inline bool IsValidIndex(int32_t id) const
	{
		return Allocator.IsValidIndex(static_cast<int32_t>(id));
	}

	inline FNameEntry* GetById(int32_t key) const
	{
		return Allocator.GetById(key);
	}

	inline FNameEntry* operator[](int32_t id) const
	{
		return Allocator.GetById(static_cast<int32_t>(id));
	}
};

using GNAME_TYPE = FNamePool;
#elif defined UE4

class FNameEntry
{
public:
	static const auto NAME_WIDE_MASK = 0x1;
	static const auto NAME_INDEX_SHIFT = 1;

	class FNameEntry* HashNext;
	int32_t Index;
	union
	{
		char AnsiName[1024];
		wchar_t WideName[1024];
	};

	inline const int32_t GetIndex() const
	{
		return Index >> NAME_INDEX_SHIFT;
	}

	inline bool IsWide() const
	{
		return Index & NAME_WIDE_MASK;
	}

	inline std::string GetAnsiName() const
	{
		return std::string(AnsiName);
	}

	inline std::wstring GetWideName() const
	{
		return std::wstring(WideName);
	}
#ifdef UNI_NAMES
	std::wstring GetName() const
	{
		return GetWideName();
	}
#else
	std::string GetName() const
	{
		return GetAnsiName();
	}
#endif
};

template<typename ElementType, int32_t MaxTotalElements, int32_t ElementsPerChunk>
class TStaticIndirectArrayThreadSafeRead
{
public:
	inline size_t Num() const
	{
		return NumElements;
	}

	inline bool IsValidIndex(int32_t index) const
	{
		return index < Num() && index >= 0;
	}

	inline ElementType* operator[](int32_t index) const
	{
		ElementType* ItemPtr = GetItemPtr(index);
		return ItemPtr;
	}

private:
	inline ElementType* GetItemPtr(int32_t Index) const
	{
		int32_t ChunkIndex = Index / ElementsPerChunk;
		int32_t WithinChunkIndex = Index % ElementsPerChunk;
		ElementType* Chunk = (*Chunks)[ChunkIndex];
		int offset = WithinChunkIndex * 8;
		uintptr_t ptrAddress = *reinterpret_cast<uintptr_t*>(reinterpret_cast<unsigned char*>(Chunk) + offset);
		ElementType* ItemPtr = reinterpret_cast<ElementType*>(ptrAddress);
		return ItemPtr;
	}

	enum
	{
		ChunkTableSize = (MaxTotalElements + ElementsPerChunk - 1) / ElementsPerChunk
	};

	ElementType** Chunks[ChunkTableSize];
	int32_t NumElements;
	int32_t NumChunks;
};

using TNameEntryArray = TStaticIndirectArrayThreadSafeRead<FNameEntry, 4 * 1024 * 1024, 16384>;
using GNAME_TYPE = TNameEntryArray;

#elif defined UE3

class FNameEntry
{
	static const auto NAME_WIDE_MASK = 0x1;
	static const auto NAME_INDEX_SHIFT = 1;
public:
	uint64_t Flags;
	uint32_t Index;
#ifdef UNI_NAMES
	int32_t pad;
#endif
	FNameEntry* HashNext;
	union
	{
		char AnsiName[1024];
		wchar_t WideName[1024];
	};
	inline const int32_t GetIndex() const
	{
		return Index >> NAME_INDEX_SHIFT;
	}
	inline bool IsWide() const
	{
		return Index & NAME_WIDE_MASK;
	}
	inline std::string GetAnsiName() const
	{
		return std::string(AnsiName);
	}
	inline std::wstring GetWideName() const
	{
		return std::wstring(WideName);
	}
#ifdef UNI_NAMES
	std::wstring GetName() const
	{
		return GetWideName();
	}
#else
	std::string GetName() const
	{
		return GetAnsiName();
	}
#endif
};

using GNAME_TYPE = TArray<FNameEntry*>;
#endif

struct FName
{
	static GNAME_TYPE* GNames;
	int32_t ComparisonIndex;
#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
	uint32_t DisplayIndex; // FNameEntryId
#endif
	int32_t Number;

	FName() :
		ComparisonIndex(0),
#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
		DisplayIndex(0), // FNameEntryId
#endif
		Number(0)
	{ }

	FName(int32_t i) :
		ComparisonIndex(i),
#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
		DisplayIndex(i), // FNameEntryId
#endif
		Number(0)
	{ }

	FName(const char* nameToFind) :
		ComparisonIndex(0),
#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
		DisplayIndex(0), // FNameEntryId
#endif
		Number(0)
	{
		static std::unordered_set<int> cache;

		for (auto i : cache)
		{
			if (GetGlobalNames()[i]->GetAnsiName() == nameToFind)
			{
				ComparisonIndex = i;
#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
				DisplayIndex = i;
#endif
				return;
			}
		}

#ifdef FNAME_POOL
		uintptr_t lastFNameAddress = NULL;

		for (FNameEntry* name = GetGlobalNames().GetNext(lastFNameAddress); name != nullptr; name = GetGlobalNames().GetNext(lastFNameAddress))
		{
			if (name->GetAnsiName() == nameToFind)
			{
				cache.insert(name->GetId());
				ComparisonIndex = name->GetId();
#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
				DisplayIndex = name->GetId();
#endif
				return;
			}
		}
#else
		for (size_t i = 0; i < GetGlobalNames().Num(); ++i)
		{
			if (GetGlobalNames()[i]->GetAnsiName() == nameToFind)
			{
				cache.insert(i);
				ComparisonIndex = i;
				return;
			}
		}
#endif
	}

	FName(const wchar_t* nameToFind) :
		ComparisonIndex(0),
#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
		DisplayIndex(0), // FNameEntryId
#endif
		Number(0)
	{
		static std::unordered_set<int> cache;

		for (auto i : cache)
		{
			if (GetGlobalNames()[i]->GetWideName() == nameToFind)
			{
				ComparisonIndex = i;
#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
				DisplayIndex = i;
#endif
				return;
	}
}

#ifdef FNAME_POOL
		uintptr_t lastFNameAddress = NULL;
		for (FNameEntry* name = GetGlobalNames().GetNext(lastFNameAddress); name != nullptr; name = GetGlobalNames().GetNext(lastFNameAddress))
		{
			if (name->GetWideName() == nameToFind)
			{
				cache.insert(name->GetId());
				ComparisonIndex = name->GetId();
#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
				DisplayIndex = name->GetId();
#endif
				return;
			}
		}
#else
		for (size_t i = 0; i < GetGlobalNames().Num(); ++i)
		{
			if (GetGlobalNames()[i]->GetWideName() == nameToFind)
			{
				cache.insert(i);
				ComparisonIndex = i;
				return;
			}
		}
#endif
	}

	static inline GNAME_TYPE& GetGlobalNames()
	{
		return *GNames;
	}
	inline std::string GetNameA() const
	{
		return GetGlobalNames()[ComparisonIndex]->GetAnsiName();
	}
	inline std::wstring GetNameW() const
	{
		return GetGlobalNames()[ComparisonIndex]->GetWideName();
	}
#ifdef UNI_NAMES
	inline std::wstring GetName() const
	{
		return GetNameW();
	}
#else
	inline std::string GetName() const
	{
		return GetNameA();
	}
#endif

	inline bool operator==(const FName& other) const
	{
		return ComparisonIndex == other.ComparisonIndex;
	}
};

template<class TEnum>
class TEnumAsByte
{
public:
	inline TEnumAsByte()
	{
	}

	inline TEnumAsByte(TEnum _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit inline TEnumAsByte(int32_t _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit inline TEnumAsByte(uint8_t _value)
		: value(_value)
	{
	}

	inline operator TEnum() const
	{
		return (TEnum)value;
	}

	inline TEnum GetValue() const
	{
		return (TEnum)value;
	}

private:
	uint8_t value;
};

class FScriptInterface
{
private:
	UObject* ObjectPointer;
	void* InterfacePointer;

public:
	inline UObject* GetObject() const
	{
		return ObjectPointer;
	}
	inline UObject*& GetObjectRef()
	{
		return ObjectPointer;
	}
	inline void* GetInterface() const
	{
		return ObjectPointer != nullptr ? InterfacePointer : nullptr;
	}
};

template<class InterfaceType>
class TScriptInterface : public FScriptInterface
{
public:
	inline InterfaceType* operator->() const
	{
		return (InterfaceType*)GetInterface();
	}
	inline InterfaceType& operator*() const
	{
		return *((InterfaceType*)GetInterface());
	}
	inline operator bool() const
	{
		return GetInterface() != nullptr;
	}
};

struct FText
{
	char UnknownData[0x18];
};

struct FScriptDelegate
{
	char UnknownData[0x10];
};

struct FScriptMulticastDelegate
{
	char UnknownData[0x10];
};

struct FMulticastSparseDelegate
{
	char UnknownData[0x1];
};

struct FStructBaseChain
{
	class FStructBaseChain** StructBaseChainArray;
	int32_t NumStructBasesInChainMinusOne;
	unsigned char pad_UJJ0NZ1DOZ[0x04];
};

template<typename Key, typename Value>
class TMap
{
	char UnknownData[0x50];
};

#ifdef UE4
struct FWeakObjectPtr
{
public:
	inline bool SerialNumbersMatch(FUObjectItem* ObjectItem) const
	{
		return ObjectItem->SerialNumber == ObjectSerialNumber;
	}

	bool IsValid() const;

	UObject* Get() const;

	int32_t ObjectIndex;
	int32_t ObjectSerialNumber;
};

template<class T, class TWeakObjectPtrBase = FWeakObjectPtr>
struct TWeakObjectPtr : private TWeakObjectPtrBase
{
public:
	inline T* Get() const
	{
		return (T*)TWeakObjectPtrBase::Get();
	}

	inline T& operator*() const
	{
		return *Get();
	}

	inline T* operator->() const
	{
		return Get();
	}

	inline bool IsValid() const
	{
		return TWeakObjectPtrBase::IsValid();
	}
};

template<class T, class TBASE>
class TAutoPointer : public TBASE
{
public:
	inline operator T* () const
	{
		return TBASE::Get();
	}

	inline operator const T* () const
	{
		return (const T*)TBASE::Get();
	}

	explicit inline operator bool() const
	{
		return TBASE::Get() != nullptr;
	}
};

template<class T>
class TAutoWeakObjectPtr : public TAutoPointer<T, TWeakObjectPtr<T>>
{
public:
};

template<typename TObjectID>
class TPersistentObjectPtr
{
public:
	FWeakObjectPtr WeakPtr;
	int32_t TagAtLastTest;
	TObjectID ObjectID;
};

struct FStringAssetReference_
{
	char UnknownData[0x10];
};

struct FUniqueObjectGuid_
{
	char UnknownData[0x10];
};

class FLazyObjectPtr : public TPersistentObjectPtr<FUniqueObjectGuid_>
{
};

class FAssetPtr : public TPersistentObjectPtr<FStringAssetReference_>
{
};

template<typename ObjectType>
class TAssetPtr : FAssetPtr
{
};

template<typename ObjectType>
class TLazyObjectPtr : FLazyObjectPtr
{
};
#endif

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

