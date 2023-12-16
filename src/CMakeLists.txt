project(${CMAKE_PROJECT_NAME})

add_library(basicmath factorial.cpp modulus.cpp)

# make headers accessible for client
target_include_directories(basicmath 
  PUBLIC 
  ${CMAKE_CURRENT_SOURCE_DIR}/../include)
