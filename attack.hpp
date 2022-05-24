//
// Created by oskar on 23.05.22.
//

#ifndef FLEET_BATTLE_ATTACK_HPP
#define FLEET_BATTLE_ATTACK_HPP
class Ship;

class Attack {
public:
    virtual void attack(Ship &target) = 0;
};

#endif //FLEET_BATTLE_ATTACK_HPP
