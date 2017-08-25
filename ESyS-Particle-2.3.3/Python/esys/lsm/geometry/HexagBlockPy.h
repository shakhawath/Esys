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


#ifndef ESYS_LSMHEXAGBLOCKPY_H
#define ESYS_LSMHEXAGBLOCKPY_H

#include "Geometry/ClosePackOrientation.h"
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
    class HexagBlockPy : public SimpleSphereCollectionPy
    {
    public:
      HexagBlockPy();

      HexagBlockPy(
        const boost::python::list &dimCount,
        double radius,
        const ClosePackOrientation &orientation
      );
    private:
    };

    void exportHexagBlock();
  }
}

#endif
