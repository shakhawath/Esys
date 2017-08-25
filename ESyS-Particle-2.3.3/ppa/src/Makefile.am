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

##

include $(top_srcdir)/Config/Cpp.am

AM_CPPFLAGS += -I$(top_srcdir)/Foundation

lib_LTLIBRARIES = libppa.la

libppa_la_SOURCES = app_array.cpp pp_array.h pp_array.hpp

libppa_la_LIBADD =                                     \
	$(top_builddir)/tml/comm/libTmlComm.la           \
	$(top_builddir)/ntable/src/libntable.la
