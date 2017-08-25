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
from .arrow        import Arrow

class ArrowExtractor(core.ArrowExtractor):
    def __init__(
        self,
        tailPtMap,
        vecMap,
        tailRadiusMap = lambda record: 0.10,
        headRadiusMap = lambda record: 0.25,
        headLengthMap = lambda record: 0.75,
        modifierMap   = lambda record: None,
        lengthScale   = 1.0
    ):
        core.ArrowExtractor.__init__(
            self,
            tailPtMap,
            vecMap,
            tailRadiusMap,
            headRadiusMap,
            headLengthMap,
            modifierMap,
            lengthScale
        )

    def getGlyph(self, record):
        """
        Returns the arrow associated with the data in C{record}.
        """
        glyph = \
            Arrow(
                tailPt     = self.getTailPt(record),
                headPt     = self.getHeadPt(record),
                tailRadius = self.getTailRadius(record),
                headRadius = self.getHeadRadius(record),
                headLength = self.getHeadLength(record)
            )
        glyph.apply(self.getModifier(record))

        return glyph

    def writeSdl(self, f, record):
        self.getGlyph(record).writeSdl(f)

