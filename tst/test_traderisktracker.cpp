#include "trade.h"
#include "risktracker.h"
#include <gtest/gtest.h>

Trade testTrade(7, true, 1.2);
TEST(TRTTest, TrackerInit) {
    EXPECT_EQ(4,4);
}