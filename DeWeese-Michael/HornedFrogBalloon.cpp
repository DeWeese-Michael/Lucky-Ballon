#include "HornedFrogBalloon.h"
#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int HornedFrogBalloon::pop(){
    cout << "Popped a Horned Frog - you lost $" << balloonAmount << endl;
    popped = true;
    return  0-balloonAmount;
}
HornedFrogBalloon::HornedFrogBalloon(){
    balloonAmount = 20;
    popped = false;
}