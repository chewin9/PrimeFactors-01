#include "gmock/gmock.h"
#include "prime-factor.cpp"

TEST(PrimeFactors, Of01) {
	PrimeFactors prime_factor;
	vector<int> expected = {  };
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST(PrimeFactors, Of02) {
	PrimeFactors prime_factor;
	vector<int> expected = { 2};
	EXPECT_EQ(expected, prime_factor.of(2));
}

TEST(PrimeFactors, Of03) {
	PrimeFactors prime_factor;
	vector<int> expected = { 3 };
	EXPECT_EQ(expected, prime_factor.of(3));
}

TEST(PrimeFactors, Of04) {
	PrimeFactors prime_factor;
	vector<int> expected = { 2, 2 };
	EXPECT_EQ(expected, prime_factor.of(4));
}