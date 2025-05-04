#include <iostream>
#include <string>

bool canCastSpell(int playerMana, int spellCost) {
    return playerMana >= spellCost;
}

int main() {
    int playerMana = 50;
    int spellCost = 30;
    std::string spellName = "";
    if (spellCost == 30) {
        spellName = "Fireball";
    } else if (spellCost == 20) {
        spellName = "Lightning Bolt";
    } else if (spellCost == 10) {
        spellName = "Magic Missile";
    } else if (spellCost == 70) {
        spellName = "Ice Storm";
    } else {
        std::cout << "Unknown spell." << std::endl;
        return 1;
    }

    if (canCastSpell(playerMana, spellCost)) {
        std::cout << "You cast the spell " << spellName << "!" << std::endl;
        playerMana -= spellCost;
        std::cout << "You have " << playerMana << " mana left." << std::endl;
    } else {
        std::cout << "Not enough mana to cast the spell." << std::endl;
    }

    return 0;

}