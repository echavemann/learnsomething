#include <iostream>
#include "trade.h"

int main()
{  
    int price = 7;
    bool side = false;
    float quant = 1.2;
    Trade aTrade(price, side, quant);
    std::cout << "Hello, World!\n";
    return 0;
}
