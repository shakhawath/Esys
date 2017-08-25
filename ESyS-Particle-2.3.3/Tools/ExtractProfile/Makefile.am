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

bin_PROGRAMS = profextract

AM_CPPFLAGS += -I$(top_srcdir)/Foundation


profextract_LDADD = \
    $(top_builddir)/Foundation/libFoundation.la

profextract_SOURCES = \
	main.cpp \
	read.cpp \
	read.h
 


