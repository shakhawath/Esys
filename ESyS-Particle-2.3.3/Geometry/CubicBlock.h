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


#ifndef ESYS_LSMCUBICBLOCK_H
#define ESYS_LSMCUBICBLOCK_H

#include "Geometry/SimpleParticle.h"
#include "Geometry/CubicBlockIterator.h"
#include "Geometry/ClosePackBlock.h"

namespace esys
{
  namespace lsm
  {
    template <typename TmplParticle = SimpleParticle>
    class CubicBlock : public ClosePackBlock<CubicBlockIterator,TmplParticle>
    {
    public:
      typedef ClosePackBlock<CubicBlockIterator,TmplParticle> Inherited;
      CubicBlock(
          unsigned int numX,
          unsigned int numY,
          unsigned int numZ,
          double radius = 0.5,
          ClosePackOrientation orientation = DEFAULT_ORIENT
      );

    };
  }
}

#include "Geometry/CubicBlock.hpp"

#endif
