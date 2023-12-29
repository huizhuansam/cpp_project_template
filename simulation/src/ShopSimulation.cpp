#include "ShopSimulation.hpp"

#include <iostream>

#include "ArrivalEvent.hpp"
#include "Customer.hpp"

ShopSimulation::ShopSimulation(const std::shared_ptr<Shop> shop,
                               std::vector<std::shared_ptr<Event>> initEvents)
    : shop(shop), initEvents(initEvents) {}

ShopSimulation ShopSimulation::factory() {
  int numInitialEvents{};
  std::cin >> numInitialEvents;
  std::vector<std::shared_ptr<Event>> initEvents(
      static_cast<unsigned long>(numInitialEvents));
  int numCounters{};
  std::cin >> numCounters;
  std::shared_ptr<Shop> shop = std::make_shared<Shop>(numCounters);
  for (unsigned long i = 0; i < static_cast<unsigned long>(numInitialEvents);
       ++i) {
    double arrivalTime{};
    std::cin >> arrivalTime;
    double serviceTime{};
    std::cin >> serviceTime;
    std::shared_ptr<Customer> customer =
        std::make_shared<Customer>(serviceTime);
    std::shared_ptr<Event> event =
        std::make_shared<ArrivalEvent>(arrivalTime, customer, shop);
    initEvents[i] = event;
  }
  ShopSimulation simulation{shop, initEvents};
  return simulation;
}

std::vector<std::shared_ptr<Event>> ShopSimulation::getInitialEvents() const {
  return this->initEvents;
}
