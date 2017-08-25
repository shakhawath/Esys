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

#ifndef __ETRIANGLEINTERACTION_H
#define __ETRIANGLEINTERACTION_H

// -- Project includes --
#include "Foundation/vec3.h"
#include "Geometry/Triangle.h"
#include "Model/Particle.h"
#include "Model/ETriMeshIP.h"

/*!
  \class ETriangleInteraction
  \brief unbonded elastic interaction between a Triangle and a particle

  \author Steffen Abe
  $Revision$
  $Date$
*/
class ETriangleInteraction
{
 private:
  CParticle *m_p;
  Triangle *m_t;
  double m_k;
   /*!
    flag showing if particle is in the inner area of the
    local particle array - needed for global force summation
  */
  bool m_inner_flag; 

 public:
  typedef ETriMeshIP ParameterType;

  ETriangleInteraction();
  ETriangleInteraction(CParticle*,Triangle*,ETriMeshIP,bool iflag=true);
  virtual ~ETriangleInteraction();

  bool isInner(){return m_inner_flag;};
  virtual void calcForces();
};
#endif //__ETRIANGLEINTERACTION_H
