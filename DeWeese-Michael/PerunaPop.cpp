#include "PerunaPop.h"
#include "PerunaBalloon.h"
#include "HornedFrogBalloon.h"

PerunaPop::PerunaPop(){
    winnings = 0;
    for(int i = 0 ; i < 10 ; i++){
        balloons.push_back(new PerunaBalloon);
    }
    for(int i = 0 ; i < 3 ; i++){
        int index = rand() % 10;
        delete balloons.at(index);
        balloons.at(index) = new HornedFrogBalloon;
    }
}
PerunaPop::~PerunaPop(){
    for(int i = 0 ; i < 10 ; i++){
        delete balloons.at(i);
    }
}
void PerunaPop::play()
{
   int input;
    for(int throws = 5 ; throws > 0 ; throws--)
    {
        Print();
        cout << "You have " << throws << " throws left" << endl;
        cout << "Pick balloon #: " ;
        cin >> input;
        while(balloons.at(input - 1)->isPopped())
        {
            cout << "try again" << endl;
            cout << "Pick balloon #:";
            cin >> input;
        }
        cout << endl;
        winnings += balloons.at(input - 1)->pop();
        cout << "You now have $" << winnings << endl <<endl;
    }
}
void PerunaPop::Print()
{
    for(int i = 0 ; i < 10 ; i++)
    {
        if(balloons.at(i)->isPopped())
        {
            cout << " * ";
        }else
        {
            cout << "[" << i+1 << "] ";
        }
    }
    cout << endl;
}