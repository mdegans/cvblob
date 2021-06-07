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

#include "cvb_detect.h"
#include "cvb_defines.h"

namespace cvb2 {

CVB2_PUBLIC
std::list<Blob> DetectBlobs(const cv::Mat& img, const DetectOptions& options) {
  (void)img;
  (void)options;
  return {};
}

}  // namespace cvb2