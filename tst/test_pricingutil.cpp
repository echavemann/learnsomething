#include <gtest/gtest.h>
#include <pricingutil.h>

TEST(sampleTest, sample) {
    EXPECT_EQ(4, 4);
}

TEST(PricingUtilTest, simpleTest) {
    PricingUtil testPricingUtil;
    EXPECT_EQ(testPricingUtil.calcVal(1.0, 1.0, 1.0), 1.9);
}

TEST(PricingUtilTest, zeroTest) {
    PricingUtil testPricingUtil;
    EXPECT_EQ(testPricingUtil.calcVal(0.0, 0.0, 0.0), 0.0);
}

TEST(PricingUtilTest, negativePrevPriceTest) {
    PricingUtil testPricingUtil;
    EXPECT_EQ(testPricingUtil.calcVal(-1.0, 0.1, 1.0), -1.0);
}

TEST(PricingUtilTest, negativeOleoConstantTest) {
    PricingUtil testPricingUtil;
    EXPECT_EQ(testPricingUtil.calcVal(2.0, 1.1, -1.0), -4.0);
}

TEST(PricingUtilTest, negativeInterestRateTest) {
    PricingUtil testPricingUtil;
    EXPECT_EQ(testPricingUtil.calcVal(2.0, -0.4, 1.0), 1.0);
}

TEST(PricingUtilTest, getValTest) {
    PricingUtil testPricingUtil;
    EXPECT_EQ(testPricingUtil.getVal(), 0);
}