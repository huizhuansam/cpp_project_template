#include "ArrivalEvent.hpp"

ArrivalEvent::ArrivalEvent(const double time,
                           const Customer& customer,
                           const Shop& shop)
    : Event(time), customer(customer), shop(shop){};

std::vector<std::shared_ptr<Event>> ArrivalEvent::simulate() {
  return std::vector<std::shared_ptr<Event>>{};
}

std::ostream& operator<<(std::ostream& out, const ArrivalEvent& event) {
  out << event.customer << " arrives\n";
  return out;
}
