#include <gtest/gtest.h>

#include "pricingutil.h"

TEST(PricingUtilFormula, TestFormula) {
    PricingUtil util = PricingUtil();

    EXPECT_NEAR(util.calcVal(1, 0.1, 3), 3, 1e-4);
    EXPECT_NEAR(util.getVal(), 3, 1e-4);
    EXPECT_NEAR(util.calcVal(30, 0.1, 3), 90, 1e-4);
    EXPECT_NEAR(util.getVal(), 90, 1e-4);
    EXPECT_NEAR(util.calcVal(30, 0.5, 3), 126, 1e-4);
    EXPECT_NEAR(util.getVal(), 126, 1e-4);
}