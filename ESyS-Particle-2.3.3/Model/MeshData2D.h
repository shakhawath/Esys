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

#ifndef __MESHDATA2D_H
#define __MESHDATA2D_H

// -- IO includes --
#include <iostream>
using std::istream;

/*!
  \struct MeshNodeData2D
  \brief data describing one node(point) in a 2D "mesh"

  \author Steffen Abe
  $Date$
  $Revision$  
*/
struct MeshNodeData2D
{
  int id;
  int tag;
  double x,y;

  void read(istream&);
};

/*!
  \struct MeshEdgeData2D
  \brief data describing one Edge  in a 2D "mesh"

  \author Steffen Abe
  $Date$
  $Revision$  
*/
struct MeshEdgeData2D
{
  int id,tag;
  int p1,p2;

  void read(istream&);
};

#endif // __MESHDATA2D_H
