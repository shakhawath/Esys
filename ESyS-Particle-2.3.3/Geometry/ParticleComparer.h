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


#ifndef ESYS_LSMPARTICLECOMPARER_H
#define ESYS_LSMPARTICLECOMPARER_H

namespace esys
{
  namespace lsm
  {
    template <typename TmplParticle>
    class ParticleComparer
    {
    public:
      typedef TmplParticle Particle;
      ParticleComparer(const Particle &p);
      
      bool operator()(const Particle &p1, const Particle &p2) const;
      
      bool operator()(const Particle *p1, const Particle *p2) const;

    private:
      const Particle *m_pParticle;
    };
  }
}

#include "Geometry/ParticleComparer.hpp"

#endif
