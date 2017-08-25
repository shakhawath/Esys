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

#ifndef ESYS_LSMTRIPLET_H
#define ESYS_LSMTRIPLET_H

#include <boost/tuple/tuple.hpp>

namespace esys
{
  namespace lsm
  {
    template <typename T1, typename T2, typename T3>
    class triplet : public boost::tuple<T1,T2,T3>
    {
    public:
      typedef boost::tuple<T1,T2,T3> inherited;
      inline triplet() : inherited()
      {
      }

      inline triplet(const T1 &t1, const T2 &t2, const T3 &t3)
        : inherited(t1,t2,t3)
      {
      }

      inline triplet(const triplet &trip)
        : inherited(trip)
      {
      }

      inline triplet &operator=(const triplet &trip)
      {
        inherited::operator=(trip);
        return *this;
      }
    };
  }
}

#endif
