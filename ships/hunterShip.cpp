//
// Created by oskar on 23.05.22.
//

#include "hunterShip.hpp"
#include "../game.hpp"

void HunterShip::attack(Ship &target, int &hitChance) {
    if (hitChance < 0){
        throw std::invalid_argument("hitChance can't be negative!");
    }
    std::cout << name << " attacks " << target.getName() << "\n";
    if (hitChance <= target.getSize()) {
        if (hitChance == 1 || hitChance == 2){
            std::cout << "Critical Hit!\n";
            target.takeDamage(damage * 2);
        } else {
            target.takeDamage(damage);
        }
    } else {
        std::cout << name << " missed...\n";
        return;
    }
}

HunterShip::HunterShip() : Ship(75, 4, 30) {
    name = "Hunter Ship";
}