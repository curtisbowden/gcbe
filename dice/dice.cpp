// dice.cpp

#include "dice.h"
#include <cstdlib>

Dice::Dice() {
    sides = 20;
}

Dice::Dice( int s ) {
    sides = s;
}

int Dice::roll() {
    return rand() % sides + 1;
}

int Dice::getSides() {
    return this->sides;
}