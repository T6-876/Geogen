#pragma once

#include <Geode/Geode.hpp>
#include "LayoutGenerator.hpp"
#include "DecorationGenerator.hpp"
#include "DifficultyManager.hpp"

using namespace geode::prelude;

class LevelGenerator {

public:
    void generate(EditorLayer* editor);

private:
    LayoutGenerator layout;
    DecorationGenerator decoration;
    DifficultyManager difficulty;

};
