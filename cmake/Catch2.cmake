# excludes tests from release build
if (NOT CMAKE_BUILD_TYPE STREQUAL "Release")
  add_subdirectory(lib)
  message(STATUS "Building tests...")
  add_subdirectory(simulation/tests)
endif()
