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

// System.Collections.SortedList
struct SortedList_t500;
// System.Collections.IComparer
struct IComparer_t308;
// System.Collections.IDictionary
struct IDictionary_t413;
// System.Collections.IEnumerator
struct IEnumerator_t224;
// System.Object
struct Object_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t478;
// System.Array
struct Array_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.SortedList::.ctor()
extern "C" void SortedList__ctor_m4853 (SortedList_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.ctor(System.Int32)
extern "C" void SortedList__ctor_m2099 (SortedList_t500 * __this, int32_t ___initialCapacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.ctor(System.Collections.IComparer,System.Int32)
extern "C" void SortedList__ctor_m4854 (SortedList_t500 * __this, Object_t * ___comparer, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.ctor(System.Collections.IDictionary,System.Collections.IComparer)
extern "C" void SortedList__ctor_m4855 (SortedList_t500 * __this, Object_t * ___d, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.cctor()
extern "C" void SortedList__cctor_m4856 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.SortedList::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * SortedList_System_Collections_IEnumerable_GetEnumerator_m4857 (SortedList_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::get_Count()
extern "C" int32_t SortedList_get_Count_m4858 (SortedList_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::get_SyncRoot()
extern "C" Object_t * SortedList_get_SyncRoot_m4859 (SortedList_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsFixedSize()
extern "C" bool SortedList_get_IsFixedSize_m4860 (SortedList_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsReadOnly()
extern "C" bool SortedList_get_IsReadOnly_m4861 (SortedList_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::get_Item(System.Object)
extern "C" Object_t * SortedList_get_Item_m4862 (SortedList_t500 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::set_Item(System.Object,System.Object)
extern "C" void SortedList_set_Item_m4863 (SortedList_t500 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::get_Capacity()
extern "C" int32_t SortedList_get_Capacity_m4864 (SortedList_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::set_Capacity(System.Int32)
extern "C" void SortedList_set_Capacity_m4865 (SortedList_t500 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::Add(System.Object,System.Object)
extern "C" void SortedList_Add_m4866 (SortedList_t500 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::Contains(System.Object)
extern "C" bool SortedList_Contains_m4867 (SortedList_t500 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.SortedList::GetEnumerator()
extern "C" Object_t * SortedList_GetEnumerator_m4868 (SortedList_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::Remove(System.Object)
extern "C" void SortedList_Remove_m4869 (SortedList_t500 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::CopyTo(System.Array,System.Int32)
extern "C" void SortedList_CopyTo_m4870 (SortedList_t500 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::Clone()
extern "C" Object_t * SortedList_Clone_m4871 (SortedList_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::RemoveAt(System.Int32)
extern "C" void SortedList_RemoveAt_m4872 (SortedList_t500 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::IndexOfKey(System.Object)
extern "C" int32_t SortedList_IndexOfKey_m4873 (SortedList_t500 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::ContainsKey(System.Object)
extern "C" bool SortedList_ContainsKey_m4874 (SortedList_t500 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::GetByIndex(System.Int32)
extern "C" Object_t * SortedList_GetByIndex_m4875 (SortedList_t500 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::EnsureCapacity(System.Int32,System.Int32)
extern "C" void SortedList_EnsureCapacity_m4876 (SortedList_t500 * __this, int32_t ___n, int32_t ___free, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::PutImpl(System.Object,System.Object,System.Boolean)
extern "C" void SortedList_PutImpl_m4877 (SortedList_t500 * __this, Object_t * ___key, Object_t * ___value, bool ___overwrite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::GetImpl(System.Object)
extern "C" Object_t * SortedList_GetImpl_m4878 (SortedList_t500 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::InitTable(System.Int32,System.Boolean)
extern "C" void SortedList_InitTable_m4879 (SortedList_t500 * __this, int32_t ___capacity, bool ___forceSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::Find(System.Object)
extern "C" int32_t SortedList_Find_m4880 (SortedList_t500 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
