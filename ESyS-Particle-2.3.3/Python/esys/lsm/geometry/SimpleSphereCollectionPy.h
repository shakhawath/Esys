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

#ifndef ESYS_LSMSIMPLESPHERECOLLECTIONPY_H
#define ESYS_LSMSIMPLESPHERECOLLECTIONPY_H

#include "Foundation/console.h"

#include "Geometry/ParticleCollection.h"
#include "Python/esys/lsm/geometry/IteratorPy.h"
#include "Python/esys/lsm/geometry/SimpleSpherePy.h"
#include "Python/esys/lsm/util/BoundingBoxPy.h"

namespace esys
{
  namespace lsm
  {
    class SimpleSphereCollectionPy : public ParticleCollection<SimpleSpherePy>
    {
    public:
      typedef ParticleCollection<SimpleSpherePy> Inherited;
      typedef Inherited::ParticlePoolPtr         ParticlePoolPtr;
      typedef
        IteratorPy<ParticleCollection<SimpleSpherePy>::ParticleIterator>
        SimpleSphereIteratorPy;
      
      SimpleSphereCollectionPy();

      SimpleSphereCollectionPy(const Inherited &particleCollection);

      SimpleSphereCollectionPy(const SimpleSphereCollectionPy &ssphereCollection);

      SimpleSphereCollectionPy(ParticlePoolPtr particlePoolPtr);

      BoundingBoxPy getParticleBBoxPy() const;

      SimpleSphereIteratorPy getSimpleSphereIteratorPy();

      SimpleSpherePy &createParticlePy(const SimpleSpherePy &p);

      void rotatePy(const Vec3Py &rotation, const Vec3Py &pt);

      void translateByPy(const Vec3Py &translation);

      friend class SimpleSphereCollectionPyPickleSuite;
    private:
    };

    void exportSimpleSphereCollection();
  }
}

#endif
