add_executable(test main.cpp)

target_include_directories(test 
  PUBLIC 
  ${CMAKE_CURRENT_SOURCE_DIR}/../lib)
