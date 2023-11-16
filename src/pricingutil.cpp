#include "pricingutil.h"
#include <stdexcept>

PricingUtil::PricingUtil(){}

float PricingUtil::calcVal(float prevPrice, float interest, float oleoConstant){
    if (interest < 0 || prevPrice < 0){
        throw std::runtime_error("invalid input");
    }

    this->val = (prevPrice * (0.9+interest)) * oleoConstant;
    return this->val;
}

float PricingUtil::getVal(){
    return this->val;
}
