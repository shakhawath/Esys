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

#include <boost/version.hpp>
#include <boost/python.hpp>
#include <algorithm>
#include "Python/esys/lsm/ParticleIdPairVectorPy.h"

namespace esys
{
  namespace lsm
  {
    void exportParticleIdPairVector()
    {
      // Disable autogeneration of C++ signatures (Boost 1.34.0 and higher)
      // for Epydoc which stumbles over indentation in the automatically generated strings.
      boost::python::docstring_options no_autogen(true,false);

      ParticleIdPairVectorPy::exportVector(
        "ParticleIdPairVector",
        "Vector of particle ID pairs."
      );
    }
  }
}
