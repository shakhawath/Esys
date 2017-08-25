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


#ifndef ESYS_LSMGRAINPY_H
#define ESYS_LSMGRAINPY_H

#include "Geometry/Grain.h"
#include "Python/esys/lsm/geometry/ParticleCollectionPy.h"

namespace boost
{
  namespace python
  {
    class tuple;
  }
}
namespace esys
{
  namespace lsm
  {
    class GrainPy : public Grain<ParticleCollectionPy>
    {
    public:
      typedef Grain<ParticleCollectionPy> Inherited;
      typedef Inherited::ParticlePoolPtr  ParticlePoolPtr;
      typedef Inherited::Id               Id;

      GrainPy();

      GrainPy(Id id);

      GrainPy(ParticlePoolPtr particlePoolPtr);

      GrainPy(Id id, ParticlePoolPtr particlePoolPtr);

      boost::python::tuple
      getinitargs();

    private:
    };

    void exportGrain();
  }
}

#endif
