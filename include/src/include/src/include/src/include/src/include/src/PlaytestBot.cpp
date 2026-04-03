#include "../include/PlaytestBot.hpp"

bool PlaytestBot::simulate(float difficulty) {

    int failChance = difficulty * 10;

    int roll = rand() % 100;

    if (roll < failChance)
        return false;

    return true;
}
