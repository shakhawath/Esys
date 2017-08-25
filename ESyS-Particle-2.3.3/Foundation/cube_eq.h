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

#ifndef __CUBE_EQ_H
#define __CUBE_EQ_H


// --- STL includes ---
#include <set>

using std::set;

/*!
  \class CubicEquation 
  \brief A class for a cubic equation. Used for eigenvalue calculation on 3D matrices

  \author Steffen Abe
  $Revision$
  $Date$
*/
class CubicEquation
{
 private:
  double m_a,m_b,m_c;

  double bisect(double,double,double);
  double f(double);

 public:
  CubicEquation(double,double,double);

  set<double> getRealRoots(double);
};

#endif //__CUBE_EQ_H
