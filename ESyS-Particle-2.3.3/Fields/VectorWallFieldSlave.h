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

#ifndef __VECTORWALLFIELDSLAVE_H
#define __VECTORWALLFIELDSLAVE_H

// --- TML includes ---
#include "tml/comm/comm.h"
#include "Fields/WallFieldSlave.h"

/*!
  \class VectorWallFieldSlave
  \brief Class for slave part of vector valued field defined on a Wall

  $Revision$
  $Date$
*/
template <typename WallType>
class VectorWallFieldSlave : public AWallFieldSlave
{
 protected:
  typename WallType::VectorFieldFunction m_rdf;

 public:
  VectorWallFieldSlave(TML_Comm*,typename WallType::VectorFieldFunction);
  virtual void sendData();
};

#include "VectorWallFieldSlave.hpp"

#endif // __VECTORWALLFIELDSLAVE_H
