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


#ifndef ESYS_LSMRUNNABLE_H
#define ESYS_LSMRUNNABLE_H

#include <boost/shared_ptr.hpp>

namespace esys
{
  namespace lsm
  {
    class Runnable
    {
    public:
      typedef boost::shared_ptr<Runnable> Ptr;
      virtual void run() = 0;
    };
  }
}

#endif
