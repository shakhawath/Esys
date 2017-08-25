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


#ifndef ESYS_LSMLMPARTICLEADDER_H
#define ESYS_LSMLMPARTICLEADDER_H

#include "Parallel/LatticeMaster.h"

#include <boost/python.hpp>

namespace esys
{
  namespace lsm
  {
    template <class TmplMplVector, class TmplLsmParticle>
    class LmParticleAdder
    {
      typedef TmplMplVector   MplVector;
      typedef TmplLsmParticle LsmParticle;
    public:

      void addParticles(boost::python::object &iterable, CLatticeMaster &lm);
    };
  }
}

#include "Python/esys/lsm/LmParticleAdder.hpp"

#endif
