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

// EventDelegate/Callback
struct Callback_t2100910411;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void EventDelegate/Callback::.ctor(System.Object,System.IntPtr)
extern "C"  void Callback__ctor_m2698878814 (Callback_t2100910411 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate/Callback::Invoke()
extern "C"  void Callback_Invoke_m1530112116 (Callback_t2100910411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult EventDelegate/Callback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Callback_BeginInvoke_m3290536773 (Callback_t2100910411 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate/Callback::EndInvoke(System.IAsyncResult)
extern "C"  void Callback_EndInvoke_m3409631428 (Callback_t2100910411 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
