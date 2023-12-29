cmake_minimum_required(VERSION 3.20.2)

project(CPP_PROJECT_TEMPLATE)

# cmake settings
set(CMAKE_VERBOSE_MAKEFILE on)
include(cmake/PreventInSourceBuilds.cmake)

# language version settings
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)

# build settings
if (NOT CMAKE_BUILD_TYPE)
  # build for release by default
  # equivalent to `cmake -DCMAKE_BUILD_TYPE=Release ..`
  # for debug build, run `cmake -DCMAKE_BUILD_TYPE=Debug ..`
  set(CMAKE_BUILD_TYPE Release)
endif()

# compiler settings
include(cmake/CompilerSettings.cmake)

# turn on static analyzers
include(cmake/CppCheck.cmake)
include(cmake/ClangTidy.cmake)

add_subdirectory(simulation/include)
add_subdirectory(simulation/src)
add_subdirectory(simulation)

# tests
include(cmake/Catch2.cmake)
