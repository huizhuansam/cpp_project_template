#pragma once

#include <memory>
#include <vector>

#include "Customer.hpp"
#include "Event.hpp"
#include "Shop.hpp"

class ArrivalEvent : public Event {
 private:
  const std::shared_ptr<Customer> customer;
  const std::shared_ptr<Shop> shop;

 public:
  ArrivalEvent(const double time, const std::shared_ptr<Customer> customer,
               const std::shared_ptr<Shop> shop);

  std::vector<std::shared_ptr<Event>> simulate() override;

  std::ostream &print(std::ostream &out) const override;
};
