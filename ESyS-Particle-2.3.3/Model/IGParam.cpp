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

#include "Model/IGParam.h"

AIGParam::AIGParam(const std::string &name) : m_name(name)
{
}

AIGParam::~AIGParam()
{
}

void AIGParam::packInto(CVarMPIBuffer* B) const
{
  B->append(m_name.c_str());
}

void AIGParam::setName(const std::string &name)
{
  m_name = name;
}
