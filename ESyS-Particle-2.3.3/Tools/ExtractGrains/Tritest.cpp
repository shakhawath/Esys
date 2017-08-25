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

#include "Triangle2d.h"
#include "../../Foundation/vec3.h"
#include <iostream>

using namespace std;

int main(int argc,char** argv)
{
  Triangle2D T(Vec3(0.0,1.0,0.0),Vec3(1.5,2.0,0.0),Vec3(2.0,0.0,0.0),1);

  cout << "isIn: " << T.isIn(Vec3(1.1,0.8,0.0)) << endl;

  return 0;
}
