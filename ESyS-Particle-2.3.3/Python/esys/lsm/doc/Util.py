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
Provides simple functions for accessing documentation strings.
"""
from esys.lsm.util import InstallInfo

__substDict = dict()
__substDict["version"] = InstallInfo.version
__substDict["pkgName"] = InstallInfo.pkgName

__sectionDict = dict()

def setSectionDoc(sectionName, docStr):
    """
    Sets the epydoc formatted documentation for the specified section
    (performs substitutions on docStr).
    @type sectionName: str
    @param sectionName: Name of a section.
    @type docStr: str
    @param docStr: Documentation string.
    @rtype: str
    @return: the epydoc doc string with substitutions.
    """
    __sectionDict[sectionName] = (docStr.format(__substDict))
    return __sectionDict[sectionName]

def getSectionDoc(sectionName):
    """
    Returns epydoc formatted documentation for the specified section.
    @type sectionName: str
    @param sectionName: Name of a section.
    @rtype: str
    @return: epydoc doc string.
    """
    return __sectionDict[sectionName]

