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

// System.Runtime.Remoting.TypeInfo
struct TypeInfo_t1100;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.TypeInfo::.ctor(System.Type)
extern "C" void TypeInfo__ctor_m6534 (TypeInfo_t1100 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.TypeInfo::get_TypeName()
extern "C" String_t* TypeInfo_get_TypeName_m6535 (TypeInfo_t1100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
