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

#ifndef ESYS_LSMTRIANGLEFIELDSAVERPRMSPY_H
#define ESYS_LSMTRIANGLEFIELDSAVERPRMSPY_H

#include "Python/esys/lsm/FieldSaverPrmsPy.h"

#include <boost/python.hpp>
#include <string>
#include <vector>

namespace esys
{
  namespace lsm
  {
    class TriangleScalarFieldSaverPrmsPy : public FieldSaverPrmsPy
    { 
    public:
      TriangleScalarFieldSaverPrmsPy(const std::string&,const std::string&,const std::string&, const std::string&,int,int,int);
      const std::string& getMeshName() const {return m_MeshName;}

    private:
      std::string m_MeshName;

    };

    class TriangleVectorFieldSaverPrmsPy : public FieldSaverPrmsPy
    { 
    public:
      TriangleVectorFieldSaverPrmsPy(const std::string&,const std::string&,const std::string&, const std::string&,int,int,int);
      const std::string& getMeshName() const {return m_MeshName;}


    private:
      std::string m_MeshName;

    };

    void exportTriangleFieldSaverPrms();
  } // namespace lsm
} // namespace esys

#endif // ESYS_LSMTRIANGLEFIELDSAVERPRMSPY_H

