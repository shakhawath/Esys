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


#ifndef ESYS_LSMCLOSEPACKORIENTATION_H
#define ESYS_LSMCLOSEPACKORIENTATION_H

namespace esys
{
  namespace lsm
  {
    /**
     * Enum for specifying the orientation of the layers in
     * in a sphere close packing.
     */
    enum ClosePackOrientation
    {
      DEFAULT_ORIENT = 0,
      XYZ,
      XZY,
      YXZ,
      YZX,
      ZXY,
      ZYX,
      NUM_ORIENTATIONS
    };
  }
}
#endif
