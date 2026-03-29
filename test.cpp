#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions.h"

TEST_CASE("TASK A - Find sum using Recursive functions") {

    REQUIRE(sumOfSquares(5) == 55);
    
}

TEST_CASE("Task B - Calculate Factorial of a Number") {

    REQUIRE(findFactorial(5) == 120);
}


