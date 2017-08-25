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

lsmtools_LTLIBRARIES = libMacroFrictionCalcPy.la MacroFrictionCalcPy.la

libMacroFrictionCalcPy_la_LDFLAGS = -shared
libMacroFrictionCalcPy_la_SOURCES = MacroFrictionCalculatorPy.cpp MacroFrictionCalculatorPy.h
libMacroFrictionCalcPy_la_LIBADD  =                                       \
    $(top_builddir)/Tools/MacroFrictionCalculator/libMacroFrictionCalc.la \
    $(top_builddir)/Python/BoostPythonUtil/libBoostPythonUtil.la

MacroFrictionCalcPy_la_LDFLAGS = -module -shared -shrext $(PYTHON_DLL_EXT)
MacroFrictionCalcPy_la_SOURCES = ExportModuleTools.cpp
MacroFrictionCalcPy_la_LIBADD  =                             \
    $(top_builddir)/Python/esys/lsm/util/libFoundationPy.la  \
    libMacroFrictionCalcPy.la

lsmtools_PYTHON = __init__.py
