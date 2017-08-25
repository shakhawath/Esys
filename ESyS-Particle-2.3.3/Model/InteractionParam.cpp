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

#include "InteractionParam.h"

//--- STL includes ---
#include <utility>
using std::pair;

AIParam::AIParam(const string& s)
{
  m_name=s;
}

AIParam::~AIParam()
{}

double AIParam::getParamByName(const string& s)
{
  return m_data[s];
}

void AIParam::addParameter(const string& s,double d)
{
  m_data.insert(pair<string,double>(s,d));
}
