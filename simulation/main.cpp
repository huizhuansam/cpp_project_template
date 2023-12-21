#include <iostream>
#include "Customer.hpp"

int main() {
  double a{0};
  double s{3};
  Customer c{a, s};
  std::cout << c;
  return 0;
}
