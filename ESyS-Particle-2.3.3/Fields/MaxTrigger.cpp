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

#include "Fields/MaxTrigger.h"

#include <iostream>

MaxTrigger::MaxTrigger(double on,double off)
{
  std::cout << "MaxTrigger ( " << on << "," << off << ")" << std::endl;
  m_on_level=on;
  m_off_level=off;
}

bool MaxTrigger::Off(const map<int,Vec3>& data)
{
  bool res=false;
  
  map<int,Vec3>::const_iterator iter=data.begin();
  while ((iter!=data.end()) && !res){
    double m=iter->second.norm();
    //    std::cout << "trigger : data,m,m_on " << iter->second << " " << m << " " << m_on_level << std::endl;
    res=(m>m_off_level);
    iter++;
  }
  return !res;
}

bool MaxTrigger::On(const map<int,Vec3>& data)
{
  bool res=false;

  map<int,Vec3>::const_iterator iter=data.begin();
  while ((iter!=data.end()) && !res){
    double m=iter->second.norm();
    //    std::cout << "trigger : data,m,m_on " << iter->second << " " << m << " " << m_on_level << std::endl;
    res=(m>m_on_level);
    iter++;
  }

  return res;
}
