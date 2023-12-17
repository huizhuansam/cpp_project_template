project(${CMAKE_PROJECT_NAME})

add_library(basicmath basicmath/factorial.cpp basicmath/modulus.cpp)
add_library(unsafe unsafe/stupidHello.cpp)

# make headers accessible for client
target_include_directories(basicmath 
  PUBLIC 
  ${CMAKE_CURRENT_SOURCE_DIR}/../include)
target_include_directories(unsafe
  PUBLIC 
  ${CMAKE_CURRENT_SOURCE_DIR}/../include)
