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


#include "Parallel/CheckPointable.h"

namespace esys
{
  namespace lsm
  {
    CheckPointable::CheckPointable()
    {
    }

    CheckPointable::~CheckPointable()
    {
    }

    void CheckPointable::saveSnapShotData(std::ostream &oStream)
    { 
      oStream << "not implemented" << std::endl;
    }
  }
}
