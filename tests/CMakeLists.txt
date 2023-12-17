add_executable(test main.cpp basicmath.cpp)

target_include_directories(test 
  PRIVATE 
  ${CMAKE_CURRENT_SOURCE_DIR}/../lib)

target_link_libraries(test
  PUBLIC 
  basicmath)
