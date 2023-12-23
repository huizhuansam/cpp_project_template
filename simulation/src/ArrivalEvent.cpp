#include "ArrivalEvent.hpp"

ArrivalEvent::ArrivalEvent(const double time,
                           const Customer customer,
                           const Shop shop)
    : Event(time), customer(customer), shop(shop){};

std::vector<std::shared_ptr<Event>> ArrivalEvent::simulate() {
  return std::vector<std::shared_ptr<Event>>{};
}

std::ostream& ArrivalEvent::print(std::ostream& out) const {
  return Event::print(out) << ": " << this->customer << " arrives\n";
}
