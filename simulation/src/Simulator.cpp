#include "Simulator.hpp"

#include <iostream>
#include <utility>

Simulator::Simulator(
    std::priority_queue<std::shared_ptr<Event>,
                        std::vector<std::shared_ptr<Event>>, MyCompare>
        events)
    : events(events){};

Simulator Simulator::factory(const Simulation& simulation) {
  std::priority_queue<std::shared_ptr<Event>,
                      std::vector<std::shared_ptr<Event>>, MyCompare>
      events{};
  for (const std::shared_ptr<Event> event : simulation.getInitialEvents()) {
    events.push(event);
  }
  Simulator simulator{events};
  return simulator;
}

void Simulator::run() {
  while (!(this->events.empty())) {
    std::shared_ptr<Event> event = this->events.top();
    this->events.pop();
    for (const std::shared_ptr<Event> e : event->simulate()) {
      this->events.push(e);
    }
    std::cout << *event;
  }
}
