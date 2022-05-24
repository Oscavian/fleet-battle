//
// Created by oskar on 23.05.22.
//

#ifndef FLEET_BATTLE_DIE_HPP
#define FLEET_BATTLE_DIE_HPP

#include "random"
class Die {
public:
    //fake dice zum testen implementieren
    int roll1toX(int max);
    static int getRndInt(int min, int max);
private:
    bool isFake = false;
    int predefinedVal = 0;

};


#endif //FLEET_BATTLE_DIE_HPP
