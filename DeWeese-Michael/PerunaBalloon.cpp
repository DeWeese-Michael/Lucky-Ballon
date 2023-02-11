
#include "PerunaBalloon.h"


int PerunaBalloon::pop(){
    cout << "Popped Peruna for $" << balloonAmount << endl;
    popped = true;
    return  balloonAmount;
}
PerunaBalloon::PerunaBalloon(){
    balloonAmount = 10;
    popped = false;
}

