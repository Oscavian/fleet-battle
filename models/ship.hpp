//
// Created by oskar on 23.05.22.
//

#ifndef FLEET_BATTLE_SHIP_HPP
#define FLEET_BATTLE_SHIP_HPP

#include <string>
#include "../attack.hpp"

enum ShipTypes {
    hunter, destroyer, cruiser
};

class Ship : public Attack {
public:
    Ship(int shell, int size, int damage);
    std::string getName();
protected:
    int shell;
    int size;
    int damage;
    std::string name;
};


#endif //FLEET_BATTLE_SHIP_HPP
