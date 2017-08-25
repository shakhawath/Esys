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

#include "WallFieldSlave.h"
#include "Foundation/console.h"

/*!
  Constructor

  \param comm the communicator
  \param w the walls
*/
AWallFieldSlave::AWallFieldSlave(TML_Comm* comm)
  : AFieldSlave(comm)
{}

/*!
  add a wall pointer 

  \param wallp 
*/
void AWallFieldSlave::addWall(CWall* wallp)
{
  console.XDebug() << "AWallFieldSlave::addWall()\n";
  m_wall.push_back(wallp);
}
