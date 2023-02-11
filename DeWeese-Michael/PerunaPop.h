#ifndef STACK_PERUNAPOP_H
#define STACK_PERUNAPOP_H
#include "Balloon.h"
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

class PerunaPop {
public:
    PerunaPop();
    ~PerunaPop();
    void play();
    void Print();

private:
    int winnings;
    vector<Balloon*> balloons;
};
#endif //STACK_PERUNAPOP_H
