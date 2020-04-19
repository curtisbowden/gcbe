// dice.h
// simple dice class

#ifndef dice_h
#define dice_h

class Dice{
    public:
        Dice();
        Dice(int s);
        int roll();
        int getSides();
    private:
        int sides;
};

#endif