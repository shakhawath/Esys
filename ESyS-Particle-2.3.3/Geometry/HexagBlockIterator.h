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


#ifndef ESYS_LSMHEXAGBLOCKITERATOR_H
#define ESYS_LSMHEXAGBLOCKITERATOR_H

#include "Foundation/BoundingBox.h"
#include "Foundation/vec3.h"
#include "Geometry/ClosePackIterator.h"
#include "Geometry/Vec3L.h"

namespace esys
{
  namespace lsm
  {
    
    /**
     * Class for iterating over the centre-points of spheres arranged
     * in a hexagonal-close-packed block.
     */
    class HexagBlockIterator : public ClosePackIterator
    {
    public:

      /**
       * Creates default empty iterator.
       */
      inline HexagBlockIterator();

      /**
       * Creates an iterator which will iterate over numI*numJ*numK
       * centre points of spheres with radius sphereRadius.
       * @param numI number of spheres in the i direction.
       * @param numJ number of spheres in the j direction.
       * @param numK number of spheres in the k direction.
       * @param sphereRadius radius of spheres in the packing.
       * @param orientation specifies the axis alignment of layers.
       */
      inline HexagBlockIterator(
        int numI,
        int numJ,
        int numK,
        double sphereRadius,
        ClosePackOrientation orientation = DEFAULT_ORIENT
      );
    };
  }
}

#include "Geometry/HexagBlockIterator.hpp"

#endif
