#ifndef STACK_BALLOON_H
#define STACK_BALLOON_H
#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

class Balloon {
public:
    Balloon();
    bool isPopped();
    virtual int pop();

protected:
    int balloonAmount;
    bool popped;
};



#endif //STACK_BALLOON_H
