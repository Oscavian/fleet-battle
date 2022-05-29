//
// Created by oskar on 23.05.22.
//

#ifndef FLEET_BATTLE_SHIP_HPP
#define FLEET_BATTLE_SHIP_HPP

#include <string>
#include <iostream>
#include "stdexcept"
#include "../abilities/attack.hpp"


class Ship : public Attack {
public:
    Ship(int shell, int size, int damage);
    std::string getName();

    int getSize() const;
    int getShell() const;
    int getAttackDamage() const;
    bool takeDamage(int amount);
    bool isDead() const;
protected:
    int shell;
    int size;
    int damage;
    std::string name;
    bool dead = false;
};


#endif //FLEET_BATTLE_SHIP_HPP
