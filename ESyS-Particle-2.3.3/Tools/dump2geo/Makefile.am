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

## Makefile.am for dump2geo
include $(top_srcdir)/Config/Cpp.am

bin_PROGRAMS = dump2geo

AM_CPPFLAGS += -I$(top_srcdir)/Foundation -I$(top_srcdir)/Geometry


dump2geo_LDADD = \
    $(top_builddir)/Foundation/libFoundation.la \
    $(top_builddir)/Geometry/libGgGeometry.la \
    $(top_builddir)/Parallel/libParallel.la

dump2geo_SOURCES = \
	main.cpp \
	frame_geo.h \
	frame_geo.cpp 
 
