# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\RDPBoost_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\RDPBoost_autogen.dir\\ParseCache.txt"
  "RDPBoost_autogen"
  )
endif()
