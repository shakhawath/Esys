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


#ifndef CHECKPOINTPARAMS_H
#define CHECKPOINTPARAMS_H

#include <mpi.h>

#include <string>
#include <iostream>


class AMPIBuffer;

/**
 * Parameters associated with check-point file creation.
 */
class CheckPointParams
{
public:
  CheckPointParams(const std::string &fileNamePrefix, int time, int rank, int prec);

  ~CheckPointParams();

  /**
   * Returns full check-point file (prefix plus time and rank identifier).
   */
  std::string getFileName() const;
  int getPrecision() const {return m_prec;};

  void packInto(AMPIBuffer *mpiBuff) const;
  static CheckPointParams unpackFrom(AMPIBuffer *mpiBuff, MPI_Comm mpiComm=MPI_COMM_WORLD);

  //friend std::ostream& operator<<(std::ostream &oStream, const CheckPointParams &checkPointParams);

protected:
  CheckPointParams();

private:
  /**
   * Prefix of check-point file names.
   */
  std::string m_fileNamePrefix;
  
  /**
   * The simulation time at which checkpoint is created.
   */
  int m_time;
  
  /**
   * Rank of mpi process.
   */
  int m_rank;
  int m_prec; //! flag for binary checkpoints 
};

#endif
