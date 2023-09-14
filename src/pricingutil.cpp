//
// Created by Ethan on 8/18/2023.
//

#ifndef LEARNSOMETHING_PRICINGUTIL_H
#define LEARNSOMETHING_PRICINGUTIL_H


class PricingUtil {
  public:
    PricingUtil();
    float val = 0;
    float calcVal(float prevPrice, float interest, float oleoConstant);
    float getVal();
};


#endif //LEARNSOMETHING_PRICINGUTIL_H
