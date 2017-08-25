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


#ifndef ESYS_LSMCHECKPOINTABLE_H
#define ESYS_LSMCHECKPOINTABLE_H

#include <iostream>

namespace esys
{
  namespace lsm
  {
    /**
     * Interface for objects capable of saving/loading checkpoint data.
     */
    class CheckPointable
    {
    public:
      CheckPointable();

      virtual ~CheckPointable();

      virtual void saveCheckPointData(std::ostream &oStream) = 0;
      virtual void saveSnapShotData(std::ostream &oStream); 

      virtual void loadCheckPointData(std::istream &iStream) = 0;
    };
  }
}

#endif
