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

#ifndef __COMM_WORLD_H
#define __COMM_WORLD_H

//--- MPI ---
#include <mpi.h>

//--- TML ---
#include "tml/comm/comm.h"

/*!
  \class TML_CommWorld
  \brief abstract base class for communicator

  \author Steffen Abe
  $Revision$
  $Date$
*/
class TML_CommWorld : public TML_Comm
{
public:
  //! constructor
  TML_CommWorld();

};

#endif //__COMM_WORLD_H
