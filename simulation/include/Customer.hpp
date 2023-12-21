#pragma once

#include <iostream>

class Customer {
 private:
  static inline int lastId{0};
  const int id{};
  const double arrivalTime{};
  const double serviceTime{};

 public:
  Customer(const double arrivalTime, const double serviceTime);
};
