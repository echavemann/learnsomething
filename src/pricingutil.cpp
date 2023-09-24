#include "pricingutil.h"

PricingUtil::PricingUtil() : val(0.0) {};

float PricingUtil::calcVal(float prevPrice, float interest, float oleoConstant) {
    this->val = (prevPrice * (0.9 + interest)) * oleoConstant;
    return 0;
}

float PricingUtil::getVal() {
    return val;
}

