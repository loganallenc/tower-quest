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

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
struct TlsServerCertificateRequest_t645;
// Mono.Security.Protocol.Tls.Context
struct Context_t594;
// System.Byte[]
struct ByteU5BU5D_t368;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerCertificateRequest__ctor_m3090 (TlsServerCertificateRequest_t645 * __this, Context_t594 * ___context, ByteU5BU5D_t368* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::Update()
extern "C" void TlsServerCertificateRequest_Update_m3091 (TlsServerCertificateRequest_t645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsSsl3()
extern "C" void TlsServerCertificateRequest_ProcessAsSsl3_m3092 (TlsServerCertificateRequest_t645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsTls1()
extern "C" void TlsServerCertificateRequest_ProcessAsTls1_m3093 (TlsServerCertificateRequest_t645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
