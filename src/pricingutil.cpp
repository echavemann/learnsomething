#include "pricingutil.h"

float PricingUtil::calcVal(float prevPrice, float interest, float oleoConstant) {
  float result = (prevPrice * (0.9 + interest)) * oleoConstant;
  this->val = result;
  return result;
}

float PricingUtil::getVal() {
  return this->val;
}

PricingUtil::PricingUtil() {}