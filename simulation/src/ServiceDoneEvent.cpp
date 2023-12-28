#include "ServiceDoneEvent.hpp"
#include "DepartureEvent.hpp"

ServiceDoneEvent::ServiceDoneEvent(const double time,
                                   const std::shared_ptr<Customer> customer,
                                   std::shared_ptr<CheckoutCounter> counter)
    : Event(time), customer(customer), counter(counter) {}

std::vector<std::shared_ptr<Event>> ServiceDoneEvent::simulate() {
  this->counter->makeAvailable();
  return std::vector<std::shared_ptr<Event>>{
      std::make_shared<DepartureEvent>(this->getTime(), this->customer)};
}

std::ostream& ServiceDoneEvent::print(std::ostream& out) const {
  return Event::print(out) << ": " << *(this->customer) << " service done (by "
                           << *(this->counter) << ")\n";
}
