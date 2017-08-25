/////////////////////////////////////////////////////////////
//                                                         //
// Copyright (c) 2003-2014 by The University of Queensland //
// Centre for Geoscience Computing                         //
// http://earth.uq.edu.au/centre-geoscience-computing      //
//                                                         //
// Primary Business: Brisbane, Queensland, Australia       //
// Licensed under the Open Software License version 3.0    //
// http://www.opensource.org/licenses/osl-3.0.php          //
//                                                         //
/////////////////////////////////////////////////////////////

#ifndef __POINTCLOUD_H
#define __POINTCLOUD_H

// --- project includes ---
#include "Foundation/vec3.h"
#include "Geometry/Plane3D.h"

// --- STL includes ---
#include <vector>

using std::vector;

/*!
  \class PointCloud
  \brief A class representing a cloud.of points

  \author Steffen Abe
  $Revision$
  $Date$
*/
class PointCloud
{
 private:
  vector<Vec3> m_points;

 public:
  PointCloud();

  Vec3 getCenter();
  void addPoint(const Vec3&);
  Plane3D getFitPlane();
};

#endif // __POINTCLOUD_H
