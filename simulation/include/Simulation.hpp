#pragma once

#include <memory>
#include <vector>
#include "Event.hpp"

class Simulation {
 public:
  virtual std::vector<std::shared_ptr<Event>> getInitialEvents() const = 0;
};
