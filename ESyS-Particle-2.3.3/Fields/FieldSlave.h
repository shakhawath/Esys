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

#ifndef __FIELD_SLAVE_H
#define __FIELD_SLAVE_H

class TML_Comm;
/*!
  \class AFieldSlave
  \brief Abstract base class for slave part of field

*/
class AFieldSlave
{
 private:
 protected:
  TML_Comm * m_comm;

 public:
  AFieldSlave(TML_Comm*);

  virtual ~AFieldSlave()
  {
  }
  
  virtual void sendData()=0;
};

#endif //__FIELD_SLAVE_H
