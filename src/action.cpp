// Action.cpp
#include <stdexcept>
#include "action.h"

Action::Action(bool initHold) : initialBalance(0.0), holding(true) {
    this->holding=initHold;
}

// Method to buy a specific quantity at a specific price
bool Action::buy(double price) {
    if (this->holding==false&&this->balance>=price) {
        this->holding=true;
        this->balance-=price;
        return true;
    }
    throw std::logic_error("Wrong code");
}

bool Action::sell(double price) {
    if (this->holding==true) {
        this->holding=false;
        this->balance+=price;
        return true;
    }
    throw std::logic_error("Wrong code");
}

bool Action::getHold() {
    return this->holding;
}

void Action::updateBalance(double amount) {
    this->balance+=amount;
}

double Action::getBalance() {
    return this->balance;
}
