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

// admob.Admob/AdmobEventHandler
struct AdmobEventHandler_t2983421020;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void admob.Admob/AdmobEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void AdmobEventHandler__ctor_m943312861 (AdmobEventHandler_t2983421020 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob/AdmobEventHandler::Invoke(System.String,System.String)
extern "C"  void AdmobEventHandler_Invoke_m1278357557 (AdmobEventHandler_t2983421020 * __this, String_t* ___eventName0, String_t* ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult admob.Admob/AdmobEventHandler::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AdmobEventHandler_BeginInvoke_m880931180 (AdmobEventHandler_t2983421020 * __this, String_t* ___eventName0, String_t* ___msg1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob/AdmobEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void AdmobEventHandler_EndInvoke_m3142124079 (AdmobEventHandler_t2983421020 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
