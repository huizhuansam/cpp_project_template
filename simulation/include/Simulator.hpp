#pragma once

#include <memory>
#include <queue>

#include "Event.hpp"
// #include "MyCompare.hpp"
#include "Simulation.hpp"

/// @brief This class implements a discrete event simulator. The simulator
/// maintains a priority queue of events, and run through the events, simulate
/// each one until the queue is empty.
class Simulator {
 private:
  class Compare {
   public:
    template <typename T>
    bool operator()(const std::shared_ptr<T> a,
                    const std::shared_ptr<T> b) const {
      return (*a) < (*b);
    }
  };

  /// @brief The event queue.
  std::priority_queue<std::shared_ptr<Event>,
                      std::vector<std::shared_ptr<Event>>, Simulator::Compare>
      events;

  explicit Simulator(std::priority_queue<std::shared_ptr<Event>,
                                         std::vector<std::shared_ptr<Event>>,
                                         Simulator::Compare>
                         events);

 public:
  /// @brief The factory method for a simulator.  It takes in a simulation as an
  /// argument, and calls the getInitialEvents method of that simulation to
  /// initialize the event queue.
  /// @param simulation The simulation to simulate.
  /// @return A Simulator.
  static Simulator factory(const Simulation &simulation);

  /// @brief Run the simulation until no more events is in the queue.  For each
  /// event in the queue (in increasing order of time), print out its string
  /// representation, then simulate it.  If the simulation returns one or more
  /// events, add them to the queue, and repeat.
  void run();
};
