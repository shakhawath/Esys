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

template <typename TmplPackable>
void BroadcastCommand::packInto(const TmplPackable &packable)
{
  packable.packInto(&(m_varBuffer));
} 

template <typename TmplData>
void BroadcastCommand::appendTypeAndName(const TmplData &namedWithType)
{
  m_varBuffer.append(namedWithType.getTypeString().c_str());
  m_varBuffer.append(namedWithType.getName().c_str());
}
  
template <typename TmplData>
void BroadcastCommand::append(const TmplData &data)
{
  m_varBuffer.append(data);
}
