#pragma once

#include <noether_tpp/core/tool_path_modifier.h>

namespace noether_tpp
{
/**
 * @brief Creates a tool path modifier that enforces the definition of an edge path on the
 * path generated by a EdgePlanner.  It will enforce uniform segment ordering, uniform loop
 * direction, and ordering of loops by descending loop length.
 * @return
 */
struct DefaultEdgePlannerModifier : public OneTimeToolPathModifier
{
  ToolPaths modify(ToolPaths tool_paths) const override final;
};

/**
 * @brief Creates a modifier that enforces the definition of a raster path on the path generated
 * by a RasterPlanner. It will enforce uniform waypoint orientation, uniform raster direction,
 * and consistent raster ordering.
 * @return
 */
struct DefaultRasterPlannerModifier : public OneTimeToolPathModifier
{
  ToolPaths modify(ToolPaths tool_paths) const override final;
};

}  // namespace noether_tpp
