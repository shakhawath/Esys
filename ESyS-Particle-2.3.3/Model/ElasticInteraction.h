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

#ifndef __ELASTICINTERACTION_H
#define __ELASTICINTERACTION_H

#include "Model/IGParam.h"
#include "Model/Interaction.h"
#include "Model/Particle.h"


/*!
  \brief Interaction group parameters for CElasticInteractionGroups
*/
class CElasticIGP : public AIGParam
{
protected:
public:
  double m_k;
  bool m_scaling;

  CElasticIGP();
  CElasticIGP(const std::string&,double,bool scaling=true);

  virtual void  packInto(CVarMPIBuffer*) const;
  void setSpringConst(double k){m_k=k;};
  double getSpringConst() const{return m_k;};
  
  virtual std::string getTypeString() const {return "Elastic";}

  friend ostream& operator<<(ostream&,const CElasticIGP&);
};


/*!
  \class CElasticInteraction
  \brief Elastic Interaction between free particles
  \author Steffen Abe
  $Revision$
  $Date$
*/
class CElasticInteraction : public APairInteraction
{
public:

  typedef double (CElasticInteraction::* ScalarFieldFunction)() const;
  typedef pair<bool,double> (CElasticInteraction::* CheckedScalarFieldFunction)() const;
  typedef Vec3 (CElasticInteraction::* VectorFieldFunction)() const;

  static ScalarFieldFunction getScalarFieldFunction(const string&);
  static CheckedScalarFieldFunction getCheckedScalarFieldFunction(const string&);
  static VectorFieldFunction getVectorFieldFunction(const string&);

private:
  double m_k; //!< spring constant
  Vec3   m_force; //!< caching force for E_pot
  Vec3   m_cpos;
  bool   m_scaling; //!< toggles scaling of elastic properties by particle size

public:
  typedef CElasticIGP ParameterType;

  CElasticInteraction(CParticle*,CParticle*,const CElasticIGP&);
  virtual ~CElasticInteraction(){};

  virtual Vec3 getPos() const {return m_cpos;};
  double getPotentialEnergy() const;

  virtual void calcForces();
  Vec3 getForce() const;
  friend ostream& operator<<(ostream&,const CElasticInteraction&);
  
  // save/load of restart parameters
  virtual void saveRestartData(std::ostream &oStream);
  virtual void loadRestartData(std::istream &iStream);
};
#endif //__ELASTICINTERACTION_H
