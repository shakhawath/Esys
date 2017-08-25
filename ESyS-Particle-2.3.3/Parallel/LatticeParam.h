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

#ifndef ESYS_LSMLATTICEPARAM_H
#define ESYS_LSMLATTICEPARAM_H

class AMPIBuffer;

#include <vector>
#include <string>
#include <iostream>

namespace esys
{
  namespace lsm
  {
    /**
     * Parameters for the sublattice.
     */
    class CLatticeParam
    {
     public:
      typedef std::vector<unsigned int> ProcessDims;
      CLatticeParam(
        const std::string &particleType,
        double nrange,
        double alpha,
        const ProcessDims &dims = ProcessDims(3, 0)
      );
      void setSearchRange(double nr,double a){m_nrange=nr;m_alpha=a;};
      void setParticleType(const std::string& pt){m_particle_type=pt;}
      void packInto(AMPIBuffer*) const;
      double nrange()const {return m_nrange;};
      double alpha()const {return m_alpha;};
      const ProcessDims &processDims() const {return m_dims;}
      const std::string &particle_type() const {return m_particle_type;};
      friend std::ostream& operator<<(std::ostream &oStream,const CLatticeParam &prms);

      static CLatticeParam extractLatticeParam(AMPIBuffer *pBuff);

     protected:
      std::string m_particle_type;
      double      m_alpha;  //!< pair creation cutoff
      double      m_nrange; //!< searchrange
      ProcessDims m_dims;
    };
  }
}

#endif
