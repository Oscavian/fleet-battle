cmake_minimum_required(VERSION 3.21)
project(fleet_battle)

set(CMAKE_CXX_STANDARD 14)

add_executable(fleet_battle main.cpp models/fleet.cpp models/fleet.hpp models/ship.cpp models/ship.hpp ships/hunterShip.cpp ships/hunterShip.hpp ships/destroyerShip.cpp ships/destroyerShip.hpp ships/cruiserShip.cpp ships/cruiserShip.hpp game.cpp game.hpp abilities/attack.hpp utils/input.cpp utils/input.hpp utils/die.cpp utils/die.hpp)
