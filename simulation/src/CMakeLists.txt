project(${CMAKE_PROJECT_NAME})

add_library(Customer Customer.cpp)
add_library(CheckoutCounter CheckoutCounter.cpp)
add_library(Shop Shop.cpp)
add_library(Event Event.cpp)
add_library(ArrivalEvent ArrivalEvent.cpp)


# make headers accessible for client
target_include_directories(Customer
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/../include)
target_include_directories(CheckoutCounter
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/../include)
target_include_directories(Shop
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/../include)
target_include_directories(Event
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/../include)
target_include_directories(ArrivalEvent
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/../include)
