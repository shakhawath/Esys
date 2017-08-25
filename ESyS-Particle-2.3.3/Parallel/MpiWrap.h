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


#ifndef MPIWRAP_H

#include <mpi.h>

#if HAVE_CONFIG_H
#include "config.h"
#endif

#if HAVE_MPI_COMM_DISCONNECT
#else
inline int MPI_Comm_disconnect(MPI_Comm *comm)
{
  return MPI_Comm_free(comm);
}
#endif

#endif
