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

#include "ETriangleInteraction.h"

// -- STL includes --
#include <utility>
using std::pair;

/*!
  default constructor
*/
ETriangleInteraction::ETriangleInteraction()
{
  m_p=NULL;
  m_t=NULL;
  m_k=0.0;
  m_inner_flag=false;
}

/*!
  constructor with parameters

  \param p
  \param t
  \param param
  \param iflag
*/
ETriangleInteraction::ETriangleInteraction(CParticle* p,Triangle* t,ETriMeshIP param,bool iflag)
{
  m_p=p;
  m_t=t;
  // scale elastic param
  double f=1.0;
  if(!CParticle::getDo2dCalculations()){
    f*=this->m_p->getRad();
  }
  m_k=f*param.k;
  m_inner_flag=iflag;
}

/*!
  destructor
*/
ETriangleInteraction::~ETriangleInteraction()
{}

/*!
  calculate & apply forces
*/
void ETriangleInteraction::calcForces()
{
  pair<bool,double> dist=m_t->dist(m_p->getPos());
  if(dist.first && (dist.second<m_p->getRad())){
    Vec3 force=m_k*(m_p->getRad()-dist.second)*m_t->getNormal();
    Vec3 pos=m_p->getPos()-dist.second*m_t->getNormal();
    m_p->applyForce(force,pos);
    if(m_inner_flag) m_t->applyForce(-1.0*force);
  }
}
