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


#ifndef ESYS_LSM_BPUPYTHONITERITERATOR_H
#define ESYS_LSM_BPUPYTHONITERITERATOR_H

#include <boost/python.hpp>
#include <patchlevel.h>

namespace esys
{
  namespace lsm
  {
    namespace bpu
    {
      template <typename TmplExtractType>
      class PythonIterIterator
      {
      public:
        typedef TmplExtractType value_type;
        PythonIterIterator(boost::python::object &iteratable);
  
        bool hasNext() const;
  
        value_type next();
  
        void update();
  
      private:
        bool                  m_hasNext;
        boost::python::object m_next;
        boost::python::object m_iter;
      };
    }
  }
}

#include "Python/BoostPythonUtil/PythonIterIterator.hpp"

#endif
