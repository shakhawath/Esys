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

class GlyphData(core.GlyphData):
    def __init__(self, data, glyphExtractor):
        core.GlyphData.__init__(self, data, glyphExtractor)

    def addActor(self, addTo):
        extractor = self.getGlyphExtractor()
        for record in self.getData():
            extractor.addActor(record, addTo)
