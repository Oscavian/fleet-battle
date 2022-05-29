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
        int bombs = Die::getRndInt(1, 10);
        std::cout << this->getName() << " starts a Bombardment!\n";
        for (int i = 0; i < bombs; ++i) {
            if (target.isDead()){
                return;
            }
            target.takeDamage(damage - 2 * i);
        }
    } else {
        std::cout << name << " missed...\n";
        return;
    }
}