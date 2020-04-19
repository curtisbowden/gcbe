// test_dice.cpp
#include "dice.h"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cstdlib>
#include <ctime>

int main () {

    srand(time(NULL));

    int sides = 0;
    cout << "Enter number of sides:";
    cin >> sides;
    
    Dice * d20 = new Dice(sides);
    
    int numRolls = 0;
    cout << "Enter number of rolls:";
    cin >> numRolls;

    for (int i=0; i<numRolls; ++i)
    {
        int roll = d20->roll();
        cout << "roll #" << i + 1 << ":" << roll << endl;
    }
    return 0; 
}

