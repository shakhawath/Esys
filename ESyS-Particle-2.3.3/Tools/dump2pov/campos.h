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

#ifndef __CAMPOS_H
#define __CAMPOS_H

// -- Project includes --
#include "../../Foundation/vec3.h"

// -- STL includes --
#include <map>
#include <utility>
#include <string>

using std::map;
using std::pair;
using std::string;

class CameraPos
{
 private:
  map<int,pair<Vec3,Vec3> > m_posmap;

 public:
  CameraPos(const string&);

  pair<Vec3,Vec3> getCamPos(int);
};

#endif //__CAMPOS_H
