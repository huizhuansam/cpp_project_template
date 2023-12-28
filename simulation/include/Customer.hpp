#pragma once

#include <iostream>
#include <memory>

#include "CheckoutCounter.hpp"
#include "Shop.hpp"

class Customer {
 private:
  static inline int lastId{0};
  const int id{};
  const double arrivalTime{};
  const double serviceTime{};

 public:
  Customer(const double arrivalTime, const double serviceTime);

  std::shared_ptr<CheckoutCounter> goToCounter(
      const std::shared_ptr<Shop> &shop);

  double getServiceTime() const;

  friend std::ostream &operator<<(std::ostream &out, const Customer &customer);
};
