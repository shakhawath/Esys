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


#ifndef ESYS_LSMPARTICLEPY_H
#define ESYS_LSMPARTICLEPY_H

#include "Model/Particle.h"
#include "Python/esys/lsm/util/Vec3Py.h"

namespace esys
{
  namespace lsm
  {
    class ParticlePy : public CParticle
    {
    public:
      ParticlePy();

      ParticlePy(int id, const Vec3Py &posn, double radius, double mass);

      ParticlePy(const ParticlePy &p);
      
      ParticlePy(const CParticle &p);

      Vec3Py getPosn() const;
      void setPosn(const Vec3Py &posn);

      Vec3Py getVelocity() const;
      void setVelocity(const Vec3Py &vel);

      Vec3Py getInitialPosn() const;

      Vec3Py getAcceleration() const;
      void setAcceleration(const Vec3Py &accel);

      Vec3Py getForce() const;
      void setForce(const Vec3Py &force);
    };

    void exportParticle();
  }
}
#endif
