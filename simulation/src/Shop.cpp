#include "Shop.hpp"
#include <algorithm>

Shop::Shop(const int numberOfCounters) : counters(numberOfCounters) {
  for (int i = 0; i < numberOfCounters; ++i) {
    std::shared_ptr<CheckoutCounter> counter =
        std::make_shared<CheckoutCounter>();
    this->counters[i] = counter;
  }
}

std::shared_ptr<CheckoutCounter> Shop::getAvailableCounter() {
  auto it = std::find_if(this->counters.begin(), this->counters.end(),
                         [](const std::shared_ptr<CheckoutCounter>& counter) {
                           return counter->isAvailable();
                         });
  if (it == this->counters.end()) {
    return std::shared_ptr<CheckoutCounter>(nullptr);
  }
  return *it;
}
