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


#ifndef ESYS_LSMCIRCLEBOXVOLCALCULATOR_H
#define ESYS_LSMCIRCLEBOXVOLCALCULATOR_H

#include "Foundation/vec3.h"
#include "Geometry/IntersectionVolCalculator.h"

namespace esys
{
  namespace lsm
  {
    /**
     * Calculates the area of intersection between a rectangle and
     * a circle.
     */
    class CircleBoxVolCalculator : public impl::IntersectionVolCalculator<2, Vec3>
    {
    public:
      typedef impl::IntersectionVolCalculator<2, Vec3> Inherited;
      typedef Inherited::BasicSphere                   Sphere;
      typedef Inherited::BasicBox                      Box;
      CircleBoxVolCalculator(
        const Box &box
      ) : Inherited(box)
      {
      }
      
      double getVolume(const Sphere &sphere)
      {
        return Inherited::getVolume(sphere);
      }

    private:
    };
  }
}
#endif
