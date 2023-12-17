#include "basicmath/factorial.h"
#include <cassert>

namespace basicmath {
int factorial(const int n) {
  assert(n > -1 && "Factorial is not defined for n < 0");
  return n == 0 ? 1 : n * factorial(n - 1);
}
}  // namespace basicmath
