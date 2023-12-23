#pragma once

#include <memory>
#include <vector>
#include "Customer.hpp"
#include "Event.hpp"

class DepartureEvent : public Event {
 private:
  const Customer customer;

 public:
  DepartureEvent(const double time, const Customer customer);

  std::vector<std::shared_ptr<Event>> simulate() override;

  std::ostream& print(std::ostream& out) const override;
};
