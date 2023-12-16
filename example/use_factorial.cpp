#include <iostream>
#include "basicmath/factorial.h"

int main() {
  std::cout << "Enter a non-negative integer: ";
  int n{};
  std::cin >> n;
  int result = basicmath::factorial(n);
  std::cout << "The factorial of " << n << " is " << result << "\n";
  return 0;
}
