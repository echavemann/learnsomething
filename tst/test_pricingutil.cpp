#include <gtest/gtest.h>
#include "pricingutil.h"


TEST(sampleTest, sample) {
    EXPECT_EQ(4, 4);
}

//Pricing formula is as follows: 
//Theoretical Value = (Previous Price * (0.9 + Interest Rate)) * Oleo Constant.
//You should take all 3 variables as input floats into your function.


TEST(PricingUtilTests, test1) {
    PricingUtil pricing;

    // case 1: Calculate with valid input
    pricing.calcVal(100.0, 0.05, 1.2);
    float result1 = pricing.getVal();
    EXPECT_NEAR(result1, 114.0, 1e-4); // Expected result: 114.0

    // // Test case 2: Calculate with negative interest rate
    // pricing.calcVal(100.0, -0.02, 1.2);
    // float result2 = pricing.getVal();
    // EXPECT_NEAR(result2, 106.8, 1e-4); // Expected result: 106.8

    // Test case 3: Calculate with zero Oleo Constant
    pricing.calcVal(100.0, 0.1, 0.0);
    float result3 = pricing.getVal();
    EXPECT_NEAR(result3, 0.0, 1e-4); // Expected result: 0.0
}

TEST(PricingUtilTests, test2) {
    PricingUtil pricing;

    // Test case 1: Get the calculated value after calculation
    float result1 = pricing.getVal();
    EXPECT_NEAR(result1, 0, 1e-4);
    
    pricing.calcVal(100.0, 0.05, 1.2);
    float result2 = pricing.getVal();
    EXPECT_NEAR(result2, 114.0, 1e-4); // Expected result: 114.0
}


