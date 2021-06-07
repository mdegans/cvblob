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

#ifndef _CVB2_INCLUDE_CVB_BLOB_H
#define _CVB2_INCLUDE_CVB_BLOB_H

#include <opencv2/core/types.hpp>

#include "cvb_boundary.h"
#include "cvb_defines.h"

namespace cvb2 {

// Represents a blob within a picture. A blob is an area of a picture that
// differs in brightness or color compared to surrounding regions.
// Depending on the detection algorithm used, |boundary| may be empty.
struct CVB2_PUBLIC Blob {
  const Boundary boundary;
  const double area;
  const double perimeter;
  const double circularity;
  const cv::Point centroid;
};

}  // namespace cvb2

#endif /* _CVB2_INCLUDE_CVB_BLOB_H */
