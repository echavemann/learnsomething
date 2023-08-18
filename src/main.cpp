#include <iostream>
#include <vector>
#include <quill/Quill.h>

#include "trade.h"
#include "risktracker.h"

int main() {
    //logging setup start
    quill::start();
    quill::Logger *logger = quill::create_logger("RiskTrackingLogger");
    logger->set_log_level(quill::LogLevel::TraceL2);
    // logging setup end
    
    std::vector <Trade> trades;
    trades.push_back(Trade(7, false, 1.4));
    RiskTracker riskTracker(0.0, trades);
    QUILL_LOG_INFO(logger, "Current risk held is {}.", riskTracker.getRisk());
    riskTracker.addTrade(Trade(7, false, 1.6));
    riskTracker.updateRisk();
    QUILL_LOG_INFO(logger, "Current risk held is {}.", riskTracker.getRisk());
    riskTracker.addTrade(Trade(44, true, 2.3));
    riskTracker.updateRisk();
    QUILL_LOG_INFO(logger, "Current risk held is {}.", riskTracker.getRisk());
    riskTracker.updateRisk();
    QUILL_LOG_INFO(logger, "Current risk held is {}.", riskTracker.getRisk());
    return 0;
}
