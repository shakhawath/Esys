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

from esys.lsm.vis import core
from .modifier     import Modifiable
import vtk as kwvtk

class Cone(core.Cone, Modifiable):
    def __init__(self, basePt, tipPt, radius):
        core.Cone.__init__(self, basePt, tipPt, radius)
        Modifiable.__init__(self)

    def getVtkSource(self):
        cone = kwvtk.vtkConeSource()
        cone.SetRadius(self.getRadius())
        cone.SetCenter(self.getCenter())
        cone.SetHeight(self.getHeight())
        cone.SetDirection(
            core.Vec3(self.getTipPt())-core.Vec3(self.getBasePt())
        )
        cone.SetResolution(10)

        return cone

    def getVtkMapper(self):
        return kwvtk.vtkPolyDataMapper()

    def getActor(self):
        cone = self.getVtkSource()

        coneMapper = self.getVtkMapper()
        coneMapper.SetInput(cone.GetOutput())

        coneActor = kwvtk.vtkActor()
        coneActor.SetMapper(coneMapper)

        self.applyModifiers(coneActor)

        return coneActor

    def addActor(self, addTo):
        addTo.AddActor(self.getActor())

