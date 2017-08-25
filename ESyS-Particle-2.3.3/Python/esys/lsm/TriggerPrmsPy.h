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

#ifndef __ESYS_TRIGGERPRMSPY_H
#define __ESYS_TRIGGERPRMSPY_H

//--- STL includes ---
#include <string>

//--- Boost includes ---
#include <boost/python.hpp>

//--- Proejct includes ---
#include "Fields/MaxTrigger.h"

namespace esys
{
  namespace lsm
  {
    class MaxTriggerPrmsPy : public MaxTrigParams
    {
    public:
      MaxTriggerPrmsPy(double,double,int,int);
    };

    void exportTriggerPrms();
  } // namespace lsm
} // namespace esys

#endif // __ESYS_TRIGGERPRMSPY_H
