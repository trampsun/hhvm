/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010-2013 Facebook, Inc. (http://www.facebook.com)     |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef incl_HPHP_EXT_ASIO_STATIC_WAIT_HANDLE_H_
#define incl_HPHP_EXT_ASIO_STATIC_WAIT_HANDLE_H_

#include "hphp/runtime/base/base-includes.h"
#include "hphp/runtime/ext/asio/wait_handle.h"

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
// class StaticWaitHandle

/**
 * A static wait handle is a wait handle that is statically finished. The result
 * of the operation is always available and waiting for the wait handle finishes
 * immediately.
 */
FORWARD_DECLARE_CLASS(StaticWaitHandle);
class c_StaticWaitHandle : public c_WaitHandle {
 public:
  DECLARE_CLASS_NO_SWEEP(StaticWaitHandle)

  explicit c_StaticWaitHandle(Class* cls = c_StaticWaitHandle::classof())
    : c_WaitHandle(cls)
  {}
  ~c_StaticWaitHandle() {}

  void t___construct();
};

///////////////////////////////////////////////////////////////////////////////
}

#endif // incl_HPHP_EXT_ASIO_STATIC_WAIT_HANDLE_H_
