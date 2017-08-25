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

#ifndef __MPICMDBUF_H
#define __MPICMDBUF_H

#include <mpi.h>

/*!
  \class CMPILCmdBuffer
  \brief Class for sending commands from the LatticeMaster to the SubLatticeControler
  \author Steffen Abe
  $Revision$
  $Date$

  The difference to a AMPIBuffer is that it is fixed size,fixed type (int) and supports Broadcasts. It thus does not share the interface with AMPIBuffer -> no inheritance

*/

class CMPILCmdBuffer
{
private:
  MPI_Comm m_comm; //!< the MPI Communicator used for the send/recv operations
  MPI_Status m_status;
  int m_root;
  bool m_isroot;

public:
  CMPILCmdBuffer(MPI_Comm,int);
  virtual ~CMPILCmdBuffer(){};

  void broadcast(int);
  int receive();
  
};
#endif //__MPICMDBUF_H
