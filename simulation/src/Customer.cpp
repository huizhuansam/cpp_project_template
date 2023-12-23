#include "Customer.hpp"

Customer::Customer(const double arrivalTime, const double serviceTime)
    : id(lastId++), arrivalTime(arrivalTime), serviceTime(serviceTime){};

std::shared_ptr<CheckoutCounter> Customer::goToCounter(const Shop& shop) const {
  return shop.getAvailableCounter();
}

std::ostream& operator<<(std::ostream& out, const Customer& customer) {
  out << "Customer " << customer.id;
  return out;
}
