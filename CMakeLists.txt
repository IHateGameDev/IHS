cmake_minimum_required(VERSION 3.10)
project(ih-system)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

option(REMOVE_CACHE "Enable remove cache" OFF)
  if(REMOVE_CACHE)
  if(EXISTS "${CMAKE_BINARY_DIR}/CMakeCache.txt")
      file(REMOVE "${CMAKE_BINARY_DIR}/CMakeCache.txt")
  endif()

  if(EXISTS "${CMAKE_BINARY_DIR}/CMakeFiles")
      file(REMOVE_RECURSE "${CMAKE_BINARY_DIR}/CMakeFiles")
  endif()
endif()


option(LIBRARY "Enable building library" ON)
if(LIBRARY)
  include_directories(
    ${CMAKE_SOURCE_DIR}/src/
  )

  file(GLOB SOURCES
      "src/src/*.cpp"
  )

  file(GLOB HEADERS
      "src/*.hpp"
  )

  add_library(ih-system SHARED ${SOURCES})

  install(TARGETS ih-system
      DESTINATION lib)

  install(FILES ${HEADERS}
      DESTINATION include/IHSystem)
endif()


option(EXAMPLES "Enable building examples" ON)
if(EXAMPLES)
  set(Examples
    "src/FastExamples/Logger.cpp"
    "src/FastExamples/States.cpp"
  )

  add_executable(Logger ${Examples[0]})
  add_executable(States ${Examples[1]})

  target_link_libraries(Logger ih-system)
  target_link_libraries(States ih-system)
endif()
