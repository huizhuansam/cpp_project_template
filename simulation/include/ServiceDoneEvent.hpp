#pragma once

#include <memory>
#include <vector>
#include "CheckoutCounter.hpp"
#include "Customer.hpp"
#include "Event.hpp"

class ServiceDoneEvent : public Event {
 private:
  const std::shared_ptr<Customer> customer;
  std::shared_ptr<CheckoutCounter> counter;

 public:
  ServiceDoneEvent(const double time,
                   const std::shared_ptr<Customer> customer,
                   std::shared_ptr<CheckoutCounter> counter);

  std::vector<std::shared_ptr<Event>> simulate() override;

  std::ostream& print(std::ostream& out) const override;
};
