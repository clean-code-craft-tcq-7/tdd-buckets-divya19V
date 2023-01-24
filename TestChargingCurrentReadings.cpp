#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "ChargingCurrentReadings.h"

TEST_CASE("infers the charging current range") {
  int arr = {4,5};
  REQUIRE(chargingCurrent(arr)[1] == 2);
}
