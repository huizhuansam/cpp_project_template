#include "Simulator.hpp"
#include <iostream>

Simulator::Simulator(std::priority_queue<std::shared_ptr<Event>> events)
    : events(events){};

Simulator Simulator::factory(const Simulation& simulation) {
  std::priority_queue<std::shared_ptr<Event>> events{};
  for (const std::shared_ptr<Event> event : simulation.getInitialEvents()) {
    events.push(event);
  }
  return Simulator{(events)};
}

void Simulator::run() {
  while (!(this->events.empty())) {
    std::shared_ptr<Event> event = this->events.top();
    this->events.pop();
    std::cout << *event;
    std::vector<std::shared_ptr<Event>> newEvents{event->simulate()};
    for (const std::shared_ptr<Event> e : newEvents) {
      this->events.push(e);
    }
  }
}
