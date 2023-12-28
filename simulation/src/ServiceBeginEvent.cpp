#include "ServiceBeginEvent.hpp"
#include "DepartureEvent.hpp"
#include "ServiceDoneEvent.hpp"

ServiceBeginEvent::ServiceBeginEvent(const double time,
                                     std::shared_ptr<Customer> customer,
                                     std::shared_ptr<CheckoutCounter> counter)
    : Event(time), customer(customer), counter(counter) {}

std::vector<std::shared_ptr<Event>> ServiceBeginEvent::simulate() {
  this->counter->makeUnavailable();

  return std::vector<std::shared_ptr<Event>>{std::make_shared<ServiceDoneEvent>(
      this->getTime() + this->customer->getServiceTime(), this->customer,
      this->counter)};
}

std::ostream& ServiceBeginEvent::print(std::ostream& out) const {
  return Event::print(out) << ": " << *(this->customer) << " service begin (by "
                           << *(this->counter) << ")\n";
}
