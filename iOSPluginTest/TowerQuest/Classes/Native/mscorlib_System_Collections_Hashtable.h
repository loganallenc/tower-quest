﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable/Slot[]
struct SlotU5BU5D_t808;
// System.Int32[]
struct Int32U5BU5D_t410;
// System.Collections.Hashtable/HashKeys
struct HashKeys_t805;
// System.Collections.Hashtable/HashValues
struct HashValues_t806;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t314;
// System.Collections.IComparer
struct IComparer_t308;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t236;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t315;

#include "mscorlib_System_Object.h"

// System.Collections.Hashtable
struct  Hashtable_t304  : public Object_t
{
	// System.Int32 System.Collections.Hashtable::inUse
	int32_t ___inUse_0;
	// System.Int32 System.Collections.Hashtable::modificationCount
	int32_t ___modificationCount_1;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_2;
	// System.Collections.Hashtable/Slot[] System.Collections.Hashtable::table
	SlotU5BU5D_t808* ___table_3;
	// System.Int32[] System.Collections.Hashtable::hashes
	Int32U5BU5D_t410* ___hashes_4;
	// System.Int32 System.Collections.Hashtable::threshold
	int32_t ___threshold_5;
	// System.Collections.Hashtable/HashKeys System.Collections.Hashtable::hashKeys
	HashKeys_t805 * ___hashKeys_6;
	// System.Collections.Hashtable/HashValues System.Collections.Hashtable::hashValues
	HashValues_t806 * ___hashValues_7;
	// System.Collections.IHashCodeProvider System.Collections.Hashtable::hcpRef
	Object_t * ___hcpRef_8;
	// System.Collections.IComparer System.Collections.Hashtable::comparerRef
	Object_t * ___comparerRef_9;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Hashtable::serializationInfo
	SerializationInfo_t236 * ___serializationInfo_10;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::equalityComparer
	Object_t * ___equalityComparer_11;
};
struct Hashtable_t304_StaticFields{
	// System.Int32[] System.Collections.Hashtable::primeTbl
	Int32U5BU5D_t410* ___primeTbl_12;
};
