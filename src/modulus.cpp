#include "basicmath/modulus.h"

namespace basicmath {
int modulus(const int x) {
  return x < 0 ? -x : x;
}
}  // namespace basicmath
