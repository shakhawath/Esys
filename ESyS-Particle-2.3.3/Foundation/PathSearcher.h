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


#ifndef ESYS_LSMPATHSEARCHER_H
#define ESYS_LSMPATHSEARCHER_H

#include <boost/filesystem/path.hpp>
#include <vector>

namespace esys
{
  namespace lsm
  {
    class PathSearcher
    {
    public:
      PathSearcher(const std::string &delimitedPathList, const std::string &delim = ":");
      
      //bool exists(const std::string &fileName);
      
      boost::filesystem::path findPath(const std::string &fileName);
      
      std::string find(const std::string &fileName);
      
    private:
      typedef std::vector<boost::filesystem::path> PathVector;
      PathVector m_pathVector;
    };
  }
}

#endif
