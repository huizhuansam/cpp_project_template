#include "Customer.hpp"

Customer::Customer(const double arrivalTime, const double serviceTime)
    : id(lastId++), arrivalTime(arrivalTime), serviceTime(serviceTime){};

std::ostream& operator<<(std::ostream& out, const Customer& customer) {
  out << "Customer " << customer.id << "\n";
  return out;
}
