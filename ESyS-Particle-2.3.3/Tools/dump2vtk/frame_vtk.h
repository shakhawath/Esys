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

#ifndef __FRAME_VTK_H
#define __FRAME_VTK_H

// -- STL includes --
#include <string>

using std::string;

void do_single_frame_vtk(const string&,const string&,int,bool,const string&,bool,double);
void do_single_frame_vtk_r(const string&,const string&,int,bool,const string&,bool,double,bool,const string&,bool,bool);
void do_single_frame_sliced_vtk(const string&,const string&,int,bool,const string&,double,double);
void do_single_frame_sliced_vtk_r(const string&,const string&,int,bool,const string&,double,double);
void do_single_frame_vtk_single_r(const string&,const string&,int,int,bool,bool,double);
void writeMeshFile(const string&,const string&,int);

#endif // __FRAME_H
