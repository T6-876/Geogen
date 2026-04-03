#include "../include/DifficultyManager.hpp"

void DifficultyManager::calculateDifficulty(float levelLength) {

    if (levelLength < 2000)
        difficulty = 3;
    else if (levelLength < 4000)
        difficulty = 6;
    else
        difficulty = 9;
}
