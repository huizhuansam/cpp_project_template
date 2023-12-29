#include "Customer.hpp"

Customer::Customer(const double serviceTime)
    : id(lastId++), serviceTime(serviceTime){};

std::shared_ptr<CheckoutCounter> Customer::goToCounter(
    const std::shared_ptr<Shop> &shop) {
  return shop->getAvailableCounter();
}

double Customer::getServiceTime() const { return this->serviceTime; }

std::ostream &operator<<(std::ostream &out, const Customer &customer) {
  out << "Customer " << customer.id;
  return out;
}
