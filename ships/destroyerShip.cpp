//
// Created by oskar on 23.05.22.
//

#include "destroyerShip.hpp"
#include "../game.hpp"

DestroyerShip::DestroyerShip() : Ship(150, 6, 60) {
    name = "Destroyer Ship";
}

void DestroyerShip::attack(Ship &target, int &hitChance) {
    std::cout << name << " attacks " << target.getName() << "\n";
    if (hitChance <= target.getSize()) {
        target.takeDamage(damage);
    } else {
        std::cout << name << " missed...\n";
        return;
    }
}