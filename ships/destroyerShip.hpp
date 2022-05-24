//
// Created by oskar on 23.05.22.
//

#ifndef FLEET_BATTLE_DESTROYERSHIP_HPP
#define FLEET_BATTLE_DESTROYERSHIP_HPP
#include "../models/ship.hpp"

class DestroyerShip : public Ship{
public:
    DestroyerShip();
    void attack(Ship &target) final;

};


#endif //FLEET_BATTLE_DESTROYERSHIP_HPP
