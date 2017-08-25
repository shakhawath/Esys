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

#ifndef REALDIST_H
#define REALDIST_H

// -- IO includes --
// -- STL includes --
#include <string>
using std::string;

class RealDist {
   public:
      RealDist (double MinSize, double MaxSize, int Nbins);
      ~RealDist ();
      void AddSample (double evsize);
      void Write (const string&);
      void Clear();
   private:
      int nbins; 
      double maxsize, minsize, binsize;
      long Nevents;
      void Create ();
      void Destroy ();
      long *Edist;
      void AddEvSize (double evsize);
};

#endif
