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

#include "vec3_mpi.h"
#include "tml/type/gettype.h"

//bool vec3_mpi.initialized=false;

template <> 
MPI_Datatype SGetType::operator()<Vec3>(const Vec3&)
{
  if(!vec3_mpi.initialized){
    MPI_Type_contiguous(3,MPI_DOUBLE,&vec3_mpi.type);
    MPI_Type_commit(&vec3_mpi.type);
    vec3_mpi.initialized=true;
  }
  return vec3_mpi.type;
}
