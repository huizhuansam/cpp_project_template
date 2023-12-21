#pragma once

#include <memory>
#include <vector>
#include "Customer.hpp"
#include "Event.hpp"
#include "Shop.hpp"

class ArrivalEvent : public Event {
 private:
  const Customer& customer;
  const Shop& shop;

 public:
  ArrivalEvent(const double time, const Customer& customer, const Shop& shop);

  std::vector<std::shared_ptr<Event>> simulate() override;

  friend std::ostream& operator<<(std::ostream& out, const ArrivalEvent& event);
};
