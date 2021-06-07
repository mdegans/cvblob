// Copyright (C) 2021 by Michael de Gans
// mike@mdegans.dev
//
// This file is part of cvBlob.
//
// cvBlob is free software: you can redistribute it and/or modify
// it under the terms of the Lesser GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// cvBlob is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// Lesser GNU General Public License for more details.
//
// You should have received a copy of the Lesser GNU General Public License
// along with cvBlob.  If not, see <https://www.gnu.org/licenses/>.

#ifndef _CVB2_INCLUDE_CVB_DEFINES_H
#define _CVB2_INCLUDE_CVB_DEFINES_H

// clang-format off

#ifdef CVB2_BUILD_SHARED
  #if defined _WIN32 || defined __CYGWIN__
    #define CVB2_PUBLIC __declspec(dllexport)
  #else
    #define CVB2_PUBLIC __attribute__((visibility("default")))
  #endif  // Windows
#else
  #if defined _WIN32 || defined __CYGWIN__
    #define CVB2_PUBLIC __declspec(dllimport)
  #else
    #define CVB2_PUBLIC
  #endif  // Windows
#endif  // CVB2_BUILD_SHARED

// clang-format on 

#endif /* _CVB2_INCLUDE_CVB_DEFINES_H */
