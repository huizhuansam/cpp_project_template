#include "Shop.hpp"

#include <algorithm>

Shop::Shop(const int numberOfCounters)
    : counters(static_cast<unsigned long>(numberOfCounters)) {
  for (unsigned long i = 0; i < static_cast<unsigned long>(numberOfCounters);
       ++i) {
    this->counters[i] = std::make_shared<CheckoutCounter>();
  }
}

std::shared_ptr<CheckoutCounter> Shop::getAvailableCounter() {
  auto iterator =
      std::find_if(this->counters.begin(), this->counters.end(),
                   [](const std::shared_ptr<CheckoutCounter> counter) {
                     return counter->isAvailable();
                   });
  if (iterator == this->counters.end()) {
    return nullptr;
  }
  return *iterator;
}
