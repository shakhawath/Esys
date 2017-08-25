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
Defines the L{PointExtractor} class.
"""
from .extractor import Extractor

class PointExtractor(Extractor):
    """
    Extracts a point from a data-record.
    """
    def __init__(
        self,
        pointMap = lambda dataRecord: dataRecord.getPoint()
    ):
        """
        Constructs the extractor.
        @type pointMap: callable
        @param pointMap: Callable which accepts a single argument
        and returns a 3 float-element sequence.
        """
        self.pointMap    = pointMap

    def getPoint(self, dataRecord):
        """
        Returns a point associated with the specifed C{dataRecord}.
        @rtype: 3 float-element sequence
        @return: A coordinate.
        """
        return self.pointMap(dataRecord)
