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

#include "DataParticle.h"

DataParticle::DataParticle(const Vec3& pos,const Vec3& initpos,double rad,int id)
{
  m_pos=pos;
  m_initpos=initpos;
  m_rad=rad;
  m_id=id;
}
  
DataParticle::~DataParticle()
{}
