#include "Customer.hpp"

Customer::Customer(const double arrivalTime, const double serviceTime)
    : id(lastId++), arrivalTime(arrivalTime), serviceTime(serviceTime){};

std::shared_ptr<CheckoutCounter> Customer::goToCounter(const Shop& shop) const {
  return shop.getAvailableCounter();
}

double Customer::getServiceTime() const {
  return this->serviceTime;
}

std::ostream& operator<<(std::ostream& out, const Customer& customer) {
  out << "Customer " << customer.id;
  return out;
}
