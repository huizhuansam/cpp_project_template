#pragma once

#include <memory>
#include <vector>
#include "CheckoutCounter.hpp"

class Shop {
 private:
  std::vector<std::shared_ptr<CheckoutCounter> > counters;

 public:
  explicit Shop(const int numberOfCounters);

  std::shared_ptr<CheckoutCounter> getAvailableCounter();
};
