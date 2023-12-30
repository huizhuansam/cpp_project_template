#include "CheckoutCounter.hpp"

#include "catch.hpp"

TEST_CASE("CheckoutCounter unit tests") {
  CheckoutCounter cc{};
  SECTION("CheckoutCounter is available when constructed") {
    REQUIRE((cc.isAvailable() == true));
  }
  SECTION("CheckoutCounter can be made unavailable") {
    cc.makeUnavailable();
    REQUIRE((cc.isAvailable() == false));
  }
  SECTION("CheckoutCounter can be made available") {
    cc.makeUnavailable();
    cc.makeAvailable();
    REQUIRE((cc.isAvailable() == true));
  }
}
