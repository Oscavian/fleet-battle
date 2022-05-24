//
// Created by oskar on 23.05.22.
//

#ifndef FLEET_BATTLE_GAME_HPP
#define FLEET_BATTLE_GAME_HPP
#include "models/fleet.hpp"
#include "iostream"
#include "utils/input.hpp"
#include "models/ship.hpp"

class Game {
public:
    Game();
    void startGame();
    void promptShipSelection(Fleet &fleet);
private:
    Fleet fleet1;
    Fleet fleet2;
};


#endif //FLEET_BATTLE_GAME_HPP
