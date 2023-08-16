#include "trade.h"

//Initialize with the initializer list.
Trade::Trade(int q, bool buy, float p) : quantity(q), side(buy), price(p) {};
