//
// Created by Ethan on 8/16/2023.
//
#include <vector>
#include "trade.h"

#ifndef LEARNSOMETHING_RISKTRACKER_H
#define LEARNSOMETHING_RISKTRACKER_H

class RiskTracker {
public:
    float totalRisk = 0;
    std::vector <Trade> pendingTrades;

    RiskTracker(float x, std::vector <Trade> trades);

    int updateRisk();

    int addTrade(Trade trade);
};

#endif //LEARNSOMETHING_RISKTRACKER_H
