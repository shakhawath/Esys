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

#include "FitPlane.h"

// --- project includes ---
#include "Geometry/PointCloud.h"

Plane3D fitPlaneToFracture(const vector<FracFrame::fdata>& fd)
{
  PointCloud PC;

  for(vector<FracFrame::fdata>::const_iterator iter=fd.begin();
      iter!=fd.end();
      iter++){
    PC.addPoint(iter->pos);
  }

  return PC.getFitPlane();
}
