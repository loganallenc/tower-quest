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

// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_t375;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t369;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_X509Certificates_X509Rev.h"
#include "System_System_Security_Cryptography_X509Certificates_X509Rev_0.h"
#include "System_System_Security_Cryptography_X509Certificates_X509Ver.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::.ctor()
extern "C" void X509ChainPolicy__ctor_m1499 (X509ChainPolicy_t375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509ChainPolicy::get_ExtraStore()
extern "C" X509Certificate2Collection_t369 * X509ChainPolicy_get_ExtraStore_m1500 (X509ChainPolicy_t375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509RevocationFlag System.Security.Cryptography.X509Certificates.X509ChainPolicy::get_RevocationFlag()
extern "C" int32_t X509ChainPolicy_get_RevocationFlag_m1501 (X509ChainPolicy_t375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509RevocationMode System.Security.Cryptography.X509Certificates.X509ChainPolicy::get_RevocationMode()
extern "C" int32_t X509ChainPolicy_get_RevocationMode_m1502 (X509ChainPolicy_t375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509VerificationFlags System.Security.Cryptography.X509Certificates.X509ChainPolicy::get_VerificationFlags()
extern "C" int32_t X509ChainPolicy_get_VerificationFlags_m1503 (X509ChainPolicy_t375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509ChainPolicy::get_VerificationTime()
extern "C" DateTime_t132  X509ChainPolicy_get_VerificationTime_m1504 (X509ChainPolicy_t375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::Reset()
extern "C" void X509ChainPolicy_Reset_m1505 (X509ChainPolicy_t375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
