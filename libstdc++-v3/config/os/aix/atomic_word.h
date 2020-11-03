// Low-level type for atomic operations -*- C++ -*-

// Copyright (C) 2004-2015 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/atomic_word.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{ext/atomicity.h}
 */

#ifndef _GLIBCXX_ATOMIC_WORD_H
#define _GLIBCXX_ATOMIC_WORD_H	1

typedef int _Atomic_word;

#ifdef _ARCH_PPC
#define _GLIBCXX_READ_MEM_BARRIER __asm __volatile ("isync":::"memory")
#define _GLIBCXX_WRITE_MEM_BARRIER __asm __volatile ("sync":::"memory")
#else
#define _GLIBCXX_READ_MEM_BARRIER __asm __volatile ("":::"memory")
#define _GLIBCXX_WRITE_MEM_BARRIER __asm __volatile ("":::"memory")
#endif

#endif
