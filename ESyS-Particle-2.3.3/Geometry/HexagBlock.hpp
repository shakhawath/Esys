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


#ifndef ESYS_LSMHEXAGBLOCK_HPP
#define ESYS_LSMHEXAGBLOCK_HPP

namespace esys
{
  namespace lsm
  {
    template <typename TmplParticle>
    HexagBlock<TmplParticle>::HexagBlock(
      unsigned int numX,
      unsigned int numY,
      unsigned int numZ,
      double radius,
      ClosePackOrientation orientation
    )
      : Inherited(numX, numY, numZ, radius, orientation)
    {
    }
  }
}

#endif
