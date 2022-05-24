//
// Created by oskar on 23.05.22.
//

#ifndef FLEET_BATTLE_GAME_HPP
#define FLEET_BATTLE_GAME_HPP
#include "models/fleet.hpp"
#include "iostream"
#include "utils/input.hpp"
#include "models/ship.hpp"
#include "ships/hunterShip.hpp"
#include "ships/destroyerShip.hpp"
#include "ships/cruiserShip.hpp"
#include "utils/die.hpp"
#include "stdexcept"

class Game {
public:
    Game();
    void startGame();
private:
    void setupFleets();
    void launchAttack(Fleet& attacker, Fleet& target);
    Ship *getNewShip();
    void play();
    Fleet fleet1;
    Fleet fleet2;
    Die die;
    std::string winner;
};


#endif //FLEET_BATTLE_GAME_HPP
