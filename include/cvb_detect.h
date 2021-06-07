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

#ifndef _CVB2_INCLUDE_CVB_DETECT_H
#define _CVB2_INCLUDE_CVB_DETECT_H

#include <list>

#include <opencv2/core/types.hpp>

#include "cvb_blob.h"
#include "cvb_defines.h"

namespace cvb2 {

struct CVB2_PUBLIC DetectOptions {
  // The detection algorithm for DetectBlobs(). kNoBoundary is faster than
  // kWithBoundary but the boundary for the Blobs will not be computed.
  enum class CVB2_PUBLIC Mode {
    kNoBoundary = 0,
    kWithBoundary,
  };

  Mode mode = Mode::kNoBoundary;
};

// Detects Blobs within |image| using |options|.
CVB2_PUBLIC
std::list<Blob> DetectBlobs(const cv::Mat& img, const DetectOptions& options);

}  // namespace cvb2

#endif /* _CVB2_INCLUDE_CVB_DETECT_H */
