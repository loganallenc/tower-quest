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

// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t241;
// System.Object
struct Object_t;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t217;
// System.IAsyncResult
struct IAsyncResult_t51;
// System.AsyncCallback
struct AsyncCallback_t52;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void UnhandledExceptionEventHandler__ctor_m1005 (UnhandledExceptionEventHandler_t241 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
extern "C" void UnhandledExceptionEventHandler_Invoke_m8333 (UnhandledExceptionEventHandler_t241 * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t217 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_UnhandledExceptionEventHandler_t241(Il2CppObject* delegate, Object_t * ___sender, UnhandledExceptionEventArgs_t217 * ___e);
// System.IAsyncResult System.UnhandledExceptionEventHandler::BeginInvoke(System.Object,System.UnhandledExceptionEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * UnhandledExceptionEventHandler_BeginInvoke_m8334 (UnhandledExceptionEventHandler_t241 * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t217 * ___e, AsyncCallback_t52 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnhandledExceptionEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void UnhandledExceptionEventHandler_EndInvoke_m8335 (UnhandledExceptionEventHandler_t241 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
