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

// --- project includes ---
#include "DataParticle.h"
#include "ntable.h"

/*!
  \class DataExtractor
  \brief class for the extraction of data from snapshots
*/
class DataExtractor 
{
 private:
  NeighborTable<DataParticle> m_data;

 public:
  DataExtractor(int,int,int,double,const Vec3&);

  // I/O
  void read(const string&);
  void writeTensorDataVtk(const string&,const string&);
  void writeScalarDataVtk(const string&,const string&);
  
  // data extraction
  void StrainToTensorData(double);
  void MaxShearToScalarData();
};
