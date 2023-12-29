project(${CMAKE_PROJECT_NAME})

add_executable(main main.cpp)

# rule of thumb: executables link libraries should be private
target_link_libraries(main
  PRIVATE
  Customer)
target_link_libraries(main
  PRIVATE
  CheckoutCounter)
target_link_libraries(main
  PRIVATE
  Shop)
target_link_libraries(main
  PRIVATE
  Event)
target_link_libraries(main
  PRIVATE
  ArrivalEvent)
target_link_libraries(main
  PRIVATE
  Simulation)
target_link_libraries(main
  PRIVATE
  ShopSimulation)
target_link_libraries(main
  PRIVATE
  Simulator)
target_link_libraries(main
  PRIVATE
  DepartureEvent)
target_link_libraries(main
  PRIVATE
  ServiceBeginEvent)
target_link_libraries(main
  PRIVATE
  ServiceDoneEvent)
target_link_libraries(main
  PRIVATE
  Parser)
