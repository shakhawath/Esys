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

#ifndef __MESHDATA_H
#define __MESHDATA_H

#include "Foundation/vec3.h"

#include <iostream>

/*!
  Data describing one node(point) in a TriMesh.
*/
struct MeshNodeData
{
  MeshNodeData();
  
  MeshNodeData(int id, const Vec3 &pt, int tag=0);
  
  int id;
  int tag;
  double x,y,z;

  void read(std::istream&);
};

/*!
  Data describing one Triangle  in a TriMesh.
*/
struct MeshTriData
{
  MeshTriData();
  
  MeshTriData(int id, int nodeId0, int nodeId1, int nodeId2, int tag=0);
  
  int id,tag;
  int p1,p2,p3;

  void read(std::istream&);
};


#endif // __MESHDATA_H
