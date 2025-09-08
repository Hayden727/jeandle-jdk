/*
 * Copyright (c) 2025, the Jeandle-JDK Authors. All Rights Reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 */

#ifndef CPU_AARCH64_JEANDLEREGISTER_AARCH64_HPP
#define CPU_AARCH64_JEANDLEREGISTER_AARCH64_HPP

#include "utilities/debug.hpp"
#include "register_aarch64.hpp"

class JeandleRegister : public AllStatic {
public:
  static const char* get_stack_pointer() {
    return sp->name();
  }

  static const char* get_current_thread_pointer() {
    // rthread is x28 on aarch64
    return "x28";
  }
};

#endif // CPU_AARCH64_JEANDLEREGISTER_AARCH64_HPP
