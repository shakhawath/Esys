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

#ifndef __PFCC_H
#define __PFCC_H

// --- project includes ---
#include "../../Foundation/vec3.h"

//--- STL includes ---
#include <utility>
using std::pair;

void pfc_convert(const string&,const string&,const Vec3&,const Vec3&,int,int,int,double);
pair<Vec3,Vec3> read_bbx(const string&);

#endif //__PFCC_H
