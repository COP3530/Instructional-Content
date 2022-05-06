#include "../src/suffix_count.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

/*
	To check output (At the suffix_count directory):
		g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test
*/

TEST_CASE("Function: suffixCount 1", "[given]") {
	REQUIRE(suffixCount("et tu, brute", 1) == 2);
}

TEST_CASE("Function: suffixCount 2", "[given]") {
	REQUIRE(suffixCount("aaa", 1) == 3);
}

// TEST_CASE("Function: suffixCount 4", "[o_hidden]") {
// 	REQUIRE(suffixCount("aaaaaa", 3) == ?);
// }

// TEST_CASE("Function: suffixCount 5", "[o_hidden]") {
// 	REQUIRE(suffixCount("aaabaaaa", 4) == ?);
// }
