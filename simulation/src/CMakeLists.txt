project(${CMAKE_PROJECT_NAME})

add_library(Customer Customer.cpp)
add_library(CheckoutCounter CheckoutCounter.cpp)
add_library(Shop Shop.cpp)
add_library(Event Event.cpp)
add_library(ArrivalEvent ArrivalEvent.cpp)
add_library(Simulation Simulation.cpp)
add_library(ShopSimulation ShopSimulation.cpp)
add_library(Simulator Simulator.cpp)
add_library(DepartureEvent DepartureEvent.cpp)
add_library(ServiceBeginEvent ServiceBeginEvent.cpp)
add_library(ServiceDoneEvent ServiceDoneEvent.cpp)
add_library(MyCompare MyCompare.cpp)

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
target_include_directories(Simulation
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/../include)
target_include_directories(ShopSimulation
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/../include)
target_include_directories(Simulator
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/../include)
target_include_directories(DepartureEvent
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/../include)
target_include_directories(ServiceBeginEvent
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/../include)
target_include_directories(ServiceDoneEvent
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/../include)
target_include_directories(MyCompare
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/../include)
