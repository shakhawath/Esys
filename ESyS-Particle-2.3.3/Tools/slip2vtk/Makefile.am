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

## Makefile.am for slip2vtk
include $(top_srcdir)/Config/Cpp.am

bin_PROGRAMS = slip2vtk

AM_CPPFLAGS += -I$(top_srcdir)/Foundation -I$(top_srcdir)/Geometry


slip2vtk_LDADD = \
    $(top_builddir)/Foundation/libFoundation.la


slip2vtk_SOURCES = \
	main.cpp \
	slip2vtk2d.h \
	slip2vtk2d.cpp

