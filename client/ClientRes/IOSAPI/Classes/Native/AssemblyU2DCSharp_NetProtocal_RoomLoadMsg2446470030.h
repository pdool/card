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

// NetProtocal.RoomLoadMsg
struct  RoomLoadMsg_t2446470030  : public Il2CppObject
{
public:
	// System.Int32 NetProtocal.RoomLoadMsg::_load
	int32_t ____load_0;
	// ProtoBuf.IExtension NetProtocal.RoomLoadMsg::extensionObject
	Il2CppObject * ___extensionObject_1;

public:
	inline static int32_t get_offset_of__load_0() { return static_cast<int32_t>(offsetof(RoomLoadMsg_t2446470030, ____load_0)); }
	inline int32_t get__load_0() const { return ____load_0; }
	inline int32_t* get_address_of__load_0() { return &____load_0; }
	inline void set__load_0(int32_t value)
	{
		____load_0 = value;
	}

	inline static int32_t get_offset_of_extensionObject_1() { return static_cast<int32_t>(offsetof(RoomLoadMsg_t2446470030, ___extensionObject_1)); }
	inline Il2CppObject * get_extensionObject_1() const { return ___extensionObject_1; }
	inline Il2CppObject ** get_address_of_extensionObject_1() { return &___extensionObject_1; }
	inline void set_extensionObject_1(Il2CppObject * value)
	{
		___extensionObject_1 = value;
		Il2CppCodeGenWriteBarrier(&___extensionObject_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
