project(CPP_PROJECT_TEMPLATE)

add_executable(use_factorial use_factorial.cpp)
add_executable(use_modulus use_modulus.cpp)
add_executable(use_stupidHello use_stupidHello.cpp)

# rule of thumb: executables link libraries should be private 
target_link_libraries(use_factorial 
  PRIVATE 
  basicmath)
target_link_libraries(use_modulus 
  PRIVATE 
  basicmath)
target_link_libraries(use_stupidHello
  PRIVATE
  unsafe)

