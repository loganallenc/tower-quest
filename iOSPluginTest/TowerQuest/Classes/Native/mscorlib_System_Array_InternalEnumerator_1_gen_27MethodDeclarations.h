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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_27.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m9057_gshared (InternalEnumerator_1_t1487 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m9057(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1487 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m9057_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m9058_gshared (InternalEnumerator_1_t1487 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m9058(__this, method) (( void (*) (InternalEnumerator_1_t1487 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m9058_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m9059_gshared (InternalEnumerator_1_t1487 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m9059(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1487 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m9059_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m9060_gshared (InternalEnumerator_1_t1487 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m9060(__this, method) (( void (*) (InternalEnumerator_1_t1487 *, const MethodInfo*))InternalEnumerator_1_Dispose_m9060_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m9061_gshared (InternalEnumerator_1_t1487 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m9061(__this, method) (( bool (*) (InternalEnumerator_1_t1487 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m9061_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t1486  InternalEnumerator_1_get_Current_m9062_gshared (InternalEnumerator_1_t1487 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m9062(__this, method) (( KeyValuePair_2_t1486  (*) (InternalEnumerator_1_t1487 *, const MethodInfo*))InternalEnumerator_1_get_Current_m9062_gshared)(__this, method)
