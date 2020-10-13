# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\TO-ChessGame_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\TO-ChessGame_autogen.dir\\ParseCache.txt"
  "TO-ChessGame_autogen"
  )
endif()
