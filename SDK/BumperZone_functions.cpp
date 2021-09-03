// Name: SoT, Version: 2.2.1.1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FBumperZoneData::AfterRead()
{
	READ_PTR_FULL(BumperZone, AShipBumperZone);
}

void FBumperZoneData::BeforeDelete()
{
	DELE_PTR_FULL(BumperZone);
}

void FCachedShip::AfterRead()
{
}

void FCachedShip::BeforeDelete()
{
}

void AShipBumperZone::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(BumperZoneComponent, UBoxComponent);
	READ_PTR_FULL(DistanceRadiusComponent, USphereComponent);
}

void AShipBumperZone::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(BumperZoneComponent);
	DELE_PTR_FULL(DistanceRadiusComponent);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
