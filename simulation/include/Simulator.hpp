#pragma once

#include <memory>
#include <queue>
#include "Event.hpp"
#include "Simulation.hpp"

class Simulator {
 private:
  std::priority_queue<std::shared_ptr<Event>> events;
  explicit Simulator(std::priority_queue<std::shared_ptr<Event>> events);

 public:
  static Simulator factory(const Simulation& simulation);

  void run();
};
