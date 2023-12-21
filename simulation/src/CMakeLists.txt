project(${CMAKE_PROJECT_NAME})

add_library(Customer Customer.cpp)

# make headers accessible for client
target_include_directories(Customer
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/../include)
