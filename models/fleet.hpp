//
// Created by oskar on 23.05.22.
//

#ifndef FLEET_BATTLE_FLEET_HPP
#define FLEET_BATTLE_FLEET_HPP
#include "vector"
#include "ship.hpp"
#include "stdexcept"

class Fleet {
public:
    Fleet();
    virtual ~Fleet();
    void addShip(Ship &newShip);
    void removeShip(int index);
    int getShipAmount();
private:
    std::vector<Ship*> m_ships;
};


#endif //FLEET_BATTLE_FLEET_HPP
