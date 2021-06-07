// Copyright (C) 2007 by Cristóbal Carnero Liñán
// grendel.ccl@gmail.com
//
// Copyright (C) 2013 by Fabrice de Gans for ProViSys Engineering
// fabrice.degans@gmail.com
//
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

#ifndef _CVB2_INCLUDE_CVB_BOUNDARY_H
#define _CVB2_INCLUDE_CVB_BOUNDARY_H

#include <list>

#include <opencv2/core/types.hpp>

#include "cvb_defines.h"

namespace cvb2 {

// Represents a Blob boundary. A Boundary is made of a starting point and a
// series of Directions that represent steps from the starting point.
// An empty Boundary is expressed as a Boundary with no |directions|.
struct CVB2_PUBLIC Boundary {
  enum class Direction {
    up = 0,
    up_right = 1,
    right = 2,
    down_right = 3,
    down = 4,
    down_left = 5,
    left = 6,
    up_left = 7,
  };

  const cv::Point starting_point;
  const std::list<Direction> directions;
};

}  // namespace cvb2

#endif /* _CVB2_INCLUDE_CVB_BOUNDARY_H */
