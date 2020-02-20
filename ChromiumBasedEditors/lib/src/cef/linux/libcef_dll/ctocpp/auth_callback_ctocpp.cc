// Copyright (c) 2019 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=ba2dbf45a65134c64d05c028ba656c7c19fdfa54$
//

#include "libcef_dll/ctocpp/auth_callback_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
void CefAuthCallbackCToCpp::Continue(const CefString& username,
                                     const CefString& password) {
  shutdown_checker::AssertNotShutdown();

  cef_auth_callback_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, cont))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: username, password

  // Execute
  _struct->cont(_struct, username.GetStruct(), password.GetStruct());
}

NO_SANITIZE("cfi-icall") void CefAuthCallbackCToCpp::Cancel() {
  shutdown_checker::AssertNotShutdown();

  cef_auth_callback_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, cancel))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->cancel(_struct);
}

// CONSTRUCTOR - Do not edit by hand.

CefAuthCallbackCToCpp::CefAuthCallbackCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefAuthCallbackCToCpp::~CefAuthCallbackCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_auth_callback_t*
CefCToCppRefCounted<CefAuthCallbackCToCpp,
                    CefAuthCallback,
                    cef_auth_callback_t>::UnwrapDerived(CefWrapperType type,
                                                        CefAuthCallback* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

template <>
CefWrapperType CefCToCppRefCounted<CefAuthCallbackCToCpp,
                                   CefAuthCallback,
                                   cef_auth_callback_t>::kWrapperType =
    WT_AUTH_CALLBACK;
