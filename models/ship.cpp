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
