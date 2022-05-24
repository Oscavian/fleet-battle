//
// Created by oskar on 23.05.22.
//

#ifndef FLEET_BATTLE_INPUT_HPP
#define FLEET_BATTLE_INPUT_HPP
#include "iostream"

class Input {
public:
    static int getIntInRange(int min, int max);
    static int getIntInput();
    static int getYN();
};


#endif //FLEET_BATTLE_INPUT_HPP
