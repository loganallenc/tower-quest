﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t1023;
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
struct SynchronizationAttribute_t1028;

#include "mscorlib_System_Object.h"

// System.Runtime.Remoting.Contexts.SynchronizedServerContextSink
struct  SynchronizedServerContextSink_t1032  : public Object_t
{
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.SynchronizedServerContextSink::_next
	Object_t * ____next_0;
	// System.Runtime.Remoting.Contexts.SynchronizationAttribute System.Runtime.Remoting.Contexts.SynchronizedServerContextSink::_att
	SynchronizationAttribute_t1028 * ____att_1;
};
