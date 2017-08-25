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
include $(top_srcdir)/Config/Python.am

lib_LTLIBRARIES = libBoostPythonUtil.la

libBoostPythonUtil_la_SOURCES = ListConverter.h ListConverter.cpp Util.h \
	PythonIterIterator.h PythonIterIterator.hpp
libBoostPythonUtil_la_LIBADD = $(BOOST_PYTHON_LIBS)

