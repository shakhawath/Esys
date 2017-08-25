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

#ifndef ESYS_LSMELASTICTRIMESHPRMSPY_H
#define ESYS_LSMELASTICTRIMESHPRMSPY_H

#include "Model/ETriMeshIP.h"

#include <string>

using std::string; 

namespace esys
{
  namespace lsm
  {
    /*!
      \class NRotElasticTriMeshPrmsPy
      \brief class for elastic triangular mesh interactions in python interface
    */
    class NRotElasticTriMeshPrmsPy : public ETriMeshIP
    {
    public:
      NRotElasticTriMeshPrmsPy(
        const string &interactionName,
        const string &meshName,
        double        normalK
      );
    };
    
    void exportElasticTriMeshPrms();
  } // namespace lsm
} // namespace esys

#endif //ESYS_LSMELASTICTRIMESHPRMSPY_H
