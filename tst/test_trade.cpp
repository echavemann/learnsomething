#include "trade.h"
#include <gtest/gtest.h>

TEST(TradeRiskTrackerTest, TradeInit) {
    Trade testTrade(7, true, 1.2);
    EXPECT_EQ(testTrade.quantity, 7);
    EXPECT_NEAR(testTrade.price, 1.2, 1e-6); //fp
    EXPECT_EQ(testTrade.side, true);
}