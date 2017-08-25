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

#ifndef __FRAME_SILO_H
#define __FRAME_SILO_H

// -- STL includes --
#include <string>

using std::string;

void saveSiloSnap(const string&,const string&,int,bool,const string&,bool);
void saveSiloSnapSliced(const string&,const string&,int,bool,const string&,double,double);


#endif // __FRAME_SILO_H
