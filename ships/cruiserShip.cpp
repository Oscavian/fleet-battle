//
// Created by oskar on 23.05.22.
//

#include "cruiserShip.hpp"
#include "../game.hpp"

CruiserShip::CruiserShip() : Ship(250, 8, 50) {
    name = "Cruiser Ship";
}

void CruiserShip::attack(Ship &target, int &hitChance) {
    std::cout << name << " attacks " << target.getName() << "\n";
    if (hitChance <= target.getSize()) {
        target.takeDamage(damage);
    } else {
        std::cout << name << " missed...\n";
        return;
    }
}