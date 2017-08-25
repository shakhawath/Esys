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


#include "Tools/StressCalculator/Contact.h"

namespace esys
{
  namespace lsm
  {
    bool ParticleData::s_is3d = true;
    const double ParticleData::FOUR_THIRDS_PI = ((4.0/3.0)*M_PIl);
  }
}

