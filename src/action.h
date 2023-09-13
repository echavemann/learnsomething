//
// Created by Ethan on 9/13/2023.
//

#ifndef LEARNSOMETHING_ACTION_H
#define LEARNSOMETHING_ACTION_H


class Action {
public:
    bool buy;
    Action(bool buyInput);
    bool getAction();
    void setAction(bool buyInput);
};


#endif //LEARNSOMETHING_ACTION_H
