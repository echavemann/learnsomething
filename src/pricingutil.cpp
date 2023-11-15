#include "pricingutil.h"

float PricingUtil::calcVal(float prevPrice, float interest, float oleoConstant){
    this->val = (prevPrice * (0.9+interest)) * oleoConstant;
    return this->val;
}

float PricingUtil::getVal(){
    return this->val;
}
