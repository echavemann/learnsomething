#include <gtest/gtest.h>
#include <pricingutil.h>

TEST(PricingUtilTest, BasicTest) {
    EXPECT_EQ(4, 4);

    PricingUtil pricingutil;
    EXPECT_NEAR(pricingutil.getVal(), 0, 1e-4);
    EXPECT_NEAR(pricingutil.calcVal(5, 0.07, 10), 48.5, 1e-4);
    EXPECT_NEAR(pricingutil.calcVal(5, 0, 10), 45, 1e-4);
}

TEST(PricingUtilTest, EdgeCases){
    PricingUtil pricingutil;
    EXPECT_THROW(pricingutil.calcVal(5, -1, 10), std::runtime_error);
    EXPECT_THROW(pricingutil.calcVal(-1, -1, 10), std::runtime_error);
}