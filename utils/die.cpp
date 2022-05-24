//
// Created by oskar on 23.05.22.
//

#include "die.hpp"

int Die::getRndInt(int min, int max) {
    std::random_device randomDevice;
    std::default_random_engine gen(randomDevice());
    std::uniform_int_distribution<int> distribution(min, max);
    return distribution(gen);
}

int Die::roll1toX(int max) {
    if (isFake){
        return predefinedVal;
    } else {
        return getRndInt(1, max);
    }
}
