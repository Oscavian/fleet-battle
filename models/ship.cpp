//
// Created by oskar on 23.05.22.
//

#include "ship.hpp"

Ship::Ship(int shell, int size, int damage) {
    this->size = size;
    this->shell = shell;
    this->damage = damage;
    this->name = "Generic Ship";
}

std::string Ship::getName() {
    return name;
}

int Ship::getSize() const {
    return size;
}

int Ship::getAttackDamage() const {
    return damage;
}

int Ship::getShell() const {
    return shell;
}

/**
 *
 * @param amount
 * @returns true, if the shell value drops below zero
 */
bool Ship::takeDamage(int amount) {
    if (shell < 1){
        throw std::logic_error("Ship is already dead!");
    }
    if (amount < 0){
        throw std::invalid_argument("Amount can't be negative!");
    }

    shell -= amount;
    std::cout << name << " from " << owner << " took " << amount << " damage!\n";

    if (shell < 1){
        dead = true;
        shell = 0;
        return true;
    } else {
        return false;
    }


}

bool Ship::isDead() {
    if (dead)
        return true;
    else
        return false;
}
