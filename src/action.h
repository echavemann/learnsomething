    #ifndef LEARNSOMETHING_ACTION_H
    #define LEARNSOMETHING_ACTION_H

    class Action {
    public:
        Action(bool initHold = true);
        double initialBalance;
        bool buy(double price);
        bool sell(double price);
        bool getHold();
        double getBalance();
        void updateBalance(double amount);
    private:
        double balance;
        bool holding;   
    };

    #endif //LEARNSOMETHING_ACTION_H
