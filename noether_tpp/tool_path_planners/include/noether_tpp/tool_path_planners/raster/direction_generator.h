/**
 * @file direction_generator.h
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

#include <Eigen/Core>
#include <pcl/PolygonMesh.h>

namespace noether_tpp
{
/**
 * @brief The DirectionGenerator class - Provides a common interface for various methods to
 * generate the direction of raster paths.  The direction generated will move along the line from
 * the first point to the second, then third, etc.
 */
class DirectionGenerator
{
public:
  virtual ~DirectionGenerator() = 0;
  virtual Eigen::Vector3d generate(const pcl::PolygonMesh& mesh) const = 0;
};

}  // namespace noether_tpp