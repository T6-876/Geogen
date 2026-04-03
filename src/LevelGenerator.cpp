#include "../include/LevelGenerator.hpp"

void LevelGenerator::generate(EditorLayer* editor) {

    float levelLength = 4000;

    difficulty.calculateDifficulty(levelLength);

    layout.generateLayout(editor, levelLength);

    decoration.decorate(editor);
}
