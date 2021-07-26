/**
 * @file types.h
 * @copyright Copyright (c) 2021, Southwest Research Institute
 *
 * @par License
 * Software License Agreement (Apache License)
 * @par
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * http://www.apache.org/licenses/LICENSE-2.0
 * @par
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#pragma once

#include <vector>

#include <Eigen/Geometry>

namespace noether_tpp
{
/** @brief A point on a surface that makes up part of a path */
using ToolPathWaypoint = Eigen::Isometry3d;

/** @brief A set of contiguous waypoints that lie on the same line created by a "slice" through a
 * surface */
using ToolPathSegment = std::vector<Eigen::Isometry3d, Eigen::aligned_allocator<Eigen::Isometry3d>>;

/** @brief A set of tool path segments that lie on the same line created by a tool path "slice",
 * but are not connected (e.g. due to a hole in the mesh) */
using ToolPath = std::vector<ToolPathSegment>;

/** @brief A set of tool paths (i.e. rasters) generated by various slices through a surface */
using ToolPaths = std::vector<ToolPath>;

}  // namespace noether_tpp
