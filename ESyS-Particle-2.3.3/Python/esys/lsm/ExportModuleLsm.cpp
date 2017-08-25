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

#include <mpi.h>
#include <boost/python.hpp>
#include "Python/esys/lsm/ParticlePy.h"
#include "Python/esys/lsm/RotParticlePy.h"
#include "Python/esys/lsm/RotParticleViPy.h"
#include "Python/esys/lsm/RotThermalParticlePy.h"
#include "Python/esys/lsm/ParticleFieldSaverPrmsPy.h"
#include "Python/esys/lsm/InteractionFieldSaverPrmsPy.h"
#include "Python/esys/lsm/WallFieldSaverPrmsPy.h"
#include "Python/esys/lsm/TriangleFieldSaverPrmsPy.h"
#include "Python/esys/lsm/FieldSaverPrmsPy.h"
#include "Python/esys/lsm/LsmMpiPy.h"
#include "Python/esys/lsm/InteractionGroupPy.h"
#include "Python/esys/lsm/ParticleIdPairPy.h"
#include "Python/esys/lsm/ParticleIdPairSetPy.h"
#include "Python/esys/lsm/ParticleIdPairVectorPy.h"
#include "Python/esys/lsm/BondInteractionGroupPy.h"

BOOST_PYTHON_MODULE(LsmPy)
{
  esys::lsm::exportFieldSaverPrms();
  esys::lsm::exportParticleFieldSaverPrms();
  esys::lsm::exportInteractionFieldSaverPrms();
  esys::lsm::exportWallFieldSaverPrms();
  esys::lsm::exportTriangleFieldSaverPrms();
  esys::lsm::exportParticle();
  esys::lsm::exportRotParticle();
  esys::lsm::exportRotParticleVi();
  esys::lsm::exportRotThermalParticle();
  esys::lsm::exportInteractionGroup();
  esys::lsm::exportParticleIdPair();
  esys::lsm::exportParticleIdPairSet();
  esys::lsm::exportParticleIdPairVector();
  esys::lsm::exportBondInteractionGroup();
  esys::lsm::exportLsm();
}
