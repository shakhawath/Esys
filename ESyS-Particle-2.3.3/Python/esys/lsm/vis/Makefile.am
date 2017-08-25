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

include $(top_srcdir)/Config/Python.am

if VTK_ENABLED
  VTK     = vtk
endif

if POVRAY_ENABLED
  POVRAY     = povray
endif

SUBDIRS = core $(VTK) $(POVRAY) 

lsmvis_PYTHON = __init__.py

AM_CPPFLAGS += $(PYTHON_CPPFLAGS)

