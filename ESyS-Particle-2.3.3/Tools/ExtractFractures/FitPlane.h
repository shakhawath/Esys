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

#ifndef __FIT_PLANE_H
#define __FIT_PLANE_H

// --- project includes ---
#include "fracframe.h"
#include "Geometry/Plane3D.h"

// --- STL includes ---
#include <vector>

using std::vector;

Plane3D fitPlaneToFracture(const vector<FracFrame::fdata>&);

#endif // __FIT_PLANE_H
