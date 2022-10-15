#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Validate Amount of Cookies Produces Correct Cups of Butter Value")
{
	REQUIRE(expected_butter(48) == 1);
	REQUIRE(expected_butter(96) == 2);
	REQUIRE(expected_butter(24) == .5);
}
TEST_CASE("Validate Amount of Cookies Produces Correct Cups of Flour Value")
{
	REQUIRE(expected_flour(48) == 2.75);
	REQUIRE(expected_flour(96) == 5.5);
	REQUIRE(expected_flour(24) == 1.375);
}
TEST_CASE("Validate Amount of Cookies Produces Correct Cups of Sugar Value")
{
	REQUIRE(expected_sugar(48) == 1.5);
	REQUIRE(expected_sugar(96) == 3);
	REQUIRE(expected_sugar(24) == .75);
}
