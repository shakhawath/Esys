#############################################################
##                                                         ##
## Copyright (c) 2003-2014 by The University of Queensland ##
## Centre for Geoscience Computing                         ##
## http://earth.uq.edu.au/centre-geoscience-computing      ##
##                                                         ##
## Primary Business: Brisbane, Queensland, Australia       ##
## Licensed under the Open Software License version 3.0    ##
## http://www.opensource.org/licenses/osl-3.0.php          ##
##                                                         ##
#############################################################
"""
Defines modules and classes which can be used to generate
various packings of particles and creating bonds/connections
to be used in conjunction with the LSM.
"""
from esys.lsm.util                import *
from esys.lsm.geometry.GeometryPy import *
from . import SphericalGrainGen
from . import SingleParticleGrainGen

GeometryPy.__doc__ =\
"""
Dynamic linked library module defining classes for creating
packings of particles and connections between particles -
This library exposes C++ implementations in Python.
"""
