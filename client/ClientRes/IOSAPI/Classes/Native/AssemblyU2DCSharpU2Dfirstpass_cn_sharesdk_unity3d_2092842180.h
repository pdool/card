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

#include "AssemblyU2DCSharpU2Dfirstpass_cn_sharesdk_unity3d_3603979713.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// cn.sharesdk.unity3d.LinkedIn
struct  LinkedIn_t2092842180  : public DevInfo_t3603979713
{
public:
	// System.String cn.sharesdk.unity3d.LinkedIn::api_key
	String_t* ___api_key_2;
	// System.String cn.sharesdk.unity3d.LinkedIn::secret_key
	String_t* ___secret_key_3;
	// System.String cn.sharesdk.unity3d.LinkedIn::redirect_url
	String_t* ___redirect_url_4;

public:
	inline static int32_t get_offset_of_api_key_2() { return static_cast<int32_t>(offsetof(LinkedIn_t2092842180, ___api_key_2)); }
	inline String_t* get_api_key_2() const { return ___api_key_2; }
	inline String_t** get_address_of_api_key_2() { return &___api_key_2; }
	inline void set_api_key_2(String_t* value)
	{
		___api_key_2 = value;
		Il2CppCodeGenWriteBarrier(&___api_key_2, value);
	}

	inline static int32_t get_offset_of_secret_key_3() { return static_cast<int32_t>(offsetof(LinkedIn_t2092842180, ___secret_key_3)); }
	inline String_t* get_secret_key_3() const { return ___secret_key_3; }
	inline String_t** get_address_of_secret_key_3() { return &___secret_key_3; }
	inline void set_secret_key_3(String_t* value)
	{
		___secret_key_3 = value;
		Il2CppCodeGenWriteBarrier(&___secret_key_3, value);
	}

	inline static int32_t get_offset_of_redirect_url_4() { return static_cast<int32_t>(offsetof(LinkedIn_t2092842180, ___redirect_url_4)); }
	inline String_t* get_redirect_url_4() const { return ___redirect_url_4; }
	inline String_t** get_address_of_redirect_url_4() { return &___redirect_url_4; }
	inline void set_redirect_url_4(String_t* value)
	{
		___redirect_url_4 = value;
		Il2CppCodeGenWriteBarrier(&___redirect_url_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif