#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"


TEST_CASE("infers the charging current range") {
  REQUIRE(chargingCurrent(4,5) == (4-5,2));
}
