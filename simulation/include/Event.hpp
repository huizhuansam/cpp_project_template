#pragma once

#include <iostream>
#include <memory>
#include <vector>

/// @brief The Event class is an abstract class that encapsulates a discrete
/// event to be simulated. An event encapsulates the time the event occurs. A
/// subclass of event _must_ override  the simulate() method to implement the
/// logic of the  simulation when this event is simulated. The simulate method
/// returns an array of events, which the simulator will then  add to the event
/// queue. Note that an event also implements  the Comparable interface so that
/// a PriorityQueue can  arrange the events in the order of event time.
class Event {
 private:
  /// @brief The time this event occurs in the simulation.
  const double time{};

 public:
  /// @brief Creates an event that occurs at the given time.
  /// @param time The time the event occurs.
  explicit Event(const double time);

  /// @brief Getter to return the time of this event.
  /// @return The time this event occurs.
  double getTime() const;

  /// @brief Simulate this event.
  /// @return An vector of new events to be scheduled by the simulator.
  virtual std::vector<std::shared_ptr<Event>> simulate() = 0;

  friend bool operator<(const Event &e1, const Event &e2);

  friend std::ostream &operator<<(std::ostream &out, const Event &event);

  virtual std::ostream &print(std::ostream &out) const;

  virtual ~Event() = default;
};
