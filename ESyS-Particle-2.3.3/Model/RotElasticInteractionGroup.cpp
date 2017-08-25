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

#include "RotElasticInteractionGroup.h"
#include "console.h"
//----------------------------------------
//    CElasticIGP member functions 
//----------------------------------------

void CRotElasticIGP::packInto(CVarMPIBuffer* B) const
{
  AIGParam::packInto(B);
  B->append(m_kr);
}

CRotElasticIGP* extractRotElasticIGP(AMPIBuffer* B)
{
  CRotElasticIGP* res=new CRotElasticIGP;
  B->pop_int();
  res->setName(B->pop_string());
  res->setNormalSpringConst(B->pop_double());
  return res;
}

/*!
  extract the specific part of CElasticIGP, i.e. without the type info
*/
CRotElasticIGP* extractRotElasticIGP_p(AMPIBuffer* B)
{
  CRotElasticIGP* res=new CRotElasticIGP;
  res->setName(B->pop_string());
  res->setNormalSpringConst(B->pop_double());
  return res;
}

ostream& operator<<(ostream& ost,const CRotElasticIGP& B)
{
  ost << "CRotElasticIGP\n";
  ost << "Normal Spring Constant : " << B.m_kr << endl;
  return ost;
}
