//
// Created by oskar on 23.05.22.
//

#ifndef FLEET_BATTLE_CRUISERSHIP_HPP
#define FLEET_BATTLE_CRUISERSHIP_HPP
#include "../models/ship.hpp"

class CruiserShip : public Ship {
public:
    CruiserShip();
    void attack(Ship &target) final;
};


#endif //FLEET_BATTLE_CRUISERSHIP_HPP
