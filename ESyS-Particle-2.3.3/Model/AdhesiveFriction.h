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

#ifndef __ADHESIVEFRICTION_H
#define __ADHESIVEFRICTION_H

#include "Model/FrictionInteraction.h"

/*!
  \brief Interaction parameters for adhesive frictional interaction
*/
class CAdhesiveFrictionIGP : public AIGParam
{
public:
  virtual std::string getTypeString() const {return "AdhesiveFriction";}

  void setTimeStepSize(double timeStepSize)
  {
    this->dt = timeStepSize;
  }

  double k;
  double mu;
  double k_s;
  double dt;
  double r_cut;
};

/*!
   \brief Frictional+adhesive Elastic interaction between particles
*/
class CAdhesiveFriction : public CFrictionInteraction
{
public: // types
  typedef CAdhesiveFrictionIGP ParameterType;

  typedef double (CAdhesiveFriction::* ScalarFieldFunction)() const;
  typedef pair<bool,double> (CAdhesiveFriction::* CheckedScalarFieldFunction)() const;
  typedef Vec3 (CAdhesiveFriction::* VectorFieldFunction)() const;

protected:
  double m_r_cut;
  double m_r_cut_h;
 
public:
  CAdhesiveFriction();
  CAdhesiveFriction(CParticle*,CParticle*,const CAdhesiveFrictionIGP&);
  virtual ~CAdhesiveFriction();

  static string getType() {return "AdhesiveFriction";};
  
  virtual void calcForces();
 
  friend class TML_PackedMessageInterface;
};

#endif // __ADHESIVEFRICTION_H
