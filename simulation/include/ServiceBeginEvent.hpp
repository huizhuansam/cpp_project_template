#pragma once

#include <memory>
#include <vector>
#include "CheckoutCounter.hpp"
#include "Customer.hpp"
#include "Event.hpp"

class ServiceBeginEvent : public Event {
 private:
  const std::shared_ptr<Customer> customer;
  std::shared_ptr<CheckoutCounter> counter;

 public:
  ServiceBeginEvent(double time,
                    std::shared_ptr<Customer> customer,
                    std::shared_ptr<CheckoutCounter> counter);

  std::vector<std::shared_ptr<Event>> simulate() override;

  std::ostream& print(std::ostream& out) const override;
};
