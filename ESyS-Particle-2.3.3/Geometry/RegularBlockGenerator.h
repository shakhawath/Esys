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


#ifndef ESYS_LSMREGULARBLOCKGENERATOR_H
#define ESYS_LSMREGULARBLOCKGENERATOR_H

#include <Geometry/BlockGenerator.h>

namespace esys
{
  namespace lsm
  {
    typedef std::vector<bool> BoolVector;
    /**
     *
     */
    class RegularBlockGenerator : public BlockGenerator
    {
    public:
      RegularBlockGenerator(
        NTable            &nTable,
        ParticlePool      &particlePool,
        const BoundingBox &bBox,
        const BoolVector  &periodicDimensions,
        double            tolerance,
        double            sphereRadius
      );

      virtual ~RegularBlockGenerator();

      virtual double getRadius() const;
      
      virtual double getGridRadius() const;

      virtual void generate();

    private:
      double      m_radius;
    };
  }
}

#endif
