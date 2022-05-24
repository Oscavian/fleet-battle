//
// Created by oskar on 23.05.22.
//

#include "fleet.hpp"

Fleet::Fleet() {
}

/**
 * adds a new ship to the fleet
 * @throws length_error if the maximum ship amount is exceeded (9)
 * @param newShip
 */
void Fleet::addShip(Ship* newShip) {
    if (getShipAmount() < 9){
        m_ships.push_back(newShip);
    } else {
        throw std::length_error("Ship maximum exceeded!");
    }
}

/**
 * removes Ships at a given Index
 * @throws invalid_argument if index is either negative or out of range
 * @param index
 */
void Fleet::removeShip(int index) {
    if (index < 0 || index > getShipAmount() - 1){
        throw std::invalid_argument("Wrong index specified!");
    }

    m_ships.erase(m_ships.begin() + index);
}


Fleet::~Fleet() {
    for (Ship* ship : m_ships) {
        delete ship;
    }
}

int Fleet::getShipAmount() {
    return (int)m_ships.size();
}

Ship *Fleet::getShipAt(int index) {
    if (index < 0 || index > getShipAmount() - 1){
        throw std::out_of_range("Index out of range!");
    }
    return m_ships.at(index);
}
