//
// Created by oskar on 23.05.22.
//

#include "game.hpp"


void Game::startGame() {
    setupFleets();
    play();

    system("pause");
}


void Game::play() {
    while (true) {
        launchAttack(fleet1, fleet2);
        if (fleet2.getShipAmount() == 0){
            winner = "Player 1";
            break;
        }
        launchAttack(fleet2, fleet1);
        if (fleet1.getShipAmount() == 0){
            winner = "Player 2";
            break;
        }
    }

    std::cout << winner << " won!\n";
}



/**
 * prompts the user to choose one of 3 ship types
 * @returns A Pointer to a Ship Object | nullptr if no Ship was specified
 */
Ship * Game::getNewShip() {
    int selection;
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
        case 1:
            return new HunterShip();
        case 2:
            return new DestroyerShip();
        case 3:
            return new CruiserShip();
        default:
            return nullptr;
    }
}



/**
 * prompts the players, to select the ship for their fleet
 */
void Game::setupFleets() {
    for (int i = 9; i > 0; i--){
        system("cls");
        std::cout << "Player 1: Choose your fleet!\n";
        std::cout << i << " Ships remaining\n";
        auto newShip = getNewShip();
        if (newShip == nullptr){
            if (fleet1.getShipAmount() == 0){
                std::cout << "Please select at least one ship.\n";
                i++;
                continue;
            } else {
                break;
            }
        }
        fleet1.addShip(newShip);
    }

    system("cls");

    for (int i = 9; i > 0; i--){
        system("cls");
        std::cout << "Player 2: Choose your fleet!\n";
        std::cout << i << " Ships remaining\n";
        auto newShip = getNewShip();
        if (newShip == nullptr){
            if (fleet2.getShipAmount() == 0){
                std::cout << "Please select at least one ship.\n";
                i++;
                continue;
            } else {
                break;
            }
        }
        fleet2.addShip(newShip);
    }
}

void Game::launchAttack(Fleet &attacker, Fleet& target) {
    int chosenShip = Die::getRndInt(0, attacker.getShipAmount() - 1);
    int targetShip = Die::getRndInt(0, target.getShipAmount() - 1);
    int chance = Die::roll1toX(10);


    attacker.getShipAt(chosenShip)->attack(*target.getShipAt(targetShip), chance);
    if (target.getShipAt(targetShip)->isDead()) {
        std::cout << target.getShipAt(targetShip)->getName() << " was eliminated!\n";
        target.removeShip(targetShip);
    }
}

Game::Game() = default;

