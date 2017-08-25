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


#ifndef ESYS_LSMSIMPLEBLOCKPY_H
#define ESYS_LSMSIMPLEBLOCKPY_H

#include "Python/esys/lsm/geometry/SimpleSphereCollectionPy.h"

namespace boost
{
  namespace python
  {
    class list;
  }
}

namespace esys
{
  namespace lsm
  {
    class SimpleBlockPy : public SimpleSphereCollectionPy
    {
    public:
      SimpleBlockPy();
      SimpleBlockPy(const boost::python::list &dimCount, double radius=0.5);
    private:
    };

    void exportSimpleBlock();
  }
}

#endif
