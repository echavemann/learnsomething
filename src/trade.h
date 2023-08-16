#ifndef TRADE_H
#define TRADE_H

class Trade {
public:
    int quantity;
    bool side;
    float price;
    Trade(int q, bool buy, float p);
};

#endif // TRADE_H
