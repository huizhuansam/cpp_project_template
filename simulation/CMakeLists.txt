project(${CMAKE_PROJECT_NAME})

add_executable(main main.cpp)

# rule of thumb: executables link libraries should be private 
target_link_libraries(main 
  PRIVATE 
  Customer)
target_link_libraries(main 
  PRIVATE 
  CheckoutCounter)
