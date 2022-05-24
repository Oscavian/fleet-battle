//
// Created by oskar on 23.05.22.
//

#include "input.hpp"

int Input::getIntInput() {

    int input;

    if(!(std::cin >> input)){
        std::cin.clear();
        std::cin.ignore(123, '\n');
        throw std::invalid_argument("Invalid - Enter a number.");
    }

    return input;
}

int Input::getIntInRange(int min, int max) {
    if (min < INT8_MIN || max > INT8_MAX){
        throw std::out_of_range("Parameters out of range.");
    }

    int input;
    while(true) {
        try {
            input = getIntInput();
            break;
        }
        catch (const std::invalid_argument &ex) {
            std::cout << ex.what();
        }
    }

    if (input >= min && input <= max){
        return input;
    } else {
        throw std::out_of_range("Input out of range!");
    }
}