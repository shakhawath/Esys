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

#ifndef __VECTORTRIANGLEFIELDMASTER_H
#define __VECTORTRIANGLEFIELDMASTER_H

//--- project includes ---
#include "FieldMaster.h"
#include "vec3.h"

//--- STL includes ---
#include <map>
using std::map;

/*!
  \class VectorTriangleFieldMaster
  \brief Master part of a vector field which is defined on the triangles in a given triangle mesh

  \author Steffen Abe
  $Revision$
  $Date$
*/
class VectorTriangleFieldMaster :  public AFieldMaster
{
 protected:
  map<int,Vec3> m_data; // id,value

  virtual void writeAsDX();
  virtual void writeAsRAW();
  virtual void writeAsSUM(){};
  virtual void writeAsMAX(){};
  virtual void writeAsRAW_SERIES(){};

  void collectFull();
  void collectFullDX();
  
 public:
  VectorTriangleFieldMaster(TML_Comm*,const string&,const string&,const string&,const string&,int,int,int);
  ~VectorTriangleFieldMaster();
  
  virtual void collect();
  virtual void write();
};

#endif //__VECTORTRIANGLEFIELDMASTER_H
