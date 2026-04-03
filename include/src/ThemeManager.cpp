#include "../include/ThemeManager.hpp"

LevelTheme ThemeManager::getTheme(int index) {

    LevelTheme theme;

    if (index == 0) {
        theme.name = "neon";
        theme.backgroundColor = 5;
        theme.groundColor = 10;
        theme.glowColor = 15;
    }

    if (index == 1) {
        theme.name = "dark";
        theme.backgroundColor = 1;
        theme.groundColor = 3;
        theme.glowColor = 7;
    }

    if (index == 2) {
        theme.name = "tech";
        theme.backgroundColor = 12;
        theme.groundColor = 8;
        theme.glowColor = 20;
    }

    return theme;
}
