FILE(GLOB FIELDS_SRC_LIB "*.cpp")
#===========================================================
ADD_LIBRARY(Fields SHARED ${FIELDS_SRC_LIB})
TARGET_LINK_LIBRARIES(Fields ${Boost_LIBRARIES} ${PYTHON_LIBRARIES})
INSTALL(TARGETS Fields DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)
