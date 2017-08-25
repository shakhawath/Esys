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
#ifndef __EMESH2DINTERACTION_H
#define __EMESH2DINTERACTION_H

// --- project includes ---
#include "Model/EEdge2DInteraction.h"
#include "Model/ECorner2DInteraction.h"
#include "Model/ETriMeshIP.h"

struct EMesh2DInteraction
{
  typedef ETriMeshIP ParameterType;
  typedef EEdge2DInteraction EdgeIntType;
  typedef ECorner2DInteraction CornerIntType;
};

#endif //__EMESH2DINTERACTION_H
