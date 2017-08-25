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

#ifndef __TAGGEDEWALLINTERACTIONGROUP_H
#define __TAGGEDEWALLINTERACTIONGROUP_H

//--- project includes ---
#include "Model/EWallInteractionGroup.h"

template <class T> class ParallelParticleArray;

//--- STL includes ---
#include <map>

using std::map;

/*!
  \brief Class for a group of unbonded,elastic interactions between particles and a wall using 
  only particles with a given tag  
*/
template<class T>
class CTaggedEWallInteractionGroup : public CEWallInteractionGroup<T>
{
 protected:
  int m_tag;
  int m_mask;

 public:
  CTaggedEWallInteractionGroup(TML_Comm*);
  CTaggedEWallInteractionGroup(TML_Comm*,CWall*,const CEWallIGP*,int,int);
  virtual ~CTaggedEWallInteractionGroup(){}

  virtual void Update(ParallelParticleArray<T>*);
};

#include  "TaggedEWallInteractionGroup.hpp"

#endif //__TAGGEDEWALLINTERACTIONGROUP_H