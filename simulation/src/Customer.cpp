#include "Customer.hpp"

Customer::Customer(const double arrivalTime, const double serviceTime)
    : id(lastId++), arrivalTime(arrivalTime), serviceTime(serviceTime){};
