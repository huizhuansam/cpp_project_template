#include "ArrivalEvent.hpp"
#include "DepartureEvent.hpp"
#include "ServiceBeginEvent.hpp"

ArrivalEvent::ArrivalEvent(const double time,
                           const std::shared_ptr<Customer> customer,
                           const std::shared_ptr<Shop> shop)
    : Event(time), customer(customer), shop(shop){};

std::vector<std::shared_ptr<Event>> ArrivalEvent::simulate() {
  std::shared_ptr<CheckoutCounter> counter =
      this->customer->goToCounter(this->shop);
  if (!counter) {
    return std::vector<std::shared_ptr<Event>>{
        std::make_shared<DepartureEvent>(this->getTime(), this->customer)};
  }
  return std::vector<std::shared_ptr<Event>>{
      std::make_shared<ServiceBeginEvent>(this->getTime(), this->customer,
                                          counter)};
}

std::ostream& ArrivalEvent::print(std::ostream& out) const {
  return Event::print(out) << ": " << *(this->customer) << " arrives\n";
}
