﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ProtoBuf.IExtension
struct IExtension_t1221360786;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetProtocal.HeroInfoMsg
struct  HeroInfoMsg_t729301653  : public Il2CppObject
{
public:
	// System.Int32 NetProtocal.HeroInfoMsg::_configId
	int32_t ____configId_0;
	// System.Int32 NetProtocal.HeroInfoMsg::_level
	int32_t ____level_1;
	// ProtoBuf.IExtension NetProtocal.HeroInfoMsg::extensionObject
	Il2CppObject * ___extensionObject_2;

public:
	inline static int32_t get_offset_of__configId_0() { return static_cast<int32_t>(offsetof(HeroInfoMsg_t729301653, ____configId_0)); }
	inline int32_t get__configId_0() const { return ____configId_0; }
	inline int32_t* get_address_of__configId_0() { return &____configId_0; }
	inline void set__configId_0(int32_t value)
	{
		____configId_0 = value;
	}

	inline static int32_t get_offset_of__level_1() { return static_cast<int32_t>(offsetof(HeroInfoMsg_t729301653, ____level_1)); }
	inline int32_t get__level_1() const { return ____level_1; }
	inline int32_t* get_address_of__level_1() { return &____level_1; }
	inline void set__level_1(int32_t value)
	{
		____level_1 = value;
	}

	inline static int32_t get_offset_of_extensionObject_2() { return static_cast<int32_t>(offsetof(HeroInfoMsg_t729301653, ___extensionObject_2)); }
	inline Il2CppObject * get_extensionObject_2() const { return ___extensionObject_2; }
	inline Il2CppObject ** get_address_of_extensionObject_2() { return &___extensionObject_2; }
	inline void set_extensionObject_2(Il2CppObject * value)
	{
		___extensionObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___extensionObject_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
