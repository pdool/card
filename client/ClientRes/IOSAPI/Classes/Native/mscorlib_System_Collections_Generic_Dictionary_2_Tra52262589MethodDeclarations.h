﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/Transform`1<PoolManager/PoolKey,System.Object,PoolManager/PoolKey>
struct Transform_1_t52262589;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_PoolManager_PoolKey54851805.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<PoolManager/PoolKey,System.Object,PoolManager/PoolKey>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m602908759_gshared (Transform_1_t52262589 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m602908759(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t52262589 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m602908759_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<PoolManager/PoolKey,System.Object,PoolManager/PoolKey>::Invoke(TKey,TValue)
extern "C"  int32_t Transform_1_Invoke_m3506115331_gshared (Transform_1_t52262589 * __this, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3506115331(__this, ___key0, ___value1, method) ((  int32_t (*) (Transform_1_t52262589 *, int32_t, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m3506115331_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<PoolManager/PoolKey,System.Object,PoolManager/PoolKey>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2719442402_gshared (Transform_1_t52262589 * __this, int32_t ___key0, Il2CppObject * ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2719442402(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t52262589 *, int32_t, Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2719442402_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<PoolManager/PoolKey,System.Object,PoolManager/PoolKey>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Transform_1_EndInvoke_m382326913_gshared (Transform_1_t52262589 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m382326913(__this, ___result0, method) ((  int32_t (*) (Transform_1_t52262589 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m382326913_gshared)(__this, ___result0, method)
