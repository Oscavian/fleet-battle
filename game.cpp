//
// Created by oskar on 23.05.22.
//

#include "game.hpp"
#include "ships/hunterShip.hpp"
#include "ships/destroyerShip.hpp"
#include "ships/cruiserShip.hpp"

void Game::startGame() {
    promptShipSelection(fleet1);
    promptShipSelection(fleet2);
}

void Game::promptShipSelection(Fleet &fleet) {
    std::cout << "Player 1: Choose your fleet!\n";
    int selection;
    for (int i = 0; i < 9; i++){
        std::cout << "Ship No.: " << i << "\n";
        std::cout << "[1] Hunter Ship\n"
                     "[2] Destroyer Ship\n"
                     "[3] Cruiser Ship\n"
                     "[4] Finish\n";
        while(true){
            try {
                selection = Input::getIntInRange(1, 4);
                break;
            } catch (const std::out_of_range &oor) {
                std::cout << oor.what();
            }
        }


        switch (selection) {
            case 1:{
                HunterShip hunter;
                fleet.addShip(hunter);
                break;
            }
            case 2:{
                DestroyerShip destroyer;
                fleet.addShip(destroyer);
                break;
            }
            case 3: {
                CruiserShip cruiser;
                fleet.addShip(cruiser);
                break;
            }
            case 4:
                break;

        }
    }
}

Game::Game() = default;

