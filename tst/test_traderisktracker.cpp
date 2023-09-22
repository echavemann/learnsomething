#include "trade.h"
#include "risktracker.h"
#include <gtest/gtest.h>
#include <vector>

TEST(TradeRiskTrackerTest, TrackerInit) {
    std::vector<Trade> trackedTrades;
    Trade testTrade1(7, true, 1.2);
    Trade testTrade2(7, false, 1.2);
    trackedTrades.push_back(testTrade1);
    trackedTrades.push_back(testTrade2);
    RiskTracker riskTracker(0, trackedTrades);
    EXPECT_NEAR(riskTracker.getRisk(), 0, 1e-4);
    riskTracker.updateRisk();
    EXPECT_NEAR(riskTracker.getRisk(), 0, 1e-4);
    Trade testTrade3(14, true, 1.55);
    riskTracker.addTrade(testTrade3);
    riskTracker.updateRisk();
    EXPECT_NEAR(riskTracker.getRisk(), 21.7, 1e-4);
}

TEST(TradeRiskTrackerTest, TrackerZeroTest) {
    std::vector<Trade> trackedTrades;
    RiskTracker riskTracker(0, trackedTrades);
    EXPECT_NEAR(riskTracker.getRisk(), 0, 1e-4);
    riskTracker.addTrade(Trade(44, true, 1.6));
    riskTracker.addTrade(Trade(44, false, 1.6));
    riskTracker.updateRisk();
    EXPECT_NEAR(riskTracker.getRisk(), 0, 1e-4);
}

TEST(TradeRiskTrackerTest, TrackerOneTest) {
    std::vector<Trade> trackedTrades;
    RiskTracker riskTracker(0, trackedTrades);
    EXPECT_NEAR(riskTracker.getRisk(), 0, 1e-4);
    riskTracker.addTrade(Trade(100, true, 1.6));
    EXPECT_NEAR(riskTracker.getRisk(), 0, 1e-4);
    riskTracker.updateRisk();
    EXPECT_NEAR(riskTracker.getRisk(), 160, 1e-4);
    riskTracker.addTrade(Trade(50, false, 1.6));
    riskTracker.updateRisk();
    EXPECT_NEAR(riskTracker.getRisk(), 80, 1e-4);
    riskTracker.addTrade(Trade(100, false, 2));
    riskTracker.updateRisk();
    EXPECT_NEAR(riskTracker.getRisk(), -120, 1e-4);
}
