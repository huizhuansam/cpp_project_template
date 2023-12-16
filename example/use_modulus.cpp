#include <iostream>
#include "basicmath/modulus.h"

int main() {
  std::cout << "Enter an integer: ";
  int x{};
  std::cin >> x;
  int result = basicmath::modulus(x);
  std::cout << "The modulus of " << x << " is " << result << "\n";
  return 0;
}
