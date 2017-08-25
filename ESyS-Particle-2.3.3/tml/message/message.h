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

#ifndef __MESSAGE_H
#define __MESSAGE_H

#include <mpi.h>
/*!
  \class TML_Message
  \brief Abstract base class for MPI message

  \author Steffen Abe
  $Revision$
  $Date$
*/
class TML_Message
{
 protected:
  MPI_Status m_status;

public:
  virtual ~TML_Message(){};

  virtual void clear()=0;
  virtual size_t size();
  template <class T> virtual void append(T)=0;
  template <class T> virtual pop(T&)=0;
  const MPI_Status& status(){return m_status;};   
};
#endif // __MESSAGE_H
