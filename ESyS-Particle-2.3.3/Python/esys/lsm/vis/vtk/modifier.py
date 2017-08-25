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
Defines classes which relate to I{modifying} renderable objects.
"""

from esys.lsm.vis import core

class Modifiable(core.Modifiable):
    def __init__(self):
        core.Modifiable.__init__(self)

    def applyModifiers(self, actor):
        for modifier in self.getModifierList():
            if (modifier != None):
                modifier.applyTo(actor)

class Modifier(core.Modifier):
    def __init__(self):
        pass

    def applyTo(self, actor):
        core.raiseNotImplemented("Not implemented.")


