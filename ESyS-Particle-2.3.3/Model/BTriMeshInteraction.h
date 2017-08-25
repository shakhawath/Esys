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

#ifndef __BTRIMESHINTERACTION_H
#define __BTRIMESHINTERACTION_H

// --- project includes ---
#include "Model/BTriangleInteraction.h"
//#include "Model/BEdgeInteraction.h"
//#include "Model/BCornerInteraction.h"
#include "Model/BTriMeshIP.h"

struct BTriMeshInteraction
{
  typedef BTriMeshIP ParameterType;
  typedef BTriangleInteraction TriIntType;
  //typedef BEdgeInteraction EdgeIntType;
  //typedef BCornerInteraction CornerIntType;

  static string getType(){return "BondedTriMesh";};
};

#endif //__BTRIMESHINTERACTION_H
