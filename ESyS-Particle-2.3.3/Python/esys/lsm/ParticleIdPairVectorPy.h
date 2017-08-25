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

#ifndef ESYS_LSMPARTICLEIDPAIRVECTORPY_H
#define ESYS_LSMPARTICLEIDPAIRVECTORPY_H

#include <Python/esys/lsm/util/VectorPy.h>
#include <Python/esys/lsm/ParticleIdPairPy.h>

namespace esys
{
  namespace lsm
  {
    typedef VectorPy<ParticleIdPairPy> ParticleIdPairVectorPy;

    void exportParticleIdPairVector();
  }
}

#endif
