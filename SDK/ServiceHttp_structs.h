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

// Enum ServiceHttp.EServiceHttpMetricsLevel
enum class ServiceHttp_EServiceHttpMetricsLevel : uint8_t
{
	EServiceHttpMetricsLevel__None = 0,
	EServiceHttpMetricsLevel__Failed = 1,
	EServiceHttpMetricsLevel__FailedOrAborted = 2,
	EServiceHttpMetricsLevel__FailedOrAbortedOrNonSuccess = 3,
	EServiceHttpMetricsLevel__All  = 4,
	EServiceHttpMetricsLevel__EServiceHttpMetricsLevel_MAX = 5,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
