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

#include <mpi.h>
#include "RotThermElasticInteractionGroup.h"
#include "console.h"
//----------------------------------------
//    CElasticIGP member functions 
//----------------------------------------

void CRotThermElasticIGP::packInto(CVarMPIBuffer* B) const
{
  AIGParam::packInto(B);
  B->append(m_kr);
  B->append(diffusivity);
}

CRotThermElasticIGP* extractRotThermElasticIGP(AMPIBuffer* B)
{
  CRotThermElasticIGP* res=new CRotThermElasticIGP;
  B->pop_int();
  res->setName(B->pop_string());
  res->setSpringConst(B->pop_double());
  res->setDiffusivity(B->pop_double());
  return res;
}

/*!
  extract the specific part of  CElasticIGP, i.e. without the type info
*/
CRotThermElasticIGP* extractRotThermElasticIGP_p(AMPIBuffer* B)
{
  CRotThermElasticIGP* res=new CRotThermElasticIGP;
  res->setName(B->pop_string());
  res->setSpringConst(B->pop_double());
  res->setDiffusivity(B->pop_double());
  return res;
}

ostream& operator<<(ostream& ost,const CRotThermElasticIGP& B)
{
  ost << "CRotElasticIGP\n";
  ost << "Spring Constant : " << B.m_kr << endl;
  ost << "Diffusivity : " << B.diffusivity << endl;
  return ost;
}
