 //
// Created by oskar on 23.05.22.
//

#ifndef FLEET_BATTLE_HUNTERSHIP_HPP
#define FLEET_BATTLE_HUNTERSHIP_HPP
#include "../models/ship.hpp"

class HunterShip : public Ship {
public:
    HunterShip();
    void attack(Ship &target) final;
};


#endif //FLEET_BATTLE_HUNTERSHIP_HPP
