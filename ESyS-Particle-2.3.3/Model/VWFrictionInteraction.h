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

#ifndef __VWFRICTION_H
#define __VWFRICTION_H

// -- project includes --
#include "Model/FrictionInteraction.h"

/*!
  \brief Interaction parameters for velocity weakening frictional interaction
*/
class VWFrictionIGP : public CFrictionIGP
{
 public:
  double m_alpha;

  VWFrictionIGP();
  VWFrictionIGP(const std::string&, double, double, double, double, double);
};

/*!
  \brief Frictional+Elastic interaction between particles with velocity
  weakening friction
*/
class CVWFriction : public CFrictionInteraction
{
 public: // types
  typedef VWFrictionIGP ParameterType;

  typedef double (CVWFriction::* ScalarFieldFunction)() const; 
  typedef Vec3 (CVWFriction::* VectorFieldFunction)() const; 
  typedef pair<bool,double> (CVWFriction::* CheckedScalarFieldFunction)() const;

 private:
  double m_alpha;

 public:
  CVWFriction();
  CVWFriction(CParticle*,CParticle*,const VWFrictionIGP&);
  virtual ~CVWFriction();

  static string getType() {return "VWFriction";};
  
  virtual void calcForces();

  pair<bool,double> getCurrentMu() const;

  static ScalarFieldFunction getScalarFieldFunction(const string&);
  static VectorFieldFunction getVectorFieldFunction(const string&);
  static CheckedScalarFieldFunction getCheckedScalarFieldFunction(const string&);

  friend class TML_PackedMessageInterface;
};
#endif //__VWFRICTION_H
