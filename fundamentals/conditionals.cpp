#include <iostream>

int main() {
    bool chestIsLocked = true;
    bool hasKey = true;
    int playerGold = 5;
    int playerStrength = 12;
    int lockStrength = 15;
    if (!chestIsLocked) {
        chestIsLocked = false;
        std::cout << "The chest is open." << std::endl;
    } else if (hasKey) {
        chestIsLocked = false;
        std::cout << "You unlock the chest with the key." << std::endl;
    } else if (playerStrength >= lockStrength) {
        chestIsLocked = false;
        std::cout << "You force the chest open." << std::endl;  
    } else {
        std::cout << "The chest is locked. You have no key, nor the strength to break the lock!" << std::endl;
    }

    if (chestIsLocked == false) {
        std::cout << "You find 20 gold in the chest." << std::endl;
        playerGold += 20;
        std::cout << "You now have " << playerGold << " gold." << std::endl;
    } else {
        std::cout << "The chest remains locked." << std::endl;
    }
}