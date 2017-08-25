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

#include "MeshReaderImpl.h"

// --- Project includes ---
#include "Foundation/console.h"

// --- STL includes ---
#include <stdexcept>

using std::runtime_error;

// --- IO includes ---
#include <fstream>

using std::ifstream;

namespace esys
{
  namespace lsm
  {
    /*!
      construct MeshReader implementation from file
    
      \param filename the name of the file
    */
    MeshReader::Impl::Impl(const string& filename)
      :m_file_name(filename)
    {
      
    }

    void MeshReader::Impl::initialise()
    {
      // open file
      m_istream_ptr=IStreamPtr(new ifstream(m_file_name.c_str()));
      istream* the_istream=m_istream_ptr.get();

      // check if file is open
      if(!(*m_istream_ptr)){
        throw runtime_error("Can not open mesh file " + m_file_name);
      }
      console.Debug() << "Reading mesh file " << m_file_name << "  open \n";

      // initialize reader with stream
      m_node_reader_ptr=NodeReaderPtr(new NodeReader(*the_istream));
      m_tri_reader_ptr=TriReaderPtr(new TriReader(*the_istream));
      
    }
  } // end namespace lsm
} // end namespace esys
