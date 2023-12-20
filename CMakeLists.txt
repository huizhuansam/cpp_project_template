cmake_minimum_required(VERSION 3.20.2)

project(CPP_PROJECT_TEMPLATE)

# cmake settings
set(CMAKE_VERBOSE_MAKEFILE on)
include(cmake/PreventInSourceBuilds.cmake)

# language version settings
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)

# turn on static analyzers
include(cmake/CppCheck.cmake)
include(cmake/ClangTidy.cmake)

add_subdirectory(include)
add_subdirectory(src)

# tests
include(cmake/Catch2.cmake)

# documentation
include(cmake/Doxygen.cmake)
