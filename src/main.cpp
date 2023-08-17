#include <iostream>
#include <vector>

#include "trade.h"
#include "risktracker.h"

int main() {
    int price = 7;
    bool side = false;
    float quant = 1.2;
    Trade aTrade(price, side, quant);
    std::vector <Trade> trades;
    trades.push_back(aTrade);
    RiskTracker riskTracker(0.0, trades);
    Trade bTrade(7, false, 1.6);
    riskTracker.addTrade(bTrade);
    riskTracker.updateRisk();
    std::cout << riskTracker.totalRisk << "\n";
    std::cout << "Hello, World!\n";
    return 0;
}
