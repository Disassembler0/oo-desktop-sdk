// Copyright (c) 2019 Marshall A. Greenblatt. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//    * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//    * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//    * Neither the name of Google Inc. nor the name Chromium Embedded
// Framework nor the names of its contributors may be used to endorse
// or promote products derived from this software without specific prior
// written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool and should not edited
// by hand. See the translator.README.txt file in the tools directory for
// more information.
//
// $hash=f27c19f216ad8296bdcb2c64b613a7814790189a$
//

#ifndef CEF_INCLUDE_CAPI_CEF_KEYBOARD_HANDLER_CAPI_H_
#define CEF_INCLUDE_CAPI_CEF_KEYBOARD_HANDLER_CAPI_H_
#pragma once

#include "include/capi/cef_base_capi.h"
#include "include/capi/cef_browser_capi.h"

#ifdef __cplusplus
extern "C" {
#endif

///
// Implement this structure to handle events related to keyboard input. The
// functions of this structure will be called on the UI thread.
///
typedef struct _cef_keyboard_handler_t {
  ///
  // Base structure.
  ///
  cef_base_ref_counted_t base;

  ///
  // Called before a keyboard event is sent to the renderer. |event| contains
  // information about the keyboard event. |os_event| is the operating system
  // event message, if any. Return true (1) if the event was handled or false
  // (0) otherwise. If the event will be handled in on_key_event() as a keyboard
  // shortcut set |is_keyboard_shortcut| to true (1) and return false (0).
  ///
  int(CEF_CALLBACK* on_pre_key_event)(struct _cef_keyboard_handler_t* self,
                                      struct _cef_browser_t* browser,
                                      const struct _cef_key_event_t* event,
                                      cef_event_handle_t os_event,
                                      int* is_keyboard_shortcut);

  ///
  // Called after the renderer and JavaScript in the page has had a chance to
  // handle the event. |event| contains information about the keyboard event.
  // |os_event| is the operating system event message, if any. Return true (1)
  // if the keyboard event was handled or false (0) otherwise.
  ///
  int(CEF_CALLBACK* on_key_event)(struct _cef_keyboard_handler_t* self,
                                  struct _cef_browser_t* browser,
                                  const struct _cef_key_event_t* event,
                                  cef_event_handle_t os_event);
} cef_keyboard_handler_t;

#ifdef __cplusplus
}
#endif

#endif  // CEF_INCLUDE_CAPI_CEF_KEYBOARD_HANDLER_CAPI_H_
