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

#ifndef __RANKANDCOMM_H
#define __RANKANDCOMM_H

//--- MPI includes ---
#include <mpi.h>

class MpiRankAndComm
{
public:
  MpiRankAndComm(int globalRank, MPI_Comm globalComm)
    : m_globalRank(globalRank),
      m_globalComm(globalComm)
  {
  }

  int getRank() const
  {
    return m_globalRank;
  }

  MPI_Comm getComm() const
  {
    return m_globalComm;
  }

private:
  int      m_globalRank;
  MPI_Comm m_globalComm;
};

#endif // __RANKANDCOMM_H
