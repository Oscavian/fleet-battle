//
// Created by Oskar on 24.05.2022.
//

#ifndef FLEET_BATTLE_PLAYER_H
#define FLEET_BATTLE_PLAYER_H


#include <string>
#include "fleet.hpp"


class Player {
public:
    Player();

private:
    std::string name;
    Fleet fleet;
};


#endif //FLEET_BATTLE_PLAYER_H
