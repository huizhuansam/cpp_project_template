#include "DepartureEvent.hpp"

DepartureEvent::DepartureEvent(const double time, const Customer customer)
    : Event(time), customer(customer){};

std::vector<std::shared_ptr<Event>> DepartureEvent::simulate() {
  return std::vector<std::shared_ptr<Event>>{};
}

std::ostream& DepartureEvent::print(std::ostream& out) const {
  return Event::print(out) << ": " << this->customer << " departed\n";
}
