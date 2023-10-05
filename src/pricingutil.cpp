#include "PricingUtil.h"

PricingUtil::PricingUtil() {
    val = 0.0;
}

float PricingUtil::calcVal(float prevPrice, float interest, float oleoConstant) {  
    float newVal = (prevPrice * (0.9 + interest)) * oleoConstant;
    this->val = newVal;
    return this->val;
}

float PricingUtil::getVal() {
    return this->val;
}
