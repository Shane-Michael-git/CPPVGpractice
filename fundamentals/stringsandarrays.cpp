#include <iostream>
#include <string>

std::string killEnemy(std::string className, int index, int enemyArray[3]) {
    if (index == 0) {
        std::string enemyName = "Goblin";
        enemyArray[index] += 1;
        return className + " killed a " + enemyName + "! My kill count is " + std::to_string(enemyArray[index]) + "!";
    } else if (index == 1) {
        std::string enemyName = "Skeleton";
        enemyArray[index] += 1;
        return className + " killed a " + enemyName + "! My kill count is " + std::to_string(enemyArray[index]) + "!";
    } else if (index == 2) {
        std::string enemyName = "Orc";
        enemyArray[index] += 1;
        return className + " killed a " + enemyName + "! My kill count is " + std::to_string(enemyArray[index]) + "!";
    } else {
        return "Invalid enemy index!";
    }

};

int main() {
    std::string className = "Warrior";
    int enemyArray[3] = {10, 15, 3}; // Goblin, Skeleton, Orc
    int index = 1; // Index of the enemy to kill

    std::string result = killEnemy(className, index, enemyArray);
    std::cout << result << std::endl;
    std::string result2 = killEnemy(className, index, enemyArray);
    std::cout << result2 << std::endl;
    std::string result3 = killEnemy(className, 0, enemyArray);
    std::cout << result3 << std::endl;
    std::string result4 = killEnemy(className, 2, enemyArray);
    std::cout << result4 << std::endl;
    std::cout << "Goblin: " << enemyArray[0] << ", Skeleton: " << enemyArray[1] << ", Orc: " << enemyArray[2] << std::endl;

    return 0;
}