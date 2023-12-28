#pragma once

#include <memory>
#include <queue>
#include "Event.hpp"
#include "MyCompare.hpp"
#include "Simulation.hpp"

class Simulator {
 private:
  std::priority_queue<std::shared_ptr<Event>,
                      std::vector<std::shared_ptr<Event>>,
                      MyCompare>
      events;
  explicit Simulator(std::priority_queue<std::shared_ptr<Event>,
                                         std::vector<std::shared_ptr<Event>>,
                                         MyCompare> events);

 public:
  static Simulator factory(const Simulation& simulation);

  void run();
};
