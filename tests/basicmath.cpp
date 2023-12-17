#include "basicmath/factorial.h"
#include "basicmath/modulus.h"
#include "catch.hpp"

TEST_CASE("Factorial") {
  REQUIRE(basicmath::factorial(0) == 1);
  REQUIRE(basicmath::factorial(1) == 1);
  REQUIRE(basicmath::factorial(10) == 3628800);
}

TEST_CASE("Modulus") {
  REQUIRE(basicmath::modulus(-1) == 1);
  REQUIRE(basicmath::modulus(0) == 0);
  REQUIRE(basicmath::modulus(1) == 1);
}
