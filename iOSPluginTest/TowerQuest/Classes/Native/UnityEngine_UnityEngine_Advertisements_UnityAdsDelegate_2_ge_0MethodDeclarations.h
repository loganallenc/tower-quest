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

// UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>
struct UnityAdsDelegate_2_t1441;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t51;
// System.AsyncCallback
struct AsyncCallback_t52;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAdsDelegate_2__ctor_m8565_gshared (UnityAdsDelegate_2_t1441 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAdsDelegate_2__ctor_m8565(__this, ___object, ___method, method) (( void (*) (UnityAdsDelegate_2_t1441 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAdsDelegate_2__ctor_m8565_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>::Invoke(T1,T2)
extern "C" void UnityAdsDelegate_2_Invoke_m8566_gshared (UnityAdsDelegate_2_t1441 * __this, Object_t * ___p1, bool ___p2, const MethodInfo* method);
#define UnityAdsDelegate_2_Invoke_m8566(__this, ___p1, ___p2, method) (( void (*) (UnityAdsDelegate_2_t1441 *, Object_t *, bool, const MethodInfo*))UnityAdsDelegate_2_Invoke_m8566_gshared)(__this, ___p1, ___p2, method)
// System.IAsyncResult UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAdsDelegate_2_BeginInvoke_m8568_gshared (UnityAdsDelegate_2_t1441 * __this, Object_t * ___p1, bool ___p2, AsyncCallback_t52 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAdsDelegate_2_BeginInvoke_m8568(__this, ___p1, ___p2, ___callback, ___object, method) (( Object_t * (*) (UnityAdsDelegate_2_t1441 *, Object_t *, bool, AsyncCallback_t52 *, Object_t *, const MethodInfo*))UnityAdsDelegate_2_BeginInvoke_m8568_gshared)(__this, ___p1, ___p2, ___callback, ___object, method)
// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAdsDelegate_2_EndInvoke_m8570_gshared (UnityAdsDelegate_2_t1441 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAdsDelegate_2_EndInvoke_m8570(__this, ___result, method) (( void (*) (UnityAdsDelegate_2_t1441 *, Object_t *, const MethodInfo*))UnityAdsDelegate_2_EndInvoke_m8570_gshared)(__this, ___result, method)
