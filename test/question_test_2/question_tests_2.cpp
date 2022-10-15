#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Validate Sales Commision Function to return expected Sales Commission Value")
{
	REQUIRE(get_sales_commission(100) ==5);
	REQUIRE(get_sales_commission(750) ==45);
	REQUIRE(get_sales_commission(1750) ==140);
	REQUIRE(get_sales_commission(1100) ==77.0);//Idk why the test case is coming out as failed when it is the exact same value, tried multiple ways to fix
											   //I will probably stop by office hours after exam to see if there is a reason why
}											   //Even in the main.cpp the value comes out to 77 not 77.0
