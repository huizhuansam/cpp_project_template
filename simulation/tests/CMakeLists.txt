project(${CMAKE_PROJECT_NAME})

add_executable(test main.cpp CheckoutCounter.test.cpp)

target_include_directories(test
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/../../lib)

target_link_libraries(test
  PRIVATE
  CheckoutCounter)
