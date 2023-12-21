#include "ShopSimulation.hpp"
#include <iostream>
#include "ArrivalEvent.hpp"
#include "Customer.hpp"

ShopSimulation::ShopSimulation(const Shop& shop,
                               std::vector<std::shared_ptr<Event>> initEvents)
    : shop(shop), initEvents(initEvents) {}

ShopSimulation ShopSimulation::factory() {
  int numInitialEvents{};
  std::cin >> numInitialEvents;
  std::vector<std::shared_ptr<Event>> initEvents(numInitialEvents);
  int numCounters{};
  std::cin >> numCounters;
  Shop shop{numCounters};
  for (int i = 0; i < numInitialEvents; ++i) {
    double arrivalTime{};
    std::cin >> arrivalTime;
    double serviceTime{};
    std::cin >> serviceTime;
    Customer customer{arrivalTime, serviceTime};
    std::shared_ptr<Event> event =
        std::make_shared<ArrivalEvent>(arrivalTime, customer, shop);
    initEvents[i] = event;
  }
  return ShopSimulation{shop, initEvents};
}

std::vector<std::shared_ptr<Event>> ShopSimulation::getInitialEvents() {
  return this->initEvents;
}
