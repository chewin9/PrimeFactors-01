#include "gmock/gmock.h"
#include "prime-factor.cpp"

TEST(PrimeFactors, Of01) {
	PrimeFactors prime_factor;
	vector<int> expected = {  };
	EXPECT_EQ(expected, prime_factor.of(1));
}