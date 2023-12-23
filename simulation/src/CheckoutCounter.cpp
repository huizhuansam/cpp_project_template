#include "CheckoutCounter.hpp"

CheckoutCounter::CheckoutCounter() : id(CheckoutCounter::lastId++){};

bool CheckoutCounter::isAvailable() const {
  return this->available;
}

void CheckoutCounter::makeAvailable() {
  this->available = true;
}

void CheckoutCounter::makeUnavailable() {
  this->available = false;
}

std::ostream& operator<<(std::ostream& out,
                         const CheckoutCounter& checkoutCounter) {
  out << "Counter " << checkoutCounter.id;
  return out;
}
