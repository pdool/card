﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.AsyncOperation
struct AsyncOperation_t3814632279;
// AssetBundles.LoadedWWW
struct LoadedWWW_t3791486166;

#include "AssemblyU2DCSharp_AssetBundles_AssetLoadOperation1768276191.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AssetBundles.NoramlResOperation
struct  NoramlResOperation_t1219944396  : public AssetLoadOperation_t1768276191
{
public:
	// System.String AssetBundles.NoramlResOperation::m_texturename
	String_t* ___m_texturename_0;
	// System.String AssetBundles.NoramlResOperation::m_DownloadingError
	String_t* ___m_DownloadingError_1;
	// UnityEngine.AsyncOperation AssetBundles.NoramlResOperation::m_Request
	AsyncOperation_t3814632279 * ___m_Request_2;
	// AssetBundles.LoadedWWW AssetBundles.NoramlResOperation::m_loaded
	LoadedWWW_t3791486166 * ___m_loaded_3;

public:
	inline static int32_t get_offset_of_m_texturename_0() { return static_cast<int32_t>(offsetof(NoramlResOperation_t1219944396, ___m_texturename_0)); }
	inline String_t* get_m_texturename_0() const { return ___m_texturename_0; }
	inline String_t** get_address_of_m_texturename_0() { return &___m_texturename_0; }
	inline void set_m_texturename_0(String_t* value)
	{
		___m_texturename_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_texturename_0, value);
	}

	inline static int32_t get_offset_of_m_DownloadingError_1() { return static_cast<int32_t>(offsetof(NoramlResOperation_t1219944396, ___m_DownloadingError_1)); }
	inline String_t* get_m_DownloadingError_1() const { return ___m_DownloadingError_1; }
	inline String_t** get_address_of_m_DownloadingError_1() { return &___m_DownloadingError_1; }
	inline void set_m_DownloadingError_1(String_t* value)
	{
		___m_DownloadingError_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_DownloadingError_1, value);
	}

	inline static int32_t get_offset_of_m_Request_2() { return static_cast<int32_t>(offsetof(NoramlResOperation_t1219944396, ___m_Request_2)); }
	inline AsyncOperation_t3814632279 * get_m_Request_2() const { return ___m_Request_2; }
	inline AsyncOperation_t3814632279 ** get_address_of_m_Request_2() { return &___m_Request_2; }
	inline void set_m_Request_2(AsyncOperation_t3814632279 * value)
	{
		___m_Request_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Request_2, value);
	}

	inline static int32_t get_offset_of_m_loaded_3() { return static_cast<int32_t>(offsetof(NoramlResOperation_t1219944396, ___m_loaded_3)); }
	inline LoadedWWW_t3791486166 * get_m_loaded_3() const { return ___m_loaded_3; }
	inline LoadedWWW_t3791486166 ** get_address_of_m_loaded_3() { return &___m_loaded_3; }
	inline void set_m_loaded_3(LoadedWWW_t3791486166 * value)
	{
		___m_loaded_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_loaded_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
