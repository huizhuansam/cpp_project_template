#pragma once

#include <memory>
#include <vector>
#include "Event.hpp"

/// @brief This class is a general abstract class that encapsulates a
/// simulation.  To implement a simulation, inherit from this class and
/// implement the `getInitialEvents` method.
class Simulation {
 public:
  /// @brief An abstract method to return a vector of events used to initialize
  /// the simulation.
  /// @return A vector of initial events that the simulator can use to
  /// kick-start the simulation.
  virtual std::vector<std::shared_ptr<Event>> getInitialEvents() const = 0;
};
